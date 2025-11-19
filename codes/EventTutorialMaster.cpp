void EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_HashSet_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB64DD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4CB64DD = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C6BC54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36B0FBC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.openedEventIds = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.openedEventIds, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C6BC54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_36B0FBC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.refreshedWarIds = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.refreshedWarIds, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
}


bool EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
        int32_t eventId,
        int32_t eventTutorialFlag,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  bool IsTutorialAvailable; // w21

  if ( (byte_4CB64C9 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    byte_4CB64C9 = 1;
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
  __int64 v16; // x1
  EventTutorialMaster_o *v17; // x26
  const MethodInfo *isEventIdOneOrMore; // [xsp+8h] [xbp-68h]
  const MethodInfo *v19; // [xsp+10h] [xbp-60h]

  if ( (byte_4CB64C0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB64C0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        isEventIdOneOrMore);
      return;
    }
LABEL_10:
    sub_1C6BC60(Master_object, v16);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v17 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_42404764(
    v17,
    (System_Collections_Generic_List_int__o *)Master_object,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    0,
    0,
    v19);
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
  if ( (byte_4CB64C1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    *(_QWORD *)&eventId = sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4CB64C1 = 1;
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
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1C6BC60(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v18 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_42404764(
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
  __int64 v1; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4CB64C2 & 1) == 0 )
  {
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    method = (const MethodInfo *)sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4CB64C2 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1C6BC60(method, v1);
  size = checkedEntityList->fields._size;
  v4 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v4;
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

  if ( (byte_4CB64BC & 1) == 0 )
  {
    sub_1C6BA08(&EventTutorialMaster__CoCheckTutorialLocal_d__13_TypeInfo);
    byte_4CB64BC = 1;
  }
  v5 = sub_1C6BC54(EventTutorialMaster__CoCheckTutorialLocal_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = args;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)args, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB64C3 & 1) == 0 )
  {
    sub_1C6BA08(&EventTutorialMaster__CoroutineCheckTutorial_d__20_TypeInfo);
    byte_4CB64C3 = 1;
  }
  v3 = sub_1C6BC54(EventTutorialMaster__CoroutineCheckTutorial_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = args;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)args, v4, v5);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4CB64D4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v14);
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


EventTutorialEntity_array *EventTutorialMaster__GetAvailableTutorialArray(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4CB64C8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass25_0__GetAvailableTutorialArray_b__0__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
    byte_4CB64C8 = 1;
  }
  v3 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 16) = args;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)args, v6, v7);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_EventTutorialMaster___c__DisplayClass25_0__GetAvailableTutorialArray_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v10,
                                        (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_4CB64DE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
    byte_4CB64DE = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33FDB94 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4CB64D2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v8);
  }
  return EventTutorialMaster__getEventTutorialEntity(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           targetIds,
           v9);
}


System_String_o *EventTutorialMaster__GetOnceDailyDispTutorialSaveKey(
        int32_t eventId,
        int32_t flagType,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+8h] [xbp-38h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB64DC & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_9977/*"OnceDailyDispTutorialInfo_{0}_{1}"*/);
    byte_4CB64DC = 1;
  }
  v9 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = flagType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format_64008100((System_String_o *)StringLiteral_9977/*"OnceDailyDispTutorialInfo_{0}_{1}"*/, v5, v6, 0);
}


System_Collections_Generic_List_int__o *EventTutorialMaster__GetOpenEventIds(const MethodInfo *method)
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

  if ( (byte_4CB64D1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C6BC68(Instance);
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
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          id,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      max_length = EnableEntityList->max_length;
      if ( (int)++v6 >= max_length )
        return v4;
    }
LABEL_17:
    sub_1C6BC60(Instance, id);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v21; // w8
  EventTutorialEntity_o *v22; // x29
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x5

  if ( (byte_4CB64BF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4CB64BF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v21 = Item->fields.eventId, v22 = Item, (v21 & 0x80000000) == 0) && v21 != eventId
        || Item->fields.openType != openKind
        || (Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(Item, *(const MethodInfo **)&eventId),
            !EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, targetId, v24))
        || !EventTutorialEntity__isOpenCondition(v22, qId, bPhase, bWave, bTurn, v25) )
      {
        v19 = ++v18 < v17;
        if ( v17 != v18 )
          continue;
      }
      return v19;
    }
LABEL_17:
    sub_1C6BC60(list, *(_QWORD *)&eventId);
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
  if ( (byte_4CB64CA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    data = (EventTutorialEntity_o *)sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
    byte_4CB64CA = 1;
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
             (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_9;
    }
LABEL_17:
    sub_1C6BC60(data, args);
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
           (const MethodInfo_31584F0 *)Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
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


bool EventTutorialMaster__IsOpenOnceDailyDispTutorial(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v5; // x1
  int64_t Time; // x8
  bool result; // w0
  System_Int32_array *OnceDailyDispTutorialResetTime; // x0
  int max_length; // w8
  int32_t v10; // w20
  int32_t v11; // w21
  System_DateTime_o v12; // x0
  int32_t Year; // w22
  System_DateTime_o v14; // x0
  int32_t Month; // w23
  System_DateTime_o v16; // x0
  int32_t Day; // w3
  System_DateTime_o v18; // x0
  System_DateTime_o v19; // x0
  System_DateTime_o v20; // x0
  System_DateTime_o v21; // x1
  System_DateTime_o v22; // x0
  const MethodInfo *v23; // x2
  System_String_o *OnceDailyDispTutorialSaveKey; // x0
  System_String_o *String_71617980; // x0
  int64_t v26; // x20
  System_DateTime_o v27; // x0
  System_DateTime_o v28; // x19
  System_DateTime_o v29; // x0
  int64_t v30; // [xsp+0h] [xbp-70h] BYREF
  uint64_t v31; // [xsp+8h] [xbp-68h] BYREF
  uint64_t v32; // [xsp+10h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-58h] BYREF
  int64_t endedTime; // [xsp+20h] [xbp-50h] BYREF
  int64_t startedTime; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4CB64D9 & 1) == 0 )
  {
    sub_1C6BA08(&System_DateTime_TypeInfo);
    this = (EventTutorialMaster_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB64D9 = 1;
  }
  endedTime = 0;
  startedTime = 0;
  v32 = 0;
  dateData = 0;
  v30 = 0;
  v31 = 0;
  if ( !entity || !EventTutorialMaster__TryGetEventTimes(this, entity, &startedTime, &endedTime, v3) )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  result = 0;
  if ( Time >= startedTime && Time <= endedTime )
  {
    OnceDailyDispTutorialResetTime = EventTutorialEntity__GetOnceDailyDispTutorialResetTime(entity, v5);
    if ( OnceDailyDispTutorialResetTime && (max_length = OnceDailyDispTutorialResetTime->max_length, max_length >= 1) )
    {
      v10 = OnceDailyDispTutorialResetTime->m_Items[0];
      if ( max_length != 1 )
      {
        v11 = OnceDailyDispTutorialResetTime->m_Items[1];
LABEL_17:
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        dateData = NetworkManager__getServerDateTime(0).fields._dateData;
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v12.fields._dateData = (uint64_t)&dateData;
        Year = System_DateTime__get_Year(v12, 0);
        v14.fields._dateData = (uint64_t)&dateData;
        Month = System_DateTime__get_Month(v14, 0);
        v16.fields._dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v16, 0);
        v18.fields._dateData = (uint64_t)&v32;
        System_DateTime___ctor_65351524(v18, Year, Month, Day, v10, v11, 0, 0);
        v19.fields._dateData = (uint64_t)&v32;
        v20.fields._dateData = System_DateTime__AddDays(v19, -1.0, 0).fields._dateData;
        v21.fields._dateData = v32;
        v31 = v20.fields._dateData;
        v22.fields._dateData = dateData;
        if ( System_DateTime__op_GreaterThan(v22, v21, 0) )
          v31 = v32;
        OnceDailyDispTutorialSaveKey = EventTutorialMaster__GetOnceDailyDispTutorialSaveKey(
                                         entity->fields.eventId,
                                         entity->fields.flagType,
                                         v23);
        String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(OnceDailyDispTutorialSaveKey, 0);
        if ( System_Int64__TryParse(String_71617980, &v30, 0) )
        {
          v26 = v30;
        }
        else
        {
          v26 = 0;
          v30 = 0;
        }
        if ( !System_DateTime_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
        v27.fields._dateData = (uint64_t)&v31;
        v28.fields._dateData = System_DateTime__AddHours(v27, -9.0, 0).fields._dateData;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v29.fields._dateData = v28.fields._dateData;
        return v26 < NetworkManager__getTime_41599764(v29, 0);
      }
    }
    else
    {
      v10 = 0;
    }
    v11 = 0;
    goto LABEL_17;
  }
  return result;
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
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4CB64C5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v14);
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
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4CB64C6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v16);
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
           v18);
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
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4CB64C4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v16);
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


