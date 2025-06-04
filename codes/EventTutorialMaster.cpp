void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B0221F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method);
    byte_4B0221F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  __int64 v17; // x1
  EventTutorialMaster_o *v18; // x26
  const MethodInfo *isEventIdOneOrMore; // [xsp+8h] [xbp-68h]
  const MethodInfo *v20; // [xsp+10h] [xbp-60h]

  if ( (byte_4B02209 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    byte_4B02209 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  v18 = Master_object;
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
    sub_1BC3264(Master_object, v17);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v18 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_41167320(
    v18,
    (System_Collections_Generic_List_int__o *)Master_object,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    0,
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
  __int64 v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v20; // w9
  EventTutorialMaster_o *v21; // x26
  const MethodInfo *isEventIdOneOrMore; // [xsp+8h] [xbp-68h]
  const MethodInfo *v23; // [xsp+10h] [xbp-60h]

  v14 = eventId;
  if ( (byte_4B0220A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v16);
    *(_QWORD *)&eventId = sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v17);
    byte_4B0220A = 1;
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
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        isEventIdOneOrMore);
      return;
    }
LABEL_13:
    sub_1BC3264(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v21 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_41167320(
    v21,
    *(System_Collections_Generic_List_int__o **)&eventId,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    0,
    v23);
}


void __fastcall EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4B0220B & 1) == 0 )
  {
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v1);
    method = (const MethodInfo *)sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v2);
    byte_4B0220B = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1BC3264(method, v1);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B02205 & 1) == 0 )
  {
    sub_1BC3008(&EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo, args);
    byte_4B02205 = 1;
  }
  v4 = sub_1BC3254(EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = args;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)args, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B0220C & 1) == 0 )
  {
    sub_1BC3008(&EventTutorialMaster__CoroutineCheckTutorial_d__15_TypeInfo, method);
    byte_4B0220C = 1;
  }
  v3 = sub_1BC3254(EventTutorialMaster__CoroutineCheckTutorial_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = args;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)args, v4, v5);
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
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  if ( (byte_4B0221C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B0221C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v15);
  }
  return EventTutorialMaster__getAvailableEventTutorialEntitys(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKinds,
           qId,
           bPhase,
           bWave,
           bTurn,
           v16);
}


EventTutorialEntity_array *__fastcall EventTutorialMaster__GetAvailableTutorialArray(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4B02211 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v3);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v4);
    sub_1BC3008(&System_Func_EventTutorialEntity__bool__TypeInfo, v5);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass20_0__GetAvailableTutorialArray_b__0__, v6);
    sub_1BC3008(&EventTutorialMaster___c__DisplayClass20_0_TypeInfo, v7);
    byte_4B02211 = 1;
  }
  v8 = sub_1BC3254(EventTutorialMaster___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_QWORD *)(v8 + 16) = args;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)args, v11, v12);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v14 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_EventTutorialMaster___c__DisplayClass20_0__GetAvailableTutorialArray_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v15,
                                        (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_4B02220 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B02220 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, 0LL);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32B3B28 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4B0221A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B0221A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v9);
  }
  return EventTutorialMaster__getEventTutorialEntity(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           targetIds,
           v10);
}


System_Collections_Generic_List_int__o *__fastcall EventTutorialMaster__GetOpenEventIds(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 id; // x1
  EventEntity_array *EnableEntityList; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x2
  int max_length; // w8
  unsigned int v12; // w21
  EventEntity_o *v13; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4B02219 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B02219 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BC326C(Instance, id, v10);
      v13 = EnableEntityList->m_Items[v12];
      if ( !v13 )
        break;
      if ( !v9 )
        break;
      id = (unsigned int)v13->fields.id;
      items = v9->fields._items;
      v15 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          id,
          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = EnableEntityList->max_length;
      if ( (int)++v12 >= max_length )
        return v9;
    }
LABEL_17:
    sub_1BC3264(Instance, id);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialMaster__IsAvailableWithTargetId(
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
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w27
  int32_t v19; // w28
  bool v20; // w20
  EventTutorialEntity_o *Item; // x0
  int32_t v22; // w8
  EventTutorialEntity_o *v23; // x29
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v25; // x3

  if ( (byte_4B02208 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v15);
    byte_4B02208 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v22 = Item->fields.eventId, v23 = Item, (v22 & 0x80000000) == 0) && v22 != eventId
        || Item->fields.openType != openKind
        || (Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(Item, 0LL),
            !EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, targetId, v25))
        || !EventTutorialEntity__isOpenCondition(v23, qId, bPhase, bWave, bTurn, 0LL) )
      {
        v20 = ++v19 < v18;
        if ( v18 != v19 )
          continue;
      }
      return v20;
    }
