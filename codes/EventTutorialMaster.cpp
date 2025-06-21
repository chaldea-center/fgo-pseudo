void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_HashSet_int__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1C721 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_4B1C721 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.openedEventIds = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.openedEventIds, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.refreshedWarIds = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.refreshedWarIds, (int32_t)v8, v9, v10);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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

  if ( (byte_4B1C709 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    byte_4B1C709 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1BCB254(Master_object, v17);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v18 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_41326556(
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
  if ( (byte_4B1C70A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&DataManager_TypeInfo, v15);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v16);
    *(_QWORD *)&eventId = sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v17);
    byte_4B1C70A = 1;
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
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1BCB254(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v21 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_41326556(
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

  if ( (byte_4B1C70B & 1) == 0 )
  {
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v1);
    method = (const MethodInfo *)sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v2);
    byte_4B1C70B = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1BCB254(method, v1);
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
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1C705 & 1) == 0 )
  {
    sub_1BCAFF8(&EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo, args);
    byte_4B1C705 = 1;
  }
  v5 = sub_1BCB244(EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 32) = args;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)args, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1C70C & 1) == 0 )
  {
    sub_1BCAFF8(&EventTutorialMaster__CoroutineCheckTutorial_d__18_TypeInfo, method);
    byte_4B1C70C = 1;
  }
  v3 = sub_1BCB244(EventTutorialMaster__CoroutineCheckTutorial_d__18_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = args;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)args, v4, v5);
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

  if ( (byte_4B1C71C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B1C71C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v15);
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

  if ( (byte_4B1C711 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v3);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v4);
    sub_1BCAFF8(&System_Func_EventTutorialEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass23_0__GetAvailableTutorialArray_b__0__, v6);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass23_0_TypeInfo, v7);
    byte_4B1C711 = 1;
  }
  v8 = sub_1BCB244(EventTutorialMaster___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 16) = args;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)args, v11, v12);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_EventTutorialMaster___c__DisplayClass23_0__GetAvailableTutorialArray_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v15,
                                        (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_4B1C722 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B1C722 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, 0LL);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32CC8B8 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
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

  if ( (byte_4B1C71A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1C71A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v9);
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

  if ( (byte_4B1C719 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1C719 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCB25C(Instance, id, v10);
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
          *(const MethodInfo_369CBAC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1BCB254(Instance, id);
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

  if ( (byte_4B1C708 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v15);
    byte_4B1C708 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1BCB254(list, *(_QWORD *)&eventId);
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
  if ( (byte_4B1C712 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, args);
    data = (EventTutorialEntity_o *)sub_1BCAFF8(
                                      &Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___,
                                      v5);
    byte_4B1C712 = 1;
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
             (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_9;
    }
LABEL_17:
    sub_1BCB254(data, args);
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
           (const MethodInfo_3033B78 *)Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
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

  if ( (byte_4B1C70E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B1C70E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v15);
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

  if ( (byte_4B1C70F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1C70F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v17);
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

  if ( (byte_4B1C70D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1C70D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v17);
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
  System_Action_o *_9__26_0; // x21
  Il2CppObject *v12; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B1C714 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__OpenTutorialImages_b__26_0__, v5);
    sub_1BCAFF8(&EventTutorialMaster___c_TypeInfo, v6);
    byte_4B1C714 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    v10 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v10 = EventTutorialMaster___c_TypeInfo;
    }
    _9__26_0 = v10->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventTutorialMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__26_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(_9__26_0, v12, Method_EventTutorialMaster___c__OpenTutorialImages_b__26_0__, 0LL);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = _9__26_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v14, v15);
    }
    if ( !v9 )
LABEL_15:
      sub_1BCB254(Instance, v8);
    CommonUI__OpenTutorialImageDialog_30790248(v9, imageIds, -1, 0, _9__26_0, 0LL, 0LL, 0LL);
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
  System_Func_object__object__o *_9__36_0; // x20
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
  if ( (byte_4B1C71E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___, *(_QWORD *)&mapId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1BCAFF8(&EventTutorialMaster_EventTutorialArgs_TypeInfo, v6);
    sub_1BCAFF8(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__, v8);
    sub_1BCAFF8(&EventTutorialMaster_OpenType___TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v10);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v11);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305,
      v12);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__36_0__, v13);
    sub_1BCAFF8(&EventTutorialMaster___c_TypeInfo, v14);
    byte_4B1C71E = 1;
  }
  if ( WarId_k__BackingField < 1 )
  {
    v17 = sub_1BCB244(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B169E0 )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v24);
      byte_4B169E0 = 1;
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
    if ( !byte_4B169E0 )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v21);
      byte_4B169E0 = 1;
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
    v15 = (System_Array_o *)sub_1BCB0A0(EventTutorialMaster_OpenType___TypeInfo, 3LL);
    v47.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v16 = v15;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v15, v47, 0LL);
    v17 = sub_1BCB244(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B169E0 )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v18);
      byte_4B169E0 = 1;
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
    sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v16, v22, v23);
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
  _9__36_0 = (System_Func_object__object__o *)v28->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = EventTutorialMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__36_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__36_0,
      v31,
      Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__36_0__,
      0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__36_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__36_0,
                                                               (const MethodInfo_30514E0 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v36 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v35,
                                 (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v37 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                EventID,
                                                                                v36,
                                                                                0LL);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v38 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(EventID, v37, 0LL);
  v40 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B199A9 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v21);
    byte_4B199A9 = 1;
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
      (const MethodInfo_35776D0 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
  if ( !v29 )
    goto LABEL_50;
  max_length = v29->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
        sub_1BCB25C(EventID, v21, v39);
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
    sub_1BCB254(EventID, v21);
  }
LABEL_48:
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  QuestAfterAction__PlaySpecifiedActionInstantly(EventID, (QuestAfterAction_Command_array *)v40, 0LL);
}


