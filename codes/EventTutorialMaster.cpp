void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC72F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
    byte_4BDC72F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
}


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
  EventTutorialMaster_o *Master_object; // x0
  __int64 v16; // x1
  EventTutorialMaster_o *v17; // x26
  const MethodInfo *v18; // [xsp+8h] [xbp-58h]

  if ( (byte_4BDC71B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC71B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v17 = Master_object;
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
        v18);
      return;
    }
LABEL_10:
    sub_1C22094(Master_object, v16);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v17 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_40554936(
    v17,
    (System_Collections_Generic_List_int__o *)Master_object,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    0,
    v18);
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
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v17; // w9
  EventTutorialMaster_o *v18; // x26
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  v14 = eventId;
  if ( (byte_4BDC71C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    *(_QWORD *)&eventId = sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4BDC71C = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_13;
  size = checkedEntityList->fields._size;
  v17 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v18 = *(EventTutorialMaster_o **)&eventId;
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
        v19);
      return;
    }
LABEL_13:
    sub_1C22094(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v18 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_40554936(
    v18,
    *(System_Collections_Generic_List_int__o **)&eventId,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    v19);
}


void __fastcall EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4BDC71D & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    method = (const MethodInfo *)sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4BDC71D = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1C22094(method, v1);
  size = checkedEntityList->fields._size;
  v4 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v4;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoCheckTutorialLocal(
        EventTutorialMaster_o *this,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDC718 & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo);
    byte_4BDC718 = 1;
  }
  v4 = sub_1C22084(EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo);
  EventTutorialMaster__CoCheckTutorialLocal_d__8___ctor((EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  *(_QWORD *)(v4 + 32) = args;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)args, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDC71E & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo);
    byte_4BDC71E = 1;
  }
  v3 = sub_1C22084(EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo);
  EventTutorialMaster__CoroutineCheckTutorial_d__14___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__14_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = args;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)args, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetAvailableEventTutorialEntitys(
        int32_t eventId,
        EventTutorialMaster_OpenType_array *openKinds,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4BDC72D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC72D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v14);
  }
  return EventTutorialMaster__getAvailableEventTutorialEntitys(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKinds,
           qId,
           bPhase,
           bWave,
           bTurn,
           v15);
}


EventTutorialEntity_array *__fastcall EventTutorialMaster__GetAvailableTutorialArray(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4BDC722 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__);
    sub_1C21E38(&EventTutorialMaster___c__DisplayClass18_0_TypeInfo);
    byte_4BDC722 = 1;
  }
  v3 = sub_1C22084(EventTutorialMaster___c__DisplayClass18_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass18_0___ctor((EventTutorialMaster___c__DisplayClass18_0_o *)v3, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 16) = args;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)args, v6, v7, v8, v9, v10, v11);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v13 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v14,
                                        (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_4BDC730 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
    byte_4BDC730 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3260880 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDC72B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC72B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v8);
  }
  return EventTutorialMaster__getEventTutorialEntity(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           targetIds,
           v9);
}


System_Collections_Generic_List_int__o *__fastcall EventTutorialMaster__GetOpenEventIds(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 id; // x1
  EventEntity_array *EnableEntityList; // x19
  System_Collections_Generic_List_int__o *v4; // x20
  int max_length; // w8
  unsigned int v6; // w21
  EventEntity_o *v7; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4BDC72A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC72A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C2209C(Instance, id);
      v7 = EnableEntityList->m_Items[v6];
      if ( !v7 )
        break;
      if ( !v4 )
        break;
      id = (unsigned int)v7->fields.id;
      items = v4->fields._items;
      v9 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = EnableEntityList->max_length;
      if ( (int)++v6 >= max_length )
        return v4;
    }