LABEL_17:
    sub_1BC3264(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall EventTutorialMaster__IsOpenCondition(
        EventTutorialEntity_o *data,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  EventTutorialEntity_o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EventIds; // x0
  _BOOL4 v7; // w21
  _BOOL4 v8; // w8

  v4 = data;
  if ( (byte_4B02212 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, args);
    data = (EventTutorialEntity_o *)sub_1BC3008(
                                      &Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___,
                                      v5);
    byte_4B02212 = 1;
  }
  if ( !v4 )
    goto LABEL_17;
  if ( (v4->fields.eventId & 0x80000000) == 0 )
  {
    if ( args )
    {
      EventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_EventTutorialArgs__get_EventIds(
                                                                        args,
                                                                        (const MethodInfo *)args);
      v7 = System_Linq_Enumerable__Contains_int_(
             EventIds,
             v4->fields.eventId,
             (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_9;
    }
LABEL_17:
    sub_1BC3264(data, args);
  }
  if ( !args )
    goto LABEL_17;
  v7 = 1;
LABEL_9:
  if ( v4->fields.openType == args->fields.openKind )
    v8 = 1;
  else
    v8 = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)args->fields.openKindArray, 0LL)
      && System_Linq_Enumerable__Contains_Int32Enum_(
           (System_Collections_Generic_IEnumerable_TSource__o *)args->fields.openKindArray,
           v4->fields.openType,
           (const MethodInfo_301AF38 *)Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
  return v8
      && v7
      && EventTutorialEntity__isOpenCondition(
           v4,
           args->fields.qId,
           args->fields.bPhase,
           args->fields.bWave,
           args->fields.bTurn,
           0LL);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  if ( (byte_4B0220E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B0220E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v15);
  }
  return EventTutorialMaster__isTutorialAvailable(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           qId,
           bPhase,
           bWave,
           bTurn,
           v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialMaster__IsTutorialAvailableWithTargetId(
        int32_t eventId,
        int32_t openKind,
        int32_t targetId,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  __int64 v15; // x1
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B0220F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B0220F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v17);
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
           v19);
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
  __int64 v17; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B0220D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B0220D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v17);
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
           v19);
}


void __fastcall EventTutorialMaster__OpenTutorialImages(System_Int32_array *imageIds, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  EventTutorialMaster___c_c *v10; // x8
  System_Action_o *_9__23_0; // x21
  Il2CppObject *v12; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B02214 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BC3008(&Method_EventTutorialMaster___c__OpenTutorialImages_b__23_0__, v5);
    sub_1BC3008(&EventTutorialMaster___c_TypeInfo, v6);
    byte_4B02214 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    v10 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v10 = EventTutorialMaster___c_TypeInfo;
    }
    _9__23_0 = v10->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventTutorialMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__23_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(_9__23_0, v12, Method_EventTutorialMaster___c__OpenTutorialImages_b__23_0__, 0LL);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = _9__23_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v14, v15);
    }
    if ( !v9 )
LABEL_15:
      sub_1BC3264(Instance, v8);
    CommonUI__OpenTutorialImageDialog_30757476(v9, imageIds, -1, 0, _9__23_0, 0LL, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__PlayTutorialSetUpAction(
        EventTutorialMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  int32_t WarId_k__BackingField; // w20
  __int64 v4; // x1
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
  System_Array_o *v15; // x0
  System_Array_o *v16; // x21
  __int64 v17; // x19
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  QuestAfterAction_o *EventID; // x0
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  EventTutorialMaster___c_c *v28; // x8
  EventTutorialEntity_array *v29; // x19
  System_Func_object__object__o *_9__33_0; // x20
  Il2CppObject *v31; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_String_array *v36; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v37; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v38; // x0
  __int64 v39; // x2
  System_Object_array *v40; // x20
  TerminalPramsManager_c *v41; // x0
  int max_length; // w8
  unsigned int v43; // w25
  EventTutorialEntity_o *v44; // x8
  int32_t flagType; // w21
  int32_t v46; // w22
  System_RuntimeFieldHandle_o v47; // 0:w1.4

  WarId_k__BackingField = mapId;
  if ( (byte_4B0221E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___, *(_QWORD *)&mapId);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1BC3008(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v6);
    sub_1BC3008(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__, v8);
    sub_1BC3008(&EventTutorialMaster_OpenType___TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v10);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305,
      v12);
    sub_1BC3008(&Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__33_0__, v13);
    sub_1BC3008(&EventTutorialMaster___c_TypeInfo, v14);
    byte_4B0221E = 1;
  }
  if ( WarId_k__BackingField < 1 )
  {
    v17 = sub_1BC3254(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC524 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v24);
      byte_4AFC524 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v25->static_fields->_WarId_k__BackingField, 0LL);
    if ( !v17 )
      goto LABEL_50;
    *(_DWORD *)(v17 + 16) = (_DWORD)EventID;
    *(_DWORD *)(v17 + 20) = 18;
    if ( !byte_4AFC524 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v21);
      byte_4AFC524 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v26->static_fields->_WarId_k__BackingField;
  }
  else
  {
    v15 = (System_Array_o *)sub_1BC30B0(EventTutorialMaster_OpenType___TypeInfo, 3LL);
    v47.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v16 = v15;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v15, v47, 0LL);
    v17 = sub_1BC3254(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC524 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v18);
      byte_4AFC524 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v19->static_fields->_WarId_k__BackingField, 0LL);
    if ( !v17 )
      goto LABEL_50;
    *(_DWORD *)(v17 + 16) = (_DWORD)EventID;
    *(_QWORD *)(v17 + 24) = v16;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v16, v22, v23);
  }
  *(_DWORD *)(v17 + 40) = WarId_k__BackingField;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v17,
                             v21);
  v28 = EventTutorialMaster___c_TypeInfo;
  v29 = AvailableTutorialArray;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v28 = EventTutorialMaster___c_TypeInfo;
  }
  _9__33_0 = (System_Func_object__object__o *)v28->static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = EventTutorialMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__33_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__33_0,
      v31,
      Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__33_0__,
      0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__33_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__33_0,
                                                               (const MethodInfo_3038834 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v36 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v35,
                                 (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_string___);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v37 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                EventID,
                                                                                v36,
                                                                                0LL);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v38 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(EventID, v37, 0LL);
  v40 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
          (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFF4D3 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v21);
    byte_4AFF4D3 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  EventID = (QuestAfterAction_o *)v41->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( EventID )
    System_Collections_Generic_HashSet_object___Clear(
      (System_Collections_Generic_HashSet_T__o *)EventID,
      (const MethodInfo_355E940 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
  if ( !v29 )
    goto LABEL_50;
  max_length = v29->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
        sub_1BC326C(EventID, v21, v39);
      v44 = v29->m_Items[v43];
      if ( !v44 )
        break;
      v46 = v44->fields.eventId;
      flagType = v44->fields.flagType;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__SetForcePlayEventTutorialArray(v46, flagType, 0LL);
      max_length = v29->max_length;
      if ( (int)++v43 >= max_length )
        goto LABEL_48;
    }
LABEL_50:
    sub_1BC3264(EventID, v21);
  }
