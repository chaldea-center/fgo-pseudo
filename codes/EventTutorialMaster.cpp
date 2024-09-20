void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B351 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
    byte_4A5B351 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    167,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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

  if ( (byte_4A5B33D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B33D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1B8880C(Master_object, v16);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v17 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_39304864(
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
  if ( (byte_4A5B33E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    *(_QWORD *)&eventId = sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4A5B33E = 1;
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
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1B8880C(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v18 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_39304864(
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

  if ( (byte_4A5B33F & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    method = (const MethodInfo *)sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4A5B33F = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1B8880C(method, v1);
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
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5B33A & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo);
    byte_4A5B33A = 1;
  }
  v4 = sub_1B887FC(EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = args;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)args, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5B340 & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo);
    byte_4A5B340 = 1;
  }
  v3 = sub_1B887FC(EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo);
  EventTutorialMaster__CoroutineCheckTutorial_d__14___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__14_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = args;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)args, v6, v7);
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

  if ( (byte_4A5B34F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B34F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v14);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5B344 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__);
    sub_1B885B0(&EventTutorialMaster___c__DisplayClass18_0_TypeInfo);
    byte_4A5B344 = 1;
  }
  v3 = sub_1B887FC(EventTutorialMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 16) = args;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)args, v6, v7);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v10,
                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_4A5B352 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
    byte_4A5B352 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
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

  if ( (byte_4A5B34D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B34D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
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

  if ( (byte_4A5B34C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B34C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1B88814(Instance, id);
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
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_1B8880C(Instance, id);
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
  if ( (byte_4A5B345 & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5B345 = 1;
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
              (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_1B8880C(data, args);
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

  if ( (byte_4A5B342 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B342 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v14);
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

  if ( (byte_4A5B341 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B341 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v16);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5B347 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__);
    sub_1B885B0(&EventTutorialMaster___c_TypeInfo);
    byte_4A5B347 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__21_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__21_0, v8, Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, 0LL);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = _9__21_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v10, v11);
    }
    if ( !v5 )
LABEL_15:
      sub_1B8880C(Instance, v4);
    CommonUI__OpenTutorialImageDialog_30520500(v5, imageIds, -1, 0, _9__21_0, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5B343 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B343 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v8);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v9);
}


void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_39310672(
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

  if ( (byte_4A5B348 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B348 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v16);
  }
  EventTutorialMaster__showTutorialWithoutCheck_39310872(
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

  if ( (byte_4A5B353 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
    byte_4A5B353 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_4A5B34A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B34A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
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
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v27; // x8
  unsigned __int64 v28; // x27
  EventTutorialEntity_o *v29; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v34; // x3
  int32_t v35; // w8
  const MethodInfo *v36; // x2
  int32_t v37; // w3
  int32_t flagType; // w22
  int32_t v39; // w23
  System_Action_o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  const MethodInfo *v47; // x2
  System_Action_o *v48; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B338 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__);
    sub_1B885B0(&EventTutorialMaster___c__DisplayClass6_0_TypeInfo);
    byte_4A5B338 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v18 = sub_1B887FC(EventTutorialMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_54;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 32) = callbackAfter;
  *(_DWORD *)(v18 + 24) = eventId;
  *(_DWORD *)(v18 + 28) = openKind;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)callbackAfter, v23, v24);
  *(_DWORD *)(v18 + 40) = qId;
  *(_DWORD *)(v18 + 44) = bPhase;
  *(_DWORD *)(v18 + 48) = bWave;
  *(_DWORD *)(v18 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_54;
  v27 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v27 < 1 )
  {
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v18 + 32), 0LL);
    return;
  }
  v28 = 0LL;
  while ( 1 )
  {
    if ( v28 >= (unsigned int)v27 )
      sub_1B88814(checkedEntityList, v20);
    v29 = sortedEntityArray->m_Items[v28];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        checkedEntityList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v52 = v51;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v52,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v30 )
          break;
        if ( !v29 )
          sub_1B8880C(v30, v31);
        if ( !v52.fields._current )
          sub_1B8880C(v30, v31);
        if ( v29->fields.eventId == LODWORD(v52.fields._current[1].klass)
          && v29->fields.flagType == HIDWORD(v52.fields._current[1].klass)
          && v29->fields.num == LODWORD(v52.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v52,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v52,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v29 )
      goto LABEL_54;
    flag = v29->fields.flag;
    if ( v29->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v29, v20);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v18 + 40),
                                                                       v34);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_35:
    LODWORD(v27) = sortedEntityArray->max_length;
    if ( (__int64)++v28 >= (int)v27 )
      goto LABEL_39;
  }
  v35 = v29->fields.eventId;
  if ( (v35 & 0x80000000) == 0 && v35 != *(_DWORD *)(v18 + 24)
    || v29->fields.openType != *(_DWORD *)(v18 + 28)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v29,
                                                                           *(_DWORD *)(v18 + 40),
                                                                           *(_DWORD *)(v18 + 44),
                                                                           *(_DWORD *)(v18 + 48),
                                                                           *(_DWORD *)(v18 + 52),
                                                                           v25),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
    if ( v29->fields.flag == 1 )
    {
      flagType = v29->fields.flagType;
      v39 = *(_DWORD *)(v18 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_37721824(flagType, v39, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_54;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v29->fields.flagType,
          *(_DWORD *)(v18 + 24),
          0LL);
      }
    }
    goto LABEL_35;
  }
  if ( flag != 2 && !notSave )
  {
    v40 = *(System_Action_o **)(v18 + 64);
    if ( !v40 )
    {
      v40 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v18 + 64) = v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)v40, v41, v42);
    }
    EventTutorialEntity__OpenTutorial(v29, v40, v36);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v44 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_54:
    sub_1B8880C(checkedEntityList, v20);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v29,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v29, (int32_t)v36, v37);
  }
  v48 = *(System_Action_o **)(v18 + 56);
  if ( !v48 )
  {
    v48 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v18 + 56) = v48;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)v48, v49, v50);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v29, v48, v47);
}


