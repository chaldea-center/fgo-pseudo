void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC600 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method);
    byte_49FC600 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    167,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  EventTutorialMaster_o *Master_object; // x0
  EventTutorialMaster_o *v17; // x26
  const MethodInfo *v18; // [xsp+8h] [xbp-58h]

  if ( (byte_49FC5EC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    byte_49FC5EC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1B64324(Master_object);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v17 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_38983560(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v20; // w9
  EventTutorialMaster_o *v21; // x26
  const MethodInfo *v22; // [xsp+8h] [xbp-58h]

  v14 = eventId;
  if ( (byte_49FC5ED & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v16);
    *(_QWORD *)&eventId = sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v17);
    byte_49FC5ED = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_13;
  size = checkedEntityList->fields._size;
  v20 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v21 = *(EventTutorialMaster_o **)&eventId;
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
        v22);
      return;
    }
LABEL_13:
    sub_1B64324(*(_QWORD *)&eventId);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v21 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_38983560(
    v21,
    *(System_Collections_Generic_List_int__o **)&eventId,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    v22);
}


void __fastcall EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_49FC5EE & 1) == 0 )
  {
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v1);
    method = (const MethodInfo *)sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v2);
    byte_49FC5EE = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1B64324(method);
  size = checkedEntityList->fields._size;
  v5 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v5;
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FC5E9 & 1) == 0 )
  {
    sub_1B640C8(&EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo, args);
    byte_49FC5E9 = 1;
  }
  v4 = sub_1B64314(EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo, args, method);
  EventTutorialMaster__CoCheckTutorialLocal_d__8___ctor((EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = args;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)args, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FC5EF & 1) == 0 )
  {
    sub_1B640C8(&EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo, method);
    byte_49FC5EF = 1;
  }
  v4 = sub_1B64314(EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo, method, v2);
  EventTutorialMaster__CoroutineCheckTutorial_d__14___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__14_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = args;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)args, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v15; // x7

  if ( (byte_49FC5FE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FC5FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_49FC5F3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v4);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v5);
    sub_1B640C8(&System_Func_EventTutorialEntity__bool__TypeInfo, v6);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__, v7);
    sub_1B640C8(&EventTutorialMaster___c__DisplayClass18_0_TypeInfo, v8);
    byte_49FC5F3 = 1;
  }
  v9 = sub_1B64314(EventTutorialMaster___c__DisplayClass18_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = args;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)args, v11, v12);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventTutorialEntity__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v17,
                                        (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_49FC601 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FC601 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D41FC *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x4

  if ( (byte_49FC5FC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FC5FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  EventEntity_array *EnableEntityList; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 id; // x1
  int max_length; // w8
  unsigned int v13; // w21
  EventEntity_o *v14; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_49FC5FB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FC5FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B6432C(Instance, id);
      v14 = EnableEntityList->m_Items[v13];
      if ( !v14 )
        break;
      if ( !v10 )
        break;
      id = (unsigned int)v14->fields.id;
      items = v10->fields._items;
      v16 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        break;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          id,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = EnableEntityList->max_length;
      if ( (int)++v13 >= max_length )
        return v10;
    }
LABEL_17:
    sub_1B64324(Instance);
  }
  return v10;
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
  if ( (byte_49FC5F4 & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, args);
    byte_49FC5F4 = 1;
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
              (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_1B64324(data);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v15; // x7

  if ( (byte_49FC5F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FC5F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_49FC5F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FC5F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  EventTutorialMaster___c_c *v11; // x8
  System_Action_o *_9__21_0; // x21
  Il2CppObject *v13; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FC5F6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B640C8(&Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, v5);
    sub_1B640C8(&EventTutorialMaster___c_TypeInfo, v6);
    byte_49FC5F6 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    v11 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v11 = EventTutorialMaster___c_TypeInfo;
    }
    _9__21_0 = v11->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = EventTutorialMaster___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__21_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(_9__21_0, v13, Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, 0LL);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = _9__21_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v15, v16);
    }
    if ( !v10 )
LABEL_15:
      sub_1B64324(Instance);
    CommonUI__OpenTutorialImageDialog_30371536(v10, imageIds, -1, 0, _9__21_0, 0LL, 0LL, 0LL);
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x4

  if ( (byte_49FC5F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FC5F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_38989336(
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
  Il2CppObject *Instance; // x0
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_49FC5F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FC5F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  EventTutorialMaster__showTutorialWithoutCheck_38989536(
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

  if ( (byte_49FC602 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__, entity);
    byte_49FC602 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x4

  if ( (byte_49FC5F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FC5F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  EventTutorialMaster__tutorialChainWithoutCheck((EventTutorialMaster_o *)Instance, tutoList, 0, callback, v7);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x19
  System_Collections_Generic_List_object__o *checkedEntityList; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v39; // x8
  unsigned __int64 v40; // x27
  EventTutorialEntity_o *v41; // x20
  _BOOL8 v42; // x0
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v45; // x3
  int32_t v46; // w8
  const MethodInfo *v47; // x2
  int32_t v48; // w3
  int32_t flagType; // w22
  int32_t v50; // w23
  System_Action_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x8
  __int64 v58; // x1
  const MethodInfo *v59; // x2
  System_Action_o *v60; // x22
  int32_t v61; // w2
  int32_t v62; // w3
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC5E7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v23);
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v24);
    sub_1B640C8(&NetworkManager_TypeInfo, v25);
    sub_1B640C8(&TutorialFlag_TypeInfo, v26);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__, v27);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__, v28);
    sub_1B640C8(&EventTutorialMaster___c__DisplayClass6_0_TypeInfo, v29);
    byte_49FC5E7 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v30 = sub_1B64314(EventTutorialMaster___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_54;
  *(_QWORD *)(v30 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 16), (int32_t)this, v32, v33);
  *(_QWORD *)(v30 + 32) = callbackAfter;
  *(_DWORD *)(v30 + 24) = eventId;
  *(_DWORD *)(v30 + 28) = openKind;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)callbackAfter, v34, v35);
  *(_DWORD *)(v30 + 40) = qId;
  *(_DWORD *)(v30 + 44) = bPhase;
  *(_DWORD *)(v30 + 48) = bWave;
  *(_DWORD *)(v30 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_54;
  v39 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v39 < 1 )
  {
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v30 + 32), 0LL);
    return;
  }
  v40 = 0LL;
  while ( 1 )
  {
    if ( v40 >= (unsigned int)v39 )
      sub_1B6432C(checkedEntityList, v36);
    v41 = sortedEntityArray->m_Items[v40];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        checkedEntityList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v64 = v63;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v64,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v42 )
          break;
        if ( !v41 )
          sub_1B64324(v42);
        if ( !v64.fields._current )
          sub_1B64324(v42);
        if ( v41->fields.eventId == LODWORD(v64.fields._current[1].klass)
          && v41->fields.flagType == HIDWORD(v64.fields._current[1].klass)
          && v41->fields.num == LODWORD(v64.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v64,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v64,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v41 )
      goto LABEL_54;
    flag = v41->fields.flag;
    if ( v41->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v41, v36);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v30 + 40),
                                                                       v45);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_35:
    LODWORD(v39) = sortedEntityArray->max_length;
    if ( (__int64)++v40 >= (int)v39 )
      goto LABEL_39;
  }
  v46 = v41->fields.eventId;
  if ( (v46 & 0x80000000) == 0 && v46 != *(_DWORD *)(v30 + 24)
    || v41->fields.openType != *(_DWORD *)(v30 + 28)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v41,
                                                                           *(_DWORD *)(v30 + 40),
                                                                           *(_DWORD *)(v30 + 44),
                                                                           *(_DWORD *)(v30 + 48),
                                                                           *(_DWORD *)(v30 + 52),
                                                                           v37),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
    if ( v41->fields.flag == 1 )
    {
      flagType = v41->fields.flagType;
      v50 = *(_DWORD *)(v30 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_37409892(flagType, v50, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_54;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v41->fields.flagType,
          *(_DWORD *)(v30 + 24),
          0LL);
      }
    }
    goto LABEL_35;
  }
  if ( flag != 2 && !notSave )
  {
    v51 = *(System_Action_o **)(v30 + 64);
    if ( !v51 )
    {
      v51 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v47);
      System_Action___ctor(
        v51,
        (Il2CppObject *)v30,
        Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v30 + 64) = v51;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 64), (int32_t)v51, v52, v53);
    }
    EventTutorialEntity__OpenTutorial(v41, v51, v47);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v55 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_54:
    sub_1B64324(checkedEntityList);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v41,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v57[4] = (Il2CppClass *)v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v41, (int32_t)v47, v48);
  }
  v60 = *(System_Action_o **)(v30 + 56);
  if ( !v60 )
  {
    v60 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v58, v59);
    System_Action___ctor(
      v60,
      (Il2CppObject *)v30,
      Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v30 + 56) = v60;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 56), (int32_t)v60, v61, v62);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v41, v60, v59);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__checkTutorial_38983560(
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x19
  System_Collections_Generic_List_object__o *checkedEntityList; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o **v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *eventId; // x1
  const MethodInfo *v41; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v43; // x8
  unsigned __int64 v44; // x29
  EventTutorialEntity_o *v45; // x20
  _BOOL8 v46; // x0
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  int32_t v51; // w3
  int32_t v52; // w23
  int32_t flagType; // w24
  System_Action_o *v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x8
  __int64 v61; // x1
  const MethodInfo *v62; // x2
  System_Action_o *v63; // x22
  int32_t v64; // w2
  int32_t v65; // w3
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC5E8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, checkEventIds);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v24);
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v25);
    sub_1B640C8(&NetworkManager_TypeInfo, v26);
    sub_1B640C8(&TutorialFlag_TypeInfo, v27);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__, v28);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__, v29);
    sub_1B640C8(&EventTutorialMaster___c__DisplayClass7_0_TypeInfo, v30);
    byte_49FC5E8 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v31 = sub_1B64314(EventTutorialMaster___c__DisplayClass7_0_TypeInfo, checkEventIds, *(_QWORD *)&openKind);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_55;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 16), (int32_t)this, v33, v34);
  *(_QWORD *)(v31 + 24) = checkEventIds;
  v35 = (System_Collections_Generic_List_object__o **)(v31 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 24), (int32_t)checkEventIds, v36, v37);
  *(_QWORD *)(v31 + 40) = callbackAfter;
  *(_DWORD *)(v31 + 32) = openKind;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 40), (int32_t)callbackAfter, v38, v39);
  *(_DWORD *)(v31 + 48) = qId;
  *(_DWORD *)(v31 + 52) = bPhase;
  *(_DWORD *)(v31 + 56) = bWave;
  *(_DWORD *)(v31 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v43 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v43 < 1 )
  {
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v31 + 40), 0LL);
    return;
  }
  v44 = 0LL;
  while ( 1 )
  {
    if ( v44 >= (unsigned int)v43 )
      sub_1B6432C(checkedEntityList, eventId);
    v45 = sortedEntityArray->m_Items[v44];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v66,
        checkedEntityList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v67 = v66;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v67,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v46 )
          break;
        if ( !v45 )
          sub_1B64324(v46);
        if ( !v67.fields._current )
          sub_1B64324(v46);
        if ( v45->fields.eventId == LODWORD(v67.fields._current[1].klass)
          && v45->fields.flagType == HIDWORD(v67.fields._current[1].klass)
          && v45->fields.num == LODWORD(v67.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v67,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_36;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v67,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v45 )
      goto LABEL_55;
    flag = v45->fields.flag;
    if ( v45->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v45, eventId);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v31 + 48),
                                                                       v49);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_36:
    LODWORD(v43) = sortedEntityArray->max_length;
    if ( (__int64)++v44 >= (int)v43 )
      goto LABEL_40;
  }
  eventId = (const MethodInfo *)(unsigned int)v45->fields.eventId;
  if ( ((unsigned int)eventId & 0x80000000) == 0 )
  {
    checkedEntityList = *v35;
    if ( !*v35 )
      goto LABEL_55;
    checkedEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Contains(
                                                                       (System_Collections_Generic_List_int__o *)checkedEntityList,
                                                                       (int32_t)eventId,
                                                                       (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      goto LABEL_59;
  }
  if ( v45->fields.openType != *(_DWORD *)(v31 + 32)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v45,
                                                                           *(_DWORD *)(v31 + 48),
                                                                           *(_DWORD *)(v31 + 52),
                                                                           *(_DWORD *)(v31 + 56),
                                                                           *(_DWORD *)(v31 + 60),
                                                                           v41),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
LABEL_59:
    if ( v45->fields.flag == 1 )
    {
      v52 = v45->fields.eventId;
      flagType = v45->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_37409892(flagType, v52, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v45->fields.flagType,
          v45->fields.eventId,
          0LL);
      }
    }
    goto LABEL_36;
  }
  if ( flag != 2 && !notSave )
  {
    v54 = *(System_Action_o **)(v31 + 72);
    if ( !v54 )
    {
      v54 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, eventId, v50);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v31,
        Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v31 + 72) = v54;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 72), (int32_t)v54, v55, v56);
    }
    EventTutorialEntity__OpenTutorial(v45, v54, v50);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v58 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_55:
    sub_1B64324(checkedEntityList);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v45,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v60[4] = (Il2CppClass *)v45;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v45, (int32_t)v50, v51);
  }
  v63 = *(System_Action_o **)(v31 + 64);
  if ( !v63 )
  {
    v63 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v61, v62);
    System_Action___ctor(
      v63,
      (Il2CppObject *)v31,
      Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v31 + 64) = v63;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 64), (int32_t)v63, v64, v65);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v45, v63, v62);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x10
  EventTutorialMaster_o *v19; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v21; // x8
  System_Collections_Generic_List_object__o *v22; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  int max_length; // w8
  unsigned int v25; // w19
  EventTutorialEntity_o *v26; // x27
  int32_t v27; // w8
  const MethodInfo *v28; // x5
  unsigned int v29; // w28
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v31; // x9

  if ( (byte_49FC5FF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v11);
    sub_1B640C8(&int___TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14);
    this = (EventTutorialMaster_o *)sub_1B640C8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15);
    byte_49FC5FF = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1B64170(int___TypeInfo, openKinds->max_length);
  v18 = *(_QWORD *)&openKinds->max_length;
  v19 = this;
  if ( (int)v18 >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v21 = 0LL;
      while ( v21 < MasterName_k__BackingField_low )
      {
        *((_DWORD *)&this->fields.list + v21++) = 0;
        if ( (__int64)v21 >= (int)v18 )
          goto LABEL_9;
      }
LABEL_27:
      sub_1B6432C(this, v16);
    }
