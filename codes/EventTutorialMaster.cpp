void EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_HashSet_int__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D30CE4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D30CE4 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.openedEventIds = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.openedEventIds, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.refreshedWarIds = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.refreshedWarIds, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
}


bool EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
        int32_t eventId,
        int32_t eventTutorialFlag,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  bool IsTutorialAvailable; // w21

  if ( (byte_4D30CCE & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30CCE = 1;
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

  if ( (byte_4D30CC5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30CC5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1C93D2C(Master_object, v16);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v17 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_42971416(
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
  if ( (byte_4D30CC6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    *(_QWORD *)&eventId = sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4D30CC6 = 1;
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
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1C93D2C(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v18 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_42971416(
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

  if ( (byte_4D30CC7 & 1) == 0 )
  {
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    method = (const MethodInfo *)sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_4D30CC7 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1C93D2C(method, v1);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D30CC1 & 1) == 0 )
  {
    sub_1C93AD4(&EventTutorialMaster__CoCheckTutorialLocal_d__13_TypeInfo);
    byte_4D30CC1 = 1;
  }
  v5 = sub_1C93D20(EventTutorialMaster__CoCheckTutorialLocal_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = args;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)args, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30CC8 & 1) == 0 )
  {
    sub_1C93AD4(&EventTutorialMaster__CoroutineCheckTutorial_d__20_TypeInfo);
    byte_4D30CC8 = 1;
  }
  v3 = sub_1C93D20(EventTutorialMaster__CoroutineCheckTutorial_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = args;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)args, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4D30CD9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v14);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D30CCD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass25_0__GetAvailableTutorialArray_b__0__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
    byte_4D30CCD = 1;
  }
  v3 = sub_1C93D20(EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  *(_QWORD *)(v3 + 16) = args;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)args, v6, v7, v8, v9, v10, v11);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v13 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_EventTutorialMaster___c__DisplayClass25_0__GetAvailableTutorialArray_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v14,
                                        (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_4D30CE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
    byte_4D30CE5 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_34681D4 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
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

  if ( (byte_4D30CD7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v8);
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

  if ( (byte_4D30CE2 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_10037/*"OnceDailyDispTutorialInfo_{0}_{1}"*/);
    byte_4D30CE2 = 1;
  }
  v9 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = flagType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format_64467032((System_String_o *)StringLiteral_10037/*"OnceDailyDispTutorialInfo_{0}_{1}"*/, v5, v6, 0);
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

  if ( (byte_4D30CD6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CD6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C93D34(Instance);
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
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_1C93D2C(Instance, id);
  }
  return v4;
}


System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialMaster__GetTutorialEntityList(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4D30CE3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_EventTutorialEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass47_0__GetTutorialEntityList_b__0__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass47_0_TypeInfo);
    byte_4D30CE3 = 1;
  }
  v6 = sub_1C93D20(EventTutorialMaster___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C93D2C(v7, v8);
  *(_DWORD *)(v6 + 16) = eventId;
  *(_DWORD *)(v6 + 20) = flagType;
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v10 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v6,
    Method_EventTutorialMaster___c__DisplayClass47_0__GetTutorialEntityList_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (System_Collections_Generic_List_EventTutorialEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v11,
                                                                     (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_EventTutorialEntity___);
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

  if ( (byte_4D30CC4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4D30CC4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1C93D2C(list, *(_QWORD *)&eventId);
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
  if ( (byte_4D30CCF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    data = (EventTutorialEntity_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
    byte_4D30CCF = 1;
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
             (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_9;
    }
LABEL_17:
    sub_1C93D2C(data, args);
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
           (const MethodInfo_31C1168 *)Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
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
  EventTutorialMaster_o *Time; // x0
  const MethodInfo *v6; // x2
  bool v7; // w8
  int64_t endedTime; // [xsp+8h] [xbp-28h] BYREF
  int64_t startedTime; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4D30CDE & 1) == 0 )
  {
    this = (EventTutorialMaster_o *)sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30CDE = 1;
  }
  startedTime = 0;
  endedTime = 0;
  if ( entity && EventTutorialMaster__TryGetEventTimes(this, entity, &startedTime, &endedTime, v3) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (EventTutorialMaster_o *)NetworkManager__getTime(0);
    v7 = 0;
    if ( (__int64)Time >= startedTime && (__int64)Time <= endedTime )
      return !EventTutorialMaster__IsShownOnceDailyTutorial(Time, entity, v6);
  }
  else
  {
    return 0;
  }
  return v7;
}


bool EventTutorialMaster__IsShownOnceDailyTutorial(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  System_Int32_array *OnceDailyDispTutorialResetTime; // x0
  int max_length; // w8
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t Year; // w22
  int32_t Month; // w23
  int32_t Day; // w0
  const MethodInfo *v12; // x2
  System_String_o *OnceDailyDispTutorialSaveKey; // x0
  System_String_o *String_72078212; // x0
  int64_t v15; // x20
  System_DateTime_o v16; // x19
  int64_t v17; // [xsp+0h] [xbp-60h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v19; // [xsp+10h] [xbp-50h] BYREF
  System_DateTime_o v20; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D30CDF & 1) == 0 )
  {
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30CDF = 1;
  }
  v19.fields._dateData = 0;
  v20.fields._dateData = 0;
  v17 = 0;
  dateData = 0;
  if ( !entity )
    return 0;
  OnceDailyDispTutorialResetTime = EventTutorialEntity__GetOnceDailyDispTutorialResetTime(
                                     entity,
                                     (const MethodInfo *)entity);
  if ( !OnceDailyDispTutorialResetTime || (max_length = OnceDailyDispTutorialResetTime->max_length, max_length < 1) )
  {
    v6 = 0;
    goto LABEL_10;
  }
  v6 = OnceDailyDispTutorialResetTime->m_Items[0];
  if ( max_length == 1 )
  {
LABEL_10:
    v7 = 0;
    goto LABEL_11;
  }
  v7 = OnceDailyDispTutorialResetTime->m_Items[1];
LABEL_11:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v20.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  Year = System_DateTime__get_Year((System_DateTime_o)&v20, 0);
  Month = System_DateTime__get_Month((System_DateTime_o)&v20, 0);
  Day = System_DateTime__get_Day((System_DateTime_o)&v20, 0);
  System_DateTime___ctor_65810456((System_DateTime_o)&v19, Year, Month, Day, v6, v7, 0, 0);
  dateData = System_DateTime__AddDays((System_DateTime_o)&v19, -1.0, 0).fields._dateData;
  if ( System_DateTime__op_GreaterThan(v20, v19, 0) )
    dateData = v19.fields._dateData;
  OnceDailyDispTutorialSaveKey = EventTutorialMaster__GetOnceDailyDispTutorialSaveKey(
                                   entity->fields.eventId,
                                   entity->fields.flagType,
                                   v12);
  String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212(OnceDailyDispTutorialSaveKey, 0);
  if ( System_Int64__TryParse(String_72078212, &v17, 0) )
  {
    v15 = v17;
  }
  else
  {
    v15 = 0;
    v17 = 0;
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v16.fields._dateData = System_DateTime__AddHours((System_DateTime_o)&dateData, -9.0, 0).fields._dateData;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v15 > NetworkManager__getTime_42095976(v16, 0);
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

  if ( (byte_4D30CCA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CCA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v14);
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

  if ( (byte_4D30CCB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v16);
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

  if ( (byte_4D30CC9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v16);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D30CD1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__OpenTutorialImages_b__29_0__);
    sub_1C93AD4(&EventTutorialMaster___c_TypeInfo);
    byte_4D30CD1 = 1;
  }
  if ( imageIds && imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__29_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(_9__29_0, v8, Method_EventTutorialMaster___c__OpenTutorialImages_b__29_0__, 0);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = _9__29_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0,
        (int32_t)_9__29_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    if ( !v5 )
LABEL_15:
      sub_1C93D2C(Instance, v4);
    CommonUI__OpenTutorialImageDialog_31604240(v5, imageIds, -1, 0, _9__29_0, 0, 0, 0, 0);
  }
}


void EventTutorialMaster__PlayTutorialSetUpAction(EventTutorialMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Array_o *v4; // x21
  __int64 v5; // x19
  TerminalPramsManager_c *v6; // x0
  QuestAfterAction_o *EventID; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  EventTutorialMaster___c_c *v18; // x8
  EventTutorialEntity_array *v19; // x19
  System_Func_object__object__o *_9__39_0; // x20
  Il2CppObject *v21; // x21
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_String_array *v30; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v31; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v32; // x0
  System_Object_array *v33; // x20
  TerminalPramsManager_c *v34; // x0
  int max_length; // w8
  unsigned int v36; // w25
  EventTutorialEntity_o *v37; // x8
  int32_t flagType; // w21
  int32_t v39; // w22

  if ( (byte_4D30CDB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C93AD4(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C93AD4(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_1C93AD4(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_1C93AD4(&Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__39_0__);
    sub_1C93AD4(&EventTutorialMaster___c_TypeInfo);
    byte_4D30CDB = 1;
  }
  if ( mapId < 1 )
  {
    v5 = sub_1C93D20(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2ABEB )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2ABEB = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v15->static_fields->_WarId_k__BackingField, 0);
    if ( !v5 )
      goto LABEL_50;
    *(_DWORD *)(v5 + 16) = (_DWORD)EventID;
    *(_DWORD *)(v5 + 20) = 18;
    if ( !byte_4D2ABEB )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2ABEB = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    mapId = v16->static_fields->_WarId_k__BackingField;
  }
  else
  {
    v4 = (System_Array_o *)sub_1C93B7C(EventTutorialMaster_OpenType___TypeInfo, 3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
      v4,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305,
      0);
    v5 = sub_1C93D20(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2ABEB )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2ABEB = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v6->static_fields->_WarId_k__BackingField, 0);
    if ( !v5 )
      goto LABEL_50;
    *(_DWORD *)(v5 + 16) = (_DWORD)EventID;
    *(_QWORD *)(v5 + 24) = v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v4, v9, v10, v11, v12, v13, v14);
  }
  *(_DWORD *)(v5 + 40) = mapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v5,
                             v8);
  v18 = EventTutorialMaster___c_TypeInfo;
  v19 = AvailableTutorialArray;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v18 = EventTutorialMaster___c_TypeInfo;
  }
  _9__39_0 = (System_Func_object__object__o *)v18->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = EventTutorialMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__39_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__39_0,
      v21,
      Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__39_0__,
      0);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__39_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__39_0,
      (int32_t)_9__39_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__39_0,
                                                               (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v30 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v29,
                                 (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v31 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                EventID,
                                                                                v30,
                                                                                0);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v32 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(EventID, v31, 0);
  v33 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v32,
          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2DDE7 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2DDE7 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  EventID = (QuestAfterAction_o *)v34->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( EventID )
    System_Collections_Generic_HashSet_object___Clear(
      (System_Collections_Generic_HashSet_T__o *)EventID,
      (const MethodInfo_372BE60 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
  if ( !v19 )
    goto LABEL_50;
  max_length = v19->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
        sub_1C93D34(EventID);
      v37 = v19->m_Items[v36];
      if ( !v37 )
        break;
      v39 = v37->fields.eventId;
      flagType = v37->fields.flagType;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      TerminalPramsManager__SetForcePlayEventTutorialArray(v39, flagType, 0);
      max_length = v19->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_48;
    }
LABEL_50:
    sub_1C93D2C(EventID, v8);
  }
LABEL_48:
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  QuestAfterAction__PlaySpecifiedActionInstantly(EventID, (QuestAfterAction_Command_array *)v33, 0);
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

  if ( (byte_4D30CDD & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D30CDD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
      v23 = v22;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v23,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
      {
        current = v23.fields._current;
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !current )
          sub_1C93D2C(Instance, v10);
        if ( !Instance )
          sub_1C93D2C(0, v10);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, (int32_t)current[1].klass, 0);
        if ( !QuestInfo )
          break;
        refreshedWarIds = this->fields.refreshedWarIds;
        if ( !refreshedWarIds )
          sub_1C93D2C(0, v11);
        if ( !System_Collections_Generic_HashSet_int___Contains(
                refreshedWarIds,
                QuestInfo->fields.warId,
                (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
              sub_1C93D2C(IsOpen, v19);
            ScrTerminalListTop__RefreshQuestTree((ScrTerminalListTop_o *)mTerminalList, QuestInfo->fields.warId, 0);
            v21 = this->fields.refreshedWarIds;
            if ( !v21 )
              sub_1C93D2C(0, v20);
            System_Collections_Generic_HashSet_int___Add(
              v21,
              QuestInfo->fields.warId,
              (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
      return;
    }
LABEL_34:
    sub_1C93D2C(v5, releaseEntList);
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

  if ( (byte_4D30CBE & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30CBE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_1C93D2C(0, v8);
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, flagType, eventId, 0);
}


void EventTutorialMaster__SaveOnceDailyDispTutorialTime(int32_t eventId, int32_t flagType, const MethodInfo *method)
{
  System_String_o *OnceDailyDispTutorialSaveKey; // x19
  System_String_o *v6; // x0
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D30CE1 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30CE1 = 1;
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

  if ( (byte_4D30CCC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v10);
  }
  EventTutorialMaster__showTutorialWithoutCheck(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    conditionNone,
    v11);
}


void EventTutorialMaster__ShowTutorialWithoutCheck_42978476(
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

  if ( (byte_4D30CD2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CD2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v16);
  }
  EventTutorialMaster__showTutorialWithoutCheck_42978676(
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

  if ( (byte_4D30CE6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
    byte_4D30CE6 = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
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
  struct System_Int32_array *condIds; // x8
  int max_length; // w9
  unsigned int v14; // w8
  CommonReleaseEntity_o *v15; // x9
  int32_t condType; // w11
  int64_t *v17; // x10
  Il2CppObject *entitya; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D30CE0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4D30CE0 = 1;
  }
  entitya = 0;
  *startedTime = 0;
  *endedTime = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (CommonReleaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !entity || !Master_object )
    goto LABEL_30;
  Master_object = (CommonReleaseEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                 &entitya,
                                                 entity->fields.eventId,
                                                 (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v10 = entitya;
    if ( entitya )
    {
      *startedTime = (int64_t)entitya[5].monitor;
      *endedTime = (int64_t)v10[6].klass;
      return 1;
    }
LABEL_30:
    sub_1C93D2C(Master_object, v9);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.condIds, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (CommonReleaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  condIds = entity->fields.condIds;
  if ( !condIds )
    goto LABEL_30;
  if ( !LODWORD(condIds->max_length) )
LABEL_31:
    sub_1C93D34(Master_object);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *dicRootComponent; // x22
  System_Func_object__bool__o *v19; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Func_object__bool__o *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  EventTutorialMaster___c_c *v25; // x0
  System_Func_object__bool__o *_9__40_2; // x24
  Il2CppObject *v27; // x25
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  __int64 v37; // x23
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t current; // w1
  System_Func_object__bool__o *v47; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v49; // x1
  const MethodInfo *v50; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x21
  System_Func_object__bool__o *v52; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__bool__o *v54; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v56; // x0
  const MethodInfo *v57; // x2
  AvalonSceneManager_o *v58; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D30CDC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_1C93AD4(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__getEntityList__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_1C93AD4(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_1C93AD4(&SceneList_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__40_2__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__0__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__1__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__3__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__4__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass40_0_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass40_1__TutorialAfterUpdateQuestTree_b__5__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass40_1_TypeInfo);
    sub_1C93AD4(&EventTutorialMaster___c_TypeInfo);
    byte_4D30CDC = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v5 = sub_1C93D20(EventTutorialMaster___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_DWORD *)(v5 + 24) = eventId;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( this->fields.refreshedWarIds )
    {
      v10 = Instance;
      System_Collections_Generic_HashSet_int___Clear(
        this->fields.refreshedWarIds,
        (const MethodInfo_3725A3C *)Method_System_Collections_Generic_HashSet_int__Clear__);
      v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v11,
        (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v11 )
      {
        System_Collections_Generic_HashSet_int___Add(
          v11,
          119,
          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          170,
          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          63,
          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v11,
          238,
          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        *(_QWORD *)(v5 + 16) = v11;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v11, v12, v13, v14, v15, v16, v17);
        Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( Instance )
        {
          dicRootComponent = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.dicRootComponent;
          v19 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v19,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__0__,
            0);
          v20 = System_Linq_Enumerable__Where_object_(
                  dicRootComponent,
                  (System_Func_TSource__bool__o *)v19,
                  (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          v21 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v21,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__1__,
            0);
          v22 = System_Linq_Enumerable__Where_object_(
                  v20,
                  (System_Func_TSource__bool__o *)v21,
                  (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                               v22,
                                               (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
          if ( v10 )
          {
            v23 = (System_Collections_Generic_List_object__o *)Instance;
            v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v10->fields.dicRootComponent;
            v25 = EventTutorialMaster___c_TypeInfo;
            if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
              v25 = EventTutorialMaster___c_TypeInfo;
            }
            v58 = v10;
            _9__40_2 = (System_Func_object__bool__o *)v25->static_fields->__9__40_2;
            if ( !_9__40_2 )
            {
              if ( !v25->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v25);
                v25 = EventTutorialMaster___c_TypeInfo;
              }
              v27 = (Il2CppObject *)v25->static_fields->__9;
              _9__40_2 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__40_2,
                v27,
                Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__40_2__,
                0);
              static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
              static_fields->__9__40_2 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__40_2;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_2,
                (int32_t)_9__40_2,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            v35 = System_Linq_Enumerable__Where_object_(
                    v24,
                    (System_Func_TSource__bool__o *)_9__40_2,
                    (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
            Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                                 v35,
                                                 (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
            if ( v23 )
            {
              v36 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v59,
                v23,
                (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
              v60 = v59;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v60,
                        (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__) )
              {
                v37 = sub_1C93D20(EventTutorialMaster___c__DisplayClass40_1_TypeInfo);
                System_Object___ctor((Il2CppObject *)v37, 0);
                if ( !v37 )
                  sub_1C93D2C(v38, v39);
                current = (int32_t)v60.fields._current;
                *(_QWORD *)(v37 + 16) = v60.fields._current;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v37 + 16), current, v40, v41, v42, v43, v44, v45);
                v47 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_QuestReleaseEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v47,
                  (Il2CppObject *)v37,
                  Method_EventTutorialMaster___c__DisplayClass40_1__TutorialAfterUpdateQuestTree_b__5__,
                  0);
                v48 = System_Linq_Enumerable__Where_object_(
                        v36,
                        (System_Func_TSource__bool__o *)v47,
                        (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
                v49 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v48,
                                                                                 (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
                EventTutorialMaster__RefreshQuestTree(this, v49, v50);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v60,
                (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
              v51 = (System_Collections_Generic_IEnumerable_TSource__o *)v58->fields.dicRootComponent;
              v52 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v52,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__3__,
                0);
              v53 = System_Linq_Enumerable__Where_object_(
                      v51,
                      (System_Func_TSource__bool__o *)v52,
                      (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v54 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v54,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass40_0__TutorialAfterUpdateQuestTree_b__4__,
                0);
              v55 = System_Linq_Enumerable__Where_object_(
                      v53,
                      (System_Func_TSource__bool__o *)v54,
                      (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v56 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                               v55,
                                                                               (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
              EventTutorialMaster__RefreshQuestTree(this, v56, v57);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C93D2C(Instance, v7);
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

  if ( (byte_4D30CD4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30CD4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  const MethodInfo *v33; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v36; // x28
  EventTutorialEntity_o *v37; // x22
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v42; // x3
  int32_t v43; // w8
  const MethodInfo *v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t flagType; // w23
  int32_t v50; // w24
  const MethodInfo *v51; // x2
  System_Action_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct System_Int32_array *buckets; // x8
  _QWORD *v60; // x9
  __int64 slots_low; // x10
  __int64 v62; // x8
  const MethodInfo *v63; // x2
  System_Action_o *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D30CBF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__0__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__1__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
    byte_4D30CBF = 1;
  }
  memset(&v73, 0, sizeof(v73));
  memset(&i, 0, sizeof(i));
  v18 = sub_1C93D20(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_64;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 16), (int32_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 32) = callbackAfter;
  *(_DWORD *)(v18 + 24) = eventId;
  *(_DWORD *)(v18 + 28) = openKind;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)callbackAfter, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)(v18 + 40) = qId;
  *(_DWORD *)(v18 + 44) = bPhase;
  *(_DWORD *)(v18 + 48) = bWave;
  *(_DWORD *)(v18 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_64;
  max_length = sortedEntityArray->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_44:
    openedEventIds = this->fields.openedEventIds;
    if ( openedEventIds )
    {
      System_Collections_Generic_HashSet_int___GetEnumerator(
        (System_Collections_Generic_HashSet_Enumerator_T__o *)&v71,
        openedEventIds,
        (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
      for ( i = (System_Collections_Generic_HashSet_Enumerator_T__o)v71;
            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &i,
              (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
            EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v51) )
      {
        ;
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
        &i,
        (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      openedEventIds = this->fields.openedEventIds;
      if ( openedEventIds )
      {
        System_Collections_Generic_HashSet_int___Clear(
          openedEventIds,
          (const MethodInfo_3725A3C *)Method_System_Collections_Generic_HashSet_int__Clear__);
        ActionExtensions__Call(*(System_Action_o **)(v18 + 32), 0);
        return;
      }
    }
    goto LABEL_64;
  }
  v36 = 0;
  while ( 1 )
  {
    if ( v36 >= (unsigned int)max_length )
      sub_1C93D34(openedEventIds);
    v37 = sortedEntityArray->m_Items[v36];
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_64;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v71,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v73 = v71;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v73,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v38 )
          break;
        if ( !v37 )
          sub_1C93D2C(v38, v39);
        if ( !v73.fields._current )
          sub_1C93D2C(v38, v39);
        if ( v37->fields.eventId == LODWORD(v73.fields._current[1].klass)
          && v37->fields.flagType == HIDWORD(v73.fields._current[1].klass)
          && v37->fields.num == LODWORD(v73.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v73,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_40;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v73,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v37 )
      goto LABEL_64;
    flag = v37->fields.flag;
    if ( v37->fields.openType != 84
      || (Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v37, v20),
          openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                          Targets,
                                                                          (System_Int32_array_array *)Targets,
                                                                          *(_DWORD *)(v18 + 40),
                                                                          v42),
          ((unsigned __int8)openedEventIds & 1) != 0) )
    {
      if ( (flag & 2) == 0 )
        break;
      if ( v37->fields.openType != 45 )
        break;
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isEnableCondition(
                                                                      v37,
                                                                      *(_DWORD *)(v18 + 40),
                                                                      *(_DWORD *)(v18 + 44),
                                                                      *(_DWORD *)(v18 + 48),
                                                                      *(_DWORD *)(v18 + 52),
                                                                      v33);
      if ( ((unsigned __int8)openedEventIds & 1) != 0 )
        break;
    }
LABEL_40:
    LODWORD(max_length) = sortedEntityArray->max_length;
    if ( (__int64)++v36 >= (int)max_length )
      goto LABEL_44;
  }
  v43 = v37->fields.eventId;
  if ( (v43 & 0x80000000) == 0 && v43 != *(_DWORD *)(v18 + 24)
    || v37->fields.openType != *(_DWORD *)(v18 + 28)
    || (openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                        v37,
                                                                        *(_DWORD *)(v18 + 40),
                                                                        *(_DWORD *)(v18 + 44),
                                                                        *(_DWORD *)(v18 + 48),
                                                                        *(_DWORD *)(v18 + 52),
                                                                        v33),
        (flag & 2) == 0)
    && ((unsigned __int8)openedEventIds & 1) == 0 )
  {
    if ( (v37->fields.flag & 1) != 0 )
    {
      flagType = v37->fields.flagType;
      v50 = *(_DWORD *)(v18 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)TutorialFlag__Get_41176140(flagType, v50, 0);
      if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                        0,
                                                                        (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !openedEventIds )
          goto LABEL_64;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)openedEventIds,
          v37->fields.flagType,
          *(_DWORD *)(v18 + 24),
          0);
      }
    }
    goto LABEL_40;
  }
  if ( (v37->fields.flag & 4) != 0 )
  {
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__IsOpenOnceDailyDispTutorial(
                                                                    this,
                                                                    v37,
                                                                    v44);
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      goto LABEL_40;
  }
  if ( (flag & 2) == 0 && !notSave )
  {
    v52 = *(System_Action_o **)(v18 + 64);
    if ( !v52 )
    {
      v52 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__1__,
        0);
      *(_QWORD *)(v18 + 64) = v52;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 64), (int32_t)v52, v53, v54, v55, v56, v57, v58);
    }
    EventTutorialEntity__OpenTutorial(v37, v52, v44);
    return;
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds
    || (buckets = openedEventIds->fields._buckets,
        v60 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++HIDWORD(openedEventIds->fields._slots),
        !buckets) )
  {
LABEL_64:
    sub_1C93D2C(openedEventIds, v20);
  }
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v37,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v62 + 32) = v37;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v62 + 32), (int32_t)v37, (int32_t)v44, v45, v46, (int32_t)v33, v47, v48);
  }
  v64 = *(System_Action_o **)(v18 + 56);
  if ( !v64 )
  {
    v64 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v64,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__0__,
      0);
    *(_QWORD *)(v18 + 56) = v64;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 56), (int32_t)v64, v65, v66, v67, v68, v69, v70);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v37, v64, v63);
}


void EventTutorialMaster__checkTutorial_42971416(
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  unsigned __int64 v41; // x26
  __int64 v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x24
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  EventTutorialEntity_o *v57; // x1
  __int64 v58; // x23
  const MethodInfo *v59; // x5
  _BOOL8 v60; // x0
  __int64 v61; // x1
  System_Collections_Generic_HashSet_int__o *v62; // x8
  int slots; // w28
  const MethodInfo *v64; // x3
  _DWORD *v65; // x8
  const MethodInfo *v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Collections_Generic_HashSet_int__o *v72; // x8
  int32_t buckets; // w22
  int32_t buckets_high; // w24
  const MethodInfo *v75; // x2
  EventTutorialEntity_o *v76; // x19
  System_Action_o *v77; // x20
  const MethodInfo *v78; // x2
  struct System_Int32_array *v79; // x8
  _QWORD *v80; // x9
  __int64 slots_low; // x10
  __int64 v82; // x8
  EventTutorialEntity_o *v83; // x19
  System_Action_o *v84; // x20
  const MethodInfo *v85; // x2
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D30CC0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__0__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__1__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    byte_4D30CC0 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  memset(&i, 0, sizeof(i));
  v19 = sub_1C93D20(EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_76;
  *(_QWORD *)(v19 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 16), (int32_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = checkEventIds;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 24), (int32_t)checkEventIds, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v19 + 40) = callbackAfter;
  *(_DWORD *)(v19 + 32) = openKind;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 40), (int32_t)callbackAfter, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v19 + 48) = qId;
  *(_DWORD *)(v19 + 52) = bPhase;
  *(_DWORD *)(v19 + 56) = bWave;
  *(_DWORD *)(v19 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_76;
  if ( SLODWORD(sortedEntityArray->max_length) < 1 )
  {
LABEL_58:
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_76;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v86,
      openedEventIds,
      (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    for ( i = (System_Collections_Generic_HashSet_Enumerator_T__o)v86;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)i.fields._current, v75) )
    {
      ;
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &i,
      (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_76;
    System_Collections_Generic_HashSet_int___Clear(
      openedEventIds,
      (const MethodInfo_3725A3C *)Method_System_Collections_Generic_HashSet_int__Clear__);
    ActionExtensions__Call(*(System_Action_o **)(v19 + 40), 0);
    return;
  }
  v41 = 0;
  while ( 1 )
  {
    v42 = sub_1C93D20(EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    if ( !v42 )
      goto LABEL_76;
    *(_QWORD *)(v42 + 24) = v19;
    v49 = v42 + 24;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 24), v19, v43, v44, v45, v46, v47, v48);
    if ( v41 >= LODWORD(sortedEntityArray->max_length) )
      sub_1C93D34(v50);
    v57 = sortedEntityArray->m_Items[v41];
    *(_QWORD *)(v42 + 16) = v57;
    v58 = v42 + 16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 16), (int32_t)v57, v51, v52, v53, v54, v55, v56);
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_76;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v86,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v88 = v86;
      while ( 1 )
      {
        v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v88,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v60 )
          break;
        v62 = *(System_Collections_Generic_HashSet_int__o **)v58;
        if ( !*(_QWORD *)v58 )
          sub_1C93D2C(v60, v61);
        if ( !v88.fields._current )
          sub_1C93D2C(v60, v61);
        if ( LODWORD(v62->fields._buckets) == LODWORD(v88.fields._current[1].klass)
          && HIDWORD(v62->fields._buckets) == HIDWORD(v88.fields._current[1].klass)
          && LODWORD(v62->fields._slots) == LODWORD(v88.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v88,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_54;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v88,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)v58;
    if ( !*(_QWORD *)v58 )
      goto LABEL_76;
    slots = (int)openedEventIds[1].fields._slots;
    if ( openedEventIds->fields._count != 84 )
      goto LABEL_80;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__getTargets(
                                                                    (EventTutorialEntity_o *)openedEventIds,
                                                                    (const MethodInfo *)v21);
    if ( !*(_QWORD *)v49 )
      goto LABEL_76;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    (EventTutorialMaster_o *)openedEventIds,
                                                                    (System_Int32_array_array *)openedEventIds,
                                                                    *(_DWORD *)(*(_QWORD *)v49 + 48LL),
                                                                    v64);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
    {
LABEL_80:
      if ( (slots & 2) == 0 )
        break;
      openedEventIds = *(System_Collections_Generic_HashSet_int__o **)v58;
      if ( !*(_QWORD *)v58 )
        goto LABEL_76;
      if ( openedEventIds->fields._count != 45 )
        break;
      if ( !*(_QWORD *)v49 )
        goto LABEL_76;
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isEnableCondition(
                                                                      (EventTutorialEntity_o *)openedEventIds,
                                                                      *(_DWORD *)(*(_QWORD *)v49 + 48LL),
                                                                      *(_DWORD *)(*(_QWORD *)v49 + 52LL),
                                                                      *(_DWORD *)(*(_QWORD *)v49 + 56LL),
                                                                      *(_DWORD *)(*(_QWORD *)v49 + 60LL),
                                                                      v59);
      if ( ((unsigned __int8)openedEventIds & 1) != 0 )
        break;
    }
LABEL_54:
    if ( (__int64)++v41 >= SLODWORD(sortedEntityArray->max_length) )
      goto LABEL_58;
  }
  if ( isEventIdOneOrMore )
    goto LABEL_81;
  openedEventIds = *(System_Collections_Generic_HashSet_int__o **)v58;
  if ( !*(_QWORD *)v58 )
    goto LABEL_76;
  if ( ((__int64)openedEventIds->fields._buckets & 0x80000000) == 0 )
  {
LABEL_81:
    if ( !*(_QWORD *)v49 )
      goto LABEL_76;
    if ( !*(_QWORD *)v58 )
      goto LABEL_76;
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)(*(_QWORD *)v49 + 24LL);
    if ( !openedEventIds )
      goto LABEL_76;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)System_Collections_Generic_List_int___Contains(
                                                                    (System_Collections_Generic_List_int__o *)openedEventIds,
                                                                    *(_DWORD *)(*(_QWORD *)v58 + 16LL),
                                                                    (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
    {
LABEL_41:
      v72 = *(System_Collections_Generic_HashSet_int__o **)v58;
      if ( !*(_QWORD *)v58 )
        goto LABEL_76;
      if ( ((__int64)v72[1].fields._slots & 1) != 0 )
      {
        buckets = (int32_t)v72->fields._buckets;
        buckets_high = HIDWORD(v72->fields._buckets);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        if ( !TutorialFlag__Get_41176140(buckets_high, buckets, 0) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                          0,
                                                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
          if ( !*(_QWORD *)v58 || !openedEventIds )
            goto LABEL_76;
          TutorialEventSetRequest__beginRequest(
            (TutorialEventSetRequest_o *)openedEventIds,
            *(_DWORD *)(*(_QWORD *)v58 + 20LL),
            *(_DWORD *)(*(_QWORD *)v58 + 16LL),
            0);
        }
      }
      goto LABEL_54;
    }
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)v58;
    if ( !*(_QWORD *)v58 )
      goto LABEL_76;
  }
  v65 = *(_DWORD **)v49;
  if ( !*(_QWORD *)v49 )
    goto LABEL_76;
  if ( openedEventIds->fields._count != v65[8] )
    goto LABEL_41;
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                  (EventTutorialEntity_o *)openedEventIds,
                                                                  v65[12],
                                                                  v65[13],
                                                                  v65[14],
                                                                  v65[15],
                                                                  v59);
  if ( (slots & 2) == 0 && ((unsigned __int8)openedEventIds & 1) == 0 )
    goto LABEL_41;
  v21 = *(System_Collections_Generic_HashSet_int__o **)v58;
  if ( !*(_QWORD *)v58 )
    goto LABEL_76;
  if ( ((__int64)v21[1].fields._slots & 4) != 0
    && !EventTutorialMaster__IsOpenOnceDailyDispTutorial(this, (EventTutorialEntity_o *)v21, v66) )
  {
    goto LABEL_54;
  }
  if ( (slots & 2) == 0 && !notSave )
  {
    v76 = *(EventTutorialEntity_o **)(v42 + 16);
    v77 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v77,
      (Il2CppObject *)v42,
      Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__1__,
      0);
    if ( v76 )
    {
      EventTutorialEntity__OpenTutorial(v76, v77, v78);
      return;
    }
LABEL_76:
    sub_1C93D2C(openedEventIds, v21);
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds )
    goto LABEL_76;
  v21 = *(System_Collections_Generic_HashSet_int__o **)v58;
  v79 = openedEventIds->fields._buckets;
  v80 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++HIDWORD(openedEventIds->fields._slots);
  if ( !v79 )
    goto LABEL_76;
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(v79->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v21,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
  }
  else
  {
    v82 = (__int64)v79 + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v82 + 32) = v21;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v82 + 32), (int32_t)v21, (int32_t)v66, v67, v68, v69, v70, v71);
  }
  v83 = *(EventTutorialEntity_o **)(v42 + 16);
  v84 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v84,
    (Il2CppObject *)v42,
    Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__0__,
    0);
  if ( !v83 )
    goto LABEL_76;
  EventTutorialEntity__OpenTutorialWithoutFlag(v83, v84, v85);
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

  if ( (byte_4D30CDA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    this = (EventTutorialMaster_o *)sub_1C93AD4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4D30CDA = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1C93B7C(int___TypeInfo, LODWORD(openKinds->max_length));
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
      sub_1C93D34(this);
    }
LABEL_28:
    sub_1C93D2C(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
                                          (const MethodInfo_32AB1DC *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
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
              (const MethodInfo_387A74C *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v19; // w27
  Il2CppObject *v20; // x23
  EventTutorialEntity_o *v21; // x24
  int32_t v22; // w8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct System_String_array *v27; // x8
  il2cpp_array_size_t v28; // x28
  unsigned __int64 v29; // x29
  struct System_String_array *v30; // x8
  _QWORD *v31; // x8

  if ( (byte_4D30CD8 & 1) == 0 )
  {
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&StringLiteral_16055/*"[]"*/);
    sub_1C93AD4(&StringLiteral_16114/*"[{0}]"*/);
    byte_4D30CD8 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16114/*"[{0}]"*/, (Il2CppObject *)targetIds, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v20 = 0;
    if ( !v8 )
      goto LABEL_42;
  }
  else
  {
    v19 = 0;
    v20 = 0;
    do
    {
      if ( v19 >= (unsigned int)max_length )
LABEL_43:
        sub_1C93D34(IsNullOrEmpty);
      v21 = sortedEntityArray->m_Items[v19];
      if ( !v21 )
        goto LABEL_42;
      v22 = v21->fields.eventId;
      if ( (v22 < 0 || v22 == eventId) && v21->fields.openType == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0);
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)v21,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v21;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v21, v11, v12, v13, v14, v15, v16);
          }
        }
        else
        {
          v27 = v21->fields.targetIds;
          if ( !v27 )
            goto LABEL_42;
          v28 = v27->max_length;
          if ( !v20 )
          {
            if ( !(_DWORD)v28
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  v27->m_Items[0],
                                                                  (System_String_o *)StringLiteral_16055/*"[]"*/,
                                                                  0),
                  v20 = 0,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v20 = (Il2CppObject *)v21;
            }
          }
          if ( (int)v28 >= 1 )
          {
            v29 = 0;
            while ( 1 )
            {
              v30 = v21->fields.targetIds;
              if ( !v30 )
                break;
              if ( v29 >= LODWORD(v30->max_length) )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(v30->m_Items[v29], targetIds, 0);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v28 == ++v29 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1C93D2C(IsNullOrEmpty, v10);
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
    if ( LODWORD(IsNullOrEmpty->max_length) )
    {
      v8->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v20;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)IsNullOrEmpty->m_Items, (int32_t)v20, v11, v12, v13, v14, v15, v16);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v20,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
        sub_1C93D2C(this, targets);
      max_length = v7->max_length;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_1C93D34(this);
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

  if ( (byte_4D30CC3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4D30CC3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1C93D2C(list, *(_QWORD *)&eventId);
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

  if ( (byte_4D30CC2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_4D30CC2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
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
    sub_1C93D2C(list, *(_QWORD *)&eventId);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x0
  EventTutorialMaster___c_c *v16; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__8_1; // x20
  Il2CppObject *v19; // x21
  struct EventTutorialMaster___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_Generic_List_object__o *v35; // x19
  struct EventTutorialMaster_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4D30CBD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&System_Func_EventTutorialEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__preProcess_b__8_0__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__preProcess_b__8_1__);
    sub_1C93AD4(&EventTutorialMaster___c_TypeInfo);
    byte_4D30CBD = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_31D3358 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
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
    _9__8_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v7, Method_EventTutorialMaster___c__preProcess_b__8_0__, 0);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__8_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__OrderBy_object__int_(
          v5,
          (System_Func_TSource__TKey__o *)_9__8_0,
          (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v16 = EventTutorialMaster___c_TypeInfo;
  v17 = v15;
  if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v16 = EventTutorialMaster___c_TypeInfo;
  }
  _9__8_1 = (System_Func_object__int__o *)v16->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventTutorialMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__8_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_1, v19, Method_EventTutorialMaster___c__preProcess_b__8_1__, 0);
    v20 = EventTutorialMaster___c_TypeInfo->static_fields;
    v20->__9__8_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__8_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20->__9__8_1, (int32_t)_9__8_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TKey__o *)_9__8_1,
                                                               (const MethodInfo_31E2E7C *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v28 = System_Linq_Enumerable__ToArray_object_(
          v27,
          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v28;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventTutorialMaster_TypeInfo->static_fields,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v36 = EventTutorialMaster_TypeInfo->static_fields;
  v36->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v35;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36->checkedEntityList, (int32_t)v35, v37, v38, v39, v40, v41, v42);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int32_t v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4D30CD0 & 1) == 0 )
  {
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_4D30CD0 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_22:
    sub_1C93D2C(v12, v13);
  max_length = sortedEntityArray->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C93D34(v12);
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
      v23 = v13->fields.eventId;
      if ( (v23 < 0 || v23 == eventId) && v13->fields.openType == openKind )
      {
        if ( !v11 )
          goto LABEL_22;
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v13,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v13;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
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
    (const MethodInfo *)v16);
}


void EventTutorialMaster__showTutorialWithoutCheck_42978676(
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
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v35; // w23
  EventTutorialEntity_o *v36; // x21
  int32_t v37; // w8
  const MethodInfo *v38; // x2
  System_Action_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7

  if ( (byte_4D30CD3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass31_0__showTutorialWithoutCheck_b__0__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass31_0_TypeInfo);
    byte_4D30CD3 = 1;
  }
  v17 = sub_1C93D20(EventTutorialMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)callbackAfter, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1C93D2C(isEnableCondition, v19);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0);
  }
  else
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
        sub_1C93D34(isEnableCondition);
      v36 = sortedEntityArray->m_Items[v35];
      if ( !v36 )
        goto LABEL_18;
      v37 = v36->fields.eventId;
      if ( (v37 < 0 || v37 == *(_DWORD *)(v17 + 24)) && v36->fields.openType == *(_DWORD *)(v17 + 28) )
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
      v39 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass31_0__showTutorialWithoutCheck_b__0__,
        0);
      *(_QWORD *)(v17 + 56) = v39;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 56), (int32_t)v39, v40, v41, v42, v43, v44, v45);
    }
    EventTutorialEntity__OpenTutorial(v36, v39, v38);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x2

  if ( (byte_4D30CD5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass33_0__tutorialChainWithoutCheck_b__0__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass33_0_TypeInfo);
    byte_4D30CD5 = 1;
  }
  v9 = sub_1C93D20(EventTutorialMaster___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = tutoList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)tutoList, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = index;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)callback, v24, v25, v26, v27, v28, v29);
  v10 = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !v10 )
    goto LABEL_9;
  v30 = *(_DWORD *)(v9 + 32);
  if ( v30 < v10->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v30,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v9,
      Method_EventTutorialMaster___c__DisplayClass33_0__tutorialChainWithoutCheck_b__0__,
      0);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v32, v33);
      return;
    }
LABEL_9:
    sub_1C93D2C(v10, v11);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v2 = this;
  if ( (byte_4D30CE7 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D30CE7 = 1;
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
                     (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.eventIds, (int32_t)eventIds, v6, v7, v8, v9, v10, v11);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1C93B7C(int___TypeInfo, 1);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1C93D34(OpenEventIds);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1C93D2C(OpenEventIds, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventTutorialMaster__CoCheckTutorialLocal_d__13_o *v8; // x19
  struct EventTutorialMaster_o *_4__this; // x20
  Il2CppObject *v10; // x22
  struct EventTutorialMaster___c__DisplayClass13_0_o **p__8__1; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int v46; // w8
  struct EventTutorialMaster___c__DisplayClass13_1_o *_8__2; // x21
  Il2CppObject *v49; // x22
  struct EventTutorialMaster___c__DisplayClass13_1_o **p__8__2; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct EventTutorialMaster_EventTutorialArgs_o *_8__1; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct EventTutorialEntity_array *v70; // x8
  __int64 _7__wrap2; // x9
  EventTutorialEntity_o *v72; // x1
  const MethodInfo *v73; // x2
  struct EventTutorialMaster___c__DisplayClass13_1_o *v74; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *CS___8__locals1; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v76; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v77; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v78; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v79; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v80; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v81; // x9
  struct EventTutorialMaster___c__DisplayClass13_0_o *v82; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v83; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v85; // x22
  EventTutorialEntity_o *data; // x21
  System_Action_o *v87; // x23
  const MethodInfo *v88; // x2
  struct EventTutorialMaster___c__DisplayClass13_0_o *v89; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v90; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v91; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v92; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v93; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v94; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v95; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v96; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v98; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o **v99; // x21
  struct EventTutorialEntity_o *v100; // x8
  int32_t eventId; // w22
  int32_t flagType; // w23
  struct EventTutorialEntity_o *v103; // x8
  struct EventTutorialEntity_array *_7__wrap1; // x9
  const MethodInfo *v105; // x2
  System_Func_bool__o *v106; // x20
  UnityEngine_WaitWhile_o *v107; // x21
  GrandQuestFolderBoardItem_o *v108; // x19
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  int v115; // w8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v116; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v117; // x8
  System_Func_bool__o *_9__3; // x20
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  UnityEngine_WaitWhile_o *v125; // x21
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  System_Func_bool__o *_9__0; // x20
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  UnityEngine_WaitWhile_o *v139; // x21
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v147; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_4D30CF1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&EventTutorialMaster_TypeInfo);
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__0__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__3__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__1__);
    sub_1C93AD4(&Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__2__);
    sub_1C93AD4(&EventTutorialMaster___c__DisplayClass13_1_TypeInfo);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)sub_1C93AD4(&UnityEngine_WaitWhile_TypeInfo);
    byte_4D30CF1 = 1;
  }
  memset(&i, 0, sizeof(i));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C93D20(EventTutorialMaster___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v8->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass13_0_o *)v10;
      p__8__1 = &v8->fields.__8__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      args = v8->fields.args;
      *(_QWORD *)&this->fields.__1__state = args;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)args, v18, v19, v20, v21, v22, v23);
      this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_86;
      v31 = (Il2CppObject *)v8->fields.__4__this;
      this->fields.__2__current = v31;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v31, v25, v26, v27, v28, v29, v30);
      if ( !*p__8__1 )
        goto LABEL_86;
      if ( !(*p__8__1)->fields.args )
        return 0;
      static_fields = EventTutorialMaster_TypeInfo->static_fields;
      sortedEntityArray = static_fields->sortedEntityArray;
      v8->fields.__7__wrap1 = static_fields->sortedEntityArray;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap1,
        (int32_t)sortedEntityArray,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v46 = 0;
      v8->fields.__7__wrap2 = 0;
      break;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_36;
    case 2:
      _8__2 = v8->fields.__8__2;
      v8->fields.__1__state = -1;
      if ( !_8__2 )
        goto LABEL_86;
      goto LABEL_40;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_54;
    default:
      return 0;
  }
  while ( 1 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)&v8->fields.__7__wrap1;
    _7__wrap1 = v8->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_86;
    if ( v46 >= SLODWORD(_7__wrap1->max_length) )
      break;
    v49 = (Il2CppObject *)sub_1C93D20(EventTutorialMaster___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v49, 0);
    v8->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass13_1_o *)v49;
    p__8__2 = &v8->fields.__8__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__2, (int32_t)v49, v51, v52, v53, v54, v55, v56);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v8->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    _8__1 = (struct EventTutorialMaster_EventTutorialArgs_o *)v8->fields.__8__1;
    this->fields.args = _8__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.args, (int32_t)_8__1, v57, v58, v59, v60, v61, v62);
    v70 = v8->fields.__7__wrap1;
    if ( !v70 )
      goto LABEL_86;
    _7__wrap2 = v8->fields.__7__wrap2;
    if ( (unsigned int)_7__wrap2 >= LODWORD(v70->max_length) )
      sub_1C93D34(this);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v8->fields.__8__2;
    if ( !this )
      goto LABEL_86;
    v72 = v70->m_Items[_7__wrap2];
    *(_QWORD *)&this->fields.__1__state = v72;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v72, v64, v65, v66, v67, v68, v69);
    v74 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_86;
    CS___8__locals1 = v74->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_86;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)EventTutorialMaster__IsOpenCondition(
                                                                  v74->fields.data,
                                                                  CS___8__locals1->fields.args,
                                                                  v73);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v76 = *p__8__2;
      if ( !*p__8__2 )
        goto LABEL_86;
      v77 = v76->fields.CS___8__locals1;
      if ( !v77 )
        goto LABEL_86;
      v78 = v77->fields.args;
      if ( !v78 )
        goto LABEL_86;
      if ( v78->fields.adapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v76->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)EventTutorialEntity__HasBeforeAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v79 = *p__8__2;
          if ( !*p__8__2 )
            goto LABEL_86;
          v80 = v79->fields.CS___8__locals1;
          if ( !v80 )
            goto LABEL_86;
          v81 = v80->fields.args;
          if ( !v81 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v81->fields.adapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v79->fields.data, 0);
          if ( !*p__8__2 )
            goto LABEL_86;
          v82 = (*p__8__2)->fields.CS___8__locals1;
          if ( !v82 )
            goto LABEL_86;
          v83 = v82->fields.args;
          if ( !v83 )
            goto LABEL_86;
          adapter = v83->fields.adapter;
          if ( !adapter )
            goto LABEL_86;
          if ( adapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__0 = v82->fields.__9__0;
            if ( !_9__0 )
            {
              _9__0 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__0,
                (Il2CppObject *)v82,
                Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__0__,
                0);
              v82->fields.__9__0 = _9__0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v82->fields.__9__0,
                (int32_t)_9__0,
                v133,
                v134,
                v135,
                v136,
                v137,
                v138);
            }
            v139 = (UnityEngine_WaitWhile_o *)sub_1C93D20(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v139, _9__0, 0);
            v8->fields.__2__current = (Il2CppObject *)v139;
            p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C93A78(p__2__current, (int32_t)v139, v141, v142, v143, v144, v145, v146);
            LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
            return 1;
          }
        }
      }
