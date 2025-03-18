void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2214B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method);
    byte_4C2214B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    171,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  if ( (byte_4C22137 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1C3B764(&DataManager_TypeInfo, v15);
    byte_4C22137 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        v19);
      return;
    }
LABEL_10:
    sub_1C3B9C0(Master_object, v17);
  }
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !v18 )
    goto LABEL_10;
  EventTutorialMaster__checkTutorial_40738688(
    v18,
    (System_Collections_Generic_List_int__o *)Master_object,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    0,
    v19);
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
  if ( (byte_4C22138 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1C3B764(&DataManager_TypeInfo, v15);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v16);
    *(_QWORD *)&eventId = sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v17);
    byte_4C22138 = 1;
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
  *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1C3B9C0(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds(*(const MethodInfo **)&eventId);
  if ( !v21 )
    goto LABEL_13;
  EventTutorialMaster__checkTutorial_40738688(
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

  if ( (byte_4C22139 & 1) == 0 )
  {
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v1);
    method = (const MethodInfo *)sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v2);
    byte_4C22139 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_1C3B9C0(method, v1);
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
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C22134 & 1) == 0 )
  {
    sub_1C3B764(&EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo, args);
    byte_4C22134 = 1;
  }
  v4 = sub_1C3B9B0(EventTutorialMaster__CoCheckTutorialLocal_d__8_TypeInfo);
  EventTutorialMaster__CoCheckTutorialLocal_d__8___ctor((EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1C3B9C0(v5, v6);
  *(_QWORD *)(v4 + 32) = args;
  sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)args, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4C2213A & 1) == 0 )
  {
    sub_1C3B764(&EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo, method);
    byte_4C2213A = 1;
  }
  v3 = sub_1C3B9B0(EventTutorialMaster__CoroutineCheckTutorial_d__14_TypeInfo);
  EventTutorialMaster__CoroutineCheckTutorial_d__14___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__14_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  *(_QWORD *)(v3 + 32) = args;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)args, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4C22149 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22149 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v15);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4C2213E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v3);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v4);
    sub_1C3B764(&System_Func_EventTutorialEntity__bool__TypeInfo, v5);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__, v6);
    sub_1C3B764(&EventTutorialMaster___c__DisplayClass18_0_TypeInfo, v7);
    byte_4C2213E = 1;
  }
  v8 = sub_1C3B9B0(EventTutorialMaster___c__DisplayClass18_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass18_0___ctor((EventTutorialMaster___c__DisplayClass18_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v9, v10);
  *(_QWORD *)(v8 + 16) = args;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)args, v11, v12, v13, v14, v15, v16);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v18 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v8,
    Method_EventTutorialMaster___c__DisplayClass18_0__GetAvailableTutorialArray_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v19,
                                        (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_4C2214C & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C2214C = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_329F900 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
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

  if ( (byte_4C22147 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C22147 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v9);
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
  int max_length; // w8
  unsigned int v11; // w21
  EventEntity_o *v12; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C22146 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C22146 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C3B9C8(Instance, id);
      v12 = EnableEntityList->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v9 )
        break;
      id = (unsigned int)v12->fields.id;
      items = v9->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          id,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      max_length = EnableEntityList->max_length;
      if ( (int)++v11 >= max_length )
        return v9;
    }
