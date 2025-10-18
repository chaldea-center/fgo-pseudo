void EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_HashSet_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C431BF & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C431BF = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.openedEventIds = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openedEventIds, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.refreshedWarIds = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.refreshedWarIds, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
}


bool EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
        int32_t eventId,
        int32_t eventTutorialFlag,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  bool IsTutorialAvailable; // w21

  if ( (byte_4C431AF & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    byte_4C431AF = 1;
  }
  IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(eventId, 0, 0, 0, 0, 0, v3);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return IsTutorialAvailable & ~CondType__IsEventTutorialFlagOn(eventId, eventTutorialFlag, 0) & 1;
}


void EventTutorialMaster__CheckTutorial(
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
  EventTutorialMaster_o *v16; // x26
  const MethodInfo *isEventIdOneOrMore; // [xsp+8h] [xbp-68h]
  const MethodInfo *v18; // [xsp+10h] [xbp-60h]

  if ( (byte_4C431A6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C431A6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v16 = Master_object;
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
        isEventIdOneOrMore);
      return;
    }
LABEL_10:
    sub_1C372B4(Master_object);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v16 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_42166120(
    v16,
    (System_Collections_Generic_List_int__o *)Master_object,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    0,
    0,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void EventTutorialMaster__CheckTutorialNotSaveFlag(
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
  const MethodInfo *isEventIdOneOrMore; // [xsp+8h] [xbp-68h]
  const MethodInfo *v20; // [xsp+10h] [xbp-60h]

  v14 = eventId;
  if ( (byte_4C431A7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    *(_QWORD *)&eventId = sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4C431A7 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_13;
  size = checkedEntityList->fields._size;
  v17 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        isEventIdOneOrMore);
      return;
    }
LABEL_13:
    sub_1C372B4(*(_QWORD *)&eventId);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v18 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_42166120(
    v18,
    *(System_Collections_Generic_List_int__o **)&eventId,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    0,
    v20);
}


void EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v3; // w9

  if ( (byte_4C431A8 & 1) == 0 )
  {
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    method = (const MethodInfo *)sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4C431A8 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1C372B4(method);
  size = checkedEntityList->fields._size;
  v3 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v3;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0);
}


System_Collections_IEnumerator_o *EventTutorialMaster__CoCheckTutorialLocal(
        EventTutorialMaster_o *this,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C431A2 & 1) == 0 )
  {
    sub_1C37058(&EventTutorialMaster__CoCheckTutorialLocal_d__12_TypeInfo);
    byte_4C431A2 = 1;
  }
  v5 = sub_1C372A4(EventTutorialMaster__CoCheckTutorialLocal_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = args;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)args, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C431A9 & 1) == 0 )
  {
    sub_1C37058(&EventTutorialMaster__CoroutineCheckTutorial_d__19_TypeInfo);
    byte_4C431A9 = 1;
  }
  v3 = sub_1C372A4(EventTutorialMaster__CoroutineCheckTutorial_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = args;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)args, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialMaster__GetAvailableEventTutorialEntitys(
        int32_t eventId,
        EventTutorialMaster_OpenType_array *openKinds,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_4C431BA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return EventTutorialMaster__getAvailableEventTutorialEntitys(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKinds,
           qId,
           bPhase,
           bWave,
           bTurn,
           v14);
}


EventTutorialEntity_array *EventTutorialMaster__GetAvailableTutorialArray(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C431AE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass24_0__GetAvailableTutorialArray_b__0__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass24_0_TypeInfo);
    byte_4C431AE = 1;
  }
  v3 = sub_1C372A4(EventTutorialMaster___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 16) = args;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)args, v5, v6);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_EventTutorialMaster___c__DisplayClass24_0__GetAvailableTutorialArray_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         sortedEntityArray,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v9,
                                        (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialEntity_o *EventTutorialMaster__GetEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C431C0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
    byte_4C431C0 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4C431B8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return EventTutorialMaster__getEventTutorialEntity(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           targetIds,
           v8);
}


System_Collections_Generic_List_int__o *EventTutorialMaster__GetOpenEventIds(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventEntity_array *EnableEntityList; // x19
  System_Collections_Generic_List_int__o *v3; // x20
  int max_length; // w8
  unsigned int v5; // w21
  EventEntity_o *v6; // x8
  int32_t id; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4C431B7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0);
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C372BC(Instance);
      v6 = EnableEntityList->m_Items[v5];
      if ( !v6 )
        break;
      if ( !v3 )
        break;
      id = v6->fields.id;
      items = v3->fields._items;
      v9 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          id,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      max_length = EnableEntityList->max_length;
      if ( (int)++v5 >= max_length )
        return v3;
    }
LABEL_17:
    sub_1C372B4(Instance);
  }
  return v3;
}


bool EventTutorialMaster__IsAvailableWithTargetId(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        int32_t targetId,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w27
  int32_t v18; // w28
  bool v19; // w20
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v21; // x1
  int32_t v22; // w8
  EventTutorialEntity_o *v23; // x29
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x5

  if ( (byte_4C431A5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4C431A5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v22 = Item->fields.eventId, v23 = Item, (v22 & 0x80000000) == 0) && v22 != eventId
        || Item->fields.openType != openKind
        || (Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(Item, v21),
            !EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, targetId, v25))
        || !EventTutorialEntity__isOpenCondition(v23, qId, bPhase, bWave, bTurn, v26) )
      {
        v19 = ++v18 < v17;
        if ( v17 != v18 )
          continue;
      }
      return v19;
    }
LABEL_17:
    sub_1C372B4(list);
  }
  return 0;
}


bool EventTutorialMaster__IsOpenCondition(
        EventTutorialEntity_o *data,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  EventTutorialEntity_o *v5; // x20
  System_Collections_Generic_IEnumerable_TSource__o *EventIds; // x0
  _BOOL4 v7; // w21
  _BOOL4 v8; // w8

  v5 = data;
  if ( (byte_4C431B0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    data = (EventTutorialEntity_o *)sub_1C37058(&Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
    byte_4C431B0 = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  if ( (v5->fields.eventId & 0x80000000) == 0 )
  {
    if ( args )
    {
      EventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_EventTutorialArgs__get_EventIds(
                                                                        args,
                                                                        (const MethodInfo *)args);
      v7 = System_Linq_Enumerable__Contains_int_(
             EventIds,
             v5->fields.eventId,
             (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_9;
    }
LABEL_17:
    sub_1C372B4(data);
  }
  if ( !args )
    goto LABEL_17;
  v7 = 1;
LABEL_9:
  if ( v5->fields.openType == args->fields.openKind )
    v8 = 1;
  else
    v8 = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)args->fields.openKindArray, 0)
      && System_Linq_Enumerable__Contains_Int32Enum_(
           (System_Collections_Generic_IEnumerable_TSource__o *)args->fields.openKindArray,
           v5->fields.openType,
           (const MethodInfo_3104D04 *)Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
  return v8
      && v7
      && EventTutorialEntity__isOpenCondition(
           v5,
           args->fields.qId,
           args->fields.bPhase,
           args->fields.bWave,
           args->fields.bTurn,
           v3);
}


bool EventTutorialMaster__IsTutorialAvailable(
        int32_t eventId,
        int32_t openKind,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_4C431AB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return EventTutorialMaster__isTutorialAvailable(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           qId,
           bPhase,
           bWave,
           bTurn,
           v14);
}


bool EventTutorialMaster__IsTutorialAvailableWithTargetId(
        int32_t eventId,
        int32_t openKind,
        int32_t targetId,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4C431AC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return EventTutorialMaster__IsAvailableWithTargetId(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           targetId,
           qId,
           bPhase,
           bWave,
           bTurn,
           v17);
}


bool EventTutorialMaster__IsTutorialDataExists(
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
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4C431AA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
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
           v17);
}


void EventTutorialMaster__OpenTutorialImages(System_Int32_array *imageIds, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x20
  EventTutorialMaster___c_c *v5; // x8
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v7; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C431B2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_EventTutorialMaster___c__OpenTutorialImages_b__28_0__);
    sub_1C37058(&EventTutorialMaster___c_TypeInfo);
    byte_4C431B2 = 1;
  }
  if ( imageIds && imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (CommonUI_o *)Instance;
    v5 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v5 = EventTutorialMaster___c_TypeInfo;
    }
    _9__28_0 = v5->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventTutorialMaster___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__28_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(_9__28_0, v7, Method_EventTutorialMaster___c__OpenTutorialImages_b__28_0__, 0);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = _9__28_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v9, v10);
    }
    if ( !v4 )