void EventTutorialMaster__OpenTutorialImages(System_Int32_array *imageIds, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  EventTutorialMaster___c_c *v6; // x8
  System_Action_o *_9__29_0; // x21
  Il2CppObject *v8; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB64CC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__OpenTutorialImages_b__29_0__);
    sub_1C6BA08(&EventTutorialMaster___c_TypeInfo);
    byte_4CB64CC = 1;
  }
  if ( imageIds && imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    v6 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v6 = EventTutorialMaster___c_TypeInfo;
    }
    _9__29_0 = v6->static_fields->__9__29_0;
    if ( !_9__29_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = EventTutorialMaster___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__29_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(_9__29_0, v8, Method_EventTutorialMaster___c__OpenTutorialImages_b__29_0__, 0);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = _9__29_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v10, v11);
    }
    if ( !v5 )
LABEL_15:
      sub_1C6BC60(Instance, v4);
    CommonUI__OpenTutorialImageDialog_31444144(v5, imageIds, -1, 0, _9__29_0, 0, 0, 0, 0);
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
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  EventTutorialMaster___c_c *v16; // x8
  EventTutorialEntity_array *v17; // x19
  System_Func_object__object__o *_9__39_0; // x20
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

  if ( (byte_4CB64D6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C6BA08(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C6BA08(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_1C6BA08(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_1C6BA08(&Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__39_0__);
    sub_1C6BA08(&EventTutorialMaster___c_TypeInfo);
    byte_4CB64D6 = 1;
  }
  if ( mapId < 1 )
  {
    v7 = sub_1C6BC54(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB065F )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB065F = 1;
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
    if ( !byte_4CB065F )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB065F = 1;
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
    v4 = (System_Array_o *)sub_1C6BAB0(EventTutorialMaster_OpenType___TypeInfo, 3);
    v5.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v6 = v4;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v4, v5, 0);
    v7 = sub_1C6BC54(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB065F )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB065F = 1;
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
    sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v6, v11, v12);
  }
  *(_DWORD *)(v7 + 40) = mapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v7,
                             v10);
  v16 = EventTutorialMaster___c_TypeInfo;
  v17 = AvailableTutorialArray;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v16 = EventTutorialMaster___c_TypeInfo;
  }
  _9__39_0 = (System_Func_object__object__o *)v16->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventTutorialMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__39_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__39_0,
      v19,
      Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__39_0__,
      0);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__39_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__39_0,
                                                               (const MethodInfo_3174900 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v24 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v23,
                                 (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_string___);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v25 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                EventID,
                                                                                v24,
                                                                                0);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v26 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(EventID, v25, 0);
  v27 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB36DA )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB36DA = 1;
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
      (const MethodInfo_36B7A74 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
  if ( !v17 )
    goto LABEL_50;
  max_length = v17->max_length;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1C6BC68(EventID);
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
    sub_1C6BC60(EventID, v10);
  }