LABEL_36:
      v85 = v8->fields.__8__2;
      if ( !v85 )
        goto LABEL_86;
      v85->fields.isBusy = 1;
      data = v85->fields.data;
      v87 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v87,
        (Il2CppObject *)v85,
        Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__1__,
        0);
      if ( !data )
        goto LABEL_86;
      EventTutorialEntity__OpenTutorial(data, v87, v88);
      _8__2 = v8->fields.__8__2;
      if ( !_8__2 )
        goto LABEL_86;
      if ( _8__2->fields.isBusy )
      {
        v106 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v106,
          (Il2CppObject *)_8__2,
          Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__2__,
          0);
        v107 = (UnityEngine_WaitWhile_o *)sub_1C93D20(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v107, v106, 0);
        v8->fields.__2__current = (Il2CppObject *)v107;
        v108 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v108, (int32_t)v107, v109, v110, v111, v112, v113, v114);
        v115 = 2;
LABEL_82:
        LODWORD(v108[-1].fields._ClosedMessage_k__BackingField) = v115;
        return 1;
      }
LABEL_40:
      v89 = _8__2->fields.CS___8__locals1;
      if ( !v89 )
        goto LABEL_86;
      v90 = v89->fields.args;
      if ( !v90 )
        goto LABEL_86;
      if ( v90->fields.afterActionAdapter )
      {
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)_8__2->fields.data;
        if ( !this )
          goto LABEL_86;
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)EventTutorialEntity__HasAfterAction(
                                                                      (EventTutorialEntity_o *)this,
                                                                      method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v91 = v8->fields.__8__2;
          if ( !v91 )
            goto LABEL_86;
          v92 = v91->fields.CS___8__locals1;
          if ( !v92 )
            goto LABEL_86;
          v93 = v92->fields.args;
          if ( !v93 )
            goto LABEL_86;
          this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)v93->fields.afterActionAdapter;
          if ( !this )
            goto LABEL_86;
          TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v91->fields.data, 0);
          v94 = v8->fields.__8__2;
          if ( !v94 )
            goto LABEL_86;
          v95 = v94->fields.CS___8__locals1;
          if ( !v95 )
            goto LABEL_86;
          v96 = v95->fields.args;
          if ( !v96 )
            goto LABEL_86;
          afterActionAdapter = v96->fields.afterActionAdapter;
          if ( !afterActionAdapter )
            goto LABEL_86;
          if ( afterActionAdapter->fields._IsPerformanceBusy_k__BackingField )
          {
            _9__3 = v95->fields.__9__3;
            if ( !_9__3 )
            {
              _9__3 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                _9__3,
                (Il2CppObject *)v95,
                Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__3__,
                0);
              v95->fields.__9__3 = _9__3;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v95->fields.__9__3,
                (int32_t)_9__3,
                v119,
                v120,
                v121,
                v122,
                v123,
                v124);
            }
            v125 = (UnityEngine_WaitWhile_o *)sub_1C93D20(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v125, _9__3, 0);
            v8->fields.__2__current = (Il2CppObject *)v125;
            v108 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C93A78(v108, (int32_t)v125, v126, v127, v128, v129, v130, v131);
            v115 = 3;
            goto LABEL_82;
          }
        }
      }
    }