LABEL_15:
      sub_1C372B4(Instance);
    CommonUI__OpenTutorialImageDialog_31234712(v4, imageIds, -1, 0, _9__28_0, 0, 0, 0);
  }
}


void EventTutorialMaster__PlayTutorialSetUpAction(EventTutorialMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Array_o *v4; // x0
  System_RuntimeFieldHandle_o v5; // x1
  System_Array_o *v6; // x21
  __int64 v7; // x19
  TerminalPramsManager_c *v8; // x0
  QuestAfterAction_o *EventID; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  EventTutorialMaster___c_c *v16; // x8
  EventTutorialEntity_array *v17; // x19
  System_Func_object__object__o *_9__38_0; // x20
  Il2CppObject *v19; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_String_array *v24; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v25; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v26; // x0
  System_Object_array *v27; // x20
  TerminalPramsManager_c *v28; // x0
  int max_length; // w8
  unsigned int v30; // w25
  EventTutorialEntity_o *v31; // x8
  int32_t flagType; // w21
  int32_t v33; // w22

  if ( (byte_4C431BC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C37058(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C37058(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_1C37058(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_1C37058(&Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__38_0__);
    sub_1C37058(&EventTutorialMaster___c_TypeInfo);
    byte_4C431BC = 1;
  }
  if ( mapId < 1 )
  {
    v7 = sub_1C372A4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v13->static_fields->_WarId_k__BackingField, 0);
    if ( !v7 )
      goto LABEL_50;
    *(_DWORD *)(v7 + 16) = (_DWORD)EventID;
    *(_DWORD *)(v7 + 20) = 18;
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    mapId = v14->static_fields->_WarId_k__BackingField;
  }
  else
  {
    v4 = (System_Array_o *)sub_1C37100(EventTutorialMaster_OpenType___TypeInfo, 3);
    v5.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v6 = v4;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v4, v5, 0);
    v7 = sub_1C372A4(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3D397 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D397 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v8->static_fields->_WarId_k__BackingField, 0);
    if ( !v7 )
      goto LABEL_50;
    *(_DWORD *)(v7 + 16) = (_DWORD)EventID;
    *(_QWORD *)(v7 + 24) = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v6, v10, v11);
  }
  *(_DWORD *)(v7 + 40) = mapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v7,
                             v12);
  v16 = EventTutorialMaster___c_TypeInfo;
  v17 = AvailableTutorialArray;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v16 = EventTutorialMaster___c_TypeInfo;
  }
  _9__38_0 = (System_Func_object__object__o *)v16->static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventTutorialMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__38_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__38_0,
      v19,
      Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__38_0__,
      0);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__38_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__38_0,
                                                               (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v24 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v23,
                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v25 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                EventID,
                                                                                v24,
                                                                                0);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v26 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(EventID, v25, 0);
  v27 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403EB )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403EB = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  EventID = (QuestAfterAction_o *)v28->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( EventID )
    System_Collections_Generic_HashSet_object___Clear(
      (System_Collections_Generic_HashSet_T__o *)EventID,
      (const MethodInfo_365A724 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
  if ( !v17 )
    goto LABEL_50;
  max_length = v17->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1C372BC(EventID);
      v31 = v17->m_Items[v30];
      if ( !v31 )
        break;
      v33 = v31->fields.eventId;
      flagType = v31->fields.flagType;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__SetForcePlayEventTutorialArray(v33, flagType, 0);
      max_length = v17->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_48;
    }
LABEL_50:
    sub_1C372B4(EventID);
  }
LABEL_48:
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  QuestAfterAction__PlaySpecifiedActionInstantly(EventID, (QuestAfterAction_Command_array *)v27, 0);
}