void __fastcall EventTutorialMaster__checkTutorial_39304864(
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
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o **v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v30; // x8
  unsigned __int64 v31; // x29
  EventTutorialEntity_o *v32; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  int32_t v39; // w3
  int32_t v40; // w23
  int32_t flagType; // w24
  System_Action_o *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B339 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__);
    sub_1B885B0(&EventTutorialMaster___c__DisplayClass7_0_TypeInfo);
    byte_4A5B339 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v18 = sub_1B887FC(EventTutorialMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_55;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 24) = checkEventIds;
  v23 = (System_Collections_Generic_List_object__o **)(v18 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)checkEventIds, v24, v25);
  *(_QWORD *)(v18 + 40) = callbackAfter;
  *(_DWORD *)(v18 + 32) = openKind;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 40), (int32_t)callbackAfter, v26, v27);
  *(_DWORD *)(v18 + 48) = qId;
  *(_DWORD *)(v18 + 52) = bPhase;
  *(_DWORD *)(v18 + 56) = bWave;
  *(_DWORD *)(v18 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v30 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v30 < 1 )
  {
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  v31 = 0LL;
  while ( 1 )
  {
    if ( v31 >= (unsigned int)v30 )
      sub_1B88814(checkedEntityList, eventId);
    v32 = sortedEntityArray->m_Items[v31];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v53,
        checkedEntityList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v54 = v53;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v54,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v33 )
          break;
        if ( !v32 )
          sub_1B8880C(v33, v34);
        if ( !v54.fields._current )
          sub_1B8880C(v33, v34);
        if ( v32->fields.eventId == LODWORD(v54.fields._current[1].klass)
          && v32->fields.flagType == HIDWORD(v54.fields._current[1].klass)
          && v32->fields.num == LODWORD(v54.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v54,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_36;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v54,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v32 )
      goto LABEL_55;
    flag = v32->fields.flag;
    if ( v32->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v32, eventId);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v18 + 48),
                                                                       v37);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_36:
    LODWORD(v30) = sortedEntityArray->max_length;
    if ( (__int64)++v31 >= (int)v30 )
      goto LABEL_40;
  }
  eventId = (const MethodInfo *)(unsigned int)v32->fields.eventId;
  if ( ((unsigned int)eventId & 0x80000000) == 0 )
  {
    checkedEntityList = *v23;
    if ( !*v23 )
      goto LABEL_55;
    checkedEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Contains(
                                                                       (System_Collections_Generic_List_int__o *)checkedEntityList,
                                                                       (int32_t)eventId,
                                                                       (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      goto LABEL_59;
  }
  if ( v32->fields.openType != *(_DWORD *)(v18 + 32)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v32,
                                                                           *(_DWORD *)(v18 + 48),
                                                                           *(_DWORD *)(v18 + 52),
                                                                           *(_DWORD *)(v18 + 56),
                                                                           *(_DWORD *)(v18 + 60),
                                                                           v28),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
LABEL_59:
    if ( v32->fields.flag == 1 )
    {
      v40 = v32->fields.eventId;
      flagType = v32->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_37721824(flagType, v40, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v32->fields.flagType,
          v32->fields.eventId,
          0LL);
      }
    }
    goto LABEL_36;
  }
  if ( flag != 2 && !notSave )
  {
    v42 = *(System_Action_o **)(v18 + 72);
    if ( !v42 )
    {
      v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v18 + 72) = v42;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 72), (int32_t)v42, v43, v44);
    }
    EventTutorialEntity__OpenTutorial(v32, v42, v38);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v46 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_55:
    sub_1B8880C(checkedEntityList, eventId);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v32,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v32, (int32_t)v38, v39);
  }
  v50 = *(System_Action_o **)(v18 + 64);
  if ( !v50 )
  {
    v50 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v18 + 64) = v50;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)v50, v51, v52);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v32, v50, v49);
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

  if ( (byte_4A5B350 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    this = (EventTutorialMaster_o *)sub_1B885B0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4A5B350 = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1B88658(int___TypeInfo, openKinds->max_length);
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
        *((_DWORD *)&this->fields.list + v14++) = 0;
        if ( (__int64)v14 >= (int)v11 )
          goto LABEL_9;
      }
LABEL_27:
      sub_1B88814(this, *(_QWORD *)&eventId);
    }