LABEL_54:
    v99 = &v8->fields.__8__2;
    v98 = v8->fields.__8__2;
    if ( !v98 )
      goto LABEL_86;
    v100 = v98->fields.data;
    if ( !v100 )
      goto LABEL_86;
    if ( (v100->fields.flag & 1) != 0 )
    {
      eventId = v100->fields.eventId;
      flagType = v100->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_41176140(flagType, eventId, 0) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)NetworkManager__getRequest_object_(
                                                                      0,
                                                                      (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v99 )
          goto LABEL_86;
        v103 = (*v99)->fields.data;
        if ( !v103 || !this )
          goto LABEL_86;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          v103->fields.flagType,
          v103->fields.eventId,
          0);
      }
    }
    v8->fields.__8__2 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__2, 0, v2, v3, v4, v5, v6, v7);
    v46 = v8->fields.__7__wrap2 + 1;
    v8->fields.__7__wrap2 = v46;
  }
  this->klass = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)this, 0, v40, v41, v42, v43, v44, v45);
  if ( !_4__this )
    goto LABEL_86;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)_4__this->fields.openedEventIds;
  if ( !this )
    goto LABEL_86;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v147,
    (System_Collections_Generic_HashSet_int__o *)this,
    (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  for ( i = v147;
        System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
        EventTutorialMaster__TutorialAfterUpdateQuestTree(_4__this, (int32_t)i.fields._current, v105) )
  {
    ;
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__13_o *)_4__this->fields.openedEventIds;
  if ( !this
    || (System_Collections_Generic_HashSet_int___Clear(
          (System_Collections_Generic_HashSet_int__o *)this,
          (const MethodInfo_3725A3C *)Method_System_Collections_Generic_HashSet_int__Clear__),
        (v116 = v8->fields.__8__1) == 0)
    || (v117 = v116->fields.args) == 0 )
  {
LABEL_86:
    sub_1C93D2C(this, method);
  }
  ActionExtensions__Call(v117->fields.callbackAfter, 0);
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w8

  if ( (byte_4D30CF2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30CF2 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v15 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1C93D2C(0, v6);
    v8 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           v7);
    this->fields.__2__current = v8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v8, v9, v10, v11, v12, v13, v14);
    v15 = 1;
    result = 1;
  }
  this->fields.__1__state = v15;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30CE8 & 1) == 0 )
  {
    sub_1C93AD4(&EventTutorialMaster___c_TypeInfo);
    byte_4D30CE8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventTutorialMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c___OpenTutorialImages_b__29_0(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D30CE9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D30CE9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


System_Collections_Generic_IEnumerable_string__o *EventTutorialMaster___c___PlayTutorialSetUpAction_b__39_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
  return x->fields.type == 113;
}


int32_t EventTutorialMaster___c___preProcess_b__8_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return -x->fields.priority;
}