void EventTutorialMaster__RefreshQuestTree(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *releaseEntList,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  MapControl_QuestInfo_o *QuestInfo; // x21
  System_Collections_Generic_HashSet_int__o *refreshedWarIds; // x0
  _BOOL4 IsDisaplayable; // w22
  int32_t monitor; // w23
  int32_t klass_high; // w25
  int64_t klass; // x24
  _BOOL8 IsOpen; // x0
  System_Collections_Generic_HashSet_int__o *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C431BE & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C431BE = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_34;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTerminalList, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( releaseEntList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        (System_Collections_Generic_List_object__o *)releaseEntList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
      v19 = v18;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
      {
        current = v19.fields._current;
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !current )
          sub_1C372B4(Instance);
        if ( !Instance )
          sub_1C372B4(0);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, (int32_t)current[1].klass, 0);
        if ( !QuestInfo )
          break;
        refreshedWarIds = this->fields.refreshedWarIds;
        if ( !refreshedWarIds )
          sub_1C372B4(0);
        if ( !System_Collections_Generic_HashSet_int___Contains(
                refreshedWarIds,
                QuestInfo->fields.warId,
                (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
        {
          IsDisaplayable = MapControl_QuestInfo__IsDisaplayable(QuestInfo, 0);
          klass_high = HIDWORD(current[1].klass);
          monitor = (int32_t)current[1].monitor;
          klass = (int64_t)current[2].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(klass_high, monitor, klass, 0, 0, 0);
          if ( IsDisaplayable != IsOpen )
          {
            if ( !mTerminalList )
              sub_1C372B4(IsOpen);
            ScrTerminalListTop__RefreshQuestTree((ScrTerminalListTop_o *)mTerminalList, QuestInfo->fields.warId, 0);
            v17 = this->fields.refreshedWarIds;
            if ( !v17 )
              sub_1C372B4(0);
            System_Collections_Generic_HashSet_int___Add(
              v17,
              QuestInfo->fields.warId,
              (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
      return;
    }
LABEL_34:
    sub_1C372B4(v5);
  }
}


void EventTutorialMaster__RequestTutorialEventSet(
        int32_t eventId,
        int32_t flagType,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0

  if ( (byte_4C4319F & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4319F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_1C372B4(0);
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, flagType, eventId, 0);
}


void EventTutorialMaster__ShowTutorialWithoutCheck(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        bool conditionNone,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4C431AD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  EventTutorialMaster__showTutorialWithoutCheck(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    conditionNone,
    v10);
}


void EventTutorialMaster__ShowTutorialWithoutCheck_42173112(
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
  const MethodInfo *v16; // [xsp+0h] [xbp-60h]

  if ( (byte_4C431B3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  EventTutorialMaster__showTutorialWithoutCheck_42173312(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    qId,
    bPhase,
    bWave,
    bTurn,
    v16);
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialMaster__TryGetEntity(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C431C1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
    byte_4C431C1 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void EventTutorialMaster__TutorialAfterUpdateQuestTree(
        EventTutorialMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  AvalonSceneManager_o *Instance; // x0
  System_String_o *NowSceneName; // x21
  System_String_o *SceneName; // x0
  AvalonSceneManager_o *v9; // x25
  System_Collections_Generic_HashSet_int__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *dicRootComponent; // x22
  System_Func_object__bool__o *v14; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  System_Func_object__bool__o *v16; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x22
  EventTutorialMaster___c_c *v20; // x0
  System_Func_object__bool__o *_9__39_2; // x24
  Il2CppObject *v22; // x25
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t current; // w1
  System_Func_object__bool__o *v33; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v35; // x1
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  System_Func_object__bool__o *v38; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  System_Func_object__bool__o *v40; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v42; // x0
  const MethodInfo *v43; // x2
  AvalonSceneManager_o *v44; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C431BD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_1C37058(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__getEntityList__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_1C37058(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_1C37058(&SceneList_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__39_2__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__0__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__1__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__3__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__4__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass39_0_TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass39_1__TutorialAfterUpdateQuestTree_b__5__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass39_1_TypeInfo);
    sub_1C37058(&EventTutorialMaster___c_TypeInfo);
    byte_4C431BD = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v5 = sub_1C372A4(EventTutorialMaster___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_DWORD *)(v5 + 24) = eventId;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  NowSceneName = AvalonSceneManager__getNowSceneName(Instance, 0);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(34, 0);
  if ( !System_String__op_Inequality(NowSceneName, SceneName, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( this->fields.refreshedWarIds )
    {
      v9 = Instance;
      System_Collections_Generic_HashSet_int___Clear(
        this->fields.refreshedWarIds,
        (const MethodInfo_365411C *)Method_System_Collections_Generic_HashSet_int__Clear__);
      v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v10,
        (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v10 )
      {
        System_Collections_Generic_HashSet_int___Add(
          v10,
          119,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v10,
          170,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v10,
          63,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v10,
          238,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        *(_QWORD *)(v5 + 16) = v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v10, v11, v12);
        Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( Instance )
        {
          dicRootComponent = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.dicRootComponent;
          v14 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v14,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__0__,
            0);
          v15 = System_Linq_Enumerable__Where_object_(
                  dicRootComponent,
                  (System_Func_TSource__bool__o *)v14,
                  (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v16,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__1__,
            0);
          v17 = System_Linq_Enumerable__Where_object_(
                  v15,
                  (System_Func_TSource__bool__o *)v16,
                  (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                               v17,
                                               (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
          if ( v9 )
          {
            v18 = (System_Collections_Generic_List_object__o *)Instance;
            v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.dicRootComponent;
            v20 = EventTutorialMaster___c_TypeInfo;
            if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
              v20 = EventTutorialMaster___c_TypeInfo;
            }
            v44 = v9;
            _9__39_2 = (System_Func_object__bool__o *)v20->static_fields->__9__39_2;
            if ( !_9__39_2 )
            {
              if ( !v20->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v20);
                v20 = EventTutorialMaster___c_TypeInfo;
              }
              v22 = (Il2CppObject *)v20->static_fields->__9;
              _9__39_2 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__39_2,
                v22,
                Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__39_2__,
                0);
              static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
              static_fields->__9__39_2 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__39_2;
              sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__39_2, (int32_t)_9__39_2, v24, v25);
            }
            v26 = System_Linq_Enumerable__Where_object_(
                    v19,
                    (System_Func_TSource__bool__o *)_9__39_2,
                    (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
            Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                                 v26,
                                                 (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
            if ( v18 )
            {
              v27 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v45,
                v18,
                (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
              v46 = v45;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v46,
                        (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__) )
              {
                v28 = sub_1C372A4(EventTutorialMaster___c__DisplayClass39_1_TypeInfo);
                System_Object___ctor((Il2CppObject *)v28, 0);
                if ( !v28 )
                  sub_1C372B4(v29);
                current = (int32_t)v46.fields._current;
                *(_QWORD *)(v28 + 16) = v46.fields._current;
                sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 16), current, v30, v31);
                v33 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v33,
                  (Il2CppObject *)v28,
                  Method_EventTutorialMaster___c__DisplayClass39_1__TutorialAfterUpdateQuestTree_b__5__,
                  0);
                v34 = System_Linq_Enumerable__Where_object_(
                        v27,
                        (System_Func_TSource__bool__o *)v33,
                        (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
                v35 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v34,
                                                                                 (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
                EventTutorialMaster__RefreshQuestTree(this, v35, v36);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v46,
                (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
              v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v44->fields.dicRootComponent;
              v38 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v38,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__3__,
                0);
              v39 = System_Linq_Enumerable__Where_object_(
                      v37,
                      (System_Func_TSource__bool__o *)v38,
                      (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v40 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v40,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass39_0__TutorialAfterUpdateQuestTree_b__4__,
                0);
              v41 = System_Linq_Enumerable__Where_object_(
                      v39,
                      (System_Func_TSource__bool__o *)v40,
                      (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v42 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                               v41,
                                                                               (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
              EventTutorialMaster__RefreshQuestTree(this, v42, v43);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C372B4(Instance);
  }
}


void EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x4

  if ( (byte_4C431B5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C431B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  EventTutorialMaster__tutorialChainWithoutCheck((EventTutorialMaster_o *)Instance, tutoList, 0, callback, v6);
}


void EventTutorialMaster__checkTutorial(
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
  __int64 v18; // x20
  System_Collections_Generic_HashSet_int__o *openedEventIds; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v28; // x28
  EventTutorialEntity_o *v29; // x22
  _BOOL8 v30; // x0
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v33; // x3
  int32_t v34; // w8
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  int32_t flagType; // w23
  int32_t v38; // w24
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Int32_array *buckets; // x8
  _QWORD *v44; // x9
  __int64 slots_low; // x10
  __int64 v46; // x8
  const MethodInfo *v47; // x2
  System_Action_o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C431A0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C37058(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass10_0_TypeInfo);
    byte_4C431A0 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  memset(&i, 0, sizeof(i));
  v18 = sub_1C372A4(EventTutorialMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_59;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v18 + 32) = callbackAfter;
  *(_DWORD *)(v18 + 24) = eventId;
  *(_DWORD *)(v18 + 28) = openKind;
  sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)callbackAfter, v22, v23);
  *(_DWORD *)(v18 + 40) = qId;
  *(_DWORD *)(v18 + 44) = bPhase;
  *(_DWORD *)(v18 + 48) = bWave;
  *(_DWORD *)(v18 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_59;
  max_length = sortedEntityArray->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_39:
    openedEventIds = this->fields.openedEventIds;
    if ( openedEventIds )
    {
      System_Collections_Generic_HashSet_int___GetEnumerator(
        (System_Collections_Generic_HashSet_Enumerator_T__o *)&v51,
        openedEventIds,
        (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
      for ( i = v51;
            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
              (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v39) )
      {
        ;
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
        (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
        (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      openedEventIds = this->fields.openedEventIds;
      if ( openedEventIds )
      {
        System_Collections_Generic_HashSet_int___Clear(
          openedEventIds,
          (const MethodInfo_365411C *)Method_System_Collections_Generic_HashSet_int__Clear__);
        ActionExtensions__Call(*(System_Action_o **)(v18 + 32), 0);
        return;
      }
    }
    goto LABEL_59;
  }
  v28 = 0;
  while ( 1 )
  {
    if ( v28 >= (unsigned int)max_length )
      sub_1C372BC(openedEventIds);
    v29 = sortedEntityArray->m_Items[v28];
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_59;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v53 = v51;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v53,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v30 )
          break;
        if ( !v29 )
          sub_1C372B4(v30);
        if ( !v53.fields._current )
          sub_1C372B4(v30);
        if ( v29->fields.eventId == LODWORD(v53.fields._current[1].klass)
          && v29->fields.flagType == HIDWORD(v53.fields._current[1].klass)
          && v29->fields.num == LODWORD(v53.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v53,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v53,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v29 )
      goto LABEL_59;
    flag = v29->fields.flag;
    if ( v29->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v29, v24);
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    Targets,
                                                                    (System_Int32_array_array *)Targets,
                                                                    *(_DWORD *)(v18 + 40),
                                                                    v33);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
      break;
LABEL_35:
    LODWORD(max_length) = sortedEntityArray->max_length;
    if ( (__int64)++v28 >= (int)max_length )
      goto LABEL_39;
  }
  v34 = v29->fields.eventId;
  if ( (v34 & 0x80000000) == 0 && v34 != *(_DWORD *)(v18 + 24)
    || v29->fields.openType != *(_DWORD *)(v18 + 28)
    || (openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                        v29,
                                                                        *(_DWORD *)(v18 + 40),
                                                                        *(_DWORD *)(v18 + 44),
                                                                        *(_DWORD *)(v18 + 48),
                                                                        *(_DWORD *)(v18 + 52),
                                                                        v25),
        flag != 2)
    && ((unsigned __int8)openedEventIds & 1) == 0 )
  {
    if ( v29->fields.flag == 1 )
    {
      flagType = v29->fields.flagType;
      v38 = *(_DWORD *)(v18 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)TutorialFlag__Get_40464392(flagType, v38, 0);
      if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                        0,
                                                                        (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !openedEventIds )
          goto LABEL_59;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)openedEventIds,
          v29->fields.flagType,
          *(_DWORD *)(v18 + 24),
          0);
      }
    }
    goto LABEL_35;
  }
  if ( flag != 2 && !notSave )
  {
    v40 = *(System_Action_o **)(v18 + 64);
    if ( !v40 )
    {
      v40 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__,
        0);
      *(_QWORD *)(v18 + 64) = v40;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 64), (int32_t)v40, v41, v42);
    }
    EventTutorialEntity__OpenTutorial(v29, v40, v35);
    return;
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds
    || (buckets = openedEventIds->fields._buckets,
        v44 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++HIDWORD(openedEventIds->fields._slots),
        !buckets) )
  {
LABEL_59:
    sub_1C372B4(openedEventIds);
  }
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v29,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v46 + 32) = v29;
    sub_1C36FFC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v29, (int32_t)v35, v36);
  }
  v48 = *(System_Action_o **)(v18 + 56);
  if ( !v48 )
  {
    v48 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__,
      0);
    *(_QWORD *)(v18 + 56) = v48;
    sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 56), (int32_t)v48, v49, v50);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v29, v48, v47);
}


void EventTutorialMaster__checkTutorial_42166120(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_int__o *checkEventIds,
        int32_t openKind,
        System_Action_o *callbackAfter,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        bool notSave,
        bool isEventIdOneOrMore,
        const MethodInfo *method)
{
  __int64 v19; // x21
  System_Collections_Generic_HashSet_int__o *openedEventIds; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  unsigned __int64 v28; // x26
  __int64 v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x24
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  EventTutorialEntity_o *v36; // x1
  Il2CppObject **v37; // x23
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x5
  _BOOL8 v40; // x0
  System_Collections_Generic_HashSet_int__o *v41; // x8
  int slots; // w28
  const MethodInfo *v43; // x3
  _DWORD *v44; // x8
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x8
  int32_t klass; // w22
  int32_t klass_high; // w24
  const MethodInfo *v50; // x2
  EventTutorialEntity_o *v51; // x19
  System_Action_o *v52; // x20
  const MethodInfo *v53; // x2
  Il2CppObject *v54; // x1
  struct System_Int32_array *buckets; // x8
  _QWORD *v56; // x9
  __int64 slots_low; // x10
  __int64 v58; // x8
  EventTutorialEntity_o *v59; // x19
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x2
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C431A1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C37058(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass11_1__checkTutorial_b__0__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass11_1__checkTutorial_b__1__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass11_1_TypeInfo);
    byte_4C431A1 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&i, 0, sizeof(i));
  v19 = sub_1C372A4(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_68;
  *(_QWORD *)(v19 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v19 + 24) = checkEventIds;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 24), (int32_t)checkEventIds, v23, v24);
  *(_QWORD *)(v19 + 40) = callbackAfter;
  *(_DWORD *)(v19 + 32) = openKind;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 40), (int32_t)callbackAfter, v25, v26);
  *(_DWORD *)(v19 + 48) = qId;
  *(_DWORD *)(v19 + 52) = bPhase;
  *(_DWORD *)(v19 + 56) = bWave;
  *(_DWORD *)(v19 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_68;
  if ( SLODWORD(sortedEntityArray->max_length) < 1 )
  {
LABEL_50:
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_68;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v62,
      openedEventIds,
      (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    for ( i = v62;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
            (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v50) )
    {
      ;
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
      (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_68;
    System_Collections_Generic_HashSet_int___Clear(
      openedEventIds,
      (const MethodInfo_365411C *)Method_System_Collections_Generic_HashSet_int__Clear__);
    ActionExtensions__Call(*(System_Action_o **)(v19 + 40), 0);
    return;
  }
  v28 = 0;
  while ( 1 )
  {
    v29 = sub_1C372A4(EventTutorialMaster___c__DisplayClass11_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0);
    if ( !v29 )
      goto LABEL_68;
    *(_QWORD *)(v29 + 24) = v19;
    v32 = v29 + 24;
    sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 24), v19, v30, v31);
    if ( v28 >= LODWORD(sortedEntityArray->max_length) )
      sub_1C372BC(v33);
    v36 = sortedEntityArray->m_Items[v28];
    *(_QWORD *)(v29 + 16) = v36;
    v37 = (Il2CppObject **)(v29 + 16);
    sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 16), (int32_t)v36, v34, v35);
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_68;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v62,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v64 = v62;
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v64,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v40 )
          break;
        v41 = (System_Collections_Generic_HashSet_int__o *)*v37;
        if ( !*v37 )
          sub_1C372B4(v40);
        if ( !v64.fields._current )
          sub_1C372B4(v40);
        if ( LODWORD(v41->fields._buckets) == LODWORD(v64.fields._current[1].klass)
          && HIDWORD(v41->fields._buckets) == HIDWORD(v64.fields._current[1].klass)
          && LODWORD(v41->fields._slots) == LODWORD(v64.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v64,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_46;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v64,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v37;
    if ( !*v37 )
      goto LABEL_68;
    slots = (int)openedEventIds[1].fields._slots;
    if ( openedEventIds->fields._count != 84 )
      break;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__getTargets(
                                                                    (EventTutorialEntity_o *)openedEventIds,
                                                                    v38);
    if ( !*(_QWORD *)v32 )
      goto LABEL_68;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    (EventTutorialMaster_o *)openedEventIds,
                                                                    (System_Int32_array_array *)openedEventIds,
                                                                    *(_DWORD *)(*(_QWORD *)v32 + 48LL),
                                                                    v43);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
      break;
LABEL_46:
    if ( (__int64)++v28 >= SLODWORD(sortedEntityArray->max_length) )
      goto LABEL_50;
  }
  if ( isEventIdOneOrMore )
    goto LABEL_72;
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v37;
  if ( !*v37 )
    goto LABEL_68;
  if ( ((__int64)openedEventIds->fields._buckets & 0x80000000) == 0 )
  {
LABEL_72:
    if ( !*(_QWORD *)v32 )
      goto LABEL_68;
    if ( !*v37 )
      goto LABEL_68;
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)(*(_QWORD *)v32 + 24LL);
    if ( !openedEventIds )
      goto LABEL_68;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)System_Collections_Generic_List_int___Contains(
                                                                    (System_Collections_Generic_List_int__o *)openedEventIds,
                                                                    (int32_t)(*v37)[1].klass,
                                                                    (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
    {
LABEL_36:
      v47 = *v37;
      if ( !*v37 )
        goto LABEL_68;
      if ( LODWORD(v47[6].klass) == 1 )
      {
        klass = (int32_t)v47[1].klass;
        klass_high = HIDWORD(v47[1].klass);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( !TutorialFlag__Get_40464392(klass_high, klass, 0) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                          0,
                                                                          (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
          if ( !*v37 || !openedEventIds )
            goto LABEL_68;
          TutorialEventSetRequest__beginRequest(
            (TutorialEventSetRequest_o *)openedEventIds,
            HIDWORD((*v37)[1].klass),
            (int32_t)(*v37)[1].klass,
            0);
        }
      }
      goto LABEL_46;
    }
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v37;
    if ( !*v37 )
      goto LABEL_68;
  }
  v44 = *(_DWORD **)v32;
  if ( !*(_QWORD *)v32 )
    goto LABEL_68;
  if ( openedEventIds->fields._count != v44[8] )
    goto LABEL_36;
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                  (EventTutorialEntity_o *)openedEventIds,
                                                                  v44[12],
                                                                  v44[13],
                                                                  v44[14],
                                                                  v44[15],
                                                                  v39);
  if ( slots != 2 && ((unsigned __int8)openedEventIds & 1) == 0 )
    goto LABEL_36;
  if ( slots != 2 && !notSave )
  {
    v51 = *(EventTutorialEntity_o **)(v29 + 16);
    v52 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v29,
      Method_EventTutorialMaster___c__DisplayClass11_1__checkTutorial_b__1__,
      0);
    if ( v51 )
    {
      EventTutorialEntity__OpenTutorial(v51, v52, v53);
      return;
    }
LABEL_68:
    sub_1C372B4(openedEventIds);
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds )
    goto LABEL_68;
  v54 = *v37;
  buckets = openedEventIds->fields._buckets;
  v56 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++HIDWORD(openedEventIds->fields._slots);
  if ( !buckets )
    goto LABEL_68;
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      v54,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v58 + 32) = v54;
    sub_1C36FFC((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v54, v45, v46);
  }
  v59 = *(EventTutorialEntity_o **)(v29 + 16);
  v60 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v29,
    Method_EventTutorialMaster___c__DisplayClass11_1__checkTutorial_b__0__,
    0);
  if ( !v59 )
    goto LABEL_68;
  EventTutorialEntity__OpenTutorialWithoutFlag(v59, v60, v61);
}


System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialMaster__getAvailableEventTutorialEntitys(
        EventTutorialMaster_o *this,
        int32_t eventId,
        EventTutorialMaster_OpenType_array *openKinds,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x10
  EventTutorialMaster_o *v12; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  int v17; // w8
  unsigned int v18; // w19
  EventTutorialEntity_o *v19; // x27
  int32_t v20; // w8
  const MethodInfo *v21; // x5
  unsigned int v22; // w28
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v24; // x9

  if ( (byte_4C431BB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    this = (EventTutorialMaster_o *)sub_1C37058(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4C431BB = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1C37100(int___TypeInfo, LODWORD(openKinds->max_length));
  max_length = openKinds->max_length;
  v12 = this;
  if ( (int)max_length >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v14 = 0;
      while ( v14 < MasterName_k__BackingField_low )
      {
        *(&this->fields.revision + v14++) = 0;
        if ( (__int64)v14 >= (int)max_length )
          goto LABEL_9;
      }
LABEL_27:
      sub_1C372BC(this);
    }
LABEL_28:
    sub_1C372B4(this);
  }
LABEL_9:
  v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  v17 = sortedEntityArray->max_length;
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v17 )
        goto LABEL_27;
      v19 = sortedEntityArray->m_Items[v18];
      if ( !v19 )
        goto LABEL_28;
      v20 = v19->fields.eventId;
      if ( v20 < 0 || v20 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_Int32Enum_(
                                          (System_Int32Enum_array *)openKinds,
                                          v19->fields.openType,
                                          (const MethodInfo_31EED60 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
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
              (const MethodInfo_37A3DD4 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v12->fields._MasterName_k__BackingField;
            if ( (int)v22 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      v17 = sortedEntityArray->max_length;
      if ( (int)++v18 >= v17 )
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


System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialMaster__getEventTutorialEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  struct System_Object_array *IsNullOrEmpty; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v14; // w27
  Il2CppObject *v15; // x23
  EventTutorialEntity_o *v16; // x24
  int32_t v17; // w8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct System_String_array *v22; // x8
  il2cpp_array_size_t v23; // x28
  unsigned __int64 v24; // x29
  struct System_String_array *v25; // x8
  _QWORD *v26; // x8

  if ( (byte_4C431B9 & 1) == 0 )
  {
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C37058(&StringLiteral_15957/*"[]"*/);
    sub_1C37058(&StringLiteral_16016/*"[{0}]"*/);
    byte_4C431B9 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16016/*"[{0}]"*/, (Il2CppObject *)targetIds, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v15 = 0;
    if ( !v8 )
      goto LABEL_42;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_43:
        sub_1C372BC(IsNullOrEmpty);
      v16 = sortedEntityArray->m_Items[v14];
      if ( !v16 )
        goto LABEL_42;
      v17 = v16->fields.eventId;
      if ( (v17 < 0 || v17 == eventId) && v16->fields.openType == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
LABEL_14:
          if ( !v8 )
            goto LABEL_42;
          items = v8->fields._items;
          v19 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_42;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v16,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v16;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v16, v10, v11);
          }
        }
        else
        {
          v22 = v16->fields.targetIds;
          if ( !v22 )
            goto LABEL_42;
          v23 = v22->max_length;
          if ( !v15 )
          {
            if ( !(_DWORD)v23
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  v22->m_Items[0],
                                                                  (System_String_o *)StringLiteral_15957/*"[]"*/,
                                                                  0),
                  v15 = 0,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v15 = (Il2CppObject *)v16;
            }
          }
          if ( (int)v23 >= 1 )
          {
            v24 = 0;
            while ( 1 )
            {
              v25 = v16->fields.targetIds;
              if ( !v25 )
                break;
              if ( v24 >= LODWORD(v25->max_length) )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(v25->m_Items[v24], targetIds, 0);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v23 == ++v24 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1C372B4(IsNullOrEmpty);
          }
        }
      }
LABEL_31:
      max_length = sortedEntityArray->max_length;
      ++v14;
    }
    while ( v14 < max_length );
    if ( !v8 )
      goto LABEL_42;
  }
  if ( v15 && !v8->fields._size )
  {
    IsNullOrEmpty = v8->fields._items;
    v26 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v8->fields._version;
    if ( !IsNullOrEmpty )
      goto LABEL_42;
    if ( LODWORD(IsNullOrEmpty->max_length) )
    {
      v8->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)IsNullOrEmpty->m_Items, (int32_t)v15, v10, v11);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v15,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v8;
}


bool EventTutorialMaster__isTargetIdExistFromArray(
        EventTutorialMaster_o *this,
        System_Int32_array_array *targets,
        int32_t targetId,
        const MethodInfo *method)
{
  il2cpp_array_size_t v4; // x8
  char v5; // w9
  int v6; // w10
  System_Int32_array *v7; // x11
  il2cpp_array_size_t max_length; // x12

  if ( targets && (v4 = targets->max_length) != 0 && (int)v4 >= 1 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = targets->m_Items[v6];
      if ( !v7 )
        sub_1C372B4(this);
      max_length = v7->max_length;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_1C372BC(this);
        v5 |= v7->m_Items[0] == targetId;
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


bool EventTutorialMaster__isTutorialAvailable(
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

  if ( (byte_4C431A4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4C431A4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1C372B4(list);
  }
  return 0;
}


bool EventTutorialMaster__isTutorialDataExists(
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

  if ( (byte_4C431A3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4C431A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v23 = Item->fields.eventId, v23 < 0) && isChkEventId
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
    sub_1C372B4(list);
  }
  return 0;
}


bool EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TResult__o *v3; // x0
  EventTutorialMaster___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v7; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v11; // x0
  EventTutorialMaster___c_c *v12; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__7_1; // x20
  Il2CppObject *v15; // x21
  struct EventTutorialMaster___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x19
  struct EventTutorialMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C4319E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&System_Func_EventTutorialEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__preProcess_b__7_0__);
    sub_1C37058(&Method_EventTutorialMaster___c__preProcess_b__7_1__);
    sub_1C37058(&EventTutorialMaster___c_TypeInfo);
    byte_4C4319E = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v4 = EventTutorialMaster___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v4 = EventTutorialMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v4->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventTutorialMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v7, Method_EventTutorialMaster___c__preProcess_b__7_0__, 0);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__OrderBy_object__int_(
          v5,
          (System_Func_TSource__TKey__o *)_9__7_0,
          (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v12 = EventTutorialMaster___c_TypeInfo;
  v13 = v11;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v12 = EventTutorialMaster___c_TypeInfo;
  }
  _9__7_1 = (System_Func_object__int__o *)v12->static_fields->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventTutorialMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_1, v15, Method_EventTutorialMaster___c__preProcess_b__7_1__, 0);
    v16 = EventTutorialMaster___c_TypeInfo->static_fields;
    v16->__9__7_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v16->__9__7_1, (int32_t)_9__7_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v20;
  sub_1C36FFC((CGThumbnailListItem_o *)EventTutorialMaster_TypeInfo->static_fields, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v24 = EventTutorialMaster_TypeInfo->static_fields;
  v24->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->checkedEntityList, (int32_t)v23, v25, v26);
  return 1;
}


void EventTutorialMaster__showTutorialWithoutCheck(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        bool conditionNone,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  EventTutorialEntity_o *v19; // x1
  int32_t v20; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C431B1 & 1) == 0 )
  {
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4C431B1 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_22:
    sub_1C372B4(v12);
  max_length = sortedEntityArray->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C372BC(v12);
      v19 = sortedEntityArray->m_Items[i];
      if ( conditionNone )
      {
        if ( !v19 )
          goto LABEL_22;
        if ( v19->fields.condType )
          goto LABEL_20;
      }
      else if ( !v19 )
      {
        goto LABEL_22;
      }
      v20 = v19->fields.eventId;
      if ( (v20 < 0 || v20 == eventId) && v19->fields.openType == openKind )
      {
        if ( !v11 )
          goto LABEL_22;
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v19,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v19;
          sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v19, v13, v14);
        }
      }
LABEL_20:
      LODWORD(max_length) = sortedEntityArray->max_length;
    }
  }
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v11,
    0,
    callback,
    v15);
}


void EventTutorialMaster__showTutorialWithoutCheck_42173312(
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v26; // w23
  EventTutorialEntity_o *v27; // x21
  int32_t v28; // w8
  const MethodInfo *v29; // x2
  System_Action_o *v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4C431B4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass30_0__showTutorialWithoutCheck_b__0__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass30_0_TypeInfo);
    byte_4C431B4 = 1;
  }
  v17 = sub_1C372A4(EventTutorialMaster___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)callbackAfter, v21, v22);
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1C372B4(isEnableCondition);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0);
  }
  else
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
        sub_1C372BC(isEnableCondition);
      v27 = sortedEntityArray->m_Items[v26];
      if ( !v27 )
        goto LABEL_18;
      v28 = v27->fields.eventId;
      if ( (v28 < 0 || v28 == *(_DWORD *)(v17 + 24)) && v27->fields.openType == *(_DWORD *)(v17 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v27,
                              *(_DWORD *)(v17 + 40),
                              *(_DWORD *)(v17 + 44),
                              *(_DWORD *)(v17 + 48),
                              *(_DWORD *)(v17 + 52),
                              v23);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_14;
    }
    v30 = *(System_Action_o **)(v17 + 56);
    if ( !v30 )
    {
      v30 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass30_0__showTutorialWithoutCheck_b__0__,
        0);
      *(_QWORD *)(v17 + 56) = v30;
      sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 56), (int32_t)v30, v31, v32);
    }
    EventTutorialEntity__OpenTutorial(v27, v30, v29);
  }
}