LABEL_17:
    sub_1C3B9C0(Instance, id);
  }
  return v9;
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
  if ( (byte_4C2213F & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, args);
    byte_4C2213F = 1;
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
              (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_1C3B9C0(data, args);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  if ( (byte_4C2213C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C2213C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v15);
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

  if ( (byte_4C2213B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4C2213B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v17);
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
  System_Action_o *_9__21_0; // x21
  Il2CppObject *v12; // x22
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C22141 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1C3B764(&Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, v5);
    sub_1C3B764(&EventTutorialMaster___c_TypeInfo, v6);
    byte_4C22141 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    v10 = EventTutorialMaster___c_TypeInfo;
    if ( !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v10 = EventTutorialMaster___c_TypeInfo;
    }
    _9__21_0 = v10->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventTutorialMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__21_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(_9__21_0, v12, Method_EventTutorialMaster___c__OpenTutorialImages_b__21_0__, 0LL);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = _9__21_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__21_0,
        (int64_t)_9__21_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( !v9 )
LABEL_15:
      sub_1C3B9C0(Instance, v8);
    CommonUI__OpenTutorialImageDialog_31258368(v9, imageIds, -1, 0, _9__21_0, 0LL, 0LL, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4C2213D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C2213D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v9);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_40744124(
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

  if ( (byte_4C22142 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4C22142 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v17);
  }
  EventTutorialMaster__showTutorialWithoutCheck_40744324(
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

  if ( (byte_4C2214D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__, entity);
    byte_4C2214D = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
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

  if ( (byte_4C22144 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C22144 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_1C3B9C0(Instance, v7);
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
  const MethodInfo *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  MethodInfo *v45; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v47; // x8
  unsigned __int64 v48; // x27
  EventTutorialEntity_o *v49; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v54; // x3
  int32_t v55; // w8
  const MethodInfo *v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int32_t flagType; // w22
  int32_t v62; // w23
  System_Action_o *v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x8
  const MethodInfo *v74; // x2
  System_Action_o *v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C22132 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v23);
    sub_1C3B764(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v24);
    sub_1C3B764(&NetworkManager_TypeInfo, v25);
    sub_1C3B764(&TutorialFlag_TypeInfo, v26);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__, v27);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__, v28);
    sub_1C3B764(&EventTutorialMaster___c__DisplayClass6_0_TypeInfo, v29);
    byte_4C22132 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v30 = sub_1C3B9B0(EventTutorialMaster___c__DisplayClass6_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass6_0___ctor((EventTutorialMaster___c__DisplayClass6_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_54;
  *(_QWORD *)(v30 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 32) = callbackAfter;
  *(_DWORD *)(v30 + 24) = eventId;
  *(_DWORD *)(v30 + 28) = openKind;
  sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)callbackAfter, v39, v40, v41, v42, v43, v44);
  *(_DWORD *)(v30 + 40) = qId;
  *(_DWORD *)(v30 + 44) = bPhase;
  *(_DWORD *)(v30 + 48) = bWave;
  *(_DWORD *)(v30 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_54;
  v47 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v47 < 1 )
  {
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v30 + 32), 0LL);
    return;
  }
  v48 = 0LL;
  while ( 1 )
  {
    if ( v48 >= (unsigned int)v47 )
      sub_1C3B9C8(checkedEntityList, v32);
    v49 = sortedEntityArray->m_Items[v48];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_54;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v82,
        checkedEntityList,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v83 = v82;
      while ( 1 )
      {
        v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v50 )
          break;
        if ( !v49 )
          sub_1C3B9C0(v50, v51);
        if ( !v83.fields._current )
          sub_1C3B9C0(v50, v51);
        if ( v49->fields.eventId == LODWORD(v83.fields._current[1].klass)
          && v49->fields.flagType == HIDWORD(v83.fields._current[1].klass)
          && v49->fields.num == LODWORD(v83.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v83,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_35;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v83,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v49 )
      goto LABEL_54;
    flag = v49->fields.flag;
    if ( v49->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v49, v32);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v30 + 40),
                                                                       v54);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_35:
    LODWORD(v47) = sortedEntityArray->max_length;
    if ( (__int64)++v48 >= (int)v47 )
      goto LABEL_39;
  }
  v55 = v49->fields.eventId;
  if ( (v55 & 0x80000000) == 0 && v55 != *(_DWORD *)(v30 + 24)
    || v49->fields.openType != *(_DWORD *)(v30 + 28)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v49,
                                                                           *(_DWORD *)(v30 + 40),
                                                                           *(_DWORD *)(v30 + 44),
                                                                           *(_DWORD *)(v30 + 48),
                                                                           *(_DWORD *)(v30 + 52),
                                                                           v45),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
    if ( v49->fields.flag == 1 )
    {
      flagType = v49->fields.flagType;
      v62 = *(_DWORD *)(v30 + 24);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_39144260(flagType, v62, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_54;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v49->fields.flagType,
          *(_DWORD *)(v30 + 24),
          0LL);
      }
    }
    goto LABEL_35;
  }
  if ( flag != 2 && !notSave )
  {
    v63 = *(System_Action_o **)(v30 + 64);
    if ( !v63 )
    {
      v63 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v63,
        (Il2CppObject *)v30,
        Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v30 + 64) = v63;
      sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 64), (int64_t)v63, v64, v65, v66, v67, v68, v69);
    }
    EventTutorialEntity__OpenTutorial(v49, v63, v56);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v71 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_54:
    sub_1C3B9C0(checkedEntityList, v32);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v49,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v73[4] = (Il2CppClass *)v49;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)(v73 + 4),
      (int64_t)v49,
      (int64_t)v56,
      v57,
      v58,
      (BattleSetupInfo_o *)v45,
      v59,
      v60);
  }
  v75 = *(System_Action_o **)(v30 + 56);
  if ( !v75 )
  {
    v75 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v75,
      (Il2CppObject *)v30,
      Method_EventTutorialMaster___c__DisplayClass6_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v30 + 56) = v75;
    sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 56), (int64_t)v75, v76, v77, v78, v79, v80, v81);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v49, v75, v74);
}