LABEL_28:
    sub_1B8880C(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
                                          (const MethodInfo_2F7A460 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
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
              *((_DWORD *)&v12->fields.list + v22),
              (Il2CppObject *)v19,
              (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
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
      ++*((_DWORD *)&v12->fields.list + v24++);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v15; // w27
  Il2CppObject *v16; // x23
  EventTutorialEntity_o *v17; // x24
  int32_t v18; // w8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct System_String_array *v23; // x8
  __int64 v24; // x28
  unsigned __int64 v25; // x29
  struct System_String_array *v26; // x8
  _QWORD *v27; // x8

  if ( (byte_4A5B34E & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1B885B0(&StringLiteral_15966/*"[]"*/);
    sub_1B885B0(&StringLiteral_16024/*"[{0}]"*/);
    byte_4A5B34E = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16024/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v16 = 0LL;
    if ( !v8 )
      goto LABEL_42;
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)max_length )
LABEL_43:
        sub_1B88814(IsNullOrEmpty, v10);
      v17 = sortedEntityArray->m_Items[v15];
      if ( !v17 )
        goto LABEL_42;
      v18 = v17->fields.eventId;
      if ( ((v18 & 0x80000000) != 0 || v18 == eventId) && v17->fields.openType == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
LABEL_14:
          if ( !v8 )
            goto LABEL_42;
          items = v8->fields._items;
          v20 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_42;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v17,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v17, v11, v12);
          }
        }
        else
        {
          v23 = v17->fields.targetIds;
          if ( !v23 )
            goto LABEL_42;
          v24 = *(_QWORD *)&v23->max_length;
          if ( !v16 )
          {
            if ( !(_DWORD)v24
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  v23->m_Items[0],
                                                                  (System_String_o *)StringLiteral_15966/*"[]"*/,
                                                                  0LL),
                  v16 = 0LL,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v16 = (Il2CppObject *)v17;
            }
          }
          if ( (int)v24 >= 1 )
          {
            v25 = 0LL;
            while ( 1 )
            {
              v26 = v17->fields.targetIds;
              if ( !v26 )
                break;
              if ( v25 >= v26->max_length )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                              v26->m_Items[v25],
                                                              targetIds,
                                                              0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v24 == ++v25 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1B8880C(IsNullOrEmpty, v10);
          }
        }
      }