LABEL_48:
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  MapControl_QuestInfo_o *QuestInfo; // x21
  System_Collections_Generic_HashSet_int__o *refreshedWarIds; // x0
  _BOOL4 IsDisaplayable; // w22
  int32_t monitor; // w23
  int32_t klass_high; // w25
  int64_t klass; // x24
  _BOOL8 IsOpen; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_HashSet_int__o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB64D8 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB64D8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        (System_Collections_Generic_List_object__o *)releaseEntList,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
      v23 = v22;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
      {
        current = v23.fields._current;
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !current )
          sub_1C6BC60(Instance, v10);
        if ( !Instance )
          sub_1C6BC60(0, v10);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, (int32_t)current[1].klass, 0);
        if ( !QuestInfo )
          break;
        refreshedWarIds = this->fields.refreshedWarIds;
        if ( !refreshedWarIds )
          sub_1C6BC60(0, v11);
        if ( !System_Collections_Generic_HashSet_int___Contains(
                refreshedWarIds,
                QuestInfo->fields.warId,
                (const MethodInfo_36B16B0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
              sub_1C6BC60(IsOpen, v19);
            ScrTerminalListTop__RefreshQuestTree((ScrTerminalListTop_o *)mTerminalList, QuestInfo->fields.warId, 0);
            v21 = this->fields.refreshedWarIds;
            if ( !v21 )
              sub_1C6BC60(0, v20);
            System_Collections_Generic_HashSet_int___Add(
              v21,
              QuestInfo->fields.warId,
              (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
      return;
    }
LABEL_34:
    sub_1C6BC60(v5, releaseEntList);
  }
}


void EventTutorialMaster__RequestTutorialEventSet(
        int32_t eventId,
        int32_t flagType,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4CB64B9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB64B9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_1C6BC60(0, v8);
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, flagType, eventId, 0);
}


void EventTutorialMaster__SaveOnceDailyDispTutorialTime(int32_t eventId, int32_t flagType, const MethodInfo *method)
{
  System_String_o *OnceDailyDispTutorialSaveKey; // x19
  System_String_o *v6; // x0
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB64DB & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB64DB = 1;
  }
  OnceDailyDispTutorialSaveKey = EventTutorialMaster__GetOnceDailyDispTutorialSaveKey(eventId, flagType, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v6 = System_Int64__ToString((int64_t)&Time, 0);
  UnityEngine_PlayerPrefs__SetString(OnceDailyDispTutorialSaveKey, v6, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventTutorialMaster__ShowTutorialWithoutCheck(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        bool conditionNone,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4CB64C7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v10);
  }
  EventTutorialMaster__showTutorialWithoutCheck(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    conditionNone,
    v11);
}


void EventTutorialMaster__ShowTutorialWithoutCheck_42411776(
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

  if ( (byte_4CB64CD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v16);
  }
  EventTutorialMaster__showTutorialWithoutCheck_42411976(
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
bool EventTutorialMaster__TryGetEntity(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB64DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
    byte_4CB64DF = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


bool EventTutorialMaster__TryGetEventTimes(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o *entity,
        int64_t *startedTime,
        int64_t *endedTime,
        const MethodInfo *method)
{
  CommonReleaseEntity_array *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x8
  bool result; // w0
  struct System_Int32_array *condIds; // x8
  int max_length; // w9
  unsigned int v14; // w8
  CommonReleaseEntity_o *v15; // x9
  int32_t condType; // w11
  int64_t *v17; // x10
  Il2CppObject *entitya; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB64DA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4CB64DA = 1;
  }
  entitya = 0;
  *startedTime = 0;
  *endedTime = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (CommonReleaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !entity || !Master_object )
    goto LABEL_30;
  Master_object = (CommonReleaseEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                 &entitya,
                                                 entity->fields.eventId,
                                                 (const MethodInfo_33F9128 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v10 = entitya;
    if ( entitya )
    {
      result = 1;
      *startedTime = (int64_t)entitya[5].monitor;
      *endedTime = (int64_t)v10[6].klass;
      return result;
    }
LABEL_30:
    sub_1C6BC60(Master_object, v9);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.condIds, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (CommonReleaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  condIds = entity->fields.condIds;
  if ( !condIds )
    goto LABEL_30;
  if ( !LODWORD(condIds->max_length) )
LABEL_31:
    sub_1C6BC68(Master_object);
  if ( !Master_object )
    goto LABEL_30;
  Master_object = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, condIds->m_Items[0], 0);
  if ( !Master_object )
    goto LABEL_30;
  max_length = Master_object->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        goto LABEL_31;
      v15 = Master_object->m_Items[v14];
      if ( !v15 )
        goto LABEL_30;
      condType = v15->fields.condType;
      v17 = startedTime;
      if ( condType == 12 )
        goto LABEL_24;
      if ( condType == 228 )
        break;
LABEL_25:
      max_length = Master_object->max_length;
      if ( (int)++v14 >= max_length )
        return *startedTime >= 1 && *endedTime > 0;
    }
    v17 = endedTime;
LABEL_24:
    *v17 = v15->fields.condNum;
    goto LABEL_25;
  }
  return *startedTime >= 1 && *endedTime > 0;
}


void EventTutorialMaster__TutorialAfterUpdateQuestTree(
        EventTutorialMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_o *NowSceneName; // x21
  System_String_o *SceneName; // x0
  AvalonSceneManager_o *v10; // x25
  System_Collections_Generic_HashSet_int__o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *dicRootComponent; // x22
  System_Func_object__bool__o *v15; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x22
  System_Func_object__bool__o *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  EventTutorialMaster___c_c *v21; // x0
  System_Func_object__bool__o *_9__40_2; // x24
  Il2CppObject *v23; // x25
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  __int64 v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t current; // w1
  System_Func_object__bool__o *v35; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v37; // x1
  const MethodInfo *v38; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  System_Func_object__bool__o *v40; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  System_Func_object__bool__o *v42; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v44; // x0
  const MethodInfo *v45; // x2
  AvalonSceneManager_o *v46; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB64D7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_1C6BA08(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__getEntityList__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_1C6BA08(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_1C6BA08(&SceneList_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__40_2__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__0__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__1__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__3__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__4__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass40_0_TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass40_1__TutorialAfterUpdateQuestTree_b__5__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass40_1_TypeInfo);
    sub_1C6BA08(&EventTutorialMaster___c_TypeInfo);
    byte_4CB64D7 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v5 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_DWORD *)(v5 + 24) = eventId;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( this->fields.refreshedWarIds )
    {
      v10 = Instance;
      System_Collections_Generic_HashSet_int___Clear(
        this->fields.refreshedWarIds,
        (const MethodInfo_36B1650 *)Method_System_Collections_Generic_HashSet_int__Clear__);
      v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C6BC54(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v11,
        (const MethodInfo_36B0FBC *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v11 )
      {
        System_Collections_Generic_HashSet_int___Add(
          v11,
          119,
          (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          170,
          (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          63,
          (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          238,
          (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        *(_QWORD *)(v5 + 16) = v11;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v11, v12, v13);
        Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( Instance )
        {
          dicRootComponent = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.dicRootComponent;
          v15 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v15,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__0__,
            0);
          v16 = System_Linq_Enumerable__Where_object_(
                  dicRootComponent,
                  (System_Func_TSource__bool__o *)v15,
                  (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          v17 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v17,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__1__,
            0);
          v18 = System_Linq_Enumerable__Where_object_(
                  v16,
                  (System_Func_TSource__bool__o *)v17,
                  (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                               v18,
                                               (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
          if ( v10 )
          {
            v19 = (System_Collections_Generic_List_object__o *)Instance;
            v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v10->fields.dicRootComponent;
            v21 = EventTutorialMaster___c_TypeInfo;
            if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
              v21 = EventTutorialMaster___c_TypeInfo;
            }
            v46 = v10;
            _9__40_2 = (System_Func_object__bool__o *)v21->static_fields->__9__40_2;
            if ( !_9__40_2 )
            {
              if ( !v21->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v21);
                v21 = EventTutorialMaster___c_TypeInfo;
              }
              v23 = (Il2CppObject *)v21->static_fields->__9;
              _9__40_2 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__40_2,
                v23,
                Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__40_2__,
                0);
              static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
              static_fields->__9__40_2 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__40_2;
              sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__40_2, (int32_t)_9__40_2, v25, v26);
            }
            v27 = System_Linq_Enumerable__Where_object_(
                    v20,
                    (System_Func_TSource__bool__o *)_9__40_2,
                    (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
            Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                                 v27,
                                                 (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
            if ( v19 )
            {
              v28 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v47,
                v19,
                (const MethodInfo_380146C *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
              v48 = v47;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v48,
                        (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__) )
              {
                v29 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass40_1_TypeInfo);
                System_Object___ctor((Il2CppObject *)v29, 0);
                if ( !v29 )
                  sub_1C6BC60(v30, v31);
                current = (int32_t)v48.fields._current;
                *(_QWORD *)(v29 + 16) = v48.fields._current;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 16), current, v32, v33);
                v35 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestReleaseEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v35,
                  (Il2CppObject *)v29,
                  Method_EventTutorialMaster___c__DisplayClass40_1__TutorialAfterUpdateQuestTree_b__5__,
                  0);
                v36 = System_Linq_Enumerable__Where_object_(
                        v28,
                        (System_Func_TSource__bool__o *)v35,
                        (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
                v37 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v36,
                                                                                 (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
                EventTutorialMaster__RefreshQuestTree(this, v37, v38);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v48,
                (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
              v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v46->fields.dicRootComponent;
              v40 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v40,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__3__,
                0);
              v41 = System_Linq_Enumerable__Where_object_(
                      v39,
                      (System_Func_TSource__bool__o *)v40,
                      (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v42 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v42,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__4__,
                0);
              v43 = System_Linq_Enumerable__Where_object_(
                      v41,
                      (System_Func_TSource__bool__o *)v42,
                      (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v44 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                               v43,
                                                                               (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
              EventTutorialMaster__RefreshQuestTree(this, v44, v45);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C6BC60(Instance, v7);
  }
}


void EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_4CB64CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB64CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v6);
  }
  EventTutorialMaster__tutorialChainWithoutCheck((EventTutorialMaster_o *)Instance, tutoList, 0, callback, v7);
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
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v28; // x28
  EventTutorialEntity_o *v29; // x22
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v34; // x3
  int32_t v35; // w8
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  int32_t flagType; // w23
  int32_t v39; // w24
  const MethodInfo *v40; // x2
  System_Action_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Int32_array *buckets; // x8
  _QWORD *v45; // x9
  __int64 slots_low; // x10
  __int64 v47; // x8
  const MethodInfo *v48; // x2
  System_Action_o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CB64BA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__0__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__1__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
    byte_4CB64BA = 1;
  }
  memset(&v54, 0, sizeof(v54));
  memset(&i, 0, sizeof(i));
  v18 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_61;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 32) = callbackAfter;
  *(_DWORD *)(v18 + 24) = eventId;
  *(_DWORD *)(v18 + 28) = openKind;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 32), (int32_t)callbackAfter, v23, v24);
  *(_DWORD *)(v18 + 40) = qId;
  *(_DWORD *)(v18 + 44) = bPhase;
  *(_DWORD *)(v18 + 48) = bWave;
  *(_DWORD *)(v18 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_61;
  max_length = sortedEntityArray->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_41:
    openedEventIds = this->fields.openedEventIds;
    if ( openedEventIds )
    {
      System_Collections_Generic_HashSet_int___GetEnumerator(
        (System_Collections_Generic_HashSet_Enumerator_T__o *)&v52,
        openedEventIds,
        (const MethodInfo_36B1B44 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
      for ( i = v52;
            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
              (const MethodInfo_35824A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v40) )
      {
        ;
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
        (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
        (const MethodInfo_35824A0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      openedEventIds = this->fields.openedEventIds;
      if ( openedEventIds )
      {
        System_Collections_Generic_HashSet_int___Clear(
          openedEventIds,
          (const MethodInfo_36B1650 *)Method_System_Collections_Generic_HashSet_int__Clear__);
        ActionExtensions__Call(*(System_Action_o **)(v18 + 32), 0);
        return;
      }
    }
    goto LABEL_61;
  }
  v28 = 0;
  while ( 1 )
  {
    if ( v28 >= (unsigned int)max_length )
      sub_1C6BC68(openedEventIds);
    v29 = sortedEntityArray->m_Items[v28];
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_61;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v52,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v54 = v52;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v54,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v30 )
          break;
        if ( !v29 )
          sub_1C6BC60(v30, v31);
        if ( !v54.fields._current )
          sub_1C6BC60(v30, v31);
        if ( v29->fields.eventId == LODWORD(v54.fields._current[1].klass)
          && v29->fields.flagType == HIDWORD(v54.fields._current[1].klass)
          && v29->fields.num == LODWORD(v54.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v54,
            (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_37;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v54,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v29 )
      goto LABEL_61;
    flag = v29->fields.flag;
    if ( v29->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v29, v20);
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    Targets,
                                                                    (System_Int32_array_array *)Targets,
                                                                    *(_DWORD *)(v18 + 40),
                                                                    v34);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
      break;
LABEL_37:
    LODWORD(max_length) = sortedEntityArray->max_length;
    if ( (__int64)++v28 >= (int)max_length )
      goto LABEL_41;
  }
  v35 = v29->fields.eventId;
  if ( (v35 & 0x80000000) == 0 && v35 != *(_DWORD *)(v18 + 24)
    || v29->fields.openType != *(_DWORD *)(v18 + 28)
    || (openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                        v29,
                                                                        *(_DWORD *)(v18 + 40),
                                                                        *(_DWORD *)(v18 + 44),
                                                                        *(_DWORD *)(v18 + 48),
                                                                        *(_DWORD *)(v18 + 52),
                                                                        v25),
        (flag & 2) == 0)
    && ((unsigned __int8)openedEventIds & 1) == 0 )
  {
    if ( (v29->fields.flag & 1) != 0 )
    {
      flagType = v29->fields.flagType;
      v39 = *(_DWORD *)(v18 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)TutorialFlag__Get_40694056(flagType, v39, 0);
      if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                        0,
                                                                        (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !openedEventIds )
          goto LABEL_61;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)openedEventIds,
          v29->fields.flagType,
          *(_DWORD *)(v18 + 24),
          0);
      }
    }
    goto LABEL_37;
  }
  if ( (v29->fields.flag & 4) != 0 )
  {
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__IsOpenOnceDailyDispTutorial(
                                                                    this,
                                                                    v29,
                                                                    v36);
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      goto LABEL_37;
  }
  if ( (flag & 2) == 0 && !notSave )
  {
    v41 = *(System_Action_o **)(v18 + 64);
    if ( !v41 )
    {
      v41 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__1__,
        0);
      *(_QWORD *)(v18 + 64) = v41;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 64), (int32_t)v41, v42, v43);
    }
    EventTutorialEntity__OpenTutorial(v29, v41, v36);
    return;
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds
    || (buckets = openedEventIds->fields._buckets,
        v45 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++HIDWORD(openedEventIds->fields._slots),
        !buckets) )
  {
LABEL_61:
    sub_1C6BC60(openedEventIds, v20);
  }
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v29,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v47 + 32) = v29;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v29, (int32_t)v36, v37);
  }
  v49 = *(System_Action_o **)(v18 + 56);
  if ( !v49 )
  {
    v49 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__0__,
      0);
    *(_QWORD *)(v18 + 56) = v49;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 56), (int32_t)v49, v50, v51);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v29, v49, v48);
}


void EventTutorialMaster__checkTutorial_42404764(
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
  System_Collections_Generic_HashSet_int__o *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  unsigned __int64 v29; // x26
  __int64 v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x24
  __int64 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  EventTutorialEntity_o *v37; // x1
  __int64 v38; // x23
  const MethodInfo *v39; // x5
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_HashSet_int__o *v42; // x8
  int slots; // w28
  const MethodInfo *v44; // x3
  _DWORD *v45; // x8
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x3
  System_Collections_Generic_HashSet_int__o *v48; // x8
  int32_t buckets; // w22
  int32_t buckets_high; // w24
  const MethodInfo *v51; // x2
  EventTutorialEntity_o *v52; // x19
  System_Action_o *v53; // x20
  const MethodInfo *v54; // x2
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 slots_low; // x10
  __int64 v58; // x8
  EventTutorialEntity_o *v59; // x19
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x2
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CB64BB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__0__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__1__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    byte_4CB64BB = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&i, 0, sizeof(i));
  v19 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_71;
  *(_QWORD *)(v19 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  *(_QWORD *)(v19 + 24) = checkEventIds;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 24), (int32_t)checkEventIds, v24, v25);
  *(_QWORD *)(v19 + 40) = callbackAfter;
  *(_DWORD *)(v19 + 32) = openKind;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 40), (int32_t)callbackAfter, v26, v27);
  *(_DWORD *)(v19 + 48) = qId;
  *(_DWORD *)(v19 + 52) = bPhase;
  *(_DWORD *)(v19 + 56) = bWave;
  *(_DWORD *)(v19 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_71;
  if ( SLODWORD(sortedEntityArray->max_length) < 1 )
  {
LABEL_53:
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_71;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v62,
      openedEventIds,
      (const MethodInfo_36B1B44 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    for ( i = v62;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
            (const MethodInfo_35824A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v51) )
    {
      ;
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
      (const MethodInfo_35824A0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_71;
    System_Collections_Generic_HashSet_int___Clear(
      openedEventIds,
      (const MethodInfo_36B1650 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    ActionExtensions__Call(*(System_Action_o **)(v19 + 40), 0);
    return;
  }
  v29 = 0;
  while ( 1 )
  {
    v30 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v30, 0);
    if ( !v30 )
      goto LABEL_71;
    *(_QWORD *)(v30 + 24) = v19;
    v33 = v30 + 24;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 24), v19, v31, v32);
    if ( v29 >= LODWORD(sortedEntityArray->max_length) )
      sub_1C6BC68(v34);
    v37 = sortedEntityArray->m_Items[v29];
    *(_QWORD *)(v30 + 16) = v37;
    v38 = v30 + 16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 16), (int32_t)v37, v35, v36);
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_71;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v62,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v64 = v62;
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v64,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v40 )
          break;
        v42 = *(System_Collections_Generic_HashSet_int__o **)v38;
        if ( !*(_QWORD *)v38 )
          sub_1C6BC60(v40, v41);
        if ( !v64.fields._current )
          sub_1C6BC60(v40, v41);
        if ( LODWORD(v42->fields._buckets) == LODWORD(v64.fields._current[1].klass)
          && HIDWORD(v42->fields._buckets) == HIDWORD(v64.fields._current[1].klass)
          && LODWORD(v42->fields._slots) == LODWORD(v64.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v64,
            (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_49;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v64,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)v38;
    if ( !*(_QWORD *)v38 )
      goto LABEL_71;
    slots = (int)openedEventIds[1].fields._slots;
    if ( openedEventIds->fields._count != 84 )
      break;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__getTargets(
                                                                    (EventTutorialEntity_o *)openedEventIds,
                                                                    (const MethodInfo *)v21);
    if ( !*(_QWORD *)v33 )
      goto LABEL_71;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    (EventTutorialMaster_o *)openedEventIds,
                                                                    (System_Int32_array_array *)openedEventIds,
                                                                    *(_DWORD *)(*(_QWORD *)v33 + 48LL),
                                                                    v44);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
      break;
LABEL_49:
    if ( (__int64)++v29 >= SLODWORD(sortedEntityArray->max_length) )
      goto LABEL_53;
  }
  if ( isEventIdOneOrMore )
    goto LABEL_75;
  openedEventIds = *(System_Collections_Generic_HashSet_int__o **)v38;
  if ( !*(_QWORD *)v38 )
    goto LABEL_71;
  if ( ((__int64)openedEventIds->fields._buckets & 0x80000000) == 0 )
  {
LABEL_75:
    if ( !*(_QWORD *)v33 )
      goto LABEL_71;
    if ( !*(_QWORD *)v38 )
      goto LABEL_71;
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)(*(_QWORD *)v33 + 24LL);
    if ( !openedEventIds )
      goto LABEL_71;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)System_Collections_Generic_List_int___Contains(
                                                                    (System_Collections_Generic_List_int__o *)openedEventIds,
                                                                    *(_DWORD *)(*(_QWORD *)v38 + 16LL),
                                                                    (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
    {
LABEL_36:
      v48 = *(System_Collections_Generic_HashSet_int__o **)v38;
      if ( !*(_QWORD *)v38 )
        goto LABEL_71;
      if ( ((__int64)v48[1].fields._slots & 1) != 0 )
      {
        buckets = (int32_t)v48->fields._buckets;
        buckets_high = HIDWORD(v48->fields._buckets);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( !TutorialFlag__Get_40694056(buckets_high, buckets, 0) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                          0,
                                                                          (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
          if ( !*(_QWORD *)v38 || !openedEventIds )
            goto LABEL_71;
          TutorialEventSetRequest__beginRequest(
            (TutorialEventSetRequest_o *)openedEventIds,
            *(_DWORD *)(*(_QWORD *)v38 + 20LL),
            *(_DWORD *)(*(_QWORD *)v38 + 16LL),
            0);
        }
      }
      goto LABEL_49;
    }
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)v38;
    if ( !*(_QWORD *)v38 )
      goto LABEL_71;
  }
  v45 = *(_DWORD **)v33;
  if ( !*(_QWORD *)v33 )
    goto LABEL_71;
  if ( openedEventIds->fields._count != v45[8] )
    goto LABEL_36;
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                  (EventTutorialEntity_o *)openedEventIds,
                                                                  v45[12],
                                                                  v45[13],
                                                                  v45[14],
                                                                  v45[15],
                                                                  v39);
  if ( (slots & 2) == 0 && ((unsigned __int8)openedEventIds & 1) == 0 )
    goto LABEL_36;
  v21 = *(System_Collections_Generic_HashSet_int__o **)v38;
  if ( !*(_QWORD *)v38 )
    goto LABEL_71;
  if ( ((__int64)v21[1].fields._slots & 4) != 0
    && !EventTutorialMaster__IsOpenOnceDailyDispTutorial(this, (EventTutorialEntity_o *)v21, v46) )
  {
    goto LABEL_49;
  }
  if ( (slots & 2) == 0 && !notSave )
  {
    v52 = *(EventTutorialEntity_o **)(v30 + 16);
    v53 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v53,
      (Il2CppObject *)v30,
      Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__1__,
      0);
    if ( v52 )
    {
      EventTutorialEntity__OpenTutorial(v52, v53, v54);
      return;
    }
LABEL_71:
    sub_1C6BC60(openedEventIds, v21);
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds )
    goto LABEL_71;
  v21 = *(System_Collections_Generic_HashSet_int__o **)v38;
  v55 = openedEventIds->fields._buckets;
  v56 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++HIDWORD(openedEventIds->fields._slots);
  if ( !v55 )
    goto LABEL_71;
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(v55->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v21,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = (__int64)v55 + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v58 + 32) = v21;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v21, (int32_t)v46, v47);
  }
  v59 = *(EventTutorialEntity_o **)(v30 + 16);
  v60 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v60,
    (Il2CppObject *)v30,
    Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__0__,
    0);
  if ( !v59 )
    goto LABEL_71;
  EventTutorialEntity__OpenTutorialWithoutFlag(v59, v60, v61);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CB64D5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    this = (EventTutorialMaster_o *)sub_1C6BA08(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4CB64D5 = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1C6BAB0(int___TypeInfo, LODWORD(openKinds->max_length));
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
      sub_1C6BC68(this);
    }