void __fastcall EventTutorialMaster__checkTutorial_40738688(
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
  const MethodInfo *eventId; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_object__o **v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  MethodInfo *v53; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v55; // x8
  unsigned __int64 v56; // x29
  EventTutorialEntity_o *v57; // x20
  _BOOL8 v58; // x0
  __int64 v59; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int32_t v68; // w23
  int32_t flagType; // w24
  System_Action_o *v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x8
  const MethodInfo *v81; // x2
  System_Action_o *v82; // x22
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C22133 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, checkEventIds);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v24);
    sub_1C3B764(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v25);
    sub_1C3B764(&NetworkManager_TypeInfo, v26);
    sub_1C3B764(&TutorialFlag_TypeInfo, v27);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__, v28);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__, v29);
    sub_1C3B764(&EventTutorialMaster___c__DisplayClass7_0_TypeInfo, v30);
    byte_4C22133 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v31 = sub_1C3B9B0(EventTutorialMaster___c__DisplayClass7_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass7_0___ctor((EventTutorialMaster___c__DisplayClass7_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_55;
  *(_QWORD *)(v31 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v31 + 24) = checkEventIds;
  v40 = (System_Collections_Generic_List_object__o **)(v31 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)checkEventIds, v41, v42, v43, v44, v45, v46);
  *(_QWORD *)(v31 + 40) = callbackAfter;
  *(_DWORD *)(v31 + 32) = openKind;
  sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 40), (int64_t)callbackAfter, v47, v48, v49, v50, v51, v52);
  *(_DWORD *)(v31 + 48) = qId;
  *(_DWORD *)(v31 + 52) = bPhase;
  *(_DWORD *)(v31 + 56) = bWave;
  *(_DWORD *)(v31 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v55 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v55 < 1 )
  {
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v31 + 40), 0LL);
    return;
  }
  v56 = 0LL;
  while ( 1 )
  {
    if ( v56 >= (unsigned int)v55 )
      sub_1C3B9C8(checkedEntityList, eventId);
    v57 = sortedEntityArray->m_Items[v56];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v89,
        checkedEntityList,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v90 = v89;
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v90,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v58 )
          break;
        if ( !v57 )
          sub_1C3B9C0(v58, v59);
        if ( !v90.fields._current )
          sub_1C3B9C0(v58, v59);
        if ( v57->fields.eventId == LODWORD(v90.fields._current[1].klass)
          && v57->fields.flagType == HIDWORD(v90.fields._current[1].klass)
          && v57->fields.num == LODWORD(v90.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v90,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_36;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v90,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    if ( !v57 )
      goto LABEL_55;
    flag = v57->fields.flag;
    if ( v57->fields.openType != 84 )
      break;
    Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v57, eventId);
    checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                       Targets,
                                                                       (System_Int32_array_array *)Targets,
                                                                       *(_DWORD *)(v31 + 48),
                                                                       v62);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
      break;