void EventTutorialMaster__tutorialChainWithoutCheck(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        int32_t index,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2

  if ( (byte_4C431B6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass32_0__tutorialChainWithoutCheck_b__0__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass32_0_TypeInfo);
    byte_4C431B6 = 1;
  }
  v9 = sub_1C372A4(EventTutorialMaster___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = tutoList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)tutoList, v13, v14);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = index;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callback, v15, v16);
  v10 = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !v10 )
    goto LABEL_9;
  v17 = *(_DWORD *)(v9 + 32);
  if ( v17 < v10->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v17,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v9,
      Method_EventTutorialMaster___c__DisplayClass32_0__tutorialChainWithoutCheck_b__0__,
      0);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v19, v20);
      return;
    }
LABEL_9:
    sub_1C372B4(v10);
  }
  ActionExtensions__Call(*(System_Action_o **)(v9 + 40), 0);
}


void EventTutorialMaster_EventTutorialArgs___ctor(
        EventTutorialMaster_EventTutorialArgs_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *EventTutorialMaster_EventTutorialArgs__get_EventIds(
        EventTutorialMaster_EventTutorialArgs_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_EventTutorialArgs_o *v2; // x20
  System_Int32_array *eventIds; // x21
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v2 = this;
  if ( (byte_4C431C2 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C431C2 = 1;
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
                     (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.eventIds, (int32_t)eventIds, v5, v6);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1C37100(int___TypeInfo, 1);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1C372BC(OpenEventIds);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1C372B4(OpenEventIds);
  }
  return eventIds;
}


void EventTutorialMaster__CoCheckTutorialLocal_d__12___ctor(
        EventTutorialMaster__CoCheckTutorialLocal_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventTutorialMaster__CoCheckTutorialLocal_d__12__MoveNext(
        EventTutorialMaster__CoCheckTutorialLocal_d__12_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  EventTutorialMaster__CoCheckTutorialLocal_d__12_o *v4; // x19
  struct EventTutorialMaster_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct EventTutorialMaster___c__DisplayClass12_0_o **p__8__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w8
  struct EventTutorialMaster___c__DisplayClass12_1_o *_8__2; // x21
  bool result; // w0
  Il2CppObject *v25; // x22
  struct EventTutorialMaster___c__DisplayClass12_1_o **p__8__2; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct EventTutorialMaster_EventTutorialArgs_o *_8__1; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct EventTutorialEntity_array *v34; // x8
  __int64 _7__wrap2; // x9
  EventTutorialEntity_o *v36; // x1
  const MethodInfo *v37; // x2
  struct EventTutorialMaster___c__DisplayClass12_1_o *v38; // x8
  struct EventTutorialMaster___c__DisplayClass12_0_o *CS___8__locals1; // x9
  const MethodInfo *v40; // x1
  struct EventTutorialMaster___c__DisplayClass12_1_o *v41; // x8
  struct EventTutorialMaster___c__DisplayClass12_0_o *v42; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v43; // x9
  struct EventTutorialMaster___c__DisplayClass12_1_o *v44; // x8
  struct EventTutorialMaster___c__DisplayClass12_0_o *v45; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v46; // x9
  struct EventTutorialMaster___c__DisplayClass12_0_o *v47; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v48; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass12_1_o *v50; // x22
  EventTutorialEntity_o *data; // x21
  System_Action_o *v52; // x23
  const MethodInfo *v53; // x2
  struct EventTutorialMaster___c__DisplayClass12_0_o *v54; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v55; // x8
  struct EventTutorialMaster___c__DisplayClass12_1_o *v56; // x8
  struct EventTutorialMaster___c__DisplayClass12_0_o *v57; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v58; // x9
  struct EventTutorialMaster___c__DisplayClass12_1_o *v59; // x8
  struct EventTutorialMaster___c__DisplayClass12_0_o *v60; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v61; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8
  struct EventTutorialMaster___c__DisplayClass12_1_o *v63; // x8
  struct EventTutorialMaster___c__DisplayClass12_1_o **v64; // x21
  struct EventTutorialEntity_o *v65; // x8
  int32_t eventId; // w22
  int32_t flagType; // w23
  struct EventTutorialEntity_o *v68; // x8
  struct EventTutorialEntity_array *_7__wrap1; // x9
  const MethodInfo *v70; // x2
  System_Func_bool__o *v71; // x20
  UnityEngine_WaitWhile_o *v72; // x21
  CGThumbnailListItem_o *v73; // x19
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int v76; // w8
  struct EventTutorialMaster___c__DisplayClass12_0_o *v77; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v78; // x8
  System_Func_bool__o *_9__3; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  UnityEngine_WaitWhile_o *v82; // x21
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Func_bool__o *_9__0; // x20
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  UnityEngine_WaitWhile_o *v88; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  System_Collections_Generic_HashSet_Enumerator_T__o v92; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4C431CC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&EventTutorialMaster_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass12_0__CoCheckTutorialLocal_b__0__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass12_0__CoCheckTutorialLocal_b__3__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass12_1__CoCheckTutorialLocal_b__1__);
    sub_1C37058(&Method_EventTutorialMaster___c__DisplayClass12_1__CoCheckTutorialLocal_b__2__);
    sub_1C37058(&EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)sub_1C37058(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C431CC = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C372A4(EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass12_0_o *)v6;
      p__8__1 = &v4->fields.__8__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      args = v4->fields.args;
      *(_QWORD *)&this->fields.__1__state = args;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)args, v10, v11);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      v15 = (Il2CppObject *)v4->fields.__4__this;
      this->fields.__2__current = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v15, v13, v14);
      if ( !*p__8__1 )
        goto LABEL_86;
      if ( !(*p__8__1)->fields.args )
        return 0;
      static_fields = EventTutorialMaster_TypeInfo->static_fields;
      sortedEntityArray = static_fields->sortedEntityArray;
      v4->fields.__7__wrap1 = static_fields->sortedEntityArray;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)sortedEntityArray, v16, v17);
      v22 = 0;
      v4->fields.__7__wrap2 = 0;
      break;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_36;
    case 2:
      _8__2 = v4->fields.__8__2;
      v4->fields.__1__state = -1;
      if ( !_8__2 )
        goto LABEL_86;
      goto LABEL_40;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_54;
    default:
      return 0;
  }
  while ( 1 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_86;
    if ( v22 >= SLODWORD(_7__wrap1->max_length) )
      break;
    v25 = (Il2CppObject *)sub_1C372A4(EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor(v25, 0);
    v4->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass12_1_o *)v25;
    p__8__2 = &v4->fields.__8__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v25, v27, v28);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)v4->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    _8__1 = (struct EventTutorialMaster_EventTutorialArgs_o *)v4->fields.__8__1;
    this->fields.args = _8__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.args, (int32_t)_8__1, v29, v30);
    v34 = v4->fields.__7__wrap1;
    if ( !v34 )
      goto LABEL_86;
    _7__wrap2 = v4->fields.__7__wrap2;
    if ( (unsigned int)_7__wrap2 >= LODWORD(v34->max_length) )
      sub_1C372BC(this);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)v4->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    v36 = v34->m_Items[_7__wrap2];
    *(_QWORD *)&this->fields.__1__state = v36;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v36, v32, v33);
    v38 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_86;
    CS___8__locals1 = v38->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_86;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)EventTutorialMaster__IsOpenCondition(
                                                                  v38->fields.data,
                                                                  CS___8__locals1->fields.args,
                                                                  v37);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v41 = *p__8__2;
      if ( !*p__8__2 )
        goto LABEL_86;
      v42 = v41->fields.CS___8__locals1;
      if ( !v42 )
        goto LABEL_86;
      v43 = v42->fields.args;
      if ( !v43 )
        goto LABEL_86;
      if ( v43->fields.adapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)v41->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)EventTutorialEntity__HasBeforeAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      v40);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v44 = *p__8__2;
          if ( !*p__8__2 )
            goto LABEL_86;
          v45 = v44->fields.CS___8__locals1;
          if ( !v45 )
            goto LABEL_86;
          v46 = v45->fields.args;
          if ( !v46 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)v46->fields.adapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v44->fields.data, 0);
          if ( !*p__8__2 )
            goto LABEL_86;
          v47 = (*p__8__2)->fields.CS___8__locals1;
          if ( !v47 )
            goto LABEL_86;
          v48 = v47->fields.args;
          if ( !v48 )
            goto LABEL_86;
          adapter = v48->fields.adapter;
          if ( !adapter )
            goto LABEL_86;
          if ( adapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__0 = v47->fields.__9__0;
            if ( !_9__0 )
            {
              _9__0 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__0,
                (Il2CppObject *)v47,
                Method_EventTutorialMaster___c__DisplayClass12_0__CoCheckTutorialLocal_b__0__,
                0);
              v47->fields.__9__0 = _9__0;
              sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.__9__0, (int32_t)_9__0, v86, v87);
            }
            v88 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v88, _9__0, 0);
            v4->fields.__2__current = (Il2CppObject *)v88;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C36FFC(p__2__current, (int32_t)v88, v90, v91);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
        }
      }