LABEL_17:
    sub_1C22094(Instance, id);
  }
  return v4;
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
  if ( (byte_4BDC723 & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4BDC723 = 1;
  }
  if ( !v5 )
    goto LABEL_12;
  if ( (v5->fields.eventId & 0x80000000) == 0 )
  {
    if ( args )
    {
      EventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_EventTutorialArgs__get_EventIds(
                                                                        args,
                                                                        (const MethodInfo *)args);
      if ( !System_Linq_Enumerable__Contains_int_(
              EventIds,
              v5->fields.eventId,
              (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_1C22094(data, args);
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


bool __fastcall EventTutorialMaster__IsTutorialAvailable(
        int32_t eventId,
        int32_t openKind,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4BDC720 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC720 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v14);
  }
  return EventTutorialMaster__isTutorialAvailable(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           qId,
           bPhase,
           bWave,
           bTurn,
           v15);
}


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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDC71F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC71F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v16);
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
           v18);
}


void __fastcall EventTutorialMaster__OpenTutorialImages(System_Int32_array *imageIds, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  EventTutorialMaster___c_c *v6; // x8
  System_Action_o *_9__21_0; // x21
  Il2CppObject *v8; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDC725 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__);
    sub_1C21E38(&EventTutorialMaster___c_TypeInfo);
    byte_4BDC725 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    v6 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v6 = EventTutorialMaster___c_TypeInfo;
    }
    _9__21_0 = v6->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = EventTutorialMaster___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__21_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__21_0, v8, Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, 0LL);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = _9__21_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
        (int64_t)_9__21_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    if ( !v5 )
LABEL_15:
      sub_1C22094(Instance, v4);
    CommonUI__OpenTutorialImageDialog_31154684(v5, imageIds, -1, 0, _9__21_0, 0LL, 0LL, 0LL);
  }
}


void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4BDC721 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC721 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v8);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v9);
}


void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_40560564(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDC726 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC726 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v16);
  }
  EventTutorialMaster__showTutorialWithoutCheck_40560764(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    qId,
    bPhase,
    bWave,
    bTurn,
    v17);
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

  if ( (byte_4BDC731 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
    byte_4BDC731 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_4BDC728 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC728 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v6);
  }
  EventTutorialMaster__tutorialChainWithoutCheck((EventTutorialMaster_o *)Instance, tutoList, 0, callback, v7);
}


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
  __int64 v18; // x19
  System_Collections_Generic_List_object__o *checkedEntityList; // x0
  const MethodInfo *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  MethodInfo *v33; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v35; // x8
  unsigned __int64 v36; // x27
  EventTutorialEntity_o *v37; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v42; // x3
  int32_t v43; // w8
  const MethodInfo *v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t flagType; // w22
  int32_t v50; // w23
  System_Action_o *v51; // x22
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  const MethodInfo *v62; // x2
  System_Action_o *v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDC716 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__);
    sub_1C21E38(&EventTutorialMaster___c__DisplayClass6_0_TypeInfo);
    byte_4BDC716 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v18 = sub_1C22084(EventTutorialMaster___c__DisplayClass6_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass6_0___ctor((EventTutorialMaster___c__DisplayClass6_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_54;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 32) = callbackAfter;
  *(_DWORD *)(v18 + 24) = eventId;
  *(_DWORD *)(v18 + 28) = openKind;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)callbackAfter, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)(v18 + 40) = qId;
  *(_DWORD *)(v18 + 44) = bPhase;
  *(_DWORD *)(v18 + 48) = bWave;
  *(_DWORD *)(v18 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_54;
  v35 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v35 < 1 )
  {
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v18 + 32), 0LL);
    return;
  }
  v36 = 0LL;
  while ( 1 )
  {
    if ( v36 >= (unsigned int)v35 )
      sub_1C2209C(checkedEntityList, v20);
    v37 = sortedEntityArray->m_Items[v36];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v70,
        checkedEntityList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v71 = v70;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v71,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v38 )
          break;
        if ( !v37 )
          sub_1C22094(v38, v39);
        if ( !v71.fields._current )
          sub_1C22094(v38, v39);
        if ( v37->fields.eventId == LODWORD(v71.fields._current[1].klass)
          && v37->fields.flagType == HIDWORD(v71.fields._current[1].klass)
          && v37->fields.num == LODWORD(v71.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v71,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v71,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v37 )
      goto LABEL_54;
    flag = v37->fields.flag;
    if ( v37->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v37, v20);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v18 + 40),
                                                                       v42);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_35:
    LODWORD(v35) = sortedEntityArray->max_length;
    if ( (__int64)++v36 >= (int)v35 )
      goto LABEL_39;
  }
  v43 = v37->fields.eventId;
  if ( (v43 & 0x80000000) == 0 && v43 != *(_DWORD *)(v18 + 24)
    || v37->fields.openType != *(_DWORD *)(v18 + 28)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v37,
                                                                           *(_DWORD *)(v18 + 40),
                                                                           *(_DWORD *)(v18 + 44),
                                                                           *(_DWORD *)(v18 + 48),
                                                                           *(_DWORD *)(v18 + 52),
                                                                           v33),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
    if ( v37->fields.flag == 1 )
    {
      flagType = v37->fields.flagType;
      v50 = *(_DWORD *)(v18 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_38966028(flagType, v50, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_54;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v37->fields.flagType,
          *(_DWORD *)(v18 + 24),
          0LL);
      }
    }
    goto LABEL_35;
  }
  if ( flag != 2 && !notSave )
  {
    v51 = *(System_Action_o **)(v18 + 64);
    if ( !v51 )
    {
      v51 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v18 + 64) = v51;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 64), (int64_t)v51, v52, v53, v54, v55, v56, v57);
    }
    EventTutorialEntity__OpenTutorial(v37, v51, v44);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v59 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_54:
    sub_1C22094(checkedEntityList, v20);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v37,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v61[4] = (Il2CppClass *)v37;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)(v61 + 4),
      (int64_t)v37,
      (int64_t)v44,
      v45,
      v46,
      (BattleSetupInfo_o *)v33,
      v47,
      v48);
  }
  v63 = *(System_Action_o **)(v18 + 56);
  if ( !v63 )
  {
    v63 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v63,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v18 + 56) = v63;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 56), (int64_t)v63, v64, v65, v66, v67, v68, v69);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v37, v63, v62);
}