LABEL_36:
    LODWORD(v55) = sortedEntityArray->max_length;
    if ( (__int64)++v56 >= (int)v55 )
      goto LABEL_40;
  }
  eventId = (const MethodInfo *)(unsigned int)v57->fields.eventId;
  if ( ((unsigned int)eventId & 0x80000000) == 0 )
  {
    checkedEntityList = *v40;
    if ( !*v40 )
      goto LABEL_55;
    checkedEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___Contains(
                                                                       (System_Collections_Generic_List_int__o *)checkedEntityList,
                                                                       (int32_t)eventId,
                                                                       (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      goto LABEL_59;
  }
  if ( v57->fields.openType != *(_DWORD *)(v31 + 32)
    || (checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialEntity__isOpenCondition(
                                                                           v57,
                                                                           *(_DWORD *)(v31 + 48),
                                                                           *(_DWORD *)(v31 + 52),
                                                                           *(_DWORD *)(v31 + 56),
                                                                           *(_DWORD *)(v31 + 60),
                                                                           v53),
        flag != 2)
    && ((unsigned __int8)checkedEntityList & 1) == 0 )
  {
LABEL_59:
    if ( v57->fields.flag == 1 )
    {
      v68 = v57->fields.eventId;
      flagType = v57->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      checkedEntityList = (System_Collections_Generic_List_object__o *)TutorialFlag__Get_39144260(flagType, v68, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        checkedEntityList = (System_Collections_Generic_List_object__o *)NetworkManager__getRequest_object_(
                                                                           0LL,
                                                                           (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v57->fields.flagType,
          v57->fields.eventId,
          0LL);
      }
    }
    goto LABEL_36;
  }
  if ( flag != 2 && !notSave )
  {
    v70 = *(System_Action_o **)(v31 + 72);
    if ( !v70 )
    {
      v70 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v70,
        (Il2CppObject *)v31,
        Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v31 + 72) = v70;
      sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 72), (int64_t)v70, v71, v72, v73, v74, v75, v76);
    }
    EventTutorialEntity__OpenTutorial(v57, v70, v63);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_object__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList
    || (items = checkedEntityList->fields._items,
        v78 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++checkedEntityList->fields._version,
        !items) )
  {
LABEL_55:
    sub_1C3B9C0(checkedEntityList, eventId);
  }
  size = checkedEntityList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      checkedEntityList,
      (Il2CppObject *)v57,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v80 = &items->obj.klass + size;
    checkedEntityList->fields._size = size + 1;
    v80[4] = (Il2CppClass *)v57;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)(v80 + 4),
      (int64_t)v57,
      (int64_t)v63,
      v64,
      v65,
      (BattleSetupInfo_o *)v53,
      v66,
      v67);
  }
  v82 = *(System_Action_o **)(v31 + 64);
  if ( !v82 )
  {
    v82 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v82,
      (Il2CppObject *)v31,
      Method_EventTutorialMaster___c__DisplayClass7_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v31 + 64) = v82;
    sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 64), (int64_t)v82, v83, v84, v85, v86, v87, v88);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v57, v82, v81);
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
  __int64 v16; // x10
  EventTutorialMaster_o *v17; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v19; // x8
  System_Collections_Generic_List_object__o *v20; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x29
  int max_length; // w8
  unsigned int v23; // w19
  EventTutorialEntity_o *v24; // x27
  int32_t v25; // w8
  const MethodInfo *v26; // x5
  unsigned int v27; // w28
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v29; // x9

  if ( (byte_4C2214A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v11);
    sub_1C3B764(&int___TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14);
    this = (EventTutorialMaster_o *)sub_1C3B764(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15);
    byte_4C2214A = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_1C3B80C(int___TypeInfo, openKinds->max_length);
  v16 = *(_QWORD *)&openKinds->max_length;
  v17 = this;
  if ( (int)v16 >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v19 = 0LL;
      while ( v19 < MasterName_k__BackingField_low )
      {
        *(&this->fields.revision + v19++) = 0;
        if ( (__int64)v19 >= (int)v16 )
          goto LABEL_9;
      }
LABEL_27:
      sub_1C3B9C8(this, *(_QWORD *)&eventId);
    }
LABEL_28:
    sub_1C3B9C0(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        goto LABEL_27;
      v24 = sortedEntityArray->m_Items[v23];
      if ( !v24 )
        goto LABEL_28;
      v25 = v24->fields.eventId;
      if ( (v25 & 0x80000000) != 0 || v25 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_Int32Enum_(
                                          (System_Int32Enum_array *)openKinds,
                                          v24->fields.openType,
                                          (const MethodInfo_30EE568 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v27 = (unsigned int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v24, qId, bPhase, bWave, bTurn, v26);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_28;
            if ( v27 >= LODWORD(v17->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v20 )
              goto LABEL_28;
            System_Collections_Generic_List_object___Insert(
              v20,
              *(&v17->fields.revision + v27),
              (Il2CppObject *)v24,
              (const MethodInfo_368CA1C *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v17->fields._MasterName_k__BackingField;
            if ( (int)v27 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v23 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v20;
    }
    v29 = v27;
    while ( (unsigned int)v29 < (unsigned int)MasterName_k__BackingField )
    {
      ++*(&v17->fields.revision + v29++);
      if ( v29 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v20;
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  int max_length; // w8
  int v25; // w27
  Il2CppObject *v26; // x23
  int64_t v27; // x24
  int v28; // w8
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x8
  __int64 v34; // x28
  unsigned __int64 v35; // x29
  __int64 v36; // x8
  _QWORD *v37; // x8

  if ( (byte_4C22148 & 1) == 0 )
  {
    sub_1C3B764(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    sub_1C3B764(&StringLiteral_16282/*"a021869d2b7628e205e4179feadc9fa4998ac6f630ab88ec40e890e932fa33d0"*/, v12);
    sub_1C3B764(&StringLiteral_16340/*"additionalSkillLv"*/, v13);
    byte_4C22148 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16340/*"additionalSkillLv"*/, (Il2CppObject *)targetIds, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_42;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v26 = 0LL;
    if ( !v14 )
      goto LABEL_42;
  }
  else
  {
    v25 = 0;
    v26 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)max_length )
LABEL_43:
        sub_1C3B9C8(IsNullOrEmpty, v16);
      v27 = (int64_t)sortedEntityArray->m_Items[v25];
      if ( !v27 )
        goto LABEL_42;
      v28 = *(_DWORD *)(v27 + 16);
      if ( ((v28 & 0x80000000) != 0 || v28 == eventId) && *(_DWORD *)(v27 + 32) == openKind )
      {
        IsNullOrEmpty = (struct System_Object_array *)System_String__IsNullOrEmpty(targetIds, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
LABEL_14:
          if ( !v14 )
            goto LABEL_42;
          items = v14->fields._items;
          v30 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_42;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)v27,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v27;
            sub_1C3B708((PartyOrganizationUtility_o *)(v32 + 4), v27, v17, v18, v19, v20, v21, v22);
          }
        }
        else
        {
          v33 = *(_QWORD *)(v27 + 40);
          if ( !v33 )
            goto LABEL_42;
          v34 = *(_QWORD *)(v33 + 24);
          if ( !v26 )
          {
            if ( !(_DWORD)v34
              || (IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                                  *(System_String_o **)(v33 + 32),
                                                                  (System_String_o *)StringLiteral_16282/*"a021869d2b7628e205e4179feadc9fa4998ac6f630ab88ec40e890e932fa33d0"*/,
                                                                  0LL),
                  v26 = 0LL,
                  ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
            {
              v26 = (Il2CppObject *)v27;
            }
          }
          if ( (int)v34 >= 1 )
          {
            v35 = 0LL;
            while ( 1 )
            {
              v36 = *(_QWORD *)(v27 + 40);
              if ( !v36 )
                break;
              if ( v35 >= *(unsigned int *)(v36 + 24) )
                goto LABEL_43;
              IsNullOrEmpty = (struct System_Object_array *)System_String__op_Equality(
                                                              *(System_String_o **)(v36 + 8 * v35 + 32),
                                                              targetIds,
                                                              0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                goto LABEL_14;
              if ( (unsigned int)v34 == ++v35 )
                goto LABEL_31;
            }
LABEL_42:
            sub_1C3B9C0(IsNullOrEmpty, v16);
          }
        }
      }
LABEL_31:
      max_length = sortedEntityArray->max_length;
      ++v25;
    }
    while ( v25 < max_length );
    if ( !v14 )
      goto LABEL_42;
  }
  if ( v26 && !v14->fields._size )
  {
    IsNullOrEmpty = v14->fields._items;
    v37 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v14->fields._version;
    if ( !IsNullOrEmpty )
      goto LABEL_42;
    if ( IsNullOrEmpty->max_length )
    {
      v14->fields._size = 1;
      IsNullOrEmpty->m_Items[0] = v26;
      sub_1C3B708((PartyOrganizationUtility_o *)IsNullOrEmpty->m_Items, (int64_t)v26, v17, v18, v19, v20, v21, v22);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        v26,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v14;
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
        sub_1C3B9C0(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
          sub_1C3B9C8(this, targets);
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
  const MethodInfo *v22; // x5
  int32_t v23; // w8

  if ( (byte_4C22136 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v15);
    byte_4C22136 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v23 = Item->fields.eventId, (v23 & 0x80000000) == 0) && v23 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, v22) )
      {
        v20 = ++v19 < v18;
        if ( v18 != v19 )
          continue;
      }
      return v20;
    }
LABEL_16:
    sub_1C3B9C0(list, *(_QWORD *)&eventId);
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
  const MethodInfo *v23; // x5
  int32_t v24; // w8

  if ( (byte_4C22135 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__, v16);
    byte_4C22135 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v24 = Item->fields.eventId, (v24 & 0x80000000) != 0) && isChkEventId
        || (v24 & 0x80000000) == 0 && v24 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isEnableCondition(Item, qId, bPhase, bWave, bTurn, v23) )
      {
        v21 = ++v20 < v19;
        if ( v19 != v20 )
          continue;
      }
      return v21;
    }
LABEL_18:
    sub_1C3B9C0(list, *(_QWORD *)&eventId);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x0
  EventTutorialMaster___c_c *v26; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v29; // x21
  struct EventTutorialMaster___c_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Object_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x19
  struct EventTutorialMaster_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4C22131 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v3);
    sub_1C3B764(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v5);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v6);
    sub_1C3B764(&System_Func_EventTutorialEntity__int__TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v9);
    sub_1C3B764(&Method_EventTutorialMaster___c__preProcess_b__4_0__, v10);
    sub_1C3B764(&Method_EventTutorialMaster___c__preProcess_b__4_1__, v11);
    sub_1C3B764(&EventTutorialMaster___c_TypeInfo, v12);
    byte_4C22131 = 1;
  }
  v13 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_3019DB0 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
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
    _9__4_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v17, Method_EventTutorialMaster___c__preProcess_b__4_0__, 0LL);
    static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v19, v20, v21, v22, v23, v24);
  }
  v25 = System_Linq_Enumerable__OrderBy_object__int_(
          v15,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_301A1E4 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v26 = EventTutorialMaster___c_TypeInfo;
  v27 = v25;
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
    _9__4_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_1, v29, Method_EventTutorialMaster___c__preProcess_b__4_1__, 0LL);
    v30 = EventTutorialMaster___c_TypeInfo->static_fields;
    v30->__9__4_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__4_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v30->__9__4_1, (int64_t)_9__4_1, v31, v32, v33, v34, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v27,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_302A15C *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v38 = System_Linq_Enumerable__ToArray_object_(
          v37,
          (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v38;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventTutorialMaster_TypeInfo->static_fields,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v46 = EventTutorialMaster_TypeInfo->static_fields;
  v46->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v45;
  sub_1C3B708((PartyOrganizationUtility_o *)&v46->checkedEntityList, (int64_t)v45, v47, v48, v49, v50, v51, v52);
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
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v23; // w25
  int v24; // w8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4C22140 & 1) == 0 )
  {
    sub_1C3B764(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    byte_4C22140 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_18;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1C3B9C8(v13, v14);
      v14 = (int64_t)sortedEntityArray->m_Items[v23];
      if ( !v14 )
        break;
      v24 = *(_DWORD *)(v14 + 16);
      if ( ((v24 & 0x80000000) != 0 || v24 == eventId) && *(_DWORD *)(v14 + 32) == openKind )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v26 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v14,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v14;
          sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), v14, v15, v16, v17, v18, v19, v20);
        }
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_17;
    }