LABEL_31:
      max_length = sortedEntityArray->max_length;
      ++v15;
    }
    while ( v15 < max_length );
    if ( !v8 )
      goto LABEL_42;
  }
  if ( v16 && !v8->fields._size )
  {
    IsNullOrEmpty = v8->fields._items;
    v27 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v8->fields._version;
    if ( !IsNullOrEmpty )
      goto LABEL_42;
    if ( IsNullOrEmpty->max_length )
    {
      v8->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)IsNullOrEmpty->m_Items, (int32_t)v16, v11, v12);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v16,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
        sub_1B8880C(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          sub_1B88814(this, targets);
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
  int32_t v16; // w26
  int32_t v17; // w27
  bool v18; // w19
  Il2CppObject *Item; // x0
  const MethodInfo *v20; // x5
  __int64 methodPtr_low; // x10
  int klass; // w8

  if ( (byte_4A5B33C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventTutorialEntity_TypeInfo);
    byte_4A5B33C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v17,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(EventTutorialEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTutorialEntity_TypeInfo
        || (klass = (int)Item[1].klass, (klass & 0x80000000) == 0) && klass != eventId
        || LODWORD(Item[2].klass) != openKind
        || !EventTutorialEntity__isOpenCondition((EventTutorialEntity_o *)Item, qId, bPhase, bWave, bTurn, v20) )
      {
        v18 = ++v17 < v16;
        if ( v16 != v17 )
          continue;
      }
      return v18;
    }
LABEL_18:
    sub_1B8880C(list, *(_QWORD *)&eventId);
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
  int32_t v19; // w27
  int32_t v20; // w28
  bool v21; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v23; // x5
  __int64 methodPtr_low; // x10
  int klass; // w8
  int32_t v27; // [xsp+8h] [xbp-68h]
  int32_t v28; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A5B33B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventTutorialEntity_TypeInfo);
    byte_4A5B33B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = bWave;
    v28 = bTurn;
    v19 = Count;
    v20 = 0;
    v21 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v20,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(EventTutorialEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTutorialEntity_TypeInfo
        || (klass = (int)Item[1].klass, (klass & 0x80000000) != 0) && isChkEventId
        || (klass & 0x80000000) == 0 && klass != eventId
        || LODWORD(Item[2].klass) != openKind
        || !EventTutorialEntity__isEnableCondition((EventTutorialEntity_o *)Item, qId, bPhase, v27, v28, v23) )
      {
        v21 = ++v20 < v19;
        if ( v19 != v20 )
          continue;
      }
      return v21;
    }
LABEL_20:
    sub_1B8880C(list, *(_QWORD *)&eventId);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v11; // x0
  EventTutorialMaster___c_c *v12; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v15; // x21
  struct EventTutorialMaster___c_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x19
  struct EventTutorialMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5B337 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&System_Func_EventTutorialEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1B885B0(&Method_EventTutorialMaster___c__preProcess_b__4_0__);
    sub_1B885B0(&Method_EventTutorialMaster___c__preProcess_b__4_1__);
    sub_1B885B0(&EventTutorialMaster___c_TypeInfo);
    byte_4A5B337 = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
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
    _9__4_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v7, Method_EventTutorialMaster___c__preProcess_b__4_0__, 0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__OrderBy_object__int_(
          v5,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v12 = EventTutorialMaster___c_TypeInfo;
  v13 = v11;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v12 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v12->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventTutorialMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v15, Method_EventTutorialMaster___c__preProcess_b__4_1__, 0LL);
    v16 = EventTutorialMaster___c_TypeInfo->static_fields;
    v16->__9__4_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->__9__4_1, (int32_t)_9__4_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventTutorialMaster_TypeInfo->static_fields, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v24 = EventTutorialMaster_TypeInfo->static_fields;
  v24->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->checkedEntityList, (int32_t)v23, v25, v26);
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
  EventTutorialEntity_o *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v17; // w25
  int32_t v18; // w8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5B346 & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4A5B346 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_18;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B88814(v10, v11);
      v11 = sortedEntityArray->m_Items[v17];
      if ( !v11 )
        break;
      v18 = v11->fields.eventId;
      if ( ((v18 & 0x80000000) != 0 || v18 == eventId) && v11->fields.openType == openKind )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v20 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, v12, v13);
        }
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_17;
    }
LABEL_18:
    sub_1B8880C(v10, v11);
  }
LABEL_17:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v9,
    0,
    callback,
    v14);
}