LABEL_48:
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  QuestAfterAction__PlaySpecifiedActionInstantly(EventID, (QuestAfterAction_Command_array *)v40, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4B02210 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B02210 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v9);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_41173716(
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
  __int64 v17; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4B02215 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B02215 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v17);
  }
  EventTutorialMaster__showTutorialWithoutCheck_41173916(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    qId,
    bPhase,
    bWave,
    bTurn,
    v18);
}


bool __fastcall EventTutorialMaster__TryGetEntity(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B02221 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__, entity);
    byte_4B02221 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4B02217 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B02217 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v7);
  }
  EventTutorialMaster__tutorialChainWithoutCheck((EventTutorialMaster_o *)Instance, tutoList, 0, callback, v8);
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
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x2
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v39; // x8
  unsigned __int64 v40; // x27
  EventTutorialEntity_o *v41; // x20
  _BOOL8 v42; // x0
  __int64 v43; // x1
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v46; // x3
  int32_t v47; // w8
  const MethodInfo *v48; // x3
  int32_t flagType; // w22
  int32_t v50; // w23
  System_Action_o *v51; // x22
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x8
  System_Action_o *v58; // x22
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B02203 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v23);
    sub_1BC3008(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v24);
    sub_1BC3008(&NetworkManager_TypeInfo, v25);
    sub_1BC3008(&TutorialFlag_TypeInfo, v26);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__, v27);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__, v28);
    sub_1BC3008(&EventTutorialMaster___c__DisplayClass6_0_TypeInfo, v29);
    byte_4B02203 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v30 = sub_1BC3254(EventTutorialMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_54;
  *(_QWORD *)(v30 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 16), (int32_t)this, v33, v34);
  *(_QWORD *)(v30 + 32) = callbackAfter;
  *(_DWORD *)(v30 + 24) = eventId;
  *(_DWORD *)(v30 + 28) = openKind;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)callbackAfter, v35, v36);
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
      sub_1BC326C(checkedEntityList, v32, v37);
    v41 = sortedEntityArray->m_Items[v40];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v61,
        checkedEntityList,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v62 = v61;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v62,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v42 )
          break;
        if ( !v41 )
          sub_1BC3264(v42, v43);
        if ( !v62.fields._current )
          sub_1BC3264(v42, v43);
        if ( v41->fields.eventId == LODWORD(v62.fields._current[1].klass)
          && v41->fields.flagType == HIDWORD(v62.fields._current[1].klass)
          && v41->fields.num == LODWORD(v62.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v62,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v62,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v41 )
      goto LABEL_54;
    flag = v41->fields.flag;
    if ( v41->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v41, 0LL);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v30 + 40),
                                                                       v46);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_35:
    LODWORD(v39) = sortedEntityArray->max_length;
    if ( (__int64)++v40 >= (int)v39 )
      goto LABEL_39;
  }
  v47 = v41->fields.eventId;
  if ( (v47 & 0x80000000) == 0 && v47 != *(_DWORD *)(v30 + 24)
    || v41->fields.openType != *(_DWORD *)(v30 + 28)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v41,
                                                                           *(_DWORD *)(v30 + 40),
                                                                           *(_DWORD *)(v30 + 44),
                                                                           *(_DWORD *)(v30 + 48),
                                                                           *(_DWORD *)(v30 + 52),
                                                                           0LL),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
    if ( v41->fields.flag == 1 )
    {
      flagType = v41->fields.flagType;
      v50 = *(_DWORD *)(v30 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_39502436(flagType, v50, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
      v51 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)v30,
        Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v30 + 64) = v51;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 64), (int32_t)v51, v52, v53);
    }
    EventTutorialEntity__OpenTutorial(v41, v51, 0LL);
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
    sub_1BC3264(checkedEntityList, v32);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v41,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v57[4] = (Il2CppClass *)v41;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v41, v37, v48);
  }
  v58 = *(System_Action_o **)(v30 + 56);
  if ( !v58 )
  {
    v58 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v58,
      (Il2CppObject *)v30,
      Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v30 + 56) = v58;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 56), (int32_t)v58, v59, v60);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v41, v58, 0LL);
}