LABEL_28:
    sub_1B64324(this);
  }
LABEL_9:
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        goto LABEL_27;
      v26 = sortedEntityArray->m_Items[v25];
      if ( !v26 )
        goto LABEL_28;
      v27 = v26->fields.eventId;
      if ( (v27 & 0x80000000) != 0 || v27 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_Int32Enum_(
                                          (System_Int32Enum_array *)openKinds,
                                          v26->fields.openType,
                                          (const MethodInfo_2F31EF0 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v29 = (unsigned int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v26, qId, bPhase, bWave, bTurn, v28);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_28;
            if ( v29 >= LODWORD(v19->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v22 )
              goto LABEL_28;
            System_Collections_Generic_List_object___Insert(
              v22,
              *((_DWORD *)&v19->fields.list + v29),
              (Il2CppObject *)v26,
              (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v19->fields._MasterName_k__BackingField;
            if ( (int)v29 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v25 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v22;
    }
    v31 = v29;
    while ( (unsigned int)v31 < (unsigned int)MasterName_k__BackingField )
    {
      ++*((_DWORD *)&v19->fields.list + v31++);
      if ( v31 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v22;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x22
  struct System_Object_array *IsNullOrEmpty; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v23; // w27
  Il2CppObject *v24; // x23
  EventTutorialEntity_o *v25; // x24
  int32_t v26; // w8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct System_String_array *v31; // x8
  __int64 v32; // x28
  unsigned __int64 v33; // x29
  struct System_String_array *v34; // x8
  _QWORD *v35; // x8

  if ( (byte_49FC5FD & 1) == 0 )
  {
    sub_1B640C8(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_1B640C8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    sub_1B640C8(&StringLiteral_15898/*"[]"*/, v12);
    sub_1B640C8(&StringLiteral_15956/*"[{0}]"*/, v13);
    byte_49FC5FD = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_15956/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v24 = 0LL;
    if ( !v16 )
      goto LABEL_42;
  }
  else
  {
    v23 = 0;
    v24 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)max_length )
LABEL_43:
        sub_1B6432C(IsNullOrEmpty, v18);
      v25 = sortedEntityArray->m_Items[v23];
      if ( !v25 )
        goto LABEL_42;
      v26 = v25->fields.eventId;
      if ( ((v26 & 0x80000000) != 0 || v26 == eventId) && v25->fields.openType == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
LABEL_14:
          if ( !v16 )
            goto LABEL_42;
          items = v16->fields._items;
          v28 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_42;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)v25,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v25;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v25, v19, v20);
          }
        }
        else
        {
          v31 = v25->fields.targetIds;
          if ( !v31 )
            goto LABEL_42;
          v32 = *(_QWORD *)&v31->max_length;
          if ( !v24 )
          {
            if ( !(_DWORD)v32
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  v31->m_Items[0],
                                                                  (System_String_o *)StringLiteral_15898/*"[]"*/,
                                                                  0LL),
                  v24 = 0LL,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v24 = (Il2CppObject *)v25;
            }
          }
          if ( (int)v32 >= 1 )
          {
            v33 = 0LL;
            while ( 1 )
            {
              v34 = v25->fields.targetIds;
              if ( !v34 )
                break;
              if ( v33 >= v34->max_length )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                              v34->m_Items[v33],
                                                              targetIds,
                                                              0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v32 == ++v33 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1B64324(IsNullOrEmpty);
          }
        }
      }
LABEL_31:
      max_length = sortedEntityArray->max_length;
      ++v23;
    }
    while ( v23 < max_length );
    if ( !v16 )
      goto LABEL_42;
  }
  if ( v24 && !v16->fields._size )
  {
    IsNullOrEmpty = v16->fields._items;
    v35 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v16->fields._version;
    if ( !IsNullOrEmpty )
      goto LABEL_42;
    if ( IsNullOrEmpty->max_length )
    {
      v16->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)IsNullOrEmpty->m_Items, (int32_t)v24, v19, v20);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v24,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v16;
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
        sub_1B64324(this);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          sub_1B6432C(this, targets);
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
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w26
  int32_t v19; // w27
  bool v20; // w19
  Il2CppObject *Item; // x0
  const MethodInfo *v22; // x5
  __int64 methodPtr_low; // x10
  int klass; // w8

  if ( (byte_49FC5EB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_1B640C8(&EventTutorialEntity_TypeInfo, v15);
    byte_49FC5EB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v19,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(EventTutorialEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTutorialEntity_TypeInfo
        || (klass = (int)Item[1].klass, (klass & 0x80000000) == 0) && klass != eventId
        || LODWORD(Item[2].klass) != openKind
        || !EventTutorialEntity__isOpenCondition((EventTutorialEntity_o *)Item, qId, bPhase, bWave, bTurn, v22) )
      {
        v20 = ++v19 < v18;
        if ( v18 != v19 )
          continue;
      }
      return v20;
    }
LABEL_18:
    sub_1B64324(list);
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
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w27
  int32_t v22; // w28
  bool v23; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v25; // x5
  __int64 methodPtr_low; // x10
  int klass; // w8
  int32_t v29; // [xsp+8h] [xbp-68h]
  int32_t v30; // [xsp+Ch] [xbp-64h]

  if ( (byte_49FC5EA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v17);
    sub_1B640C8(&EventTutorialEntity_TypeInfo, v18);
    byte_49FC5EA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = bWave;
    v30 = bTurn;
    v21 = Count;
    v22 = 0;
    v23 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v22,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(EventTutorialEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTutorialEntity_TypeInfo
        || (klass = (int)Item[1].klass, (klass & 0x80000000) != 0) && isChkEventId
        || (klass & 0x80000000) == 0 && klass != eventId
        || LODWORD(Item[2].klass) != openKind
        || !EventTutorialEntity__isEnableCondition((EventTutorialEntity_o *)Item, qId, bPhase, v29, v30, v25) )
      {
        v23 = ++v22 < v21;
        if ( v21 != v22 )
          continue;
      }
      return v23;
    }
LABEL_20:
    sub_1B64324(list);
  }
  return 0;
}


bool __fastcall EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  EventTutorialMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v19; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  EventTutorialMaster___c_c *v26; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v29; // x21
  struct EventTutorialMaster___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Object_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x19
  struct EventTutorialMaster_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_49FC5E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v5);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v6);
    sub_1B640C8(&System_Func_EventTutorialEntity__int__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v9);
    sub_1B640C8(&Method_EventTutorialMaster___c__preProcess_b__4_0__, v10);
    sub_1B640C8(&Method_EventTutorialMaster___c__preProcess_b__4_1__, v11);
    sub_1B640C8(&EventTutorialMaster___c_TypeInfo, v12);
    byte_49FC5E6 = 1;
  }
  v13 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v16 = EventTutorialMaster___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v16 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v16->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventTutorialMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventTutorialEntity__int__TypeInfo, v14, v15);
    System_Func_object__int____ctor(_9__4_0, v19, Method_EventTutorialMaster___c__preProcess_b__4_0__, 0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v21, v22);
  }
  v23 = System_Linq_Enumerable__OrderBy_object__int_(
          v17,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v26 = EventTutorialMaster___c_TypeInfo;
  v27 = v23;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v26 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v26->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = EventTutorialMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventTutorialEntity__int__TypeInfo, v24, v25);
    System_Func_object__int____ctor(_9__4_1, v29, Method_EventTutorialMaster___c__preProcess_b__4_1__, 0LL);
    v30 = EventTutorialMaster___c_TypeInfo->static_fields;
    v30->__9__4_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->__9__4_1, (int32_t)_9__4_1, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v27,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v34 = System_Linq_Enumerable__ToArray_object_(
          v33,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventTutorialMaster_TypeInfo->static_fields, (int32_t)v34, v35, v36);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v40 = EventTutorialMaster_TypeInfo->static_fields;
  v40->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->checkedEntityList, (int32_t)v39, v41, v42);
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
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x23
  __int64 v13; // x0
  EventTutorialEntity_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v20; // w25
  int32_t v21; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_49FC5F5 & 1) == 0 )
  {
    sub_1B640C8(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    byte_49FC5F5 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&openKind);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
        sub_1B6432C(v13, v14);
      v14 = sortedEntityArray->m_Items[v20];
      if ( !v14 )
        break;
      v21 = v14->fields.eventId;
      if ( ((v21 & 0x80000000) != 0 || v21 == eventId) && v14->fields.openType == openKind )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v23 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v14,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v14;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v14, v15, v16);
        }
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_17;
    }