LABEL_36:
      v50 = v4->fields.__8__2;
      if ( !v50 )
        goto LABEL_86;
      v50->fields.isBusy = 1;
      data = v50->fields.data;
      v52 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        (Il2CppObject *)v50,
        Method_EventTutorialMaster___c__DisplayClass12_1__CoCheckTutorialLocal_b__1__,
        0);
      if ( !data )
        goto LABEL_86;
      EventTutorialEntity__OpenTutorial(data, v52, v53);
      _8__2 = v4->fields.__8__2;
      if ( !_8__2 )
        goto LABEL_86;
      if ( _8__2->fields.isBusy )
      {
        v71 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v71,
          (Il2CppObject *)_8__2,
          Method_EventTutorialMaster___c__DisplayClass12_1__CoCheckTutorialLocal_b__2__,
          0);
        v72 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v72, v71, 0);
        v4->fields.__2__current = (Il2CppObject *)v72;
        v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v73, (int32_t)v72, v74, v75);
        v76 = 2;
LABEL_82:
        LODWORD(v73[-1].fields._ThumbnailSpritePath_k__BackingField) = v76;
        return 1;
      }
LABEL_40:
      v54 = _8__2->fields.CS___8__locals1;
      if ( !v54 )
        goto LABEL_86;
      v55 = v54->fields.args;
      if ( !v55 )
        goto LABEL_86;
      if ( v55->fields.afterActionAdapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)_8__2->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)EventTutorialEntity__HasAfterAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v56 = v4->fields.__8__2;
          if ( !v56 )
            goto LABEL_86;
          v57 = v56->fields.CS___8__locals1;
          if ( !v57 )
            goto LABEL_86;
          v58 = v57->fields.args;
          if ( !v58 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)v58->fields.afterActionAdapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v56->fields.data, 0);
          v59 = v4->fields.__8__2;
          if ( !v59 )
            goto LABEL_86;
          v60 = v59->fields.CS___8__locals1;
          if ( !v60 )
            goto LABEL_86;
          v61 = v60->fields.args;
          if ( !v61 )
            goto LABEL_86;
          afterActionAdapter = v61->fields.afterActionAdapter;
          if ( !afterActionAdapter )
            goto LABEL_86;
          if ( afterActionAdapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__3 = v60->fields.__9__3;
            if ( !_9__3 )
            {
              _9__3 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__3,
                (Il2CppObject *)v60,
                Method_EventTutorialMaster___c__DisplayClass12_0__CoCheckTutorialLocal_b__3__,
                0);
              v60->fields.__9__3 = _9__3;
              sub_1C36FFC((CGThumbnailListItem_o *)&v60->fields.__9__3, (int32_t)_9__3, v80, v81);
            }
            v82 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v82, _9__3, 0);
            v4->fields.__2__current = (Il2CppObject *)v82;
            v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C36FFC(v73, (int32_t)v82, v83, v84);
            v76 = 3;
            goto LABEL_82;
          }
        }
      }
    }