LABEL_28:
    sub_1C6BC60(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
                                          (const MethodInfo_3243204 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
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
              (const MethodInfo_3801724 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
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
  il2cpp_array_size_t v24; // x28
  unsigned __int64 v25; // x29
  struct System_String_array *v26; // x8
  _QWORD *v27; // x8

  if ( (byte_4CB64D3 & 1) == 0 )
  {
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C6BA08(&StringLiteral_15950/*"[]"*/);
    sub_1C6BA08(&StringLiteral_16009/*"[{0}]"*/);
    byte_4CB64D3 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16009/*"[{0}]"*/, (Il2CppObject *)targetIds, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v16 = 0;
    if ( !v8 )
      goto LABEL_42;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
LABEL_43:
        sub_1C6BC68(IsNullOrEmpty);
      v17 = sortedEntityArray->m_Items[v15];
      if ( !v17 )
        goto LABEL_42;
      v18 = v17->fields.eventId;
      if ( (v18 < 0 || v18 == eventId) && v17->fields.openType == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0);
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v17,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v17;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v17, v11, v12);
          }
        }
        else
        {
          v23 = v17->fields.targetIds;
          if ( !v23 )
            goto LABEL_42;
          v24 = v23->max_length;
          if ( !v16 )
          {
            if ( !(_DWORD)v24
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  v23->m_Items[0],
                                                                  (System_String_o *)StringLiteral_15950/*"[]"*/,
                                                                  0),
                  v16 = 0,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v16 = (Il2CppObject *)v17;
            }
          }
          if ( (int)v24 >= 1 )
          {
            v25 = 0;
            while ( 1 )
            {
              v26 = v17->fields.targetIds;
              if ( !v26 )
                break;
              if ( v25 >= LODWORD(v26->max_length) )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(v26->m_Items[v25], targetIds, 0);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v24 == ++v25 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1C6BC60(IsNullOrEmpty, v10);
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
    if ( LODWORD(IsNullOrEmpty->max_length) )
    {
      v8->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v16;
      sub_1C6B9AC((CGThumbnailListItem_o *)IsNullOrEmpty->m_Items, (int32_t)v16, v11, v12);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v16,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
        sub_1C6BC60(this, targets);
      max_length = v7->max_length;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_1C6BC68(this);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CB64BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4CB64BE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1C6BC60(list, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4CB64BD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4CB64BD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1C6BC60(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TResult__o *v3; // x0
  EventTutorialMaster___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__8_0; // x20
  Il2CppObject *v7; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v11; // x0
  EventTutorialMaster___c_c *v12; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__8_1; // x20
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

  if ( (byte_4CB64B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&System_Func_EventTutorialEntity__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__preProcess_b__8_0__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__preProcess_b__8_1__);
    sub_1C6BA08(&EventTutorialMaster___c_TypeInfo);
    byte_4CB64B8 = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_316A620 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v4 = EventTutorialMaster___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v4 = EventTutorialMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v4->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventTutorialMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v7, Method_EventTutorialMaster___c__preProcess_b__8_0__, 0);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__8_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__OrderBy_object__int_(
          v5,
          (System_Func_TSource__TKey__o *)_9__8_0,
          (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v12 = EventTutorialMaster___c_TypeInfo;
  v13 = v11;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v12 = EventTutorialMaster___c_TypeInfo;
  }
  _9__8_1 = (System_Func_object__int__o *)v12->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventTutorialMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__8_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_1, v15, Method_EventTutorialMaster___c__preProcess_b__8_1__, 0);
    v16 = EventTutorialMaster___c_TypeInfo->static_fields;
    v16->__9__8_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__8_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v16->__9__8_1, (int32_t)_9__8_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__8_1,
                                                               (const MethodInfo_317A3AC *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventTutorialMaster_TypeInfo->static_fields, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v24 = EventTutorialMaster_TypeInfo->static_fields;
  v24->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->checkedEntityList, (int32_t)v23, v25, v26);
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
  EventTutorialEntity_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int32_t v20; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4CB64CB & 1) == 0 )
  {
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4CB64CB = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_22:
    sub_1C6BC60(v12, v13);
  max_length = sortedEntityArray->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C6BC68(v12);
      v13 = sortedEntityArray->m_Items[i];
      if ( conditionNone )
      {
        if ( !v13 )
          goto LABEL_22;
        if ( v13->fields.condType )
          goto LABEL_20;
      }
      else if ( !v13 )
      {
        goto LABEL_22;
      }
      v20 = v13->fields.eventId;
      if ( (v20 < 0 || v20 == eventId) && v13->fields.openType == openKind )
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
            (Il2CppObject *)v13,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v13;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v13, v14, v15);
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
    v16);
}


void EventTutorialMaster__showTutorialWithoutCheck_42411976(
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
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v27; // w23
  EventTutorialEntity_o *v28; // x21
  int32_t v29; // w8
  const MethodInfo *v30; // x2
  System_Action_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4CB64CE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass31_0__showTutorialWithoutCheck_b__0__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass31_0_TypeInfo);
    byte_4CB64CE = 1;
  }
  v17 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)callbackAfter, v22, v23);
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1C6BC60(isEnableCondition, v19);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0);
  }
  else
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_1C6BC68(isEnableCondition);
      v28 = sortedEntityArray->m_Items[v27];
      if ( !v28 )
        goto LABEL_18;
      v29 = v28->fields.eventId;
      if ( (v29 < 0 || v29 == *(_DWORD *)(v17 + 24)) && v28->fields.openType == *(_DWORD *)(v17 + 28) )
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
      v31 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass31_0__showTutorialWithoutCheck_b__0__,
        0);
      *(_QWORD *)(v17 + 56) = v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 56), (int32_t)v31, v32, v33);
    }
    EventTutorialEntity__OpenTutorial(v28, v31, v30);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4CB64D0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass33_0__tutorialChainWithoutCheck_b__0__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass33_0_TypeInfo);
    byte_4CB64D0 = 1;
  }
  v9 = sub_1C6BC54(EventTutorialMaster___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = tutoList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)tutoList, v14, v15);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = index;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callback, v16, v17);
  v10 = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !v10 )
    goto LABEL_9;
  v18 = *(_DWORD *)(v9 + 32);
  if ( v18 < v10->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v18,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v20 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v9,
      Method_EventTutorialMaster___c__DisplayClass33_0__tutorialChainWithoutCheck_b__0__,
      0);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v20, v21);
      return;
    }