LABEL_18:
    sub_1B64324(v13);
  }
LABEL_17:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v12,
    0,
    callback,
    v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_38989536(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x19
  _BOOL8 isEnableCondition; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  const MethodInfo *v27; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v30; // w23
  EventTutorialEntity_o *v31; // x21
  int32_t v32; // w8
  const MethodInfo *v33; // x2
  System_Action_o *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_49FC5F8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v17);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__, v18);
    sub_1B640C8(&EventTutorialMaster___c__DisplayClass23_0_TypeInfo, v19);
    byte_49FC5F8 = 1;
  }
  v20 = sub_1B64314(EventTutorialMaster___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v20 + 32) = callbackAfter;
  *(_DWORD *)(v20 + 24) = eventId;
  *(_DWORD *)(v20 + 28) = openKind;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)callbackAfter, v24, v25);
  *(_DWORD *)(v20 + 40) = qId;
  *(_DWORD *)(v20 + 44) = bPhase;
  *(_DWORD *)(v20 + 48) = bWave;
  *(_DWORD *)(v20 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1B64324(isEnableCondition);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v20 + 32), 0LL);
  }
  else
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1B6432C(isEnableCondition, v26);
      v31 = sortedEntityArray->m_Items[v30];
      if ( !v31 )
        goto LABEL_18;
      v32 = v31->fields.eventId;
      if ( ((v32 & 0x80000000) != 0 || v32 == *(_DWORD *)(v20 + 24)) && v31->fields.openType == *(_DWORD *)(v20 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v31,
                              *(_DWORD *)(v20 + 40),
                              *(_DWORD *)(v20 + 44),
                              *(_DWORD *)(v20 + 48),
                              *(_DWORD *)(v20 + 52),
                              v27);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_14;
    }
    v34 = *(System_Action_o **)(v20 + 56);
    if ( !v34 )
    {
      v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v33);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v20,
        Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v20 + 56) = v34;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 56), (int32_t)v34, v35, v36);
    }
    EventTutorialEntity__OpenTutorial(v31, v34, v33);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  System_Collections_Generic_List_object__o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  Il2CppObject *Item; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x2

  if ( (byte_49FC5FA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, tutoList);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__, v11);
    sub_1B640C8(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo, v12);
    byte_49FC5FA = 1;
  }
  v13 = sub_1B64314(EventTutorialMaster___c__DisplayClass25_0_TypeInfo, tutoList, *(_QWORD *)&index);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 24) = tutoList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)tutoList, v17, v18);
  *(_QWORD *)(v13 + 40) = callback;
  *(_DWORD *)(v13 + 32) = index;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)callback, v19, v20);
  v14 = *(System_Collections_Generic_List_object__o **)(v13 + 24);
  if ( !v14 )
    goto LABEL_9;
  v21 = *(_DWORD *)(v13 + 32);
  if ( v21 < v14->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v14,
             v21,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v13,
      Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v25, v26);
      return;
    }