int32_t EventTutorialMaster___c___preProcess_b__8_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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
  if ( (byte_4D30CEA & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4D30CEA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass11_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1C93D2C(this, method);
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
  if ( (byte_4D30CEB & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4D30CEB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass11_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1C93D2C(this, method);
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
  if ( (byte_4D30CEC & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass12_1_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4D30CEC = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  EventTutorialMaster__checkTutorial_42971416(
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
  if ( (byte_4D30CED & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass12_1_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4D30CED = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  EventTutorialMaster__checkTutorial_42971416(
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
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
  if ( (byte_4D30CEE & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass13_1_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4D30CEE = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass13_1_o *)_4__this->fields.openedEventIds) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    data->fields.eventId,
    (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1C93D2C(0, method);
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
    sub_1C93D2C(0, method);
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
  if ( (byte_4D30CEF & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass40_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D30CEF = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass40_0_o *)v4->fields.contTypeArray) == 0 )
    sub_1C93D2C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.condType,
           (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass40_0___TutorialAfterUpdateQuestTree_b__1(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.condId == this->fields.eventId;
}


bool EventTutorialMaster___c__DisplayClass40_0___TutorialAfterUpdateQuestTree_b__3(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass40_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D30CF0 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass40_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D30CF0 = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass40_0_o *)v4->fields.contTypeArray) == 0 )
    sub_1C93D2C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.type,
           (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass40_0___TutorialAfterUpdateQuestTree_b__4(
        EventTutorialMaster___c__DisplayClass40_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, x);
  return x->fields.targetId == targetCommonEnt->fields.id;
}


void EventTutorialMaster___c__DisplayClass47_0___ctor(
        EventTutorialMaster___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass47_0___GetTutorialEntityList_b__0(
        EventTutorialMaster___c__DisplayClass47_0_o *this,
        EventTutorialEntity_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C93D2C(this, 0);
  return data->fields.eventId == this->fields.eventId && data->fields.flagType == this->fields.flagType;
}