void __fastcall EventTutorialMaster__showTutorialWithoutCheck_39310872(
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v27; // w23
  EventTutorialEntity_o *v28; // x21
  int32_t v29; // w8
  const MethodInfo *v30; // x2
  System_Action_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_4A5B349 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__);
    sub_1B885B0(&EventTutorialMaster___c__DisplayClass23_0_TypeInfo);
    byte_4A5B349 = 1;
  }
  v17 = sub_1B887FC(EventTutorialMaster___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)callbackAfter, v22, v23);
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1B8880C(isEnableCondition, v19);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
  }
  else
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_1B88814(isEnableCondition, v19);
      v28 = sortedEntityArray->m_Items[v27];
      if ( !v28 )
        goto LABEL_18;
      v29 = v28->fields.eventId;
      if ( ((v29 & 0x80000000) != 0 || v29 == *(_DWORD *)(v17 + 24)) && v28->fields.openType == *(_DWORD *)(v17 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v28,
                              *(_DWORD *)(v17 + 40),
                              *(_DWORD *)(v17 + 44),
                              *(_DWORD *)(v17 + 48),
                              *(_DWORD *)(v17 + 52),
                              v24);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_14;
    }
    v31 = *(System_Action_o **)(v17 + 56);
    if ( !v31 )
    {
      v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v17 + 56) = v31;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 56), (int32_t)v31, v32, v33);
    }
    EventTutorialEntity__OpenTutorial(v28, v31, v30);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4A5B34B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__);
    sub_1B885B0(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
    byte_4A5B34B = 1;
  }
  v9 = sub_1B887FC(EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = tutoList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)tutoList, v14, v15);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = index;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)callback, v16, v17);
  v10 = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !v10 )
    goto LABEL_9;
  v18 = *(_DWORD *)(v9 + 32);
  if ( v18 < v10->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v18,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v9,
      Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v20, v21);
      return;
    }
LABEL_9:
    sub_1B8880C(v10, v11);
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
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_4A5B354 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5B354 = 1;
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
                     (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.eventIds, (int32_t)eventIds, v6, v7);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1B88658(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1B88814(OpenEventIds, v5);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1B8880C(OpenEventIds, v5);
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
  int32_t v2; // w2
  int32_t v3; // w3
  EventTutorialMaster__CoCheckTutorialLocal_d__8_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *v6; // x21
  struct EventTutorialMaster___c__DisplayClass8_0_o **p__8__1; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int v19; // w8
  struct EventTutorialEntity_o *v20; // x1
  EventTutorialEntity_o **p_data_5__4; // x20
  const MethodInfo *v22; // x2
  struct EventTutorialMaster___c__DisplayClass8_0_o *v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct EventTutorialMaster___c__DisplayClass8_0_o *v29; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v30; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v31; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v32; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v33; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v34; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass8_1_o *_8__2; // x21
  EventTutorialEntity_o *v37; // x20
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x2
  struct EventTutorialMaster___c__DisplayClass8_1_o *v40; // x20
  struct EventTutorialEntity_o *data_5__4; // x8
  struct EventTutorialEntity_o **v42; // x20
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *_7__wrap1; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass8_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v48; // x8
  bool result; // w0
  System_Func_bool__o *v50; // x21
  UnityEngine_WaitWhile_o *v51; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v53; // w2
  int32_t v54; // w3
  System_Func_bool__o *_9__0; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  UnityEngine_WaitWhile_o *v58; // x20
  ServantStatusBattleListViewItem_o *v59; // x19
  int32_t v60; // w2
  int32_t v61; // w3

  v4 = this;
  if ( (byte_4A5B357 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventTutorialMaster_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__);
    sub_1B885B0(&EventTutorialMaster___c__DisplayClass8_0_TypeInfo);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__);
    sub_1B885B0(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__);
    sub_1B885B0(&EventTutorialMaster___c__DisplayClass8_1_TypeInfo);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4A5B357 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_27;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v6 = (Il2CppObject *)sub_1B887FC(EventTutorialMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor(v6, 0LL);
  v4->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass8_0_o *)v6;
  p__8__1 = &v4->fields.__8__1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  args = v4->fields.args;
  *(_QWORD *)&this->fields.__1__state = args;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)args, v10, v11);
  if ( !*p__8__1 )
    goto LABEL_53;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = static_fields->sortedEntityArray;
  v4->fields.__7__wrap1 = static_fields->sortedEntityArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)sortedEntityArray, v13, v14);
  v19 = 0;
  for ( v4->fields.__7__wrap2 = 0; ; v4->fields.__7__wrap2 = v19 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_53;
    max_length = _7__wrap1->max_length;
    if ( v19 >= max_length )
    {
      v4->fields.__7__wrap1 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v17, v18);
      _8__1 = v4->fields.__8__1;
      if ( _8__1 )
      {
        v48 = _8__1->fields.args;
        if ( v48 )
        {
          ActionExtensions__Call(v48->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_53:
      sub_1B8880C(this, method);
    }
    if ( v19 >= (unsigned int)max_length )
      sub_1B88814(this, method);
    v20 = _7__wrap1->m_Items[v19];
    v4->fields._data_5__4 = v20;
    p_data_5__4 = &v4->fields._data_5__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._data_5__4, (int32_t)v20, v17, v18);
    v23 = v4->fields.__8__1;
    if ( !v23 )
      goto LABEL_53;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialMaster__IsOpenCondition(
                                                                 *p_data_5__4,
                                                                 v23->fields.args,
                                                                 v22);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v42 = &v4->fields._data_5__4;
    data_5__4 = v4->fields._data_5__4;
    if ( !data_5__4 )
      goto LABEL_53;
    if ( data_5__4->fields.flag == 1 )
    {
      eventId = data_5__4->fields.eventId;
      flagType = data_5__4->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_37721824(flagType, eventId, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)NetworkManager__getRequest_object_(
                                                                     0LL,
                                                                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v42 || !this )
          goto LABEL_53;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*v42)->fields.flagType,
          (*v42)->fields.eventId,
          0LL);
      }
    }
    v4->fields._data_5__4 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._data_5__4, 0, v24, v25);
    v19 = v4->fields.__7__wrap2 + 1;
  }
  v26 = (Il2CppObject *)sub_1B887FC(EventTutorialMaster___c__DisplayClass8_1_TypeInfo);
  System_Object___ctor(v26, 0LL);
  v4->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass8_1_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v26, v27, v28);
  v29 = v4->fields.__8__1;
  if ( !v29 )
    goto LABEL_53;
  v30 = v29->fields.args;
  if ( !v30 )
    goto LABEL_53;
  if ( !v30->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialEntity__HasBeforeAction(
                                                               (EventTutorialEntity_o *)this,
                                                               method);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v31 = v4->fields.__8__1;
  if ( !v31 )
    goto LABEL_53;
  v32 = v31->fields.args;
  if ( !v32 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v32->fields.adapter;
  if ( !this )
    goto LABEL_53;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v4->fields._data_5__4, 0LL);
  v33 = v4->fields.__8__1;
  if ( !v33 )
    goto LABEL_53;
  v34 = v33->fields.args;
  if ( !v34 )
    goto LABEL_53;
  adapter = v34->fields.adapter;
  if ( !adapter )
    goto LABEL_53;
  if ( !adapter->fields._IsPerformanceBusy_k__BackingField )
  {
LABEL_27:
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_53;
    _8__2->fields.isBusy = 1;
    v37 = v4->fields._data_5__4;
    v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)_8__2,
      Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__,
      0LL);
    if ( !v37 )
      goto LABEL_53;
    EventTutorialEntity__OpenTutorial(v37, v38, v39);
    v40 = v4->fields.__8__2;
    if ( !v40 )
      goto LABEL_53;
    if ( v40->fields.isBusy )
    {
      v50 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v50,
        (Il2CppObject *)v40,
        Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__,
        0LL);
      v51 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v51, v50, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v51;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v51, v53, v54);
      *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
      return 1;
    }