LABEL_9:
    sub_1B64324(v14);
  }
  ActionExtensions__Call(*(System_Action_o **)(v13 + 40), 0LL);
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
  __int64 v3; // x1
  System_Int32_array *eventIds; // x21
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = this;
  if ( (byte_49FC603 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1B640C8(
                                                        &Method_System_Collections_Generic_List_int__ToArray__,
                                                        v3);
    byte_49FC603 = 1;
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
                     (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.eventIds, (int32_t)eventIds, v7, v8);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1B64170(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1B6432C(OpenEventIds, v6);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1B64324(OpenEventIds);
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
  __int64 v2; // x2
  int32_t v3; // w3
  EventTutorialMaster__CoCheckTutorialLocal_d__8_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  Il2CppObject *v17; // x21
  struct EventTutorialMaster___c__DisplayClass8_0_o **p__8__1; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int v31; // w8
  struct EventTutorialEntity_o *v32; // x1
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialMaster___c__DisplayClass8_0_o *v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t v37; // w3
  Il2CppObject *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  struct EventTutorialMaster___c__DisplayClass8_0_o *v41; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v42; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v43; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v44; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v45; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v46; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass8_1_o *_8__2; // x21
  EventTutorialEntity_o *v49; // x20
  System_Action_o *v50; // x22
  __int64 v51; // x1
  struct EventTutorialMaster___c__DisplayClass8_1_o *v52; // x20
  struct EventTutorialEntity_o *data_5__4; // x8
  struct EventTutorialEntity_o **v54; // x20
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *_7__wrap1; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass8_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v60; // x8
  bool result; // w0
  System_Func_bool__o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_WaitWhile_o *v65; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v67; // w2
  int32_t v68; // w3
  System_Func_bool__o *_9__0; // x21
  int32_t v70; // w2
  int32_t v71; // w3
  UnityEngine_WaitWhile_o *v72; // x20
  ServantStatusBattleListViewItem_o *v73; // x19
  int32_t v74; // w2
  int32_t v75; // w3

  v4 = this;
  if ( (byte_49FC606 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v5);
    sub_1B640C8(&System_Func_bool__TypeInfo, v6);
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&TutorialFlag_TypeInfo, v9);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__, v10);
    sub_1B640C8(&EventTutorialMaster___c__DisplayClass8_0_TypeInfo, v11);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__, v12);
    sub_1B640C8(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__, v13);
    sub_1B640C8(&EventTutorialMaster___c__DisplayClass8_1_TypeInfo, v14);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v15);
    byte_49FC606 = 1;
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
  v17 = (Il2CppObject *)sub_1B64314(EventTutorialMaster___c__DisplayClass8_0_TypeInfo, method, v2);
  System_Object___ctor(v17, 0LL);
  v4->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass8_0_o *)v17;
  p__8__1 = &v4->fields.__8__1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v17, v19, v20);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  args = v4->fields.args;
  *(_QWORD *)&this->fields.__1__state = args;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)args, v21, v22);
  if ( !*p__8__1 )
    goto LABEL_53;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = static_fields->sortedEntityArray;
  v4->fields.__7__wrap1 = static_fields->sortedEntityArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)sortedEntityArray, v24, v25);
  v31 = 0;
  for ( v4->fields.__7__wrap2 = 0; ; v4->fields.__7__wrap2 = v31 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_53;
    max_length = _7__wrap1->max_length;
    if ( v31 >= max_length )
    {
      v4->fields.__7__wrap1 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v29, v30);
      _8__1 = v4->fields.__8__1;
      if ( _8__1 )
      {
        v60 = _8__1->fields.args;
        if ( v60 )
        {
          ActionExtensions__Call(v60->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_53:
      sub_1B64324(this);
    }
    if ( v31 >= (unsigned int)max_length )
      sub_1B6432C(this, v28);
    v32 = _7__wrap1->m_Items[v31];
    v4->fields._data_5__4 = v32;
    p_data_5__4 = &v4->fields._data_5__4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._data_5__4, (int32_t)v32, v29, v30);
    v34 = v4->fields.__8__1;
    if ( !v34 )
      goto LABEL_53;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialMaster__IsOpenCondition(
                                                                 *p_data_5__4,
                                                                 v34->fields.args,
                                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v54 = &v4->fields._data_5__4;
    data_5__4 = v4->fields._data_5__4;
    if ( !data_5__4 )
      goto LABEL_53;
    if ( data_5__4->fields.flag == 1 )
    {
      eventId = data_5__4->fields.eventId;
      flagType = data_5__4->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_37409892(flagType, eventId, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)NetworkManager__getRequest_object_(
                                                                     0LL,
                                                                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v54 || !this )
          goto LABEL_53;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*v54)->fields.flagType,
          (*v54)->fields.eventId,
          0LL);
      }
    }
    v4->fields._data_5__4 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._data_5__4, 0, v36, v37);
    v31 = v4->fields.__7__wrap2 + 1;
  }
  v38 = (Il2CppObject *)sub_1B64314(EventTutorialMaster___c__DisplayClass8_1_TypeInfo, v35, v36);
  System_Object___ctor(v38, 0LL);
  v4->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass8_1_o *)v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, (int32_t)v38, v39, v40);
  v41 = v4->fields.__8__1;
  if ( !v41 )
    goto LABEL_53;
  v42 = v41->fields.args;
  if ( !v42 )
    goto LABEL_53;
  if ( !v42->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialEntity__HasBeforeAction(
                                                               (EventTutorialEntity_o *)this,
                                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v43 = v4->fields.__8__1;
  if ( !v43 )
    goto LABEL_53;
  v44 = v43->fields.args;
  if ( !v44 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v44->fields.adapter;
  if ( !this )
    goto LABEL_53;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v4->fields._data_5__4, 0LL);
  v45 = v4->fields.__8__1;
  if ( !v45 )
    goto LABEL_53;
  v46 = v45->fields.args;
  if ( !v46 )
    goto LABEL_53;
  adapter = v46->fields.adapter;
  if ( !adapter )
    goto LABEL_53;
  if ( !adapter->fields._IsPerformanceBusy_k__BackingField )
  {
LABEL_27:
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_53;
    _8__2->fields.isBusy = 1;
    v49 = v4->fields._data_5__4;
    v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v50,
      (Il2CppObject *)_8__2,
      Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__,
      0LL);
    if ( !v49 )
      goto LABEL_53;
    EventTutorialEntity__OpenTutorial(v49, v50, 0LL);
    v52 = v4->fields.__8__2;
    if ( !v52 )
      goto LABEL_53;
    if ( v52->fields.isBusy )
    {
      v62 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v51, v2);
      System_Func_bool____ctor(
        v62,
        (Il2CppObject *)v52,
        Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__,
        0LL);
      v65 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v63, v64);
      UnityEngine_WaitWhile___ctor(v65, v62, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v65;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v65, v67, v68);
      *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
      return 1;
    }