LABEL_54:
    v64 = &v4->fields.__8__2;
    v63 = v4->fields.__8__2;
    if ( !v63 )
      goto LABEL_86;
    v65 = v63->fields.data;
    if ( !v65 )
      goto LABEL_86;
    if ( v65->fields.flag == 1 )
    {
      eventId = v65->fields.eventId;
      flagType = v65->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_40464392(flagType, eventId, 0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)NetworkManager__getRequest_object_(
                                                                      0,
                                                                      (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v64 )
          goto LABEL_86;
        v68 = (*v64)->fields.data;
        if ( !v68 || !this )
          goto LABEL_86;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          v68->fields.flagType,
          v68->fields.eventId,
          0);
      }
    }
    v4->fields.__8__2 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
    v22 = v4->fields.__7__wrap2 + 1;
    v4->fields.__7__wrap2 = v22;
  }
  this->klass = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)this, 0, v20, v21);
  if ( !_4__this )
    goto LABEL_86;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)_4__this->fields.openedEventIds;
  if ( !this )
    goto LABEL_86;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v92,
    (System_Collections_Generic_HashSet_int__o *)this,
    (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  for ( i = v92;
        System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
        EventTutorialMaster__TutorialAfterUpdateQuestTree(_4__this, (int32_t)i.fields._current, v70) )
  {
    ;
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__12_o *)_4__this->fields.openedEventIds;
  if ( !this
    || (System_Collections_Generic_HashSet_int___Clear(
          (System_Collections_Generic_HashSet_int__o *)this,
          (const MethodInfo_365411C *)Method_System_Collections_Generic_HashSet_int__Clear__),
        (v77 = v4->fields.__8__1) == 0)
    || (v78 = v77->fields.args) == 0 )
  {
LABEL_86:
    sub_1C372B4(this);
  }
  ActionExtensions__Call(v78->fields.callbackAfter, 0);
  return 0;
}