LABEL_18:
    sub_1C3B9C0(v13, v14);
  }
LABEL_17:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v12,
    0,
    callback,
    (const MethodInfo *)v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_40744324(
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v38; // w23
  EventTutorialEntity_o *v39; // x21
  int32_t v40; // w8
  const MethodInfo *v41; // x2
  System_Action_o *v42; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  if ( (byte_4C22143 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v17);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__, v18);
    sub_1C3B764(&EventTutorialMaster___c__DisplayClass23_0_TypeInfo, v19);
    byte_4C22143 = 1;
  }
  v20 = sub_1C3B9B0(EventTutorialMaster___c__DisplayClass23_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass23_0___ctor((EventTutorialMaster___c__DisplayClass23_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 32) = callbackAfter;
  *(_DWORD *)(v20 + 24) = eventId;
  *(_DWORD *)(v20 + 28) = openKind;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)callbackAfter, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v20 + 40) = qId;
  *(_DWORD *)(v20 + 44) = bPhase;
  *(_DWORD *)(v20 + 48) = bWave;
  *(_DWORD *)(v20 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_1C3B9C0(isEnableCondition, v22);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v20 + 32), 0LL);
  }
  else
  {
    v38 = 0;
    while ( 1 )
    {
      if ( v38 >= max_length )
        sub_1C3B9C8(isEnableCondition, v22);
      v39 = sortedEntityArray->m_Items[v38];
      if ( !v39 )
        goto LABEL_18;
      v40 = v39->fields.eventId;
      if ( ((v40 & 0x80000000) != 0 || v40 == *(_DWORD *)(v20 + 24)) && v39->fields.openType == *(_DWORD *)(v20 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v39,
                              *(_DWORD *)(v20 + 40),
                              *(_DWORD *)(v20 + 44),
                              *(_DWORD *)(v20 + 48),
                              *(_DWORD *)(v20 + 52),
                              v35);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_14;
    }
    v42 = *(System_Action_o **)(v20 + 56);
    if ( !v42 )
    {
      v42 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v20,
        Method_EventTutorialMaster___c__DisplayClass23_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v20 + 56) = v42;
      sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 56), (int64_t)v42, v43, v44, v45, v46, v47, v48);
    }
    EventTutorialEntity__OpenTutorial(v39, v42, v41);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t v34; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4C22145 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, tutoList);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__, v11);
    sub_1C3B764(&EventTutorialMaster___c__DisplayClass25_0_TypeInfo, v12);
    byte_4C22145 = 1;
  }
  v13 = sub_1C3B9B0(EventTutorialMaster___c__DisplayClass25_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass25_0___ctor((EventTutorialMaster___c__DisplayClass25_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = tutoList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)tutoList, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 40) = callback;
  *(_DWORD *)(v13 + 32) = index;
  sub_1C3B708((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  v14 = *(System_Collections_Generic_List_object__o **)(v13 + 24);
  if ( !v14 )
    goto LABEL_9;
  v34 = *(_DWORD *)(v13 + 32);
  if ( v34 < v14->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v14,
             v34,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v36 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v13,
      Method_EventTutorialMaster___c__DisplayClass25_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v36, v37);
      return;
    }
LABEL_9:
    sub_1C3B9C0(v14, v15);
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
  __int64 v3; // x1
  struct System_Int32_array *eventIds; // x21
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C2214E & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_4C2214E = 1;
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
                     (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        this->fields.eventIds = eventIds;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventIds, (int64_t)eventIds, v7, v8, v9, v10, v11, v12);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_1C3B80C(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (struct System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_1C3B9C8(OpenEventIds, v6);
        LODWORD(OpenEventIds->fields._syncRoot) = this->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_1C3B9C0(OpenEventIds, v6);
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
  int32_t _1__state; // w8
  Il2CppObject *v21; // x21
  struct EventTutorialMaster___c__DisplayClass8_0_o **p__8__1; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t args; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  int64_t sortedEntityArray; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int v50; // w8
  int64_t v51; // x1
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialMaster___c__DisplayClass8_0_o *v53; // x8
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct EventTutorialMaster___c__DisplayClass8_0_o *v67; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v68; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v69; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v70; // x8
  struct EventTutorialMaster___c__DisplayClass8_0_o *v71; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v72; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  struct EventTutorialMaster___c__DisplayClass8_1_o *_8__2; // x21
  EventTutorialEntity_o *v75; // x20
  System_Action_o *v76; // x22
  struct EventTutorialMaster___c__DisplayClass8_1_o *v77; // x20
  struct EventTutorialEntity_o *data_5__4; // x8
  struct EventTutorialEntity_o **v79; // x20
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *_7__wrap1; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass8_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v85; // x8
  bool result; // w0
  System_Func_bool__o *v87; // x21
  UnityEngine_WaitWhile_o *v88; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Func_bool__o *_9__0; // x21
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  UnityEngine_WaitWhile_o *v103; // x20
  PartyOrganizationUtility_o *v104; // x19
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7

  v8 = this;
  if ( (byte_4C22151 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&EventTutorialMaster_TypeInfo, v9);
    sub_1C3B764(&System_Func_bool__TypeInfo, v10);
    sub_1C3B764(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&TutorialFlag_TypeInfo, v13);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__, v14);
    sub_1C3B764(&EventTutorialMaster___c__DisplayClass8_0_TypeInfo, v15);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__, v16);
    sub_1C3B764(&Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__, v17);
    sub_1C3B764(&EventTutorialMaster___c__DisplayClass8_1_TypeInfo, v18);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)sub_1C3B764(&UnityEngine_WaitWhile_TypeInfo, v19);
    byte_4C22151 = 1;
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
  v21 = (Il2CppObject *)sub_1C3B9B0(EventTutorialMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor(v21, 0LL);
  v8->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass8_0_o *)v21;
  p__8__1 = &v8->fields.__8__1;
  sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v8->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  args = (int64_t)v8->fields.args;
  *(_QWORD *)&this->fields.__1__state = args;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, args, v29, v30, v31, v32, v33, v34);
  if ( !*p__8__1 )
    goto LABEL_53;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = (int64_t)static_fields->sortedEntityArray;
  v8->fields.__7__wrap1 = static_fields->sortedEntityArray;
  sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, sortedEntityArray, v36, v37, v38, v39, v40, v41);
  v50 = 0;
  for ( v8->fields.__7__wrap2 = 0; ; v8->fields.__7__wrap2 = v50 )
  {
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)&v8->fields.__7__wrap1;
    _7__wrap1 = v8->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_53;
    max_length = _7__wrap1->max_length;
    if ( v50 >= max_length )
    {
      v8->fields.__7__wrap1 = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)this, 0LL, v44, v45, v46, v47, v48, v49);
      _8__1 = v8->fields.__8__1;
      if ( _8__1 )
      {
        v85 = _8__1->fields.args;
        if ( v85 )
        {
          ActionExtensions__Call(v85->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_53:
      sub_1C3B9C0(this, method);
    }
    if ( v50 >= (unsigned int)max_length )
      sub_1C3B9C8(this, method);
    v51 = (int64_t)_7__wrap1->m_Items[v50];
    v8->fields._data_5__4 = (struct EventTutorialEntity_o *)v51;
    p_data_5__4 = &v8->fields._data_5__4;
    sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._data_5__4, v51, v44, v45, v46, v47, v48, v49);
    v53 = v8->fields.__8__1;
    if ( !v53 )
      goto LABEL_53;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialMaster__IsOpenCondition(
                                                                 *p_data_5__4,
                                                                 v53->fields.args,
                                                                 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v79 = &v8->fields._data_5__4;
    data_5__4 = v8->fields._data_5__4;
    if ( !data_5__4 )
      goto LABEL_53;
    if ( data_5__4->fields.flag == 1 )
    {
      eventId = data_5__4->fields.eventId;
      flagType = data_5__4->fields.flagType;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_39144260(flagType, eventId, 0LL) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)NetworkManager__getRequest_object_(
                                                                     0LL,
                                                                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v79 || !this )
          goto LABEL_53;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*v79)->fields.flagType,
          (*v79)->fields.eventId,
          0LL);
      }
    }
    v8->fields._data_5__4 = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._data_5__4, 0LL, v54, v55, v56, v57, v58, v59);
    v50 = v8->fields.__7__wrap2 + 1;
  }
  v60 = (Il2CppObject *)sub_1C3B9B0(EventTutorialMaster___c__DisplayClass8_1_TypeInfo);
  System_Object___ctor(v60, 0LL);
  v8->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass8_1_o *)v60;
  sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields.__8__2, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  v67 = v8->fields.__8__1;
  if ( !v67 )
    goto LABEL_53;
  v68 = v67->fields.args;
  if ( !v68 )
    goto LABEL_53;
  if ( !v68->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)EventTutorialEntity__HasBeforeAction(
                                                               (EventTutorialEntity_o *)this,
                                                               0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v69 = v8->fields.__8__1;
  if ( !v69 )
    goto LABEL_53;
  v70 = v69->fields.args;
  if ( !v70 )
    goto LABEL_53;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__8_o *)v70->fields.adapter;
  if ( !this )
    goto LABEL_53;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v8->fields._data_5__4, 0LL);
  v71 = v8->fields.__8__1;
  if ( !v71 )
    goto LABEL_53;
  v72 = v71->fields.args;
  if ( !v72 )
    goto LABEL_53;
  adapter = v72->fields.adapter;
  if ( !adapter )
    goto LABEL_53;
  if ( !adapter->fields._IsPerformanceBusy_k__BackingField )
  {
LABEL_27:
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_53;
    _8__2->fields.isBusy = 1;
    v75 = v8->fields._data_5__4;
    v76 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v76,
      (Il2CppObject *)_8__2,
      Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__1__,
      0LL);
    if ( !v75 )
      goto LABEL_53;
    EventTutorialEntity__OpenTutorial(v75, v76, 0LL);
    v77 = v8->fields.__8__2;
    if ( !v77 )
      goto LABEL_53;
    if ( v77->fields.isBusy )
    {
      v87 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v87,
        (Il2CppObject *)v77,
        Method_EventTutorialMaster___c__DisplayClass8_1__CoCheckTutorialLocal_b__2__,
        0LL);
      v88 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v88, v87, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v88;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C3B708(p__2__current, (int64_t)v88, v90, v91, v92, v93, v94, v95);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return 1;
    }