void __fastcall EventTutorialMaster__RefreshQuestTree(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *releaseEntList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  TerminalSceneComponent_c *v14; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  Il2CppObject *current; // x24
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  MapControl_QuestInfo_o *QuestInfo; // x21
  System_Collections_Generic_HashSet_int__o *refreshedWarIds; // x0
  _BOOL4 IsDisaplayable; // w22
  int32_t monitor; // w23
  int32_t klass_high; // w25
  int64_t klass; // x24
  _BOOL8 IsOpen; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_HashSet_int__o *v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1C720 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, releaseEntList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v13);
    byte_4B1C720 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, releaseEntList);
    byte_4B1676D = 1;
  }
  v14 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v14->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_34;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTerminalList, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) == 0 )
  {
    if ( releaseEntList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)releaseEntList,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
      v32 = v31;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
      {
        current = v32.fields._current;
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !current )
          sub_1BCB254(Instance, v19);
        if ( !Instance )
          sub_1BCB254(0LL, v19);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, (int32_t)current[1].klass, 0LL);
        if ( !QuestInfo )
          break;
        refreshedWarIds = this->fields.refreshedWarIds;
        if ( !refreshedWarIds )
          sub_1BCB254(0LL, v20);
        if ( !System_Collections_Generic_HashSet_int___Contains(
                refreshedWarIds,
                QuestInfo->fields.warId,
                (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
        {
          IsDisaplayable = MapControl_QuestInfo__IsDisaplayable(QuestInfo, 0LL);
          klass_high = HIDWORD(current[1].klass);
          monitor = (int32_t)current[1].monitor;
          klass = (int64_t)current[2].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(klass_high, monitor, klass, 0, 0LL, 0LL);
          if ( IsDisaplayable != IsOpen )
          {
            if ( !mTerminalList )
              sub_1BCB254(IsOpen, v28);
            ScrTerminalListTop__RefreshQuestTree((ScrTerminalListTop_o *)mTerminalList, QuestInfo->fields.warId, 0LL);
            v30 = this->fields.refreshedWarIds;
            if ( !v30 )
              sub_1BCB254(0LL, v29);
            System_Collections_Generic_HashSet_int___Add(
              v30,
              QuestInfo->fields.warId,
              (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v32,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
      return;
    }
LABEL_34:
    sub_1BCB254(v14, releaseEntList);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        bool conditionNone,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4B1C710 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1C710 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v11);
  }
  EventTutorialMaster__showTutorialWithoutCheck(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    conditionNone,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_41333436(
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

  if ( (byte_4B1C715 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1C715 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v17);
  }
  EventTutorialMaster__showTutorialWithoutCheck_41333636(
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

  if ( (byte_4B1C723 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__, entity);
    byte_4B1C723 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__TutorialAfterUpdateQuestTree(
        EventTutorialMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x20
  AvalonSceneManager_o *Instance; // x0
  __int64 v36; // x1
  System_String_o *NowSceneName; // x21
  System_String_o *SceneName; // x0
  AvalonSceneManager_o *v39; // x25
  System_Collections_Generic_HashSet_int__o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_IEnumerable_TSource__o *dicRootComponent; // x22
  System_Func_object__bool__o *v44; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x22
  System_Func_object__bool__o *v46; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_List_object__o *v48; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x22
  EventTutorialMaster___c_c *v50; // x0
  System_Func_object__bool__o *_9__37_2; // x24
  Il2CppObject *v52; // x25
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x22
  __int64 v58; // x23
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t current; // w1
  System_Func_object__bool__o *v64; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v66; // x1
  const MethodInfo *v67; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x21
  System_Func_object__bool__o *v69; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x21
  System_Func_object__bool__o *v71; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v73; // x0
  const MethodInfo *v74; // x2
  AvalonSceneManager_o *v75; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1C71F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__getEntityList__, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__, v15);
    sub_1BCAFF8(&System_Func_QuestReleaseEntity__bool__TypeInfo, v16);
    sub_1BCAFF8(&System_Func_CommonReleaseEntity__bool__TypeInfo, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Clear__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v20);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__, v22);
    sub_1BCAFF8(&SceneList_TypeInfo, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__37_2__, v25);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__0__, v26);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__1__, v27);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__3__, v28);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__4__, v29);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass37_0_TypeInfo, v30);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass37_1__TutorialAfterUpdateQuestTree_b__5__, v31);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass37_1_TypeInfo, v32);
    sub_1BCAFF8(&EventTutorialMaster___c_TypeInfo, v33);
    byte_4B1C71F = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v34 = sub_1BCB244(EventTutorialMaster___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_28;
  *(_DWORD *)(v34 + 24) = eventId;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  NowSceneName = AvalonSceneManager__getNowSceneName(Instance, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(34, 0LL);
  if ( !System_String__op_Inequality(NowSceneName, SceneName, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( this->fields.refreshedWarIds )
    {
      v39 = Instance;
      System_Collections_Generic_HashSet_int___Clear(
        this->fields.refreshedWarIds,
        (const MethodInfo_35712AC *)Method_System_Collections_Generic_HashSet_int__Clear__);
      v40 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v40,
        (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v40 )
      {
        System_Collections_Generic_HashSet_int___Add(
          v40,
          119,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v40,
          170,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v40,
          63,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v40,
          238,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
        *(_QWORD *)(v34 + 16) = v40;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 16), (int32_t)v40, v41, v42);
        Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( Instance )
        {
          dicRootComponent = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.dicRootComponent;
          v44 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v44,
            (Il2CppObject *)v34,
            Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__0__,
            0LL);
          v45 = System_Linq_Enumerable__Where_object_(
                  dicRootComponent,
                  (System_Func_TSource__bool__o *)v44,
                  (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          v46 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v46,
            (Il2CppObject *)v34,
            Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__1__,
            0LL);
          v47 = System_Linq_Enumerable__Where_object_(
                  v45,
                  (System_Func_TSource__bool__o *)v46,
                  (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                               v47,
                                               (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
          if ( v39 )
          {
            v48 = (System_Collections_Generic_List_object__o *)Instance;
            v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v39->fields.dicRootComponent;
            v50 = EventTutorialMaster___c_TypeInfo;
            if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
              v50 = EventTutorialMaster___c_TypeInfo;
            }
            v75 = v39;
            _9__37_2 = (System_Func_object__bool__o *)v50->static_fields->__9__37_2;
            if ( !_9__37_2 )
            {
              if ( !v50->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v50);
                v50 = EventTutorialMaster___c_TypeInfo;
              }
              v52 = (Il2CppObject *)v50->static_fields->__9;
              _9__37_2 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__37_2,
                v52,
                Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__37_2__,
                0LL);
              static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
              static_fields->__9__37_2 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__37_2;
              sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__37_2, (int32_t)_9__37_2, v54, v55);
            }
            v56 = System_Linq_Enumerable__Where_object_(
                    v49,
                    (System_Func_TSource__bool__o *)_9__37_2,
                    (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
            Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                                 v56,
                                                 (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
            if ( v48 )
            {
              v57 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v76,
                v48,
                (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
              v77 = v76;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v77,
                        (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__) )
              {
                v58 = sub_1BCB244(EventTutorialMaster___c__DisplayClass37_1_TypeInfo);
                System_Object___ctor((Il2CppObject *)v58, 0LL);
                if ( !v58 )
                  sub_1BCB254(v59, v60);
                current = (int32_t)v77.fields._current;
                *(_QWORD *)(v58 + 16) = v77.fields._current;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v58 + 16), current, v61, v62);
                v64 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestReleaseEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v64,
                  (Il2CppObject *)v58,
                  Method_EventTutorialMaster___c__DisplayClass37_1__TutorialAfterUpdateQuestTree_b__5__,
                  0LL);
                v65 = System_Linq_Enumerable__Where_object_(
                        v57,
                        (System_Func_TSource__bool__o *)v64,
                        (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
                v66 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v65,
                                                                                 (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
                EventTutorialMaster__RefreshQuestTree(this, v66, v67);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v77,
                (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
              v68 = (System_Collections_Generic_IEnumerable_TSource__o *)v75->fields.dicRootComponent;
              v69 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v69,
                (Il2CppObject *)v34,
                Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__3__,
                0LL);
              v70 = System_Linq_Enumerable__Where_object_(
                      v68,
                      (System_Func_TSource__bool__o *)v69,
                      (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v71 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v71,
                (Il2CppObject *)v34,
                Method_EventTutorialMaster___c__DisplayClass37_0__TutorialAfterUpdateQuestTree_b__4__,
                0LL);
              v72 = System_Linq_Enumerable__Where_object_(
                      v70,
                      (System_Func_TSource__bool__o *)v71,
                      (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v73 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                               v72,
                                                                               (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
              EventTutorialMaster__RefreshQuestTree(this, v73, v74);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1BCB254(Instance, v36);
  }
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

  if ( (byte_4B1C717 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1C717 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x20
  System_Collections_Generic_HashSet_int__o *openedEventIds; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v44; // x8
  unsigned __int64 v45; // x28
  EventTutorialEntity_o *v46; // x22
  _BOOL8 v47; // x0
  __int64 v48; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v51; // x3
  int32_t v52; // w8
  const MethodInfo *v53; // x3
  int32_t flagType; // w23
  int32_t v55; // w24
  const MethodInfo *v56; // x2
  System_Action_o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Int32_array *buckets; // x8
  _QWORD *v61; // x9
  __int64 slots_low; // x10
  __int64 v63; // x8
  System_Action_o *v64; // x21
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B1C703 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v23);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Clear__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v28);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v29);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v30);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v31);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__, v32);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__, v33);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass9_0_TypeInfo, v34);
    byte_4B1C703 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  memset(&i, 0, sizeof(i));
  v35 = sub_1BCB244(EventTutorialMaster___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_59;
  *(_QWORD *)(v35 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 16), (int32_t)this, v38, v39);
  *(_QWORD *)(v35 + 32) = callbackAfter;
  *(_DWORD *)(v35 + 24) = eventId;
  *(_DWORD *)(v35 + 28) = openKind;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 32), (int32_t)callbackAfter, v40, v41);
  *(_DWORD *)(v35 + 40) = qId;
  *(_DWORD *)(v35 + 44) = bPhase;
  *(_DWORD *)(v35 + 48) = bWave;
  *(_DWORD *)(v35 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_59;
  v44 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v44 < 1 )
  {
LABEL_39:
    openedEventIds = this->fields.openedEventIds;
    if ( openedEventIds )
    {
      System_Collections_Generic_HashSet_int___GetEnumerator(
        (System_Collections_Generic_HashSet_Enumerator_T__o *)&v67,
        openedEventIds,
        (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
      for ( i = v67;
            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
              (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v56) )
      {
        ;
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
        (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
        (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      openedEventIds = this->fields.openedEventIds;
      if ( openedEventIds )
      {
        System_Collections_Generic_HashSet_int___Clear(
          openedEventIds,
          (const MethodInfo_35712AC *)Method_System_Collections_Generic_HashSet_int__Clear__);
        ActionExtensions__Call(*(System_Action_o **)(v35 + 32), 0LL);
        return;
      }
    }
    goto LABEL_59;
  }
  v45 = 0LL;
  while ( 1 )
  {
    if ( v45 >= (unsigned int)v44 )
      sub_1BCB25C(openedEventIds, v37, v42);
    v46 = sortedEntityArray->m_Items[v45];
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_59;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v67,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v69 = v67;
      while ( 1 )
      {
        v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v69,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v47 )
          break;
        if ( !v46 )
          sub_1BCB254(v47, v48);
        if ( !v69.fields._current )
          sub_1BCB254(v47, v48);
        if ( v46->fields.eventId == LODWORD(v69.fields._current[1].klass)
          && v46->fields.flagType == HIDWORD(v69.fields._current[1].klass)
          && v46->fields.num == LODWORD(v69.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v69,
            (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v69,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v46 )
      goto LABEL_59;
    flag = v46->fields.flag;
    if ( v46->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v46, 0LL);
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    Targets,
                                                                    (System_Int32_array_array *)Targets,
                                                                    *(_DWORD *)(v35 + 40),
                                                                    v51);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
      break;
LABEL_35:
    LODWORD(v44) = sortedEntityArray->max_length;
    if ( (__int64)++v45 >= (int)v44 )
      goto LABEL_39;
  }
  v52 = v46->fields.eventId;
  if ( (v52 & 0x80000000) == 0 && v52 != *(_DWORD *)(v35 + 24)
    || v46->fields.openType != *(_DWORD *)(v35 + 28)
    || (openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                        v46,
                                                                        *(_DWORD *)(v35 + 40),
                                                                        *(_DWORD *)(v35 + 44),
                                                                        *(_DWORD *)(v35 + 48),
                                                                        *(_DWORD *)(v35 + 52),
                                                                        0LL),
        flag != 2)
    && ((unsigned __int8)openedEventIds & 1) == 0 )
  {
    if ( v46->fields.flag == 1 )
    {
      flagType = v46->fields.flagType;
      v55 = *(_DWORD *)(v35 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)TutorialFlag__Get_39653620(flagType, v55, 0LL);
      if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                        0LL,
                                                                        (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !openedEventIds )
          goto LABEL_59;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)openedEventIds,
          v46->fields.flagType,
          *(_DWORD *)(v35 + 24),
          0LL);
      }
    }
    goto LABEL_35;
  }
  if ( flag != 2 && !notSave )
  {
    v57 = *(System_Action_o **)(v35 + 64);
    if ( !v57 )
    {
      v57 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v57,
        (Il2CppObject *)v35,
        Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v35 + 64) = v57;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 64), (int32_t)v57, v58, v59);
    }
    EventTutorialEntity__OpenTutorial(v46, v57, 0LL);
    return;
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds
    || (buckets = openedEventIds->fields._buckets,
        v61 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++HIDWORD(openedEventIds->fields._slots),
        !buckets) )
  {
LABEL_59:
    sub_1BCB254(openedEventIds, v37);
  }
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= buckets->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v46,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v63 + 32) = v46;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v63 + 32), (int32_t)v46, v42, v53);
  }
  v64 = *(System_Action_o **)(v35 + 56);
  if ( !v64 )
  {
    v64 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v64,
      (Il2CppObject *)v35,
      Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v35 + 56) = v64;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 56), (int32_t)v64, v65, v66);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v46, v64, 0LL);
}