LABEL_9:
    sub_1C6BC60(v10, v11);
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4CB64E0 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4CB64E0 = 1;
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
                     (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.eventIds, (int32_t)eventIds, v6, v7);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1C6BAB0(int___TypeInfo, 1);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1C6BC68(OpenEventIds);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1C6BC60(OpenEventIds, v5);
  }
  return eventIds;
}


void EventTutorialMaster__CoCheckTutorialLocal_d__13___ctor(
        EventTutorialMaster__CoCheckTutorialLocal_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventTutorialMaster__CoCheckTutorialLocal_d__13__MoveNext(
        EventTutorialMaster__CoCheckTutorialLocal_d__13_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  EventTutorialMaster__CoCheckTutorialLocal_d__13_o *v4; // x19
  struct EventTutorialMaster_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct EventTutorialMaster___c__DisplayClass13_0_o **p__8__1; // x21
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
  struct EventTutorialMaster___c__DisplayClass13_1_o *_8__2; // x21
  bool result; // w0
  Il2CppObject *v25; // x22
  struct EventTutorialMaster___c__DisplayClass13_1_o **p__8__2; // x21
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
  struct EventTutorialMaster___c__DisplayClass13_1_o *v38; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *CS___8__locals1; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v40; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v41; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v42; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v43; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v44; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v45; // x9
  struct EventTutorialMaster___c__DisplayClass13_0_o *v46; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v47; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v49; // x22
  EventTutorialEntity_o *data; // x21
  System_Action_o *v51; // x23
  const MethodInfo *v52; // x2
  struct EventTutorialMaster___c__DisplayClass13_0_o *v53; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v54; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v55; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v56; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v57; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v58; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v59; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v60; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v62; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o **v63; // x21
  struct EventTutorialEntity_o *v64; // x8
  int32_t eventId; // w22
  int32_t flagType; // w23
  struct EventTutorialEntity_o *v67; // x8
  struct EventTutorialEntity_array *_7__wrap1; // x9
  const MethodInfo *v69; // x2
  System_Func_bool__o *v70; // x20
  UnityEngine_WaitWhile_o *v71; // x21
  CGThumbnailListItem_o *v72; // x19
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int v75; // w8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v76; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v77; // x8
  System_Func_bool__o *_9__3; // x20
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  UnityEngine_WaitWhile_o *v81; // x21
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Func_bool__o *_9__0; // x20
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  UnityEngine_WaitWhile_o *v87; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Collections_Generic_HashSet_Enumerator_T__o v91; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4CB64EA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C6BA08(&EventTutorialMaster_TypeInfo);
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__0__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__3__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__1__);
    sub_1C6BA08(&Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__2__);
    sub_1C6BA08(&EventTutorialMaster___c__DisplayClass13_1_TypeInfo);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)sub_1C6BA08(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CB64EA = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C6BC54(EventTutorialMaster___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass13_0_o *)v6;
      p__8__1 = &v4->fields.__8__1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      args = v4->fields.args;
      *(_QWORD *)&this->fields.__1__state = args;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)args, v10, v11);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      v15 = (Il2CppObject *)v4->fields.__4__this;
      this->fields.__2__current = v15;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v15, v13, v14);
      if ( !*p__8__1 )
        goto LABEL_86;
      if ( !(*p__8__1)->fields.args )
        return 0;
      static_fields = EventTutorialMaster_TypeInfo->static_fields;
      sortedEntityArray = static_fields->sortedEntityArray;
      v4->fields.__7__wrap1 = static_fields->sortedEntityArray;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)sortedEntityArray, v16, v17);
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
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_86;
    if ( v22 >= SLODWORD(_7__wrap1->max_length) )
      break;
    v25 = (Il2CppObject *)sub_1C6BC54(EventTutorialMaster___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v25, 0);
    v4->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass13_1_o *)v25;
    p__8__2 = &v4->fields.__8__2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v25, v27, v28);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v4->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    _8__1 = (struct EventTutorialMaster_EventTutorialArgs_o *)v4->fields.__8__1;
    this->fields.args = _8__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.args, (int32_t)_8__1, v29, v30);
    v34 = v4->fields.__7__wrap1;
    if ( !v34 )
      goto LABEL_86;
    _7__wrap2 = v4->fields.__7__wrap2;
    if ( (unsigned int)_7__wrap2 >= LODWORD(v34->max_length) )
      sub_1C6BC68(this);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v4->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    v36 = v34->m_Items[_7__wrap2];
    *(_QWORD *)&this->fields.__1__state = v36;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v36, v32, v33);
    v38 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_86;
    CS___8__locals1 = v38->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_86;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)EventTutorialMaster__IsOpenCondition(
                                                                  v38->fields.data,
                                                                  CS___8__locals1->fields.args,
                                                                  v37);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v40 = *p__8__2;
      if ( !*p__8__2 )
        goto LABEL_86;
      v41 = v40->fields.CS___8__locals1;
      if ( !v41 )
        goto LABEL_86;
      v42 = v41->fields.args;
      if ( !v42 )
        goto LABEL_86;
      if ( v42->fields.adapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v40->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)EventTutorialEntity__HasBeforeAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v43 = *p__8__2;
          if ( !*p__8__2 )
            goto LABEL_86;
          v44 = v43->fields.CS___8__locals1;
          if ( !v44 )
            goto LABEL_86;
          v45 = v44->fields.args;
          if ( !v45 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v45->fields.adapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v43->fields.data, 0);
          if ( !*p__8__2 )
            goto LABEL_86;
          v46 = (*p__8__2)->fields.CS___8__locals1;
          if ( !v46 )
            goto LABEL_86;
          v47 = v46->fields.args;
          if ( !v47 )
            goto LABEL_86;
          adapter = v47->fields.adapter;
          if ( !adapter )
            goto LABEL_86;
          if ( adapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__0 = v46->fields.__9__0;
            if ( !_9__0 )
            {
              _9__0 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__0,
                (Il2CppObject *)v46,
                Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__0__,
                0);
              v46->fields.__9__0 = _9__0;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v46->fields.__9__0, (int32_t)_9__0, v85, v86);
            }
            v87 = (UnityEngine_WaitWhile_o *)sub_1C6BC54(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v87, _9__0, 0);
            v4->fields.__2__current = (Il2CppObject *)v87;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v87, v89, v90);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
        }
      }
