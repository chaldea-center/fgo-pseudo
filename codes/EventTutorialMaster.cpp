void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AF8AE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
    byte_42AF8AE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    166,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  EventTutorialMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *v17; // x25
  const MethodInfo *v18; // [xsp+8h] [xbp-48h]

  if ( (byte_42AF8B5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AF8B5 = 1;
  }
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      EventTutorialMaster__checkTutorial(
        Master_WarQuestSelectionMaster,
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
LABEL_14:
    sub_B52A5C(Master_WarQuestSelectionMaster, v16);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v17 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)v17);
  if ( !v17 )
    goto LABEL_14;
  EventTutorialMaster__checkTutorial_24321460(
    (EventTutorialMaster_o *)v17,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *checkedEntityList; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x25
  const MethodInfo *v17; // [xsp+8h] [xbp-48h]

  if ( (byte_42AF8B6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_42AF8B6 = 1;
  }
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_15;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    checkedEntityList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( checkedEntityList )
    {
      EventTutorialMaster__checkTutorial(
        (EventTutorialMaster_o *)checkedEntityList,
        eventId,
        openKind,
        callbackAfter,
        qId,
        bPhase,
        bWave,
        bTurn,
        1,
        v17);
      return;
    }
LABEL_15:
    sub_B52A5C(checkedEntityList, *(_QWORD *)&openKind);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_WarQuestSelectionMaster);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  EventTutorialMaster__checkTutorial_24321460(
    (EventTutorialMaster_o *)Master_WarQuestSelectionMaster,
    (System_Collections_Generic_List_int__o *)checkedEntityList,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    v17);
}


void __fastcall EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x0

  if ( (byte_42AF8B7 & 1) == 0 )
  {
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_42AF8B7 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_B52A5C(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkedEntityList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoCheckTutorialLocal(
        EventTutorialMaster_o *this,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42AF8B2 & 1) == 0 )
  {
    sub_B52984(&EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo);
    byte_42AF8B2 = 1;
  }
  v4 = sub_B52A54(EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo);
  EventTutorialMaster__CoCheckTutorialLocal_d__11___ctor(
    (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  *(_QWORD *)(v4 + 32) = args;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)args, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AF8B8 & 1) == 0 )
  {
    sub_B52984(&EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo);
    byte_42AF8B8 = 1;
  }
  v3 = sub_B52A54(EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo);
  EventTutorialMaster__CoroutineCheckTutorial_d__17___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__17_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = args;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)args, v6, v7, v8, v9, v10, v11);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_42AF8C7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8C7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v14);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_42AF8BC & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Func_EventTutorialEntity__bool___ctor__);
    sub_B52984(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__);
    sub_B52984(&EventTutorialMaster___c__DisplayClass21_0_TypeInfo);
    byte_42AF8BC = 1;
  }
  v3 = sub_B52A54(EventTutorialMaster___c__DisplayClass21_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass21_0___ctor((EventTutorialMaster___c__DisplayClass21_0_o *)v3, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 16) = args;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)args, v6, v7, v8, v9, v10, v11);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_EventTutorialEntity__bool___ctor__);
  v14 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v14,
                                        (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialEntity_o *__fastcall EventTutorialMaster__GetEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AF8AC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
    byte_42AF8AC = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_42AF8C5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8C5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
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
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  EventEntity_array *EnableEntityList; // x19
  System_Collections_Generic_List_int__o *v4; // x20
  int max_length; // w8
  unsigned int v6; // w21
  EventEntity_o *v7; // x8
  __int64 v9; // x0

  if ( (byte_42AF8C4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8C4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_13;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_13;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v9 = sub_B52A88(Instance);
        sub_B52A28(v9, 0LL);
      }
      v7 = EnableEntityList->m_Items[v6];
      if ( !v7 || !v4 )
        break;
      System_Collections_Generic_List_int___Add(
        v4,
        v7->fields.id,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = EnableEntityList->max_length;
      if ( (int)++v6 >= max_length )
        return v4;
    }
LABEL_13:
    sub_B52A5C(Instance, v2);
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
  if ( (byte_42AF8BD & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42AF8BD = 1;
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
              (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_B52A5C(data, args);
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_42AF8BA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v14);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_42AF8B9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8B9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v16);
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
  MissionNotifyManager_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  EventTutorialMaster___c_c *v6; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__24_0; // x21
  Il2CppObject *v9; // x22
  struct EventTutorialMaster___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AF8BF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__);
    sub_B52984(&EventTutorialMaster___c_TypeInfo);
    byte_42AF8BF = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MissionNotifyManager__StartPause(Instance, 0LL);
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    v6 = EventTutorialMaster___c_TypeInfo;
    if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v6 = EventTutorialMaster___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__24_0 = static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(_9__24_0, v9, Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, 0LL);
      v10 = EventTutorialMaster___c_TypeInfo->static_fields;
      v10->__9__24_0 = _9__24_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v10->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    if ( !v5 )
LABEL_20:
      sub_B52A5C(Instance, v4);
    CommonUI__OpenTutorialImageDialog_18184372(v5, imageIds, -1, 0, _9__24_0, 0LL, 0LL, 0LL);
  }
}