void __fastcall EventTutorialMaster__checkTutorial_40554936(
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
  __int64 v18; // x19
  System_Collections_Generic_List_object__o *checkedEntityList; // x0
  const MethodInfo *eventId; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o **v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  MethodInfo *v40; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v42; // x8
  unsigned __int64 v43; // x29
  EventTutorialEntity_o *v44; // x20
  _BOOL8 v45; // x0
  __int64 v46; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t v55; // w23
  int32_t flagType; // w24
  System_Action_o *v57; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x8
  const MethodInfo *v68; // x2
  System_Action_o *v69; // x22
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDC717 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__);
    sub_1C21E38(&EventTutorialMaster___c__DisplayClass7_0_TypeInfo);
    byte_4BDC717 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v18 = sub_1C22084(EventTutorialMaster___c__DisplayClass7_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass7_0___ctor((EventTutorialMaster___c__DisplayClass7_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_55;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = checkEventIds;
  v27 = (System_Collections_Generic_List_object__o **)(v18 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)checkEventIds, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v18 + 40) = callbackAfter;
  *(_DWORD *)(v18 + 32) = openKind;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 40), (int64_t)callbackAfter, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v18 + 48) = qId;
  *(_DWORD *)(v18 + 52) = bPhase;
  *(_DWORD *)(v18 + 56) = bWave;
  *(_DWORD *)(v18 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v42 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v42 < 1 )
  {
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  v43 = 0LL;
  while ( 1 )
  {
    if ( v43 >= (unsigned int)v42 )
      sub_1C2209C(checkedEntityList, eventId);
    v44 = sortedEntityArray->m_Items[v43];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v76,
        checkedEntityList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v77 = v76;
      while ( 1 )
      {
        v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v77,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v45 )
          break;
        if ( !v44 )
          sub_1C22094(v45, v46);
        if ( !v77.fields._current )
          sub_1C22094(v45, v46);
        if ( v44->fields.eventId == LODWORD(v77.fields._current[1].klass)
          && v44->fields.flagType == HIDWORD(v77.fields._current[1].klass)
          && v44->fields.num == LODWORD(v77.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v77,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_36;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v77,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v44 )
      goto LABEL_55;
    flag = v44->fields.flag;
    if ( v44->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v44, eventId);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v18 + 48),
                                                                       v49);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_36:
    LODWORD(v42) = sortedEntityArray->max_length;
    if ( (__int64)++v43 >= (int)v42 )
      goto LABEL_40;
  }
  eventId = (const MethodInfo *)(unsigned int)v44->fields.eventId;
  if ( ((unsigned int)eventId & 0x80000000) == 0 )
  {
    checkedEntityList = *v27;
    if ( !*v27 )
      goto LABEL_55;
    checkedEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Contains(
                                                                       (System_Collections_Generic_List_int__o *)checkedEntityList,
                                                                       (int32_t)eventId,
                                                                       (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      goto LABEL_59;
  }
  if ( v44->fields.openType != *(_DWORD *)(v18 + 32)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v44,
                                                                           *(_DWORD *)(v18 + 48),
                                                                           *(_DWORD *)(v18 + 52),
                                                                           *(_DWORD *)(v18 + 56),
                                                                           *(_DWORD *)(v18 + 60),
                                                                           v40),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
LABEL_59:
    if ( v44->fields.flag == 1 )
    {
      v55 = v44->fields.eventId;
      flagType = v44->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_38966028(flagType, v55, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v44->fields.flagType,
          v44->fields.eventId,
          0LL);
      }
    }
    goto LABEL_36;
  }
  if ( flag != 2 && !notSave )
  {
    v57 = *(System_Action_o **)(v18 + 72);
    if ( !v57 )
    {
      v57 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v57,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v18 + 72) = v57;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 72), (int64_t)v57, v58, v59, v60, v61, v62, v63);
    }
    EventTutorialEntity__OpenTutorial(v44, v57, v50);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v65 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_55:
    sub_1C22094(checkedEntityList, eventId);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v44,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v67[4] = (Il2CppClass *)v44;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)(v67 + 4),
      (int64_t)v44,
      (int64_t)v50,
      v51,
      v52,
      (BattleSetupInfo_o *)v40,
      v53,
      v54);
  }
  v69 = *(System_Action_o **)(v18 + 64);
  if ( !v69 )
  {
    v69 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v69,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v18 + 64) = v69;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 64), (int64_t)v69, v70, v71, v72, v73, v74, v75);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v44, v69, v68);
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
  __int64 v11; // x10
  EventTutorialMaster_o *v12; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  int max_length; // w8
  unsigned int v18; // w19
  EventTutorialEntity_o *v19; // x27
  int32_t v20; // w8
  const MethodInfo *v21; // x5
  unsigned int v22; // w28
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v24; // x9

  if ( (byte_4BDC72E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    this = (EventTutorialMaster_o *)sub_1C21E38(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4BDC72E = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1C21EE0(int___TypeInfo, openKinds->max_length);
  v11 = *(_QWORD *)&openKinds->max_length;
  v12 = this;
  if ( (int)v11 >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v14 = 0LL;
      while ( v14 < MasterName_k__BackingField_low )
      {
        *(&this->fields.revision + v14++) = 0;
        if ( (__int64)v14 >= (int)v11 )
          goto LABEL_9;
      }
LABEL_27:
      sub_1C2209C(this, *(_QWORD *)&eventId);
    }
LABEL_28:
    sub_1C22094(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        goto LABEL_27;
      v19 = sortedEntityArray->m_Items[v18];
      if ( !v19 )
        goto LABEL_28;
      v20 = v19->fields.eventId;
      if ( (v20 & 0x80000000) != 0 || v20 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_Int32Enum_(
                                          (System_Int32Enum_array *)openKinds,
                                          v19->fields.openType,
                                          (const MethodInfo_30ACD54 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v22 = (unsigned int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v19, qId, bPhase, bWave, bTurn, v21);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_28;
            if ( v22 >= LODWORD(v12->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v15 )
              goto LABEL_28;
            System_Collections_Generic_List_object___Insert(
              v15,
              *(&v12->fields.revision + v22),
              (Il2CppObject *)v19,
              (const MethodInfo_364FE64 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v12->fields._MasterName_k__BackingField;
            if ( (int)v22 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v18 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v15;
    }
    v24 = v22;
    while ( (unsigned int)v24 < (unsigned int)MasterName_k__BackingField )
    {
      ++*(&v12->fields.revision + v24++);
      if ( v24 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v15;
}


System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__getEventTutorialEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  struct System_Object_array *IsNullOrEmpty; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v19; // w27
  Il2CppObject *v20; // x23
  int64_t v21; // x24
  int v22; // w8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x8
  __int64 v28; // x28
  unsigned __int64 v29; // x29
  __int64 v30; // x8
  _QWORD *v31; // x8

  if ( (byte_4BDC72C & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C21E38(&StringLiteral_16241/*"[]"*/);
    sub_1C21E38(&StringLiteral_16299/*"[{0}]"*/);
    byte_4BDC72C = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16299/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v20 = 0LL;
    if ( !v8 )
      goto LABEL_42;
  }
  else
  {
    v19 = 0;
    v20 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)max_length )
LABEL_43:
        sub_1C2209C(IsNullOrEmpty, v10);
      v21 = (int64_t)sortedEntityArray->m_Items[v19];
      if ( !v21 )
        goto LABEL_42;
      v22 = *(_DWORD *)(v21 + 16);
      if ( ((v22 & 0x80000000) != 0 || v22 == eventId) && *(_DWORD *)(v21 + 32) == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
LABEL_14:
          if ( !v8 )
            goto LABEL_42;
          items = v8->fields._items;
          v24 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_42;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v21,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v21;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v21, v11, v12, v13, v14, v15, v16);
          }
        }
        else
        {
          v27 = *(_QWORD *)(v21 + 40);
          if ( !v27 )
            goto LABEL_42;
          v28 = *(_QWORD *)(v27 + 24);
          if ( !v20 )
          {
            if ( !(_DWORD)v28
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  *(System_String_o **)(v27 + 32),
                                                                  (System_String_o *)StringLiteral_16241/*"[]"*/,
                                                                  0LL),
                  v20 = 0LL,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v20 = (Il2CppObject *)v21;
            }
          }
          if ( (int)v28 >= 1 )
          {
            v29 = 0LL;
            while ( 1 )
            {
              v30 = *(_QWORD *)(v21 + 40);
              if ( !v30 )
                break;
              if ( v29 >= *(unsigned int *)(v30 + 24) )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                              *(System_String_o **)(v30 + 8 * v29 + 32),
                                                              targetIds,
                                                              0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v28 == ++v29 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1C22094(IsNullOrEmpty, v10);
          }
        }
      }
LABEL_31:
      max_length = sortedEntityArray->max_length;
      ++v19;
    }
    while ( v19 < max_length );
    if ( !v8 )
      goto LABEL_42;
  }
  if ( v20 && !v8->fields._size )
  {
    IsNullOrEmpty = v8->fields._items;
    v31 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v8->fields._version;
    if ( !IsNullOrEmpty )
      goto LABEL_42;
    if ( IsNullOrEmpty->max_length )
    {
      v8->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v20;
      sub_1C21DDC((PartyOrganizationUtility_o *)IsNullOrEmpty->m_Items, (int64_t)v20, v11, v12, v13, v14, v15, v16);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v20,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v8;
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
        sub_1C22094(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          sub_1C2209C(this, targets);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w26
  int32_t v18; // w27
  bool v19; // w29
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v21; // x5
  int32_t v22; // w8

  if ( (byte_4BDC71A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4BDC71A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        list,
                                        v18,
                                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v22 = Item->fields.eventId, (v22 & 0x80000000) == 0) && v22 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, v21) )
      {
        v19 = ++v18 < v17;
        if ( v17 != v18 )
          continue;
      }
      return v19;
    }
LABEL_16:
    sub_1C22094(list, *(_QWORD *)&eventId);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w27
  int32_t v19; // w28
  bool v20; // w20
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v22; // x5
  int32_t v23; // w8

  if ( (byte_4BDC719 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4BDC719 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    v20 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        list,
                                        v19,
                                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v23 = Item->fields.eventId, (v23 & 0x80000000) != 0) && isChkEventId
        || (v23 & 0x80000000) == 0 && v23 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isEnableCondition(Item, qId, bPhase, bWave, bTurn, v22) )
      {
        v20 = ++v19 < v18;
        if ( v18 != v19 )
          continue;
      }
      return v20;
    }
LABEL_18:
    sub_1C22094(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TResult__o *v3; // x0
  EventTutorialMaster___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x0
  EventTutorialMaster___c_c *v16; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v19; // x21
  struct EventTutorialMaster___c_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_object__o *v35; // x19
  struct EventTutorialMaster_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BDC715 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&System_Func_EventTutorialEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C21E38(&Method_EventTutorialMaster___c__preProcess_b__4_0__);
    sub_1C21E38(&Method_EventTutorialMaster___c__preProcess_b__4_1__);
    sub_1C21E38(&EventTutorialMaster___c_TypeInfo);
    byte_4BDC715 = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v4 = EventTutorialMaster___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v4 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v4->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventTutorialMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v7, Method_EventTutorialMaster___c__preProcess_b__4_0__, 0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__OrderBy_object__int_(
          v5,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v16 = EventTutorialMaster___c_TypeInfo;
  v17 = v15;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v16 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v16->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventTutorialMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v19, Method_EventTutorialMaster___c__preProcess_b__4_1__, 0LL);
    v20 = EventTutorialMaster___c_TypeInfo->static_fields;
    v20->__9__4_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v20->__9__4_1, (int64_t)_9__4_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2FE8C78 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v28 = System_Linq_Enumerable__ToArray_object_(
          v27,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v28;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventTutorialMaster_TypeInfo->static_fields,
    (int64_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v36 = EventTutorialMaster_TypeInfo->static_fields;
  v36->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->checkedEntityList, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  return 1;
}


void __fastcall EventTutorialMaster__showTutorialWithoutCheck(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  __int64 v10; // x0
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v20; // w25
  int v21; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BDC724 & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4BDC724 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_18;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1C2209C(v10, v11);
      v11 = (int64_t)sortedEntityArray->m_Items[v20];
      if ( !v11 )
        break;
      v21 = *(_DWORD *)(v11 + 16);
      if ( ((v21 & 0x80000000) != 0 || v21 == eventId) && *(_DWORD *)(v11 + 32) == openKind )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v23 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v11;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), v11, v12, v13, v14, v15, v16, v17);
        }
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_17;
    }
LABEL_18:
    sub_1C22094(v10, v11);
  }
LABEL_17:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v9,
    0,
    callback,
    (const MethodInfo *)v14);
}


void __fastcall EventTutorialMaster__showTutorialWithoutCheck_40560764(
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
  __int64 v17; // x19
  _BOOL8 isEnableCondition; // x0
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
  const MethodInfo *v32; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v35; // w23
  EventTutorialEntity_o *v36; // x21
  int32_t v37; // w8
  const MethodInfo *v38; // x2
  System_Action_o *v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4BDC727 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__);
    sub_1C21E38(&EventTutorialMaster___c__DisplayClass23_0_TypeInfo);
    byte_4BDC727 = 1;
  }
  v17 = sub_1C22084(EventTutorialMaster___c__DisplayClass23_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass23_0___ctor((EventTutorialMaster___c__DisplayClass23_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)callbackAfter, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1C22094(isEnableCondition, v19);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
  }
  else
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
        sub_1C2209C(isEnableCondition, v19);
      v36 = sortedEntityArray->m_Items[v35];
      if ( !v36 )
        goto LABEL_18;
      v37 = v36->fields.eventId;
      if ( ((v37 & 0x80000000) != 0 || v37 == *(_DWORD *)(v17 + 24)) && v36->fields.openType == *(_DWORD *)(v17 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v36,
                              *(_DWORD *)(v17 + 40),
                              *(_DWORD *)(v17 + 44),
                              *(_DWORD *)(v17 + 48),
                              *(_DWORD *)(v17 + 52),
                              v32);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_14;
    }
    v39 = *(System_Action_o **)(v17 + 56);
    if ( !v39 )
    {
      v39 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v17 + 56) = v39;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 56), (int64_t)v39, v40, v41, v42, v43, v44, v45);
    }
    EventTutorialEntity__OpenTutorial(v36, v39, v38);
  }
}