LABEL_31:
    v8->fields.__8__2 = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  _9__0 = v71->fields.__9__0;
  if ( !_9__0 )
  {
    _9__0 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__0,
      (Il2CppObject *)v71,
      Method_EventTutorialMaster___c__DisplayClass8_0__CoCheckTutorialLocal_b__0__,
      0LL);
    v71->fields.__9__0 = _9__0;
    sub_1C3B708((PartyOrganizationUtility_o *)&v71->fields.__9__0, (int64_t)_9__0, v97, v98, v99, v100, v101, v102);
  }
  v103 = (UnityEngine_WaitWhile_o *)sub_1C3B9B0(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v103, _9__0, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v103;
  v104 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C3B708(v104, (int64_t)v103, v105, v106, v107, v108, v109, v110);
  result = 1;
  *(_DWORD *)&v104[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int32_t v15; // w8

  if ( (byte_4C22152 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C22152 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_1C3B9C0(0LL, v7);
    v8 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           (EventTutorialMaster_o *)Master_object,
                           this->fields.args,
                           0LL);
    this->fields.__2__current = v8;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    v15 = 1;
    result = 1;
  }
  this->fields.__1__state = v15;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2214F & 1) == 0 )
  {
    sub_1C3B764(&EventTutorialMaster___c_TypeInfo, v1);
    byte_4C2214F = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventTutorialMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4C22150 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4C22150 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__4_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(0LL, method);
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
    sub_1C3B9C0(0LL, method);
  EventTutorialMaster__checkTutorial_40738688(
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
    sub_1C3B9C0(0LL, method);
  EventTutorialMaster__checkTutorial_40738688(
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
    sub_1C3B9C0(this, method);
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