LABEL_36:
      v49 = v4->fields.__8__2;
      if ( !v49 )
        goto LABEL_86;
      v49->fields.isBusy = 1;
      data = v49->fields.data;
      v51 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)v49,
        Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__1__,
        0);
      if ( !data )
        goto LABEL_86;
      EventTutorialEntity__OpenTutorial(data, v51, v52);
      _8__2 = v4->fields.__8__2;
      if ( !_8__2 )
        goto LABEL_86;
      if ( _8__2->fields.isBusy )
      {
        v70 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v70,
          (Il2CppObject *)_8__2,
          Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__2__,
          0);
        v71 = (UnityEngine_WaitWhile_o *)sub_1C6BC54(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v71, v70, 0);
        v4->fields.__2__current = (Il2CppObject *)v71;
        v72 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC(v72, (int32_t)v71, v73, v74);
        v75 = 2;
LABEL_82:
        LODWORD(v72[-1].fields._ThumbnailSpritePath_k__BackingField) = v75;
        return 1;
      }
LABEL_40:
      v53 = _8__2->fields.CS___8__locals1;
      if ( !v53 )
        goto LABEL_86;
      v54 = v53->fields.args;
      if ( !v54 )
        goto LABEL_86;
      if ( v54->fields.afterActionAdapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)_8__2->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)EventTutorialEntity__HasAfterAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v55 = v4->fields.__8__2;
          if ( !v55 )
            goto LABEL_86;
          v56 = v55->fields.CS___8__locals1;
          if ( !v56 )
            goto LABEL_86;
          v57 = v56->fields.args;
          if ( !v57 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v57->fields.afterActionAdapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v55->fields.data, 0);
          v58 = v4->fields.__8__2;
          if ( !v58 )
            goto LABEL_86;
          v59 = v58->fields.CS___8__locals1;
          if ( !v59 )
            goto LABEL_86;
          v60 = v59->fields.args;
          if ( !v60 )
            goto LABEL_86;
          afterActionAdapter = v60->fields.afterActionAdapter;
          if ( !afterActionAdapter )
            goto LABEL_86;
          if ( afterActionAdapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__3 = v59->fields.__9__3;
            if ( !_9__3 )
            {
              _9__3 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__3,
                (Il2CppObject *)v59,
                Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__3__,
                0);
              v59->fields.__9__3 = _9__3;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v59->fields.__9__3, (int32_t)_9__3, v79, v80);
            }
            v81 = (UnityEngine_WaitWhile_o *)sub_1C6BC54(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v81, _9__3, 0);
            v4->fields.__2__current = (Il2CppObject *)v81;
            v72 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C6B9AC(v72, (int32_t)v81, v82, v83);
            v75 = 3;
            goto LABEL_82;
          }
        }
      }
    }