void __fastcall EventTutorialMaster__checkTutorial_41326556(
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x21
  System_Collections_Generic_HashSet_int__o *openedEventIds; // x0
  Il2CppObject *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  unsigned __int64 v48; // x26
  __int64 v49; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x24
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  const MethodInfo *v56; // x3
  EventTutorialEntity_o *v57; // x1
  Il2CppObject **v58; // x23
  _BOOL8 v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_HashSet_int__o *v61; // x8
  int slots; // w28
  const MethodInfo *v63; // x3
  _DWORD *v64; // x8
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x8
  int32_t klass; // w22
  int32_t klass_high; // w24
  const MethodInfo *v70; // x2
  EventTutorialEntity_o *v71; // x19
  System_Action_o *v72; // x20
  struct System_Int32_array *buckets; // x8
  _QWORD *v74; // x9
  __int64 slots_low; // x10
  __int64 v76; // x8
  EventTutorialEntity_o *v77; // x19
  System_Action_o *v78; // x20
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B1C704 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, checkEventIds);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v24);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Clear__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v30);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v31);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v32);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v33);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass10_0_TypeInfo, v34);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass10_1__checkTutorial_b__0__, v35);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass10_1__checkTutorial_b__1__, v36);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass10_1_TypeInfo, v37);
    byte_4B1C704 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  memset(&i, 0, sizeof(i));
  v38 = sub_1BCB244(EventTutorialMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_68;
  *(_QWORD *)(v38 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 16), (int32_t)this, v41, v42);
  *(_QWORD *)(v38 + 24) = checkEventIds;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 24), (int32_t)checkEventIds, v43, v44);
  *(_QWORD *)(v38 + 40) = callbackAfter;
  *(_DWORD *)(v38 + 32) = openKind;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 40), (int32_t)callbackAfter, v45, v46);
  *(_DWORD *)(v38 + 48) = qId;
  *(_DWORD *)(v38 + 52) = bPhase;
  *(_DWORD *)(v38 + 56) = bWave;
  *(_DWORD *)(v38 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_68;
  if ( (int)sortedEntityArray->max_length < 1 )
  {
LABEL_50:
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_68;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v79,
      openedEventIds,
      (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    for ( i = v79;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
            (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v70) )
    {
      ;
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&i,
      (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_68;
    System_Collections_Generic_HashSet_int___Clear(
      openedEventIds,
      (const MethodInfo_35712AC *)Method_System_Collections_Generic_HashSet_int__Clear__);
    ActionExtensions__Call(*(System_Action_o **)(v38 + 40), 0LL);
    return;
  }
  v48 = 0LL;
  while ( 1 )
  {
    v49 = sub_1BCB244(EventTutorialMaster___c__DisplayClass10_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0LL);
    if ( !v49 )
      goto LABEL_68;
    *(_QWORD *)(v49 + 24) = v38;
    v52 = v49 + 24;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 24), v38, v50, v51);
    if ( v48 >= sortedEntityArray->max_length )
      sub_1BCB25C(v53, v54, v55);
    v57 = sortedEntityArray->m_Items[v48];
    *(_QWORD *)(v49 + 16) = v57;
    v58 = (Il2CppObject **)(v49 + 16);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v49 + 16), (int32_t)v57, v55, v56);
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_68;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v79,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v81 = v79;
      while ( 1 )
      {
        v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v81,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v59 )
          break;
        v61 = (System_Collections_Generic_HashSet_int__o *)*v58;
        if ( !*v58 )
          sub_1BCB254(v59, v60);
        if ( !v81.fields._current )
          sub_1BCB254(v59, v60);
        if ( LODWORD(v61->fields._buckets) == LODWORD(v81.fields._current[1].klass)
          && HIDWORD(v61->fields._buckets) == HIDWORD(v81.fields._current[1].klass)
          && LODWORD(v61->fields._slots) == LODWORD(v81.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v81,
            (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_46;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v81,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v58;
    if ( !*v58 )
      goto LABEL_68;
    slots = (int)openedEventIds[1].fields._slots;
    if ( openedEventIds->fields._count != 84 )
      break;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__getTargets(
                                                                    (EventTutorialEntity_o *)openedEventIds,
                                                                    0LL);
    if ( !*(_QWORD *)v52 )
      goto LABEL_68;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    (EventTutorialMaster_o *)openedEventIds,
                                                                    (System_Int32_array_array *)openedEventIds,
                                                                    *(_DWORD *)(*(_QWORD *)v52 + 48LL),
                                                                    v63);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
      break;
LABEL_46:
    if ( (__int64)++v48 >= (int)sortedEntityArray->max_length )
      goto LABEL_50;
  }
  if ( isEventIdOneOrMore )
    goto LABEL_72;
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v58;
  if ( !*v58 )
    goto LABEL_68;
  if ( ((__int64)openedEventIds->fields._buckets & 0x80000000) == 0 )
  {
LABEL_72:
    if ( !*(_QWORD *)v52 )
      goto LABEL_68;
    if ( !*v58 )
      goto LABEL_68;
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)(*(_QWORD *)v52 + 24LL);
    if ( !openedEventIds )
      goto LABEL_68;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)System_Collections_Generic_List_int___Contains(
                                                                    (System_Collections_Generic_List_int__o *)openedEventIds,
                                                                    (int32_t)(*v58)[1].klass,
                                                                    (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
    {
LABEL_36:
      v67 = *v58;
      if ( !*v58 )
        goto LABEL_68;
      if ( LODWORD(v67[6].klass) == 1 )
      {
        klass = (int32_t)v67[1].klass;
        klass_high = HIDWORD(v67[1].klass);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( !TutorialFlag__Get_39653620(klass_high, klass, 0LL) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                          0LL,
                                                                          (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
          if ( !*v58 || !openedEventIds )
            goto LABEL_68;
          TutorialEventSetRequest__beginRequest(
            (TutorialEventSetRequest_o *)openedEventIds,
            HIDWORD((*v58)[1].klass),
            (int32_t)(*v58)[1].klass,
            0LL);
        }
      }
      goto LABEL_46;
    }
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v58;
    if ( !*v58 )
      goto LABEL_68;
  }
  v64 = *(_DWORD **)v52;
  if ( !*(_QWORD *)v52 )
    goto LABEL_68;
  if ( openedEventIds->fields._count != v64[8] )
    goto LABEL_36;
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                  (EventTutorialEntity_o *)openedEventIds,
                                                                  v64[12],
                                                                  v64[13],
                                                                  v64[14],
                                                                  v64[15],
                                                                  0LL);
  if ( slots != 2 && ((unsigned __int8)openedEventIds & 1) == 0 )
    goto LABEL_36;
  if ( slots != 2 && !notSave )
  {
    v71 = *(EventTutorialEntity_o **)(v49 + 16);
    v72 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v72,
      (Il2CppObject *)v49,
      Method_EventTutorialMaster___c__DisplayClass10_1__checkTutorial_b__1__,
      0LL);
    if ( v71 )
    {
      EventTutorialEntity__OpenTutorial(v71, v72, 0LL);
      return;
    }
LABEL_68:
    sub_1BCB254(openedEventIds, v40);
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds )
    goto LABEL_68;
  v40 = *v58;
  buckets = openedEventIds->fields._buckets;
  v74 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++HIDWORD(openedEventIds->fields._slots);
  if ( !buckets )
    goto LABEL_68;
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= buckets->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      v40,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
  }
  else
  {
    v76 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v76 + 32) = v40;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v76 + 32), (int32_t)v40, v65, v66);
  }
  v77 = *(EventTutorialEntity_o **)(v49 + 16);
  v78 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v78,
    (Il2CppObject *)v49,
    Method_EventTutorialMaster___c__DisplayClass10_1__checkTutorial_b__0__,
    0LL);
  if ( !v77 )
    goto LABEL_68;
  EventTutorialEntity__OpenTutorialWithoutFlag(v77, v78, 0LL);
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

  if ( (byte_4B1C71D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v11);
    sub_1BCAFF8(&int___TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14);
    this = (EventTutorialMaster_o *)sub_1BCAFF8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15);
    byte_4B1C71D = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1BCB0A0(int___TypeInfo, openKinds->max_length);
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
      sub_1BCB25C(this, *(_QWORD *)&eventId, v16);
    }