LABEL_31:
    v4->fields.__8__2 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__2, 0, v2, v3);
    goto LABEL_32;
  }
  _9__0 = v45->fields.__9__0;
  if ( !_9__0 )
  {
    _9__0 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, method, v2);
    System_Func_bool____ctor(
      _9__0,
      (Il2CppObject *)v45,
      Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__,
      0LL);
    v45->fields.__9__0 = _9__0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->fields.__9__0, (int32_t)_9__0, v70, v71);
  }
  v72 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, method, v2);
  UnityEngine_WaitWhile___ctor(v72, _9__0, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v72;
  v73 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(v73, (int32_t)v72, v74, v75);
  result = 1;
  *(_DWORD *)&v73[-1].fields.isMine = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Master_object; // x0
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w8

  if ( (byte_49FC607 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FC607 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1B64324(0LL);
    v7 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           0LL);
    this->fields.__2__current = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC604 & 1) == 0 )
  {
    sub_1B640C8(&EventTutorialMaster___c_TypeInfo, v1);
    byte_49FC604 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventTutorialMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventTutorialMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FC605 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FC605 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  EventTutorialMaster__checkTutorial_38983560(
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
    sub_1B64324(0LL);
  EventTutorialMaster__checkTutorial_38983560(
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
    sub_1B64324(this);
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