void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_42AF8BB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8BB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v9);
}


void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_24327048(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_42AF8C0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8C0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v16);
  }
  EventTutorialMaster__showTutorialWithoutCheck_24327252(
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
  System_String_o *PK; // x2

  if ( (byte_42AF8AD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
    byte_42AF8AD = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_42AF8C2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF8C2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *checkedEntityList; // x0
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v35; // x8
  unsigned __int64 v36; // x27
  int v37; // w24
  EventTutorialEntity_o *v38; // x21
  _BOOL8 v39; // x0
  __int64 v40; // x1
  char v41; // w22
  int v42; // w8
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v45; // x3
  int32_t v46; // w8
  const MethodInfo *v47; // x2
  int32_t flagType; // w22
  int32_t v49; // w23
  System_Action_o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x2
  System_Action_o *v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x0
  _BYTE v66[32]; // [xsp+8h] [xbp-98h] BYREF
  int v67; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AF8B0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_B52984(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__);
    sub_B52984(&EventTutorialMaster___c__DisplayClass9_0_TypeInfo);
    byte_42AF8B0 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v67 = 0;
  v18 = sub_B52A54(EventTutorialMaster___c__DisplayClass9_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass9_0___ctor((EventTutorialMaster___c__DisplayClass9_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_55;
  *(_QWORD *)(v18 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 32) = callbackAfter;
  *(_DWORD *)(v18 + 24) = eventId;
  *(_DWORD *)(v18 + 28) = openKind;
  sub_B52920(
    (BattleServantConfConponent_o *)(v18 + 32),
    (System_Int32_array **)callbackAfter,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_DWORD *)(v18 + 40) = qId;
  *(_DWORD *)(v18 + 44) = bPhase;
  *(_DWORD *)(v18 + 48) = bWave;
  *(_DWORD *)(v18 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v35 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v35 < 1 )
  {
LABEL_45:
    ActionExtensions__Call(*(System_Action_o **)(v18 + 32), 0LL);
    return;
  }
  v36 = 0LL;
  v37 = 0;
  while ( 1 )
  {
    if ( v36 >= (unsigned int)v35 )
    {
      v65 = sub_B52A88(checkedEntityList);
      sub_B52A28(v65, 0LL);
    }
    v38 = sortedEntityArray->m_Items[v36];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v66,
        checkedEntityList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v68 = *(System_Collections_Generic_List_Enumerator_T__o *)v66;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v68,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v39 )
          break;
        if ( !v38 )
          sub_B52A5C(v39, v40);
        if ( !v68.fields.current )
          sub_B52A5C(v39, v40);
        if ( v38->fields.eventId == HIDWORD(v68.fields.current[1].klass)
          && v38->fields.flagType == LODWORD(v68.fields.current[1].monitor)
          && v38->fields.num == LODWORD(v68.fields.current[1].klass) )
        {
          v41 = 1;
          goto LABEL_19;
        }
      }
      v41 = 0;
LABEL_19:
      *(_DWORD *)&v66[4 * v37 + 24] = 188;
      v37 = ++v67;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v68,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v37 )
      {
        v42 = v37 - 1;
        if ( *(_DWORD *)&v66[4 * v37 + 20] == 188 )
        {
          --v37;
          v67 = v42;
        }
      }
      if ( (v41 & 1) != 0 )
        goto LABEL_41;
    }
    if ( !v38 )
      goto LABEL_55;
    flag = v38->fields.flag;
    if ( v38->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v38, v20);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v18 + 40), v45);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_41;
    }
    v46 = v38->fields.eventId;
    if ( ((v46 & 0x80000000) != 0 || v46 == *(_DWORD *)(v18 + 24)) && v38->fields.openType == *(_DWORD *)(v18 + 28) )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialEntity__isOpenCondition(v38, *(_DWORD *)(v18 + 40), *(_DWORD *)(v18 + 44), *(_DWORD *)(v18 + 48), *(_DWORD *)(v18 + 52), v33);
      if ( flag == 2 || ((unsigned __int8)checkedEntityList & 1) != 0 )
        break;
    }
    if ( v38->fields.flag == 1 )
    {
      flagType = v38->fields.flagType;
      v49 = *(_DWORD *)(v18 + 24);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_29220040(flagType, v49, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v38->fields.flagType,
          *(_DWORD *)(v18 + 24),
          0LL);
      }
    }