LABEL_28:
    sub_1BCB254(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
                                          (const MethodInfo_31190C0 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
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
              (const MethodInfo_36BA980 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
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

  if ( (byte_4B1C71B & 1) == 0 )
  {
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_15823/*"[]"*/, v12);
    sub_1BCAFF8(&StringLiteral_15881/*"[{0}]"*/, v13);
    byte_4B1C71B = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_15881/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
        sub_1BCB25C(IsNullOrEmpty, v16, v17);
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
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v23;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v23, v17, v18);
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
                                                                  (System_String_o *)StringLiteral_15823/*"[]"*/,
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
            sub_1BCB254(IsNullOrEmpty, v16);
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
      sub_1BCAF9C((CGThumbnailListItem_o *)IsNullOrEmpty->m_Items, (int32_t)v22, v17, v18);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        v22,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
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
        sub_1BCB254(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          sub_1BCB25C(this, targets, *(_QWORD *)&targetId);
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

  if ( (byte_4B1C707 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v15);
    byte_4B1C707 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1BCB254(list, *(_QWORD *)&eventId);
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

  if ( (byte_4B1C706 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v16);
    byte_4B1C706 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1BCB254(list, *(_QWORD *)&eventId);
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
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v17; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  EventTutorialMaster___c_c *v22; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__7_1; // x20
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

  if ( (byte_4B1C702 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v5);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v6);
    sub_1BCAFF8(&System_Func_EventTutorialEntity__int__TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v9);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__preProcess_b__7_0__, v10);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__preProcess_b__7_1__, v11);
    sub_1BCAFF8(&EventTutorialMaster___c_TypeInfo, v12);
    byte_4B1C702 = 1;
  }
  v13 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v14 = EventTutorialMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v14 = EventTutorialMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v14->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = EventTutorialMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v17, Method_EventTutorialMaster___c__preProcess_b__7_0__, 0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderBy_object__int_(
          v15,
          (System_Func_TSource__TKey__o *)_9__7_0,
          (const MethodInfo_3046148 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v22 = EventTutorialMaster___c_TypeInfo;
  v23 = v21;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v22 = EventTutorialMaster___c_TypeInfo;
  }
  _9__7_1 = (System_Func_object__int__o *)v22->static_fields->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = EventTutorialMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__7_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_1, v25, Method_EventTutorialMaster___c__preProcess_b__7_1__, 0LL);
    v26 = EventTutorialMaster___c_TypeInfo->static_fields;
    v26->__9__7_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v26->__9__7_1, (int32_t)_9__7_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v30;
  sub_1BCAF9C((CGThumbnailListItem_o *)EventTutorialMaster_TypeInfo->static_fields, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v34 = EventTutorialMaster_TypeInfo->static_fields;
  v34->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v33;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v34->checkedEntityList, (int32_t)v33, v35, v36);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        bool conditionNone,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x24
  __int64 v15; // x0
  EventTutorialEntity_o *v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v21; // x8
  unsigned __int64 i; // x26
  int32_t v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4B1C713 & 1) == 0 )
  {
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v13);
    byte_4B1C713 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_22:
    sub_1BCB254(v15, v16);
  v21 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v21 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v21; ++i )
    {
      if ( i >= (unsigned int)v21 )
        sub_1BCB25C(v15, v16, v17);
      v16 = sortedEntityArray->m_Items[i];
      if ( conditionNone )
      {
        if ( !v16 )
          goto LABEL_22;
        if ( v16->fields.condType )
          goto LABEL_20;
      }
      else if ( !v16 )
      {
        goto LABEL_22;
      }
      v23 = v16->fields.eventId;
      if ( ((v23 & 0x80000000) != 0 || v23 == eventId) && v16->fields.openType == openKind )
      {
        if ( !v14 )
          goto LABEL_22;
        items = v14->fields._items;
        v25 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v16,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v16;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v16, v17, v18);
        }
      }