void __fastcall EventTutorialMaster__checkTutorial_41167320(
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
  __int64 v31; // x1
  __int64 v32; // x19
  System_Collections_Generic_List_object__o *checkedEntityList; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_object__o **v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v44; // x8
  unsigned __int64 v45; // x29
  EventTutorialEntity_o *v46; // x20
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  int32_t eventId; // w23
  int32_t flagType; // w24
  System_Action_o *v55; // x22
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  System_Action_o *v62; // x22
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B02204 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, checkEventIds);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v21);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v25);
    sub_1BC3008(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v26);
    sub_1BC3008(&NetworkManager_TypeInfo, v27);
    sub_1BC3008(&TutorialFlag_TypeInfo, v28);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__, v29);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__, v30);
    sub_1BC3008(&EventTutorialMaster___c__DisplayClass7_0_TypeInfo, v31);
    byte_4B02204 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v32 = sub_1BC3254(EventTutorialMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_56;
  *(_QWORD *)(v32 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 16), (int32_t)this, v35, v36);
  *(_QWORD *)(v32 + 24) = checkEventIds;
  v37 = (System_Collections_Generic_List_object__o **)(v32 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 24), (int32_t)checkEventIds, v38, v39);
  *(_QWORD *)(v32 + 40) = callbackAfter;
  *(_DWORD *)(v32 + 32) = openKind;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 40), (int32_t)callbackAfter, v40, v41);
  *(_DWORD *)(v32 + 48) = qId;
  *(_DWORD *)(v32 + 52) = bPhase;
  *(_DWORD *)(v32 + 56) = bWave;
  *(_DWORD *)(v32 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_56;
  v44 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v44 < 1 )
  {
LABEL_41:
    ActionExtensions__Call(*(System_Action_o **)(v32 + 40), 0LL);
    return;
  }
  v45 = 0LL;
  while ( 1 )
  {
    if ( v45 >= (unsigned int)v44 )
      sub_1BC326C(checkedEntityList, v34, v42);
    v46 = sortedEntityArray->m_Items[v45];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_56;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v65,
        checkedEntityList,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v66 = v65;
      while ( 1 )
      {
        v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v66,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v47 )
          break;
        if ( !v46 )
          sub_1BC3264(v47, v48);
        if ( !v66.fields._current )
          sub_1BC3264(v47, v48);
        if ( v46->fields.eventId == LODWORD(v66.fields._current[1].klass)
          && v46->fields.flagType == HIDWORD(v66.fields._current[1].klass)
          && v46->fields.num == LODWORD(v66.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v66,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_37;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v66,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v46 )
      goto LABEL_56;
    flag = v46->fields.flag;
    if ( v46->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v46, 0LL);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v32 + 48),
                                                                       v51);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_37:
    LODWORD(v44) = sortedEntityArray->max_length;
    if ( (__int64)++v45 >= (int)v44 )
      goto LABEL_41;
  }
  if ( isEventIdOneOrMore || (v46->fields.eventId & 0x80000000) == 0 )
  {
    checkedEntityList = *v37;
    if ( !*v37 )
      goto LABEL_56;
    checkedEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Contains(
                                                                       (System_Collections_Generic_List_int__o *)checkedEntityList,
                                                                       v46->fields.eventId,
                                                                       (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      goto LABEL_60;
  }
  if ( v46->fields.openType != *(_DWORD *)(v32 + 32)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v46,
                                                                           *(_DWORD *)(v32 + 48),
                                                                           *(_DWORD *)(v32 + 52),
                                                                           *(_DWORD *)(v32 + 56),
                                                                           *(_DWORD *)(v32 + 60),
                                                                           0LL),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
LABEL_60:
    if ( v46->fields.flag == 1 )
    {
      eventId = v46->fields.eventId;
      flagType = v46->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_39502436(
                                                                         flagType,
                                                                         eventId,
                                                                         0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_56;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v46->fields.flagType,
          v46->fields.eventId,
          0LL);
      }
    }
    goto LABEL_37;
  }
  if ( flag != 2 && !notSave )
  {
    v55 = *(System_Action_o **)(v32 + 72);
    if ( !v55 )
    {
      v55 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v55,
        (Il2CppObject *)v32,
        Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v32 + 72) = v55;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 72), (int32_t)v55, v56, v57);
    }
    EventTutorialEntity__OpenTutorial(v46, v55, 0LL);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v59 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_56:
    sub_1BC3264(checkedEntityList, v34);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v46,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v61[4] = (Il2CppClass *)v46;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v46, v42, v52);
  }
  v62 = *(System_Action_o **)(v32 + 64);
  if ( !v62 )
  {
    v62 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v62,
      (Il2CppObject *)v32,
      Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v32 + 64) = v62;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 64), (int32_t)v62, v63, v64);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v46, v62, 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x10
  EventTutorialMaster_o *v18; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v20; // x8
  System_Collections_Generic_List_object__o *v21; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  int max_length; // w8
  unsigned int v24; // w19
  EventTutorialEntity_o *v25; // x27
  int32_t v26; // w8
  unsigned int v27; // w28
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v29; // x9

  if ( (byte_4B0221D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v11);
    sub_1BC3008(&int___TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14);
    this = (EventTutorialMaster_o *)sub_1BC3008(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15);
    byte_4B0221D = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1BC30B0(int___TypeInfo, openKinds->max_length);
  v17 = *(_QWORD *)&openKinds->max_length;
  v18 = this;
  if ( (int)v17 >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v20 = 0LL;
      while ( v20 < MasterName_k__BackingField_low )
      {
        *(&this->fields.revision + v20++) = 0;
        if ( (__int64)v20 >= (int)v17 )
          goto LABEL_9;
      }
LABEL_27:
      sub_1BC326C(this, *(_QWORD *)&eventId, v16);
    }
LABEL_28:
    sub_1BC3264(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v21 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
        goto LABEL_27;
      v25 = sortedEntityArray->m_Items[v24];
      if ( !v25 )
        goto LABEL_28;
      v26 = v25->fields.eventId;
      if ( (v26 & 0x80000000) != 0 || v26 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_Int32Enum_(
                                          (System_Int32Enum_array *)openKinds,
                                          v25->fields.openType,
                                          (const MethodInfo_3100330 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v27 = (unsigned int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v25, qId, bPhase, bWave, bTurn, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_28;
            if ( v27 >= LODWORD(v18->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v21 )
              goto LABEL_28;
            System_Collections_Generic_List_object___Insert(
              v21,
              *(&v18->fields.revision + v27),
              (Il2CppObject *)v25,
              (const MethodInfo_36A1BF0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v18->fields._MasterName_k__BackingField;
            if ( (int)v27 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v24 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v21;
    }
    v29 = v27;
    while ( (unsigned int)v29 < (unsigned int)MasterName_k__BackingField )
    {
      ++*(&v18->fields.revision + v29++);
      if ( v29 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v21;
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
  System_Collections_Generic_List_object__o *v14; // x22
  struct System_Object_array *IsNullOrEmpty; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v21; // w27
  Il2CppObject *v22; // x23
  EventTutorialEntity_o *v23; // x24
  int32_t v24; // w8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  struct System_String_array *v29; // x8
  __int64 v30; // x28
  unsigned __int64 v31; // x29
  struct System_String_array *v32; // x8
  _QWORD *v33; // x8

  if ( (byte_4B0221B & 1) == 0 )
  {
    sub_1BC3008(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_1BC3008(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    sub_1BC3008(&StringLiteral_15811/*"[]"*/, v12);
    sub_1BC3008(&StringLiteral_15869/*"[{0}]"*/, v13);
    byte_4B0221B = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_15869/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v22 = 0LL;
    if ( !v14 )
      goto LABEL_42;
  }
  else
  {
    v21 = 0;
    v22 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)max_length )
LABEL_43:
        sub_1BC326C(IsNullOrEmpty, v16, v17);
      v23 = sortedEntityArray->m_Items[v21];
      if ( !v23 )
        goto LABEL_42;
      v24 = v23->fields.eventId;
      if ( ((v24 & 0x80000000) != 0 || v24 == eventId) && v23->fields.openType == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
LABEL_14:
          if ( !v14 )
            goto LABEL_42;
          items = v14->fields._items;
          v26 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_42;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)v23,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v23;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v23, v17, v18);
          }
        }
        else
        {
          v29 = v23->fields.targetIds;
          if ( !v29 )
            goto LABEL_42;
          v30 = *(_QWORD *)&v29->max_length;
          if ( !v22 )
          {
            if ( !(_DWORD)v30
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  v29->m_Items[0],
                                                                  (System_String_o *)StringLiteral_15811/*"[]"*/,
                                                                  0LL),
                  v22 = 0LL,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v22 = (Il2CppObject *)v23;
            }
          }
          if ( (int)v30 >= 1 )
          {
            v31 = 0LL;
            while ( 1 )
            {
              v32 = v23->fields.targetIds;
              if ( !v32 )
                break;
              if ( v31 >= v32->max_length )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                              v32->m_Items[v31],
                                                              targetIds,
                                                              0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v30 == ++v31 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1BC3264(IsNullOrEmpty, v16);
          }
        }
      }
LABEL_31:
      max_length = sortedEntityArray->max_length;
      ++v21;
    }
    while ( v21 < max_length );
    if ( !v14 )
      goto LABEL_42;
  }
  if ( v22 && !v14->fields._size )
  {
    IsNullOrEmpty = v14->fields._items;
    v33 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v14->fields._version;
    if ( !IsNullOrEmpty )
      goto LABEL_42;
    if ( IsNullOrEmpty->max_length )
    {
      v14->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v22;
      sub_1BC2FAC((CGThumbnailListItem_o *)IsNullOrEmpty->m_Items, (int32_t)v22, v17, v18);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        v22,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1BC3264(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          sub_1BC326C(this, targets, *(_QWORD *)&targetId);
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
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w26
  int32_t v19; // w27
  bool v20; // w29
  EventTutorialEntity_o *Item; // x0
  int32_t v22; // w8

  if ( (byte_4B02207 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v15);
    byte_4B02207 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v22 = Item->fields.eventId, (v22 & 0x80000000) == 0) && v22 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, 0LL) )
      {
        v20 = ++v19 < v18;
        if ( v18 != v19 )
          continue;
      }
      return v20;
    }
LABEL_16:
    sub_1BC3264(list, *(_QWORD *)&eventId);
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
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w27
  int32_t v20; // w28
  bool v21; // w20
  EventTutorialEntity_o *Item; // x0
  int32_t v23; // w8

  if ( (byte_4B02206 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v16);
    byte_4B02206 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    v21 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        list,
                                        v20,
                                        (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v23 = Item->fields.eventId, (v23 & 0x80000000) != 0) && isChkEventId
        || (v23 & 0x80000000) == 0 && v23 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isEnableCondition(Item, qId, bPhase, bWave, bTurn, 0LL) )
      {
        v21 = ++v20 < v19;
        if ( v19 != v20 )
          continue;
      }
      return v21;
    }
LABEL_18:
    sub_1BC3264(list, *(_QWORD *)&eventId);
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
  EventTutorialMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v17; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  EventTutorialMaster___c_c *v22; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v25; // x21
  struct EventTutorialMaster___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_List_object__o *v33; // x19
  struct EventTutorialMaster_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4B02202 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v5);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v6);
    sub_1BC3008(&System_Func_EventTutorialEntity__int__TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v9);
    sub_1BC3008(&Method_EventTutorialMaster___c__preProcess_b__4_0__, v10);
    sub_1BC3008(&Method_EventTutorialMaster___c__preProcess_b__4_1__, v11);
    sub_1BC3008(&EventTutorialMaster___c_TypeInfo, v12);
    byte_4B02202 = 1;
  }
  v13 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_302D068 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v14 = EventTutorialMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v14 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v14->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = EventTutorialMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v17, Method_EventTutorialMaster___c__preProcess_b__4_0__, 0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderBy_object__int_(
          v15,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v22 = EventTutorialMaster___c_TypeInfo;
  v23 = v21;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v22 = EventTutorialMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v22->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = EventTutorialMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v25, Method_EventTutorialMaster___c__preProcess_b__4_1__, 0LL);
    v26 = EventTutorialMaster___c_TypeInfo->static_fields;
    v26->__9__4_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v26->__9__4_1, (int32_t)_9__4_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_303D9E0 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v30;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventTutorialMaster_TypeInfo->static_fields, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v34 = EventTutorialMaster_TypeInfo->static_fields;
  v34->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v34->checkedEntityList, (int32_t)v33, v35, v36);
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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v20; // w25
  int32_t v21; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B02213 & 1) == 0 )
  {
    sub_1BC3008(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    byte_4B02213 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
        sub_1BC326C(v13, v14, v15);
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
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v14;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v14, v15, v16);
        }
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_17;
    }