LABEL_54:
    v63 = &v4->fields.__8__2;
    v62 = v4->fields.__8__2;
    if ( !v62 )
      goto LABEL_86;
    v64 = v62->fields.data;
    if ( !v64 )
      goto LABEL_86;
    if ( (v64->fields.flag & 1) != 0 )
    {
      eventId = v64->fields.eventId;
      flagType = v64->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_40694056(flagType, eventId, 0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)NetworkManager__getRequest_object_(
                                                                      0,
                                                                      (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v63 )
          goto LABEL_86;
        v67 = (*v63)->fields.data;
        if ( !v67 || !this )
          goto LABEL_86;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          v67->fields.flagType,
          v67->fields.eventId,
          0);
      }
    }
    v4->fields.__8__2 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
    v22 = v4->fields.__7__wrap2 + 1;
    v4->fields.__7__wrap2 = v22;
  }
  this->klass = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)this, 0, v20, v21);
  if ( !_4__this )
    goto LABEL_86;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)_4__this->fields.openedEventIds;
  if ( !this )
    goto LABEL_86;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v91,
    (System_Collections_Generic_HashSet_int__o *)this,
    (const MethodInfo_36B1B44 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  for ( i = v91;
        System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_35824A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
        EventTutorialMaster__TutorialAfterUpdateQuestTree(_4__this, (int32_t)i.fields._current, v69) )
  {
    ;
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35824A0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)_4__this->fields.openedEventIds;
  if ( !this
    || (System_Collections_Generic_HashSet_int___Clear(
          (System_Collections_Generic_HashSet_int__o *)this,
          (const MethodInfo_36B1650 *)Method_System_Collections_Generic_HashSet_int__Clear__),
        (v76 = v4->fields.__8__1) == 0)
    || (v77 = v76->fields.args) == 0 )
  {
LABEL_86:
    sub_1C6BC60(this, method);
  }
  ActionExtensions__Call(v77->fields.callbackAfter, 0);
  return 0;
}