LABEL_20:
      LODWORD(v21) = sortedEntityArray->max_length;
    }
  }
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v14,
    0,
    callback,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_41333636(
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

  if ( (byte_4B1C716 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v17);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass28_0__showTutorialWithoutCheck_b__0__, v18);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass28_0_TypeInfo, v19);
    byte_4B1C716 = 1;
  }
  v20 = sub_1BCB244(EventTutorialMaster___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v20 + 32) = callbackAfter;
  *(_DWORD *)(v20 + 24) = eventId;
  *(_DWORD *)(v20 + 28) = openKind;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)callbackAfter, v25, v26);
  *(_DWORD *)(v20 + 40) = qId;
  *(_DWORD *)(v20 + 44) = bPhase;
  *(_DWORD *)(v20 + 48) = bWave;
  *(_DWORD *)(v20 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1BCB254(isEnableCondition, v22);
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
        sub_1BCB25C(isEnableCondition, v22, v27);
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
      v33 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v20,
        Method_EventTutorialMaster___c__DisplayClass28_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v20 + 56) = v33;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 56), (int32_t)v33, v34, v35);
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

  if ( (byte_4B1C718 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, tutoList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass30_0__tutorialChainWithoutCheck_b__0__, v11);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass30_0_TypeInfo, v12);
    byte_4B1C718 = 1;
  }
  v13 = sub_1BCB244(EventTutorialMaster___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = tutoList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)tutoList, v18, v19);
  *(_QWORD *)(v13 + 40) = callback;
  *(_DWORD *)(v13 + 32) = index;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 40), (int32_t)callback, v20, v21);
  v14 = *(System_Collections_Generic_List_object__o **)(v13 + 24);
  if ( !v14 )
    goto LABEL_9;
  v22 = *(_DWORD *)(v13 + 32);
  if ( v22 < v14->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v14,
             v22,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v24 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v13,
      Method_EventTutorialMaster___c__DisplayClass30_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v24, 0LL);
      return;
    }
LABEL_9:
    sub_1BCB254(v14, v15);
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
  if ( (byte_4B1C724 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, method);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1BCAFF8(
                                                        &Method_System_Collections_Generic_List_int__ToArray__,
                                                        v3);
    byte_4B1C724 = 1;
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
                     (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.eventIds, (int32_t)eventIds, v7, v8);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1BCB0A0(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1BCB25C(OpenEventIds, v6, v7);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1BCB254(OpenEventIds, v6);
  }
  return eventIds;
}