LABEL_41:
    LODWORD(v35) = sortedEntityArray->max_length;
    if ( (__int64)++v36 >= (int)v35 )
      goto LABEL_45;
  }
  if ( flag != 2 && !notSave )
  {
    v50 = *(System_Action_o **)(v18 + 64);
    if ( !v50 )
    {
      v50 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v18 + 64) = v50;
      sub_B52920((BattleServantConfConponent_o *)(v18 + 64), (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
    }
    EventTutorialEntity__OpenTutorial(v38, v50, v47);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_55:
    sub_B52A5C(checkedEntityList, v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v58 = *(System_Action_o **)(v18 + 56);
  if ( !v58 )
  {
    v58 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v58,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v18 + 56) = v58;
    sub_B52920((BattleServantConfConponent_o *)(v18 + 56), (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v38, v58, v57);
}


void __fastcall EventTutorialMaster__checkTutorial_24321460(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *checkedEntityList; // x0
  const MethodInfo *eventId; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v41; // x8
  unsigned __int64 v42; // x28
  int v43; // w20
  EventTutorialEntity_o *v44; // x22
  _BOOL8 v45; // x0
  __int64 v46; // x1
  char v47; // w23
  int v48; // w8
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x2
  int32_t v53; // w23
  int32_t flagType; // w24
  System_Action_o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x2
  System_Action_o *v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v71; // [xsp+0h] [xbp-A0h]
  _BYTE v72[32]; // [xsp+8h] [xbp-98h] BYREF
  int v73; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42AF8B1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_B52984(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__);
    sub_B52984(&EventTutorialMaster___c__DisplayClass10_0_TypeInfo);
    byte_42AF8B1 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v73 = 0;
  v18 = sub_B52A54(EventTutorialMaster___c__DisplayClass10_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass10_0___ctor((EventTutorialMaster___c__DisplayClass10_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_56;
  *(_QWORD *)(v18 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = checkEventIds;
  v71 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v18 + 24);
  sub_B52920(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)checkEventIds,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)(v18 + 40) = callbackAfter;
  *(_DWORD *)(v18 + 32) = openKind;
  sub_B52920(
    (BattleServantConfConponent_o *)(v18 + 40),
    (System_Int32_array **)callbackAfter,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  *(_DWORD *)(v18 + 48) = qId;
  *(_DWORD *)(v18 + 52) = bPhase;
  *(_DWORD *)(v18 + 56) = bWave;
  *(_DWORD *)(v18 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_56;
  v41 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v41 < 1 )
  {
LABEL_46:
    ActionExtensions__Call(*(System_Action_o **)(v18 + 40), 0LL);
    return;
  }
  v42 = 0LL;
  v43 = 0;
  while ( 1 )
  {
    if ( v42 >= (unsigned int)v41 )
    {
      v70 = sub_B52A88(checkedEntityList);
      sub_B52A28(v70, 0LL);
    }
    v44 = sortedEntityArray->m_Items[v42];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v72,
        checkedEntityList,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v74 = *(System_Collections_Generic_List_Enumerator_T__o *)v72;
      while ( 1 )
      {
        v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v74,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v45 )
          break;
        if ( !v44 )
          sub_B52A5C(v45, v46);
        if ( !v74.fields.current )
          sub_B52A5C(v45, v46);
        if ( v44->fields.eventId == HIDWORD(v74.fields.current[1].klass)
          && v44->fields.flagType == LODWORD(v74.fields.current[1].monitor)
          && v44->fields.num == LODWORD(v74.fields.current[1].klass) )
        {
          v47 = 1;
          goto LABEL_19;
        }
      }
      v47 = 0;
LABEL_19:
      *(_DWORD *)&v72[4 * v43 + 24] = 188;
      v43 = ++v73;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v74,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v43 )
      {
        v48 = v43 - 1;
        if ( *(_DWORD *)&v72[4 * v43 + 20] == 188 )
        {
          --v43;
          v73 = v48;
        }
      }
      if ( (v47 & 1) != 0 )
        goto LABEL_42;
    }
    if ( !v44 )
      goto LABEL_56;
    flag = v44->fields.flag;
    if ( v44->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v44, eventId);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v18 + 48), v51);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_42;
    }
    eventId = (const MethodInfo *)(unsigned int)v44->fields.eventId;
    if ( ((unsigned int)eventId & 0x80000000) != 0 )
      goto LABEL_31;
    checkedEntityList = *v71;
    if ( !*v71 )
      goto LABEL_56;
    checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___Contains((System_Collections_Generic_List_int__o *)checkedEntityList, (int32_t)eventId, (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
    {
LABEL_31:
      if ( v44->fields.openType == *(_DWORD *)(v18 + 32) )
      {
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialEntity__isOpenCondition(v44, *(_DWORD *)(v18 + 48), *(_DWORD *)(v18 + 52), *(_DWORD *)(v18 + 56), *(_DWORD *)(v18 + 60), v39);
        if ( flag == 2 || ((unsigned __int8)checkedEntityList & 1) != 0 )
          break;
      }
    }
    if ( v44->fields.flag == 1 )
    {
      v53 = v44->fields.eventId;
      flagType = v44->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_29220040(flagType, v53, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_56;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v44->fields.flagType,
          v44->fields.eventId,
          0LL);
      }
    }
LABEL_42:
    LODWORD(v41) = sortedEntityArray->max_length;
    if ( (__int64)++v42 >= (int)v41 )
      goto LABEL_46;
  }
  if ( flag != 2 && !notSave )
  {
    v55 = *(System_Action_o **)(v18 + 72);
    if ( !v55 )
    {
      v55 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v55,
        (Il2CppObject *)v18,
        Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v18 + 72) = v55;
      sub_B52920((BattleServantConfConponent_o *)(v18 + 72), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
    }
    EventTutorialEntity__OpenTutorial(v44, v55, v52);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_56:
    sub_B52A5C(checkedEntityList, eventId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v63 = *(System_Action_o **)(v18 + 64);
  if ( !v63 )
  {
    v63 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v63,
      (Il2CppObject *)v18,
      Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v18 + 64) = v63;
    sub_B52920((BattleServantConfConponent_o *)(v18 + 64), (System_Int32_array **)v63, v64, v65, v66, v67, v68, v69);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v44, v63, v62);
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
  EventTutorialMaster_o *v11; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v13; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x19
  int max_length; // w8
  unsigned int v17; // w20
  EventTutorialEntity_o *v18; // x27
  int32_t v19; // w8
  const MethodInfo *v20; // x5
  int v21; // w28
  struct System_String_o *MasterName_k__BackingField; // x9
  __int64 v23; // x8
  char *v24; // x9
  __int64 v26; // x0

  if ( (byte_42AF8C8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    this = (EventTutorialMaster_o *)sub_B52984(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_42AF8C8 = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_B5299C(int___TypeInfo, openKinds->max_length);
  v11 = this;
  if ( (int)openKinds->max_length >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v13 = 0LL;
      while ( v13 < MasterName_k__BackingField_low )
      {
        *((_DWORD *)&this->fields.list + v13++) = 0;
        if ( (__int64)v13 >= (int)openKinds->max_length )
          goto LABEL_9;
      }
LABEL_27:
      v26 = sub_B52A88(this);
      sub_B52A28(v26, 0LL);
    }
LABEL_28:
    sub_B52A5C(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        goto LABEL_27;
      v18 = sortedEntityArray->m_Items[v17];
      if ( !v18 )
        goto LABEL_28;
      v19 = v18->fields.eventId;
      if ( (v19 & 0x80000000) != 0 || v19 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
                                          (WellFired_USFGOActorChangePosition_PosSetType_array *)openKinds,
                                          v18->fields.openType,
                                          (const MethodInfo_201BC38 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v21 = (int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v18, qId, bPhase, bWave, bTurn, v20);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_28;
            if ( (unsigned int)v21 >= LODWORD(v11->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v14 )
              goto LABEL_28;
            System_Collections_Generic_List_XWeaponTrail_Element___Insert(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v14,
              *((_DWORD *)&v11->fields.list + v21),
              (XWeaponTrail_Element_o *)v18,
              (const MethodInfo_2FF2818 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v11->fields._MasterName_k__BackingField;
            if ( v21 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v17 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v14;
    }
    v23 = v21;
    while ( (unsigned int)v23 < (unsigned int)MasterName_k__BackingField )
    {
      v24 = (char *)v11 + 4 * v23++;
      ++*((_DWORD *)v24 + 8);
      MasterName_k__BackingField = v11->fields._MasterName_k__BackingField;
      if ( v23 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v14;
}


System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__getEventTutorialEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  int max_length; // w8
  const MethodInfo_2FF1604 **v13; // x28
  int v14; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x23
  EventTutorialEntity_o *v16; // x24
  int32_t v17; // w8
  struct System_String_array *v18; // x8
  __int64 v19; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x19
  const MethodInfo_2FF1604 **v21; // x23
  unsigned __int64 v22; // x28
  struct System_String_array *v23; // x8
  __int64 v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-54h]

  if ( (byte_42AF8C6 & 1) == 0 )
  {
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_B52984(&StringLiteral_15875/*"[]"*/);
    sub_B52984(&StringLiteral_15933/*"[{0}]"*/);
    byte_42AF8C6 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_15933/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_38;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v15 = 0LL;
    if ( v8 )
      goto LABEL_33;
LABEL_38:
    sub_B52A5C(IsNullOrEmpty, v10);
  }
  v13 = (const MethodInfo_2FF1604 **)&Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  v14 = 0;
  v15 = 0LL;
  v26 = openKind;
  do
  {
    if ( v14 >= (unsigned int)max_length )
    {
LABEL_39:
      v25 = sub_B52A88(IsNullOrEmpty);
      sub_B52A28(v25, 0LL);
    }
    v16 = sortedEntityArray->m_Items[v14];
    if ( !v16 )
      goto LABEL_38;
    v17 = v16->fields.eventId;
    if ( ((v17 & 0x80000000) != 0 || v17 == eventId) && v16->fields.openType == openKind )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(targetIds, 0LL);
      if ( IsNullOrEmpty )
      {
        if ( !v8 )
          goto LABEL_38;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          *v13);
      }
      else
      {
        v18 = v16->fields.targetIds;
        if ( !v18 )
          goto LABEL_38;
        v19 = *(_QWORD *)&v18->max_length;
        if ( !v15 )
        {
          if ( !(_DWORD)v19
            || (IsNullOrEmpty = System_String__op_Equality(v18->m_Items[0], (System_String_o *)StringLiteral_15875/*"[]"*/, 0LL),
                v15 = 0LL,
                IsNullOrEmpty) )
          {
            v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16;
          }
        }
        if ( (int)v19 >= 1 )
        {
          v20 = v15;
          v21 = v13;
          v22 = 0LL;
          while ( 1 )
          {
            v23 = v16->fields.targetIds;
            if ( !v23 )
              goto LABEL_38;
            if ( v22 >= v23->max_length )
              goto LABEL_39;
            IsNullOrEmpty = System_String__op_Equality(v23->m_Items[v22], targetIds, 0LL);
            if ( IsNullOrEmpty )
              break;
            if ( (__int64)++v22 >= (int)v19 )
            {
              v13 = v21;
              goto LABEL_30;
            }
          }
          if ( !v8 )
            goto LABEL_38;
          v13 = v21;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
            *v21);
LABEL_30:
          v15 = v20;
          openKind = v26;
        }
      }
    }
    max_length = sortedEntityArray->max_length;
    ++v14;
  }
  while ( v14 < max_length );
  if ( !v8 )
    goto LABEL_38;
LABEL_33:
  if ( v15 && !v8->fields._size )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v8,
      v15,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v8;
}


bool __fastcall EventTutorialMaster__isTargetIdExistFromArray(
        EventTutorialMaster_o *this,
        System_Int32_array_array *targets,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v4; // x9
  __int64 v5; // x10
  char v6; // w8
  System_Int32_array *v7; // x12
  __int64 v8; // x13
  __int64 v10; // x0

  if ( targets && (v4 = *(_QWORD *)&targets->max_length) != 0 && (int)v4 >= 1 )
  {
    v5 = 0LL;
    v6 = 0;
    do
    {
      v7 = targets->m_Items[v5];
      if ( !v7 )
        sub_B52A5C(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
        {
          v10 = sub_B52A88(this);
          sub_B52A28(v10, 0LL);
        }
        v6 |= v7->m_Items[1] == targetId;
      }
      ++v5;
    }
    while ( (int)v5 < (int)v4 );
  }
  else
  {
    v6 = 0;
  }
  return v6 & 1;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w26
  int32_t v17; // w27
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v19; // x5
  __int64 v20; // x10
  int32_t v21; // w8

  if ( (byte_42AF8B4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventTutorialEntity_TypeInfo);
    byte_42AF8B4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v16 = Count;
  v17 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      list,
                                      v17,
                                      (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == EventTutorialEntity_TypeInfo )
      {
        v21 = Item->fields.eventId;
        if ( ((v21 & 0x80000000) != 0 || v21 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, v19) )
        {
          return 1;
        }
      }
    }
    if ( ++v17 >= v16 )
      return 0;
  }
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w27
  int32_t v20; // w28
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v22; // x5
  __int64 v23; // x10
  int32_t v24; // w8
  int32_t v26; // [xsp+8h] [xbp-58h]

  if ( (byte_42AF8B3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventTutorialEntity_TypeInfo);
    byte_42AF8B3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B52A5C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v26 = bPhase;
  v19 = Count;
  v20 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      list,
                                      v20,
                                      (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v23 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == EventTutorialEntity_TypeInfo )
      {
        v24 = Item->fields.eventId;
        if ( ((v24 & 0x80000000) == 0 || !isChkEventId)
          && ((v24 & 0x80000000) != 0 || v24 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isEnableCondition(Item, qId, v26, bWave, bTurn, v22) )
        {
          return 1;
        }
      }
    }
    if ( ++v20 >= v19 )
      return 0;
  }
}


bool __fastcall EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x19
  EventTutorialMaster___c_c *v4; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v7; // x21
  struct EventTutorialMaster___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x0
  EventTutorialMaster___c_c *v16; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x19
  struct EventTutorialMaster___c_StaticFields *v18; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_1; // x20
  Il2CppObject *v20; // x21
  struct EventTutorialMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array **v29; // x0
  BattleServantConfConponent_o *v30; // x8
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x19
  struct EventTutorialMaster_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42AF8AF & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Func_EventTutorialEntity__int___ctor__);
    sub_B52984(&System_Func_EventTutorialEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__preProcess_b__7_0__);
    sub_B52984(&Method_EventTutorialMaster___c__preProcess_b__7_1__);
    sub_B52984(&EventTutorialMaster___c_TypeInfo);
    byte_42AF8AF = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v4 = EventTutorialMaster___c_TypeInfo;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v4 = EventTutorialMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v7,
      Method_EventTutorialMaster___c__preProcess_b__7_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v8 = EventTutorialMaster___c_TypeInfo->static_fields;
    v8->__9__7_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v3,
          (System_Func_TSource__TKey__o *)_9__7_0,
          (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v16 = EventTutorialMaster___c_TypeInfo;
  v17 = v15;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v16 = EventTutorialMaster___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v18->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v18 = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_1,
      v20,
      Method_EventTutorialMaster___c__preProcess_b__7_1__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v21 = EventTutorialMaster___c_TypeInfo->static_fields;
    v21->__9__7_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v17,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_1B6DDDC *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v29 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v28,
                                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  v30 = (BattleServantConfConponent_o *)EventTutorialMaster_TypeInfo->static_fields;
  v30->klass = (BattleServantConfConponent_c *)v29;
  sub_B52920(v30, v29, v31, v32, v33, v34, v35, v36);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v38 = EventTutorialMaster_TypeInfo->static_fields;
  v38->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v37;
  sub_B52920(
    (BattleServantConfConponent_o *)&v38->checkedEntityList,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  return 1;
}


void __fastcall EventTutorialMaster__showTutorialWithoutCheck(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  __int64 v10; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x1
  const MethodInfo *v12; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v15; // w25
  int32_t missionConditionDetailId; // w8
  __int64 v17; // x0

  if ( (byte_42AF8BE & 1) == 0 )
  {
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_42AF8BE = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_15;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v17 = sub_B52A88(v10);
        sub_B52A28(v17, 0LL);
      }
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)sortedEntityArray->m_Items[v15];
      if ( !v11 )
        break;
      missionConditionDetailId = v11->fields.missionConditionDetailId;
      if ( ((missionConditionDetailId & 0x80000000) != 0 || missionConditionDetailId == eventId)
        && v11->fields.eventId == openKind )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B52A5C(v10, v11);
  }
LABEL_14:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v9,
    0,
    callback,
    v12);
}


void __fastcall EventTutorialMaster__showTutorialWithoutCheck_24327252(
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v35; // w23
  EventTutorialEntity_o *v36; // x21
  int32_t v37; // w8
  const MethodInfo *v38; // x2
  System_Action_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x0

  if ( (byte_42AF8C1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__);
    sub_B52984(&EventTutorialMaster___c__DisplayClass26_0_TypeInfo);
    byte_42AF8C1 = 1;
  }
  v17 = sub_B52A54(EventTutorialMaster___c__DisplayClass26_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass26_0___ctor((EventTutorialMaster___c__DisplayClass26_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_B52920(
    (BattleServantConfConponent_o *)(v17 + 32),
    (System_Int32_array **)callbackAfter,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_B52A5C(isEnableCondition, v19);
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
      {
        v46 = sub_B52A88(isEnableCondition);
        sub_B52A28(v46, 0LL);
      }
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
      v39 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v17 + 56) = v39;
      sub_B52920((BattleServantConfConponent_o *)(v17 + 56), (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
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
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x19
  __int64 v31; // x21
  int v32; // w8
  EventTutorialEntity_o *v33; // x19
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x2

  if ( (byte_42AF8C3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__);
    sub_B52984(&EventTutorialMaster___c__DisplayClass28_0_TypeInfo);
    byte_42AF8C3 = 1;
  }
  v9 = sub_B52A54(EventTutorialMaster___c__DisplayClass28_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass28_0___ctor((EventTutorialMaster___c__DisplayClass28_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = tutoList;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)tutoList, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = index;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  v30 = *(_QWORD *)(v9 + 24);
  if ( !v30 )
    goto LABEL_11;
  v31 = *(int *)(v9 + 32);
  v32 = *(_DWORD *)(v30 + 24);
  if ( (int)v31 < v32 )
  {
    if ( v32 <= (unsigned int)v31 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v33 = *(EventTutorialEntity_o **)(*(_QWORD *)(v30 + 16) + 8 * v31 + 32);
    v34 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v9,
      Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( v33 )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag(v33, v34, v35);
      return;
    }
LABEL_11:
    sub_B52A5C(v10, v11);
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
  struct System_Int32_array *eventIds; // x21
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  __int64 v5; // x1
  __int64 v7; // x0

  if ( (byte_42ACDF6 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_42ACDF6 = 1;
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
                     (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        this->fields.eventIds = eventIds;
        sub_B52920(&this->fields.eventIds);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_B5299C(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (struct System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
        {
          v7 = sub_B52A88(OpenEventIds);
          sub_B52A28(v7, 0LL);
        }
        LODWORD(OpenEventIds->fields._syncRoot) = this->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_B52A5C(OpenEventIds, v5);
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
  EventTutorialMaster__CoCheckTutorialLocal_d__11_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct EventTutorialMaster___c__DisplayClass11_0_o **p__8__1; // x20
  struct EventTutorialEntity_array **p__7__wrap1; // x20
  int v7; // w8
  struct EventTutorialMaster___c__DisplayClass11_1_o **p__8__2; // x21
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialMaster___c__DisplayClass11_0_o *v10; // x8
  Il2CppObject *v11; // x22
  struct EventTutorialMaster___c__DisplayClass11_0_o *v12; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v13; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v14; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v15; // x8
  Il2CppObject *v16; // x20
  Il2CppClass *klass; // x8
  _BYTE *data; // x8
  EventTutorialEntity_o *data_5__4; // x22
  Il2CppObject *_8__2; // x24
  System_Action_o *v21; // x23
  struct EventTutorialMaster___c__DisplayClass11_1_o *v22; // x22
  EventTutorialEntity_o *v23; // x8
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *v26; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass11_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  bool result; // w0
  System_Func_bool__o *v31; // x20
  UnityEngine_WaitWhile_o *v32; // x21
  Il2CppObject **p__2__current; // x19
  System_Func_bool__o *monitor; // x21
  UnityEngine_WaitWhile_o *v35; // x20
  Il2CppObject **v36; // x19
  __int64 v37; // x0

  v2 = this;
  if ( (byte_42ACDF4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&EventTutorialMaster_TypeInfo);
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__);
    sub_B52984(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__);
    sub_B52984(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__);
    sub_B52984(&EventTutorialMaster___c__DisplayClass11_1_TypeInfo);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)sub_B52984(&UnityEngine_WaitWhile_TypeInfo);
    byte_42ACDF4 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__2 = &v2->fields.__8__2;
    p_data_5__4 = &v2->fields._data_5__4;
    v2->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state == 1 )
  {
    p__8__2 = &v2->fields.__8__2;
    v2->fields.__1__state = -1;
    goto LABEL_27;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v4 = (Il2CppObject *)sub_B52A54(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v4, 0LL);
  p__8__1 = &v2->fields.__8__1;
  v2->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass11_0_o *)v4;
  sub_B52920(&v2->fields.__8__1);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_55;
  *(_QWORD *)&this->fields.__1__state = v2->fields.args;
  sub_B52920(&this->fields);
  if ( !*p__8__1 )
    goto LABEL_55;
  if ( !(*p__8__1)->fields.args )
    return 0;
  v2->fields.__7__wrap1 = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  p__7__wrap1 = &v2->fields.__7__wrap1;
  sub_B52920(&v2->fields.__7__wrap1);
  v7 = 0;
  for ( v2->fields.__7__wrap2 = 0; ; v2->fields.__7__wrap2 = v7 )
  {
    v26 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      goto LABEL_55;
    max_length = v26->max_length;
    if ( v7 >= max_length )
    {
      v2->fields.__7__wrap1 = 0LL;
      sub_B52920(p__7__wrap1);
      _8__1 = v2->fields.__8__1;
      if ( _8__1 )
      {
        args = _8__1->fields.args;
        if ( args )
        {
          ActionExtensions__Call(args->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_55:
      sub_B52A5C(this, method);
    }
    if ( v7 >= (unsigned int)max_length )
    {
      v37 = sub_B52A88(this);
      sub_B52A28(v37, 0LL);
    }
    v2->fields._data_5__4 = v26->m_Items[v7];
    p_data_5__4 = &v2->fields._data_5__4;
    sub_B52920(&v2->fields._data_5__4);
    v10 = v2->fields.__8__1;
    if ( !v10 )
      goto LABEL_55;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialMaster__IsOpenCondition(
                                                                  *p_data_5__4,
                                                                  v10->fields.args,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v23 = *p_data_5__4;
    if ( !*p_data_5__4 )
      goto LABEL_55;
    if ( v23->fields.flag == 1 )
    {
      eventId = v23->fields.eventId;
      flagType = v23->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( !TutorialFlag__Get_29220040(flagType, eventId, 0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      0LL,
                                                                      (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*p_data_5__4 || !this )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*p_data_5__4)->fields.flagType,
          (*p_data_5__4)->fields.eventId,
          0LL);
      }
    }
    v2->fields._data_5__4 = 0LL;
    sub_B52920(p_data_5__4);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v7 = v2->fields.__7__wrap2 + 1;
  }
  v11 = (Il2CppObject *)sub_B52A54(EventTutorialMaster___c__DisplayClass11_1_TypeInfo);
  System_Object___ctor(v11, 0LL);
  v2->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass11_1_o *)v11;
  p__8__2 = &v2->fields.__8__2;
  sub_B52920(&v2->fields.__8__2);
  v12 = v2->fields.__8__1;
  if ( !v12 )
    goto LABEL_55;
  v13 = v12->fields.args;
  if ( !v13 )
    goto LABEL_55;
  if ( !v13->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialEntity__HasBeforeAction(
                                                                (EventTutorialEntity_o *)this,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v14 = v2->fields.__8__1;
  if ( !v14 )
    goto LABEL_55;
  v15 = v14->fields.args;
  if ( !v15 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v15->fields.adapter;
  if ( !this )
    goto LABEL_55;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v2->fields._data_5__4, 0LL);
  v16 = (Il2CppObject *)v2->fields.__8__1;
  if ( !v16 )
    goto LABEL_55;
  klass = v16[1].klass;
  if ( !klass )
    goto LABEL_55;
  data = klass->_1.this_arg.data;
  if ( !data )
    goto LABEL_55;
  if ( !data[16] )
  {
LABEL_27:
    if ( !*p__8__2 )
      goto LABEL_55;
    (*p__8__2)->fields.isBusy = 1;
    p_data_5__4 = &v2->fields._data_5__4;
    data_5__4 = v2->fields._data_5__4;
    _8__2 = (Il2CppObject *)v2->fields.__8__2;
    v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v21, _8__2, Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, 0LL);
    if ( !data_5__4 )
      goto LABEL_55;
    EventTutorialEntity__OpenTutorial(data_5__4, v21, 0LL);
    v22 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_55;
    if ( v22->fields.isBusy )
    {
      v31 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v31,
        (Il2CppObject *)v22,
        Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__,
        (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
      v32 = (UnityEngine_WaitWhile_o *)sub_B52A54(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v32, v31, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v32;
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
LABEL_31:
    *p__8__2 = 0LL;
    sub_B52920(p__8__2);
    goto LABEL_32;
  }
  monitor = (System_Func_bool__o *)v16[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      monitor,
      v16,
      Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__,
      (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
    v16[1].monitor = monitor;
    sub_B52920(&v16[1].monitor);
  }
  v35 = (UnityEngine_WaitWhile_o *)sub_B52A54(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v35, monitor, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v35;
  v36 = &v2->fields.__2__current;
  sub_B52920(v36);
  result = 1;
  *((_DWORD *)v36 - 2) = 1;
  return result;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__11_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__17___ctor(
        EventTutorialMaster__CoroutineCheckTutorial_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__17__MoveNext(
        EventTutorialMaster__CoroutineCheckTutorial_d__17_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  EventTutorialMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  int32_t v7; // w8

  if ( (byte_42ACDF5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42ACDF5 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v7 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B52A5C(0LL, v6);
    this->fields.__2__current = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                                                  Master_WarQuestSelectionMaster,
                                                  this->fields.args,
                                                  0LL);
    sub_B52920(&this->fields.__2__current);
    v7 = 1;
    result = 1;
  }
  this->fields.__1__state = v7;
  return result;
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventTutorialMaster__CoroutineCheckTutorial_d__17__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoroutineCheckTutorial_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__17_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall EventTutorialMaster__CoroutineCheckTutorial_d__17__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoroutineCheckTutorial_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventTutorialMaster__CoroutineCheckTutorial_d__17__System_IDisposable_Dispose(
        EventTutorialMaster__CoroutineCheckTutorial_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventTutorialMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACDF2 & 1) == 0 )
  {
    sub_B52984(&EventTutorialMaster___c_TypeInfo);
    byte_42ACDF2 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c___OpenTutorialImages_b__24_0(
        EventTutorialMaster___c_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x0
  __int64 v3; // x1

  if ( (byte_42ACDF3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42ACDF3 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v2 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v2 )
    sub_B52A5C(0LL, v3);
  MissionNotifyManager__EndPause(v2, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.eventId;
}


void __fastcall EventTutorialMaster___c__DisplayClass10_0___ctor(
        EventTutorialMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass10_0___checkTutorial_b__0(
        EventTutorialMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventTutorialMaster__checkTutorial_24321460(
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


void __fastcall EventTutorialMaster___c__DisplayClass10_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventTutorialMaster__checkTutorial_24321460(
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
    sub_B52A5C(this, method);
  return adapter->fields._IsPerformanceBusy_k__BackingField;
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
  this->fields.isBusy = 0;
}


bool __fastcall EventTutorialMaster___c__DisplayClass11_1___CoCheckTutorialLocal_b__2(
        EventTutorialMaster___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


void __fastcall EventTutorialMaster___c__DisplayClass21_0___ctor(
        EventTutorialMaster___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTutorialMaster___c__DisplayClass21_0___GetAvailableTutorialArray_b__0(
        EventTutorialMaster___c__DisplayClass21_0_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass26_0___ctor(
        EventTutorialMaster___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass26_0___showTutorialWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
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


void __fastcall EventTutorialMaster___c__DisplayClass28_0___ctor(
        EventTutorialMaster___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c__DisplayClass28_0___tutorialChainWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EventTutorialMaster__tutorialChainWithoutCheck(
    _4__this,
    this->fields.tutoList,
    this->fields.index + 1,
    this->fields.callback,
    0LL);
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
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
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


void __fastcall EventTutorialMaster___c__DisplayClass9_0___checkTutorial_b__1(
        EventTutorialMaster___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
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