Il2CppObject *EventTutorialMaster__CoCheckTutorialLocal_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventTutorialMaster__CoCheckTutorialLocal_d__13__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoCheckTutorialLocal_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *EventTutorialMaster__CoCheckTutorialLocal_d__13__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventTutorialMaster__CoCheckTutorialLocal_d__13__System_IDisposable_Dispose(
        EventTutorialMaster__CoCheckTutorialLocal_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void EventTutorialMaster__CoroutineCheckTutorial_d__20___ctor(
        EventTutorialMaster__CoroutineCheckTutorial_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventTutorialMaster__CoroutineCheckTutorial_d__20__MoveNext(
        EventTutorialMaster__CoroutineCheckTutorial_d__20_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w8

  if ( (byte_4CB64EB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB64EB = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v11 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1C6BC60(0, v6);
    v8 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           v7);
    this->fields.__2__current = v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10);
    v11 = 1;
    result = 1;
  }
  this->fields.__1__state = v11;
  return result;
}


Il2CppObject *EventTutorialMaster__CoroutineCheckTutorial_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventTutorialMaster__CoroutineCheckTutorial_d__20__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoroutineCheckTutorial_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *EventTutorialMaster__CoroutineCheckTutorial_d__20__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventTutorialMaster__CoroutineCheckTutorial_d__20__System_IDisposable_Dispose(
        EventTutorialMaster__CoroutineCheckTutorial_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


void EventTutorialMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB64E1 & 1) == 0 )
  {
    sub_1C6BA08(&EventTutorialMaster___c_TypeInfo);
    byte_4CB64E1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventTutorialMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c___OpenTutorialImages_b__29_0(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB64E2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CB64E2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


System_Collections_Generic_IEnumerable_string__o *EventTutorialMaster___c___PlayTutorialSetUpAction_b__39_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(
                                                               x,
                                                               (const MethodInfo *)x);
}


bool EventTutorialMaster___c___TutorialAfterUpdateQuestTree_b__40_2(
        EventTutorialMaster___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.type == 113;
}


int32_t EventTutorialMaster___c___preProcess_b__8_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return -x->fields.priority;
}


int32_t EventTutorialMaster___c___preProcess_b__8_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.eventId;
}


void EventTutorialMaster___c__DisplayClass11_0___ctor(
        EventTutorialMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass11_0___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass11_0_o *v2; // x19
  struct EventTutorialMaster_o *_4__this; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-28h]

  v2 = this;
  if ( (byte_4CB64E3 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CB64E3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass11_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1C6BC60(this, method);
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


void EventTutorialMaster___c__DisplayClass11_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass11_0_o *v2; // x19
  struct EventTutorialMaster_o *_4__this; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-28h]

  v2 = this;
  if ( (byte_4CB64E4 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CB64E4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass11_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1C6BC60(this, method);
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


void EventTutorialMaster___c__DisplayClass12_0___ctor(
        EventTutorialMaster___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass12_1___ctor(
        EventTutorialMaster___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass12_1___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass12_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass12_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8
  struct EventTutorialMaster___c__DisplayClass12_0_o *v6; // x8
  const MethodInfo *v7; // [xsp+10h] [xbp-30h]

  v2 = this;
  if ( (byte_4CB64E5 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass12_1_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CB64E5 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  EventTutorialMaster__checkTutorial_42404764(
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


void EventTutorialMaster___c__DisplayClass12_1___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass12_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass12_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8
  struct EventTutorialMaster___c__DisplayClass12_0_o *v6; // x8
  const MethodInfo *v7; // [xsp+10h] [xbp-30h]

  v2 = this;
  if ( (byte_4CB64E6 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass12_1_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CB64E6 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  EventTutorialMaster__checkTutorial_42404764(
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


void EventTutorialMaster___c__DisplayClass13_0___ctor(
        EventTutorialMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass13_0___CoCheckTutorialLocal_b__0(
        EventTutorialMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8

  args = this->fields.args;
  if ( !args || (adapter = args->fields.adapter) == 0 )
    sub_1C6BC60(this, method);
  return adapter->fields._IsPerformanceBusy_k__BackingField;
}


bool EventTutorialMaster___c__DisplayClass13_0___CoCheckTutorialLocal_b__3(
        EventTutorialMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8

  args = this->fields.args;
  if ( !args || (afterActionAdapter = args->fields.afterActionAdapter) == 0 )
    sub_1C6BC60(this, method);
  return afterActionAdapter->fields._IsPerformanceBusy_k__BackingField;
}


void EventTutorialMaster___c__DisplayClass13_1___ctor(
        EventTutorialMaster___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass13_1___CoCheckTutorialLocal_b__1(
        EventTutorialMaster___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass13_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8

  v2 = this;
  if ( (byte_4CB64E7 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass13_1_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CB64E7 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass13_1_o *)_4__this->fields.openedEventIds) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    data->fields.eventId,
    (const MethodInfo_36B21C0 *)Method_System_Collections_Generic_HashSet_int__Add__);
  v2->fields.isBusy = 0;
}


bool EventTutorialMaster___c__DisplayClass13_1___CoCheckTutorialLocal_b__2(
        EventTutorialMaster___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventTutorialMaster___c__DisplayClass25_0___ctor(
        EventTutorialMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass25_0___GetAvailableTutorialArray_b__0(
        EventTutorialMaster___c__DisplayClass25_0_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, method);
}


void EventTutorialMaster___c__DisplayClass31_0___ctor(
        EventTutorialMaster___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass31_0___showTutorialWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
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


void EventTutorialMaster___c__DisplayClass33_0___ctor(
        EventTutorialMaster___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass33_0___tutorialChainWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  EventTutorialMaster__tutorialChainWithoutCheck(
    _4__this,
    this->fields.tutoList,
    this->fields.index + 1,
    this->fields.callback,
    v2);
}


void EventTutorialMaster___c__DisplayClass40_0___ctor(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass40_0___TutorialAfterUpdateQuestTree_b__0(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass40_0_o *v4; // x20

  v4 = this;
  if ( (byte_4CB64E8 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass40_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4CB64E8 = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass40_0_o *)v4->fields.contTypeArray) == 0 )
    sub_1C6BC60(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.condType,
           (const MethodInfo_36B16B0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass40_0___TutorialAfterUpdateQuestTree_b__1(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.condId == this->fields.eventId;
}


bool EventTutorialMaster___c__DisplayClass40_0___TutorialAfterUpdateQuestTree_b__3(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass40_0_o *v4; // x20

  v4 = this;
  if ( (byte_4CB64E9 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass40_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4CB64E9 = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass40_0_o *)v4->fields.contTypeArray) == 0 )
    sub_1C6BC60(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.type,
           (const MethodInfo_36B16B0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass40_0___TutorialAfterUpdateQuestTree_b__4(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.targetId == this->fields.eventId;
}


void EventTutorialMaster___c__DisplayClass40_1___ctor(
        EventTutorialMaster___c__DisplayClass40_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass40_1___TutorialAfterUpdateQuestTree_b__5(
        EventTutorialMaster___c__DisplayClass40_1_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  struct CommonReleaseEntity_o *targetCommonEnt; // x8

  if ( !x || (targetCommonEnt = this->fields.targetCommonEnt) == 0 )
    sub_1C6BC60(this, x);
  return x->fields.targetId == targetCommonEnt->fields.id;
}