void __fastcall EventTutorialMaster__CoCheckTutorialLocal_d__11___ctor(
        EventTutorialMaster__CoCheckTutorialLocal_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventTutorialMaster__CoCheckTutorialLocal_d__11__MoveNext(
        EventTutorialMaster__CoCheckTutorialLocal_d__11_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  EventTutorialMaster__CoCheckTutorialLocal_d__11_o *v4; // x19
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct EventTutorialMaster_o *_4__this; // x20
  Il2CppObject *v23; // x22
  struct EventTutorialMaster___c__DisplayClass11_0_o **p__8__1; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int v39; // w8
  struct EventTutorialMaster___c__DisplayClass11_1_o *_8__2; // x21
  bool result; // w0
  Il2CppObject *v42; // x22
  struct EventTutorialMaster___c__DisplayClass11_1_o **p__8__2; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct EventTutorialMaster_EventTutorialArgs_o *_8__1; // x1
  __int64 v49; // x2
  const MethodInfo *v50; // x3
  struct EventTutorialEntity_array *v51; // x8
  __int64 _7__wrap2; // x9
  EventTutorialEntity_o *v53; // x1
  const MethodInfo *v54; // x2
  struct EventTutorialMaster___c__DisplayClass11_1_o *v55; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *CS___8__locals1; // x9
  struct EventTutorialMaster___c__DisplayClass11_1_o *v57; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v58; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v59; // x9
  struct EventTutorialMaster___c__DisplayClass11_1_o *v60; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v61; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v62; // x9
  struct EventTutorialMaster___c__DisplayClass11_0_o *v63; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v64; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass11_1_o *v66; // x22
  EventTutorialEntity_o *data; // x21
  System_Action_o *v68; // x23
  struct EventTutorialMaster___c__DisplayClass11_0_o *v69; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v70; // x8
  struct EventTutorialMaster___c__DisplayClass11_1_o *v71; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v72; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v73; // x9
  struct EventTutorialMaster___c__DisplayClass11_1_o *v74; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v75; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v76; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8
  struct EventTutorialMaster___c__DisplayClass11_1_o *v78; // x8
  struct EventTutorialMaster___c__DisplayClass11_1_o **v79; // x21
  struct EventTutorialEntity_o *v80; // x8
  int32_t eventId; // w22
  int32_t flagType; // w23
  struct EventTutorialEntity_o *v83; // x8
  struct EventTutorialEntity_array *_7__wrap1; // x9
  const MethodInfo *v85; // x2
  System_Func_bool__o *v86; // x20
  UnityEngine_WaitWhile_o *v87; // x21
  CGThumbnailListItem_o *v88; // x19
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int v91; // w8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v92; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v93; // x8
  System_Func_bool__o *_9__3; // x20
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  UnityEngine_WaitWhile_o *v97; // x21
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Func_bool__o *_9__0; // x20
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  UnityEngine_WaitWhile_o *v103; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  System_Collections_Generic_HashSet_Enumerator_T__o v107; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4B1C72E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v7);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v8);
    sub_1BCAFF8(&System_Func_bool__TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Clear__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v11);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v12);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v13);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v14);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__, v15);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__3__, v16);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo, v17);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, v18);
    sub_1BCAFF8(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__, v19);
    sub_1BCAFF8(&EventTutorialMaster___c__DisplayClass11_1_TypeInfo, v20);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)sub_1BCAFF8(&UnityEngine_WaitWhile_TypeInfo, v21);
    byte_4B1C72E = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v23 = (Il2CppObject *)sub_1BCB244(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor(v23, 0LL);
      v4->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass11_0_o *)v23;
      p__8__1 = &v4->fields.__8__1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v23, v25, v26);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      args = v4->fields.args;
      *(_QWORD *)&this->fields.__1__state = args;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)args, v27, v28);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      v32 = (Il2CppObject *)v4->fields.__4__this;
      this->fields.__2__current = v32;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v32, v30, v31);
      if ( !*p__8__1 )
        goto LABEL_86;
      if ( !(*p__8__1)->fields.args )
        return 0;
      static_fields = EventTutorialMaster_TypeInfo->static_fields;
      sortedEntityArray = static_fields->sortedEntityArray;
      v4->fields.__7__wrap1 = static_fields->sortedEntityArray;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__7__wrap1, (int32_t)sortedEntityArray, v33, v34);
      v39 = 0;
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
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_86;
    if ( v39 >= (signed int)_7__wrap1->max_length )
      break;
    v42 = (Il2CppObject *)sub_1BCB244(EventTutorialMaster___c__DisplayClass11_1_TypeInfo);
    System_Object___ctor(v42, 0LL);
    v4->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass11_1_o *)v42;
    p__8__2 = &v4->fields.__8__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v42, v44, v45);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    _8__1 = (struct EventTutorialMaster_EventTutorialArgs_o *)v4->fields.__8__1;
    this->fields.args = _8__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.args, (int32_t)_8__1, v46, v47);
    v51 = v4->fields.__7__wrap1;
    if ( !v51 )
      goto LABEL_86;
    _7__wrap2 = v4->fields.__7__wrap2;
    if ( (unsigned int)_7__wrap2 >= v51->max_length )
      sub_1BCB25C(this, method, v49);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    v53 = v51->m_Items[_7__wrap2];
    *(_QWORD *)&this->fields.__1__state = v53;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v53, v49, v50);
    v55 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_86;
    CS___8__locals1 = v55->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_86;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialMaster__IsOpenCondition(
                                                                  v55->fields.data,
                                                                  CS___8__locals1->fields.args,
                                                                  v54);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v57 = *p__8__2;
      if ( !*p__8__2 )
        goto LABEL_86;
      v58 = v57->fields.CS___8__locals1;
      if ( !v58 )
        goto LABEL_86;
      v59 = v58->fields.args;
      if ( !v59 )
        goto LABEL_86;
      if ( v59->fields.adapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v57->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialEntity__HasBeforeAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v60 = *p__8__2;
          if ( !*p__8__2 )
            goto LABEL_86;
          v61 = v60->fields.CS___8__locals1;
          if ( !v61 )
            goto LABEL_86;
          v62 = v61->fields.args;
          if ( !v62 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v62->fields.adapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v60->fields.data, 0LL);
          if ( !*p__8__2 )
            goto LABEL_86;
          v63 = (*p__8__2)->fields.CS___8__locals1;
          if ( !v63 )
            goto LABEL_86;
          v64 = v63->fields.args;
          if ( !v64 )
            goto LABEL_86;
          adapter = v64->fields.adapter;
          if ( !adapter )
            goto LABEL_86;
          if ( adapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__0 = v63->fields.__9__0;
            if ( !_9__0 )
            {
              _9__0 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__0,
                (Il2CppObject *)v63,
                Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__,
                0LL);
              v63->fields.__9__0 = _9__0;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v63->fields.__9__0, (int32_t)_9__0, v101, v102);
            }
            v103 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v103, _9__0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v103;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(p__2__current, (int32_t)v103, v105, v106);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
        }
      }