LABEL_18:
    sub_1BC3264(v13, v14);
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
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_41173916(
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
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x2
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v30; // w23
  EventTutorialEntity_o *v31; // x21
  int32_t v32; // w8
  System_Action_o *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4B02216 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v17);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass25_0__showTutorialWithoutCheck_b__0__, v18);
    sub_1BC3008(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo, v19);
    byte_4B02216 = 1;
  }
  v20 = sub_1BC3254(EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v20 + 32) = callbackAfter;
  *(_DWORD *)(v20 + 24) = eventId;
  *(_DWORD *)(v20 + 28) = openKind;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)callbackAfter, v25, v26);
  *(_DWORD *)(v20 + 40) = qId;
  *(_DWORD *)(v20 + 44) = bPhase;
  *(_DWORD *)(v20 + 48) = bWave;
  *(_DWORD *)(v20 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1BC3264(isEnableCondition, v22);
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
        sub_1BC326C(isEnableCondition, v22, v27);
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
                              0LL);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_14;
    }
    v33 = *(System_Action_o **)(v20 + 56);
    if ( !v33 )
    {
      v33 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v20,
        Method_EventTutorialMaster___c__DisplayClass25_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v20 + 56) = v33;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 56), (int32_t)v33, v34, v35);
    }
    EventTutorialEntity__OpenTutorial(v31, v33, 0LL);
  }
}


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
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v24; // x20

  if ( (byte_4B02218 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, tutoList);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass27_0__tutorialChainWithoutCheck_b__0__, v11);
    sub_1BC3008(&EventTutorialMaster___c__DisplayClass27_0_TypeInfo, v12);
    byte_4B02218 = 1;
  }
  v13 = sub_1BC3254(EventTutorialMaster___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = tutoList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)tutoList, v18, v19);
  *(_QWORD *)(v13 + 40) = callback;
  *(_DWORD *)(v13 + 32) = index;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 40), (int32_t)callback, v20, v21);
  v14 = *(System_Collections_Generic_List_object__o **)(v13 + 24);
  if ( !v14 )
    goto LABEL_9;
  v22 = *(_DWORD *)(v13 + 32);
  if ( v22 < v14->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v14,
             v22,
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v24 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v13,
      Method_EventTutorialMaster___c__DisplayClass27_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v24, 0LL);
      return;
    }