LABEL_31:
    v4->fields.__8__2 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
    goto LABEL_32;
  }
  _9__0 = v33->fields.__9__0;
  if ( !_9__0 )
  {
    _9__0 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__0,
      (Il2CppObject *)v33,
      Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__,
      0LL);
    v33->fields.__9__0 = _9__0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->fields.__9__0, (int32_t)_9__0, v56, v57);
  }
  v58 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v58, _9__0, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v58;
  v59 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(v59, (int32_t)v58, v60, v61);
  result = 1;
  *(_DWORD *)&v59[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w8

  if ( (byte_4A5B358 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B358 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v10 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1B8880C(0LL, v6);
    v7 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           0LL);
    this->fields.__2__current = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B355 & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialMaster___c_TypeInfo);
    byte_4A5B355 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventTutorialMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5B356 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5B356 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, method);
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
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
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
    v4);
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
  const MethodInfo *v2; // x4
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialMaster__tutorialChainWithoutCheck(
    _4__this,
    this->fields.tutoList,
    this->fields.index + 1,
    this->fields.callback,
    v2);
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
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
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
    v4);
}


void __fastcall EventTutorialMaster___c__DisplayClass6_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
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
    v4);
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
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialMaster__checkTutorial_39304864(
    _4__this,
    this->fields.checkEventIds,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    1,
    v4);
}


void __fastcall EventTutorialMaster___c__DisplayClass7_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialMaster__checkTutorial_39304864(
    _4__this,
    this->fields.checkEventIds,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    0,
    v4);
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
    sub_1B8880C(this, method);
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