LABEL_36:
      v66 = v4->fields.__8__2;
      if ( !v66 )
        goto LABEL_86;
      v66->fields.isBusy = 1;
      data = v66->fields.data;
      v68 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v68,
        (Il2CppObject *)v66,
        Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__,
        0LL);
      if ( !data )
        goto LABEL_86;
      EventTutorialEntity__OpenTutorial(data, v68, 0LL);
      _8__2 = v4->fields.__8__2;
      if ( !_8__2 )
        goto LABEL_86;
      if ( _8__2->fields.isBusy )
      {
        v86 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v86,
          (Il2CppObject *)_8__2,
          Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__,
          0LL);
        v87 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v87, v86, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v87;
        v88 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v88, (int32_t)v87, v89, v90);
        v91 = 2;
LABEL_82:
        LODWORD(v88[-1].fields._ThumbnailSpritePath_k__BackingField) = v91;
        return 1;
      }
LABEL_40:
      v69 = _8__2->fields.CS___8__locals1;
      if ( !v69 )
        goto LABEL_86;
      v70 = v69->fields.args;
      if ( !v70 )
        goto LABEL_86;
      if ( v70->fields.afterActionAdapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)_8__2->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialEntity__HasAfterAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v71 = v4->fields.__8__2;
          if ( !v71 )
            goto LABEL_86;
          v72 = v71->fields.CS___8__locals1;
          if ( !v72 )
            goto LABEL_86;
          v73 = v72->fields.args;
          if ( !v73 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v73->fields.afterActionAdapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v71->fields.data, 0LL);
          v74 = v4->fields.__8__2;
          if ( !v74 )
            goto LABEL_86;
          v75 = v74->fields.CS___8__locals1;
          if ( !v75 )
            goto LABEL_86;
          v76 = v75->fields.args;
          if ( !v76 )
            goto LABEL_86;
          afterActionAdapter = v76->fields.afterActionAdapter;
          if ( !afterActionAdapter )
            goto LABEL_86;
          if ( afterActionAdapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__3 = v75->fields.__9__3;
            if ( !_9__3 )
            {
              _9__3 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__3,
                (Il2CppObject *)v75,
                Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__3__,
                0LL);
              v75->fields.__9__3 = _9__3;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v75->fields.__9__3, (int32_t)_9__3, v95, v96);
            }
            v97 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v97, _9__3, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v97;
            v88 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(v88, (int32_t)v97, v98, v99);
            v91 = 3;
            goto LABEL_82;
          }
        }
      }
    }
LABEL_54:
    v79 = &v4->fields.__8__2;
    v78 = v4->fields.__8__2;
    if ( !v78 )
      goto LABEL_86;
    v80 = v78->fields.data;
    if ( !v80 )
      goto LABEL_86;
    if ( v80->fields.flag == 1 )
    {
      eventId = v80->fields.eventId;
      flagType = v80->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_39653620(flagType, eventId, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)NetworkManager__getRequest_object_(
                                                                      0LL,
                                                                      (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v79 )
          goto LABEL_86;
        v83 = (*v79)->fields.data;
        if ( !v83 || !this )
          goto LABEL_86;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          v83->fields.flagType,
          v83->fields.eventId,
          0LL);
      }
    }
    v4->fields.__8__2 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
    v39 = v4->fields.__7__wrap2 + 1;
    v4->fields.__7__wrap2 = v39;
  }
  this->klass = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)this, 0, v37, v38);
  if ( !_4__this )
    goto LABEL_86;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)_4__this->fields.openedEventIds;
  if ( !this )
    goto LABEL_86;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v107,
    (System_Collections_Generic_HashSet_int__o *)this,
    (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  for ( i = v107;
        System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
        EventTutorialMaster__TutorialAfterUpdateQuestTree(_4__this, (int32_t)i.fields._current, v85) )
  {
    ;
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)_4__this->fields.openedEventIds;
  if ( !this
    || (System_Collections_Generic_HashSet_int___Clear(
          (System_Collections_Generic_HashSet_int__o *)this,
          (const MethodInfo_35712AC *)Method_System_Collections_Generic_HashSet_int__Clear__),
        (v92 = v4->fields.__8__1) == 0LL)
    || (v93 = v92->fields.args) == 0LL )
  {
LABEL_86:
    sub_1BCB254(this, method);
  }
  ActionExtensions__Call(v93->fields.callbackAfter, 0LL);
  return 0;
}