LABEL_9:
    sub_1BC3264(v14, v15);
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4B02222 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1BC3008(
                                                        &Method_System_Collections_Generic_List_int__ToArray__,
                                                        v3);
    byte_4B02222 = 1;
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
                     (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.eventIds, (int32_t)eventIds, v7, v8);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1BC30B0(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1BC326C(OpenEventIds, v6, v7);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1BC3264(OpenEventIds, v6);
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
  const MethodInfo *v3; // x3
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
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  struct EventTutorialMaster___c__DisplayClass8_0_o **p__8__1; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  int v30; // w8
  struct EventTutorialEntity_o *v31; // x1
  EventTutorialEntity_o **p_data_5__4; // x20
  const MethodInfo *v33; // x2
  struct EventTutorialMaster___c__DisplayClass8_0_o *_8__1; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct EventTutorialMaster___c__DisplayClass8_0_o *v40; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v41; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v42; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v43; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v44; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v45; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass8_1_o *_8__2; // x21
  EventTutorialEntity_o *data_5__4; // x20
  System_Action_o *v49; // x22
  struct EventTutorialMaster___c__DisplayClass8_1_o *v50; // x20
  struct EventTutorialMaster___c__DisplayClass8_0_o *v51; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v52; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v53; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v54; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v55; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v56; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8
  struct EventTutorialEntity_o *v58; // x8
  struct EventTutorialEntity_o **v59; // x20
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *_7__wrap1; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass8_0_o *v64; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v65; // x8
  bool result; // w0
  System_Func_bool__o *v67; // x21
  UnityEngine_WaitWhile_o *v68; // x20
  CGThumbnailListItem_o *v69; // x19
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int v72; // w8
  System_Func_bool__o *_9__3; // x21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  UnityEngine_WaitWhile_o *v76; // x20
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Func_bool__o *_9__0; // x21
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  UnityEngine_WaitWhile_o *v82; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v84; // w2
  const MethodInfo *v85; // x3

  v4 = this;
  if ( (byte_4B02225 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&EventTutorialMaster_TypeInfo, v5);
    sub_1BC3008(&System_Func_bool__TypeInfo, v6);
    sub_1BC3008(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&TutorialFlag_TypeInfo, v9);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__, v10);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__3__, v11);
    sub_1BC3008(&EventTutorialMaster___c__DisplayClass8_0_TypeInfo, v12);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__, v13);
    sub_1BC3008(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__, v14);
    sub_1BC3008(&EventTutorialMaster___c__DisplayClass8_1_TypeInfo, v15);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)sub_1BC3008(&UnityEngine_WaitWhile_TypeInfo, v16);
    byte_4B02225 = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v17 = (Il2CppObject *)sub_1BC3254(EventTutorialMaster___c__DisplayClass8_0_TypeInfo);
      System_Object___ctor(v17, 0LL);
      v4->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass8_0_o *)v17;
      p__8__1 = &v4->fields.__8__1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v17, v19, v20);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_68;
      args = v4->fields.args;
      *(_QWORD *)&this->fields.__1__state = args;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)args, v21, v22);
      if ( !*p__8__1 )
        goto LABEL_68;
      if ( !(*p__8__1)->fields.args )
        return 0;
      static_fields = EventTutorialMaster_TypeInfo->static_fields;
      sortedEntityArray = static_fields->sortedEntityArray;
      v4->fields.__7__wrap1 = static_fields->sortedEntityArray;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)sortedEntityArray, v24, v25);
      v30 = 0;
      v4->fields.__7__wrap2 = 0;
      break;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_26;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_30;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_42;
    default:
      return 0;
  }
  while ( 1 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_68;
    max_length = _7__wrap1->max_length;
    if ( v30 >= max_length )
      break;
    if ( v30 >= (unsigned int)max_length )
      sub_1BC326C(this, method, v28);
    v31 = _7__wrap1->m_Items[v30];
    v4->fields._data_5__4 = v31;
    p_data_5__4 = &v4->fields._data_5__4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._data_5__4, (int32_t)v31, v28, v29);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_68;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialMaster__IsOpenCondition(
                                                                 *p_data_5__4,
                                                                 _8__1->fields.args,
                                                                 v33);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v37 = (Il2CppObject *)sub_1BC3254(EventTutorialMaster___c__DisplayClass8_1_TypeInfo);
      System_Object___ctor(v37, 0LL);
      v4->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass8_1_o *)v37;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v37, v38, v39);
      v40 = v4->fields.__8__1;
      if ( !v40 )
        goto LABEL_68;
      v41 = v40->fields.args;
      if ( !v41 )
        goto LABEL_68;
      if ( v41->fields.adapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)*p_data_5__4;
        if ( !*p_data_5__4 )
          goto LABEL_68;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialEntity__HasBeforeAction(
                                                                     (EventTutorialEntity_o *)this,
                                                                     0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v42 = v4->fields.__8__1;
          if ( !v42 )
            goto LABEL_68;
          v43 = v42->fields.args;
          if ( !v43 )
            goto LABEL_68;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v43->fields.adapter;
          if ( !this )
            goto LABEL_68;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v4->fields._data_5__4, 0LL);
          v44 = v4->fields.__8__1;
          if ( !v44 )
            goto LABEL_68;
          v45 = v44->fields.args;
          if ( !v45 )
            goto LABEL_68;
          adapter = v45->fields.adapter;
          if ( !adapter )
            goto LABEL_68;
          if ( adapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__0 = v44->fields.__9__0;
            if ( !_9__0 )
            {
              _9__0 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__0,
                (Il2CppObject *)v44,
                Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__,
                0LL);
              v44->fields.__9__0 = _9__0;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v44->fields.__9__0, (int32_t)_9__0, v80, v81);
            }
            v82 = (UnityEngine_WaitWhile_o *)sub_1BC3254(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v82, _9__0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v82;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(p__2__current, (int32_t)v82, v84, v85);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
        }
      }