Il2CppObject *EventTutorialMaster__CoCheckTutorialLocal_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventTutorialMaster__CoCheckTutorialLocal_d__12__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoCheckTutorialLocal_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *EventTutorialMaster__CoCheckTutorialLocal_d__12__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventTutorialMaster__CoCheckTutorialLocal_d__12__System_IDisposable_Dispose(
        EventTutorialMaster__CoCheckTutorialLocal_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void EventTutorialMaster__CoroutineCheckTutorial_d__19___ctor(
        EventTutorialMaster__CoroutineCheckTutorial_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventTutorialMaster__CoroutineCheckTutorial_d__19__MoveNext(
        EventTutorialMaster__CoroutineCheckTutorial_d__19_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Master_object; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w8

  if ( (byte_4C431CD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C431CD = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1C372B4(0);
    v7 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           v6);
    this->fields.__2__current = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
  return result;
}


Il2CppObject *EventTutorialMaster__CoroutineCheckTutorial_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventTutorialMaster__CoroutineCheckTutorial_d__19__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoroutineCheckTutorial_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *EventTutorialMaster__CoroutineCheckTutorial_d__19__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventTutorialMaster__CoroutineCheckTutorial_d__19__System_IDisposable_Dispose(
        EventTutorialMaster__CoroutineCheckTutorial_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void EventTutorialMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C431C3 & 1) == 0 )
  {
    sub_1C37058(&EventTutorialMaster___c_TypeInfo);
    byte_4C431C3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventTutorialMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c___OpenTutorialImages_b__28_0(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C431C4 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C431C4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


System_Collections_Generic_IEnumerable_string__o *EventTutorialMaster___c___PlayTutorialSetUpAction_b__38_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(
                                                               x,
                                                               (const MethodInfo *)x);
}


bool EventTutorialMaster___c___TutorialAfterUpdateQuestTree_b__39_2(
        EventTutorialMaster___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.type == 113;
}


int32_t EventTutorialMaster___c___preProcess_b__7_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return -x->fields.priority;
}


int32_t EventTutorialMaster___c___preProcess_b__7_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.eventId;
}


void EventTutorialMaster___c__DisplayClass10_0___ctor(
        EventTutorialMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass10_0___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass10_0_o *v2; // x19
  struct EventTutorialMaster_o *_4__this; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-28h]

  v2 = this;
  if ( (byte_4C431C5 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass10_0_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C431C5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass10_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass10_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  EventTutorialMaster__checkTutorial(
    (EventTutorialMaster_o *)this,
    v2->fields.eventId,
    v2->fields.openKind,
    v2->fields.callbackAfter,
    v2->fields.qId,
    v2->fields.bPhase,
    v2->fields.bWave,
    v2->fields.bTurn,
    1,
    v4);
}


void EventTutorialMaster___c__DisplayClass10_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass10_0_o *v2; // x19
  struct EventTutorialMaster_o *_4__this; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-28h]

  v2 = this;
  if ( (byte_4C431C6 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass10_0_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C431C6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass10_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass10_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  EventTutorialMaster__checkTutorial(
    (EventTutorialMaster_o *)this,
    v2->fields.eventId,
    v2->fields.openKind,
    v2->fields.callbackAfter,
    v2->fields.qId,
    v2->fields.bPhase,
    v2->fields.bWave,
    v2->fields.bTurn,
    0,
    v4);
}


void EventTutorialMaster___c__DisplayClass11_0___ctor(
        EventTutorialMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass11_1___ctor(
        EventTutorialMaster___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass11_1___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass11_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass11_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v6; // x8
  const MethodInfo *v7; // [xsp+10h] [xbp-30h]

  v2 = this;
  if ( (byte_4C431C7 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_1_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C431C7 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass11_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass11_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass11_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_1C372B4(this);
  }
  EventTutorialMaster__checkTutorial_42166120(
    (EventTutorialMaster_o *)this,
    v6->fields.checkEventIds,
    v6->fields.openKind,
    v6->fields.callbackAfter,
    v6->fields.qId,
    v6->fields.bPhase,
    v6->fields.bWave,
    v6->fields.bTurn,
    1,
    0,
    v7);
}


void EventTutorialMaster___c__DisplayClass11_1___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass11_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass11_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v6; // x8
  const MethodInfo *v7; // [xsp+10h] [xbp-30h]

  v2 = this;
  if ( (byte_4C431C8 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_1_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C431C8 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass11_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass11_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass11_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_1C372B4(this);
  }
  EventTutorialMaster__checkTutorial_42166120(
    (EventTutorialMaster_o *)this,
    v6->fields.checkEventIds,
    v6->fields.openKind,
    v6->fields.callbackAfter,
    v6->fields.qId,
    v6->fields.bPhase,
    v6->fields.bWave,
    v6->fields.bTurn,
    0,
    0,
    v7);
}


void EventTutorialMaster___c__DisplayClass12_0___ctor(
        EventTutorialMaster___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass12_0___CoCheckTutorialLocal_b__0(
        EventTutorialMaster___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8

  args = this->fields.args;
  if ( !args || (adapter = args->fields.adapter) == 0 )
    sub_1C372B4(this);
  return adapter->fields._IsPerformanceBusy_k__BackingField;
}


bool EventTutorialMaster___c__DisplayClass12_0___CoCheckTutorialLocal_b__3(
        EventTutorialMaster___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8

  args = this->fields.args;
  if ( !args || (afterActionAdapter = args->fields.afterActionAdapter) == 0 )
    sub_1C372B4(this);
  return afterActionAdapter->fields._IsPerformanceBusy_k__BackingField;
}


void EventTutorialMaster___c__DisplayClass12_1___ctor(
        EventTutorialMaster___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass12_1___CoCheckTutorialLocal_b__1(
        EventTutorialMaster___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass12_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass12_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8

  v2 = this;
  if ( (byte_4C431C9 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass12_1_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C431C9 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)_4__this->fields.openedEventIds) == 0 )
  {
    sub_1C372B4(this);
  }
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    data->fields.eventId,
    (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
  v2->fields.isBusy = 0;
}


bool EventTutorialMaster___c__DisplayClass12_1___CoCheckTutorialLocal_b__2(
        EventTutorialMaster___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventTutorialMaster___c__DisplayClass24_0___ctor(
        EventTutorialMaster___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass24_0___GetAvailableTutorialArray_b__0(
        EventTutorialMaster___c__DisplayClass24_0_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, method);
}


void EventTutorialMaster___c__DisplayClass30_0___ctor(
        EventTutorialMaster___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass30_0___showTutorialWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
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


void EventTutorialMaster___c__DisplayClass32_0___ctor(
        EventTutorialMaster___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass32_0___tutorialChainWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  EventTutorialMaster__tutorialChainWithoutCheck(
    _4__this,
    this->fields.tutoList,
    this->fields.index + 1,
    this->fields.callback,
    v2);
}


void EventTutorialMaster___c__DisplayClass39_0___ctor(
        EventTutorialMaster___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass39_0___TutorialAfterUpdateQuestTree_b__0(
        EventTutorialMaster___c__DisplayClass39_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass39_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C431CA & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass39_0_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C431CA = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass39_0_o *)v4->fields.contTypeArray) == 0 )
    sub_1C372B4(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.condType,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass39_0___TutorialAfterUpdateQuestTree_b__1(
        EventTutorialMaster___c__DisplayClass39_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.condId == this->fields.eventId;
}


bool EventTutorialMaster___c__DisplayClass39_0___TutorialAfterUpdateQuestTree_b__3(
        EventTutorialMaster___c__DisplayClass39_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass39_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C431CB & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass39_0_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C431CB = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass39_0_o *)v4->fields.contTypeArray) == 0 )
    sub_1C372B4(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.type,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass39_0___TutorialAfterUpdateQuestTree_b__4(
        EventTutorialMaster___c__DisplayClass39_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.targetId == this->fields.eventId;
}


void EventTutorialMaster___c__DisplayClass39_1___ctor(
        EventTutorialMaster___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass39_1___TutorialAfterUpdateQuestTree_b__5(
        EventTutorialMaster___c__DisplayClass39_1_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  struct CommonReleaseEntity_o *targetCommonEnt; // x8

  if ( !x || (targetCommonEnt = this->fields.targetCommonEnt) == 0 )
    sub_1C372B4(this);
  return x->fields.targetId == targetCommonEnt->fields.id;
}