Il2CppObject *__fastcall EventTutorialMaster__CoCheckTutorialLocal_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventTutorialMaster__CoCheckTutorialLocal_d__11__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoCheckTutorialLocal_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__11_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall EventTutorialMaster__CoCheckTutorialLocal_d__11__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoCheckTutorialLocal_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventTutorialMaster__CoCheckTutorialLocal_d__11__System_IDisposable_Dispose(
        EventTutorialMaster__CoCheckTutorialLocal_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__18___ctor(
        EventTutorialMaster__CoroutineCheckTutorial_d__18_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__18__MoveNext(
        EventTutorialMaster__CoroutineCheckTutorial_d__18_o *this,
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

  if ( (byte_4B1C72F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1C72F = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1BCB254(0LL, v7);
    v9 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           v8);
    this->fields.__2__current = v9;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11);
    v12 = 1;
    result = 1;
  }
  this->fields.__1__state = v12;
  return result;
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__18_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventTutorialMaster__CoroutineCheckTutorial_d__18__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoroutineCheckTutorial_d__18_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__18_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__18__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__18_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__18__System_IDisposable_Dispose(
        EventTutorialMaster__CoroutineCheckTutorial_d__18_o *this,
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

  if ( (byte_4B1C725 & 1) == 0 )
  {
    sub_1BCAFF8(&EventTutorialMaster___c_TypeInfo, v1);
    byte_4B1C725 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)EventTutorialMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c___OpenTutorialImages_b__26_0(
        EventTutorialMaster___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B1C726 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B1C726 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


System_Collections_Generic_IEnumerable_string__o *__fastcall EventTutorialMaster___c___PlayTutorialSetUpAction_b__36_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(x, 0LL);
}


bool __fastcall EventTutorialMaster___c___TutorialAfterUpdateQuestTree_b__37_2(
        EventTutorialMaster___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.type == 113;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.eventId;
}


void __fastcall EventTutorialMaster___c__DisplayClass10_0___ctor(
        EventTutorialMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass10_1___ctor(
        EventTutorialMaster___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass10_1___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass10_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass10_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8
  struct EventTutorialMaster___c__DisplayClass10_0_o *v6; // x8
  const MethodInfo *v7; // [xsp+10h] [xbp-30h]

  v2 = this;
  if ( (byte_4B1C727 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass10_1_o *)sub_1BCAFF8(
                                                            &Method_System_Collections_Generic_HashSet_int__Add__,
                                                            method);
    byte_4B1C727 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (data = v2->fields.data) == 0LL
    || (this = (EventTutorialMaster___c__DisplayClass10_1_o *)_4__this->fields.openedEventIds) == 0LL
    || (this = (EventTutorialMaster___c__DisplayClass10_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0LL)
    || (this = (EventTutorialMaster___c__DisplayClass10_1_o *)v6->fields.__4__this) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  EventTutorialMaster__checkTutorial_41326556(
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


void __fastcall EventTutorialMaster___c__DisplayClass10_1___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass10_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass10_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8
  struct EventTutorialMaster___c__DisplayClass10_0_o *v6; // x8
  const MethodInfo *v7; // [xsp+10h] [xbp-30h]

  v2 = this;
  if ( (byte_4B1C728 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass10_1_o *)sub_1BCAFF8(
                                                            &Method_System_Collections_Generic_HashSet_int__Add__,
                                                            method);
    byte_4B1C728 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (data = v2->fields.data) == 0LL
    || (this = (EventTutorialMaster___c__DisplayClass10_1_o *)_4__this->fields.openedEventIds) == 0LL
    || (this = (EventTutorialMaster___c__DisplayClass10_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0LL)
    || (this = (EventTutorialMaster___c__DisplayClass10_1_o *)v6->fields.__4__this) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  EventTutorialMaster__checkTutorial_41326556(
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


void __fastcall EventTutorialMaster___c__DisplayClass11_0___ctor(
        EventTutorialMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass11_0___CoCheckTutorialLocal_b__0(
        EventTutorialMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8

  args = this->fields.args;
  if ( !args || (adapter = args->fields.adapter) == 0LL )
    sub_1BCB254(this, method);
  return adapter->fields._IsPerformanceBusy_k__BackingField;
}


bool __fastcall EventTutorialMaster___c__DisplayClass11_0___CoCheckTutorialLocal_b__3(
        EventTutorialMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8

  args = this->fields.args;
  if ( !args || (afterActionAdapter = args->fields.afterActionAdapter) == 0LL )
    sub_1BCB254(this, method);
  return afterActionAdapter->fields._IsPerformanceBusy_k__BackingField;
}


void __fastcall EventTutorialMaster___c__DisplayClass11_1___ctor(
        EventTutorialMaster___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass11_1___CoCheckTutorialLocal_b__1(
        EventTutorialMaster___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass11_1_o *v2; // x19
  struct EventTutorialMaster___c__DisplayClass11_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_o *_4__this; // x9
  struct EventTutorialEntity_o *data; // x8

  v2 = this;
  if ( (byte_4B1C729 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_1_o *)sub_1BCAFF8(
                                                            &Method_System_Collections_Generic_HashSet_int__Add__,
                                                            method);
    byte_4B1C729 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (data = v2->fields.data) == 0LL
    || (this = (EventTutorialMaster___c__DisplayClass11_1_o *)_4__this->fields.openedEventIds) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    data->fields.eventId,
    (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
  v2->fields.isBusy = 0;
}


bool __fastcall EventTutorialMaster___c__DisplayClass11_1___CoCheckTutorialLocal_b__2(
        EventTutorialMaster___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


void __fastcall EventTutorialMaster___c__DisplayClass23_0___ctor(
        EventTutorialMaster___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass23_0___GetAvailableTutorialArray_b__0(
        EventTutorialMaster___c__DisplayClass23_0_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, method);
}


void __fastcall EventTutorialMaster___c__DisplayClass28_0___ctor(
        EventTutorialMaster___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass28_0___showTutorialWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
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


void __fastcall EventTutorialMaster___c__DisplayClass30_0___ctor(
        EventTutorialMaster___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass30_0___tutorialChainWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialMaster__tutorialChainWithoutCheck(
    _4__this,
    this->fields.tutoList,
    this->fields.index + 1,
    this->fields.callback,
    v2);
}


void __fastcall EventTutorialMaster___c__DisplayClass37_0___ctor(
        EventTutorialMaster___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass37_0___TutorialAfterUpdateQuestTree_b__0(
        EventTutorialMaster___c__DisplayClass37_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass37_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1C72A & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass37_0_o *)sub_1BCAFF8(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x);
    byte_4B1C72A = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass37_0_o *)v4->fields.contTypeArray) == 0LL )
    sub_1BCB254(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.condType,
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool __fastcall EventTutorialMaster___c__DisplayClass37_0___TutorialAfterUpdateQuestTree_b__1(
        EventTutorialMaster___c__DisplayClass37_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.condId == this->fields.eventId;
}


bool __fastcall EventTutorialMaster___c__DisplayClass37_0___TutorialAfterUpdateQuestTree_b__3(
        EventTutorialMaster___c__DisplayClass37_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass37_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1C72B & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass37_0_o *)sub_1BCAFF8(
                                                            &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                            x);
    byte_4B1C72B = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass37_0_o *)v4->fields.contTypeArray) == 0LL )
    sub_1BCB254(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.type,
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool __fastcall EventTutorialMaster___c__DisplayClass37_0___TutorialAfterUpdateQuestTree_b__4(
        EventTutorialMaster___c__DisplayClass37_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.targetId == this->fields.eventId;
}


void __fastcall EventTutorialMaster___c__DisplayClass37_1___ctor(
        EventTutorialMaster___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass37_1___TutorialAfterUpdateQuestTree_b__5(
        EventTutorialMaster___c__DisplayClass37_1_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  struct CommonReleaseEntity_o *targetCommonEnt; // x8

  if ( !x || (targetCommonEnt = this->fields.targetCommonEnt) == 0LL )
    sub_1BCB254(this, x);
  return x->fields.targetId == targetCommonEnt->fields.id;
}


void __fastcall EventTutorialMaster___c__DisplayClass9_0___ctor(
        EventTutorialMaster___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass9_0___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass9_0_o *v2; // x19
  struct EventTutorialMaster_o *_4__this; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-28h]

  v2 = this;
  if ( (byte_4B1C72C & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass9_0_o *)sub_1BCAFF8(
                                                           &Method_System_Collections_Generic_HashSet_int__Add__,
                                                           method);
    byte_4B1C72C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass9_0_o *)_4__this->fields.openedEventIds) == 0LL
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass9_0_o *)v2->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, method);
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


void __fastcall EventTutorialMaster___c__DisplayClass9_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass9_0_o *v2; // x19
  struct EventTutorialMaster_o *_4__this; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-28h]

  v2 = this;
  if ( (byte_4B1C72D & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass9_0_o *)sub_1BCAFF8(
                                                           &Method_System_Collections_Generic_HashSet_int__Add__,
                                                           method);
    byte_4B1C72D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass9_0_o *)_4__this->fields.openedEventIds) == 0LL
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass9_0_o *)v2->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, method);
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