LABEL_26:
      _8__2 = v4->fields.__8__2;
      if ( !_8__2 )
        goto LABEL_68;
      _8__2->fields.isBusy = 1;
      data_5__4 = v4->fields._data_5__4;
      v49 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v49,
        (Il2CppObject *)_8__2,
        Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__,
        0LL);
      if ( !data_5__4 )
        goto LABEL_68;
      EventTutorialEntity__OpenTutorial(data_5__4, v49, 0LL);
      v50 = v4->fields.__8__2;
      if ( !v50 )
        goto LABEL_68;
      if ( v50->fields.isBusy )
      {
        v67 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v67,
          (Il2CppObject *)v50,
          Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__,
          0LL);
        v68 = (UnityEngine_WaitWhile_o *)sub_1BC3254(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v68, v67, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v68;
        v69 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v69, (int32_t)v68, v70, v71);
        v72 = 2;
LABEL_64:
        LODWORD(v69[-1].fields._ThumbnailSpritePath_k__BackingField) = v72;
        return 1;
      }
LABEL_30:
      v51 = v4->fields.__8__1;
      if ( !v51 )
        goto LABEL_68;
      v52 = v51->fields.args;
      if ( !v52 )
        goto LABEL_68;
      if ( v52->fields.afterActionAdapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v4->fields._data_5__4;
        if ( !this )
          goto LABEL_68;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialEntity__HasAfterAction(
                                                                     (EventTutorialEntity_o *)this,
                                                                     0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v53 = v4->fields.__8__1;
          if ( !v53 )
            goto LABEL_68;
          v54 = v53->fields.args;
          if ( !v54 )
            goto LABEL_68;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v54->fields.afterActionAdapter;
          if ( !this )
            goto LABEL_68;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v4->fields._data_5__4, 0LL);
          v55 = v4->fields.__8__1;
          if ( !v55 )
            goto LABEL_68;
          v56 = v55->fields.args;
          if ( !v56 )
            goto LABEL_68;
          afterActionAdapter = v56->fields.afterActionAdapter;
          if ( !afterActionAdapter )
            goto LABEL_68;
          if ( afterActionAdapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__3 = v55->fields.__9__3;
            if ( !_9__3 )
            {
              _9__3 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__3,
                (Il2CppObject *)v55,
                Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__3__,
                0LL);
              v55->fields.__9__3 = _9__3;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v55->fields.__9__3, (int32_t)_9__3, v74, v75);
            }
            v76 = (UnityEngine_WaitWhile_o *)sub_1BC3254(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v76, _9__3, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v76;
            v69 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(v69, (int32_t)v76, v77, v78);
            v72 = 3;
            goto LABEL_64;
          }
        }
      }