void __fastcall EventTutorialMaster__tutorialChainWithoutCheck(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        int32_t index,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x2

  if ( (byte_4BDC729 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__);
    sub_1C21E38(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
    byte_4BDC729 = 1;
  }
  v9 = sub_1C22084(EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass25_0___ctor((EventTutorialMaster___c__DisplayClass25_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = tutoList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)tutoList, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = index;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)callback, v24, v25, v26, v27, v28, v29);
  v10 = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !v10 )
    goto LABEL_9;
  v30 = *(_DWORD *)(v9 + 32);
  if ( v30 < v10->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v30,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v9,
      Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v32, v33);
      return;
    }
LABEL_9:
    sub_1C22094(v10, v11);
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0LL);
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
  EventTutorialMaster_EventTutorialArgs_o *v2; // x20
  System_Int32_array *eventIds; // x21
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v2 = this;
  if ( (byte_4BDC732 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4BDC732 = 1;
  }
  eventIds = v2->fields.eventIds;
  if ( !eventIds )
  {
    if ( v2->fields.eventId < 1 )
    {
      OpenEventIds = EventTutorialMaster__GetOpenEventIds((const MethodInfo *)this);
      if ( OpenEventIds )
      {
        eventIds = System_Collections_Generic_List_int___ToArray(
                     OpenEventIds,
                     (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.eventIds, (int64_t)eventIds, v6, v7, v8, v9, v10, v11);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1C21EE0(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1C2209C(OpenEventIds, v5);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1C22094(OpenEventIds, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventTutorialMaster__CoCheckTutorialLocal_d__8_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *v10; // x21
  struct EventTutorialMaster___c__DisplayClass8_0_o **p__8__1; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t args; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  int64_t sortedEntityArray; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int v39; // w8
  int64_t v40; // x1
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialMaster___c__DisplayClass8_0_o *v42; // x8
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct EventTutorialMaster___c__DisplayClass8_0_o *v56; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v57; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v58; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v59; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v60; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v61; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass8_1_o *_8__2; // x21
  EventTutorialEntity_o *v64; // x20
  System_Action_o *v65; // x22
  struct EventTutorialMaster___c__DisplayClass8_1_o *v66; // x20
  struct EventTutorialEntity_o *data_5__4; // x8
  struct EventTutorialEntity_o **v68; // x20
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *_7__wrap1; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass8_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v74; // x8
  bool result; // w0
  System_Func_bool__o *v76; // x21
  UnityEngine_WaitWhile_o *v77; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Func_bool__o *_9__0; // x21
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  UnityEngine_WaitWhile_o *v92; // x20
  PartyOrganizationUtility_o *v93; // x19
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7

  v8 = this;
  if ( (byte_4BDC735 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__);
    sub_1C21E38(&EventTutorialMaster___c__DisplayClass8_0_TypeInfo);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__);
    sub_1C21E38(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__);
    sub_1C21E38(&EventTutorialMaster___c__DisplayClass8_1_TypeInfo);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    byte_4BDC735 = 1;
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
  v10 = (Il2CppObject *)sub_1C22084(EventTutorialMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  v8->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass8_0_o *)v10;
  p__8__1 = &v8->fields.__8__1;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v8->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  args = (int64_t)v8->fields.args;
  *(_QWORD *)&this->fields.__1__state = args;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, args, v18, v19, v20, v21, v22, v23);
  if ( !*p__8__1 )
    goto LABEL_53;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = (int64_t)static_fields->sortedEntityArray;
  v8->fields.__7__wrap1 = static_fields->sortedEntityArray;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, sortedEntityArray, v25, v26, v27, v28, v29, v30);
  v39 = 0;
  for ( v8->fields.__7__wrap2 = 0; ; v8->fields.__7__wrap2 = v39 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)&v8->fields.__7__wrap1;
    _7__wrap1 = v8->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_53;
    max_length = _7__wrap1->max_length;
    if ( v39 >= max_length )
    {
      v8->fields.__7__wrap1 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)this, 0LL, v33, v34, v35, v36, v37, v38);
      _8__1 = v8->fields.__8__1;
      if ( _8__1 )
      {
        v74 = _8__1->fields.args;
        if ( v74 )
        {
          ActionExtensions__Call(v74->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_53:
      sub_1C22094(this, method);
    }
    if ( v39 >= (unsigned int)max_length )
      sub_1C2209C(this, method);
    v40 = (int64_t)_7__wrap1->m_Items[v39];
    v8->fields._data_5__4 = (struct EventTutorialEntity_o *)v40;
    p_data_5__4 = &v8->fields._data_5__4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._data_5__4, v40, v33, v34, v35, v36, v37, v38);
    v42 = v8->fields.__8__1;
    if ( !v42 )
      goto LABEL_53;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialMaster__IsOpenCondition(
                                                                 *p_data_5__4,
                                                                 v42->fields.args,
                                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v68 = &v8->fields._data_5__4;
    data_5__4 = v8->fields._data_5__4;
    if ( !data_5__4 )
      goto LABEL_53;
    if ( data_5__4->fields.flag == 1 )
    {
      eventId = data_5__4->fields.eventId;
      flagType = data_5__4->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_38966028(flagType, eventId, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)NetworkManager__getRequest_object_(
                                                                     0LL,
                                                                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v68 || !this )
          goto LABEL_53;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*v68)->fields.flagType,
          (*v68)->fields.eventId,
          0LL);
      }
    }
    v8->fields._data_5__4 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._data_5__4, 0LL, v43, v44, v45, v46, v47, v48);
    v39 = v8->fields.__7__wrap2 + 1;
  }
  v49 = (Il2CppObject *)sub_1C22084(EventTutorialMaster___c__DisplayClass8_1_TypeInfo);
  System_Object___ctor(v49, 0LL);
  v8->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass8_1_o *)v49;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  v56 = v8->fields.__8__1;
  if ( !v56 )
    goto LABEL_53;
  v57 = v56->fields.args;
  if ( !v57 )
    goto LABEL_53;
  if ( !v57->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialEntity__HasBeforeAction(
                                                               (EventTutorialEntity_o *)this,
                                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v58 = v8->fields.__8__1;
  if ( !v58 )
    goto LABEL_53;
  v59 = v58->fields.args;
  if ( !v59 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v59->fields.adapter;
  if ( !this )
    goto LABEL_53;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v8->fields._data_5__4, 0LL);
  v60 = v8->fields.__8__1;
  if ( !v60 )
    goto LABEL_53;
  v61 = v60->fields.args;
  if ( !v61 )
    goto LABEL_53;
  adapter = v61->fields.adapter;
  if ( !adapter )
    goto LABEL_53;
  if ( !adapter->fields._IsPerformanceBusy_k__BackingField )
  {
LABEL_27:
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_53;
    _8__2->fields.isBusy = 1;
    v64 = v8->fields._data_5__4;
    v65 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)_8__2,
      Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__,
      0LL);
    if ( !v64 )
      goto LABEL_53;
    EventTutorialEntity__OpenTutorial(v64, v65, 0LL);
    v66 = v8->fields.__8__2;
    if ( !v66 )
      goto LABEL_53;
    if ( v66->fields.isBusy )
    {
      v76 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v76,
        (Il2CppObject *)v66,
        Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__,
        0LL);
      v77 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v77, v76, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v77;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v77, v79, v80, v81, v82, v83, v84);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return 1;
    }
LABEL_31:
    v8->fields.__8__2 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  _9__0 = v60->fields.__9__0;
  if ( !_9__0 )
  {
    _9__0 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__0,
      (Il2CppObject *)v60,
      Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__,
      0LL);
    v60->fields.__9__0 = _9__0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v60->fields.__9__0, (int64_t)_9__0, v86, v87, v88, v89, v90, v91);
  }
  v92 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v92, _9__0, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v92;
  v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(v93, (int64_t)v92, v94, v95, v96, v97, v98, v99);
  result = 1;
  *(_DWORD *)&v93[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int32_t v14; // w8

  if ( (byte_4BDC736 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC736 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1C22094(0LL, v6);
    v7 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           0LL);
    this->fields.__2__current = v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC733 & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialMaster___c_TypeInfo);
    byte_4BDC733 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventTutorialMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c___OpenTutorialImages_b__21_0(
        EventTutorialMaster___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDC734 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDC734 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
  EventTutorialMaster__checkTutorial_40554936(
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
    sub_1C22094(0LL, method);
  EventTutorialMaster__checkTutorial_40554936(
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
    sub_1C22094(this, method);
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