LABEL_42:
      v4->fields.__8__2 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
    }
    v59 = &v4->fields._data_5__4;
    v58 = v4->fields._data_5__4;
    if ( !v58 )
      goto LABEL_68;
    if ( v58->fields.flag == 1 )
    {
      eventId = v58->fields.eventId;
      flagType = v58->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_39502436(flagType, eventId, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)NetworkManager__getRequest_object_(
                                                                     0LL,
                                                                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v59 || !this )
          goto LABEL_68;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*v59)->fields.flagType,
          (*v59)->fields.eventId,
          0LL);
      }
    }
    v4->fields._data_5__4 = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._data_5__4, 0, v35, v36);
    v30 = v4->fields.__7__wrap2 + 1;
    v4->fields.__7__wrap2 = v30;
  }
  v4->fields.__7__wrap1 = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)this, 0, v28, v29);
  v64 = v4->fields.__8__1;
  if ( !v64 || (v65 = v64->fields.args) == 0LL )
LABEL_68:
    sub_1BC3264(this, method);
  ActionExtensions__Call(v65->fields.callbackAfter, 0LL);
  return 0;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__8_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__15___ctor(
        EventTutorialMaster__CoroutineCheckTutorial_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__15__MoveNext(
        EventTutorialMaster__CoroutineCheckTutorial_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w8

  if ( (byte_4B02226 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4B02226 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v12 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1BC3264(0LL, v7);
    v9 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           v8);
    this->fields.__2__current = v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11);
    v12 = 1;
    result = 1;
  }
  this->fields.__1__state = v12;
  return result;
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventTutorialMaster__CoroutineCheckTutorial_d__15__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoroutineCheckTutorial_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__15_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__15__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__15__System_IDisposable_Dispose(
        EventTutorialMaster__CoroutineCheckTutorial_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventTutorialMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B02223 & 1) == 0 )
  {
    sub_1BC3008(&EventTutorialMaster___c_TypeInfo, v1);
    byte_4B02223 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventTutorialMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c___OpenTutorialImages_b__23_0(
        EventTutorialMaster___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B02224 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B02224 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


System_Collections_Generic_IEnumerable_string__o *__fastcall EventTutorialMaster___c___PlayTutorialSetUpAction_b__33_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(x, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.eventId;
}


void __fastcall EventTutorialMaster___c__DisplayClass20_0___ctor(
        EventTutorialMaster___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass20_0___GetAvailableTutorialArray_b__0(
        EventTutorialMaster___c__DisplayClass20_0_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, method);
}


void __fastcall EventTutorialMaster___c__DisplayClass25_0___ctor(
        EventTutorialMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass25_0___showTutorialWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
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


void __fastcall EventTutorialMaster___c__DisplayClass27_0___ctor(
        EventTutorialMaster___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass27_0___tutorialChainWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
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
    sub_1BC3264(0LL, method);
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
    sub_1BC3264(0LL, method);
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
  const MethodInfo *v4; // [xsp+10h] [xbp-20h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  EventTutorialMaster__checkTutorial_41167320(
    _4__this,
    this->fields.checkEventIds,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    1,
    0,
    v4);
}


void __fastcall EventTutorialMaster___c__DisplayClass7_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+10h] [xbp-20h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  EventTutorialMaster__checkTutorial_41167320(
    _4__this,
    this->fields.checkEventIds,
    this->fields.openKind,
    this->fields.callbackAfter,
    this->fields.qId,
    this->fields.bPhase,
    this->fields.bWave,
    this->fields.bTurn,
    0,
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
    sub_1BC3264(this, method);
  return adapter->fields._IsPerformanceBusy_k__BackingField;
}


bool __fastcall EventTutorialMaster___c__DisplayClass8_0___CoCheckTutorialLocal_b__3(
        EventTutorialMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8

  args = this->fields.args;
  if ( !args || (afterActionAdapter = args->fields.afterActionAdapter) == 0LL )
    sub_1BC3264(this, method);
  return afterActionAdapter->fields._IsPerformanceBusy_k__BackingField;
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