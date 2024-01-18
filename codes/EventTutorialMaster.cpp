void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418827F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method);
    byte_418827F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    165,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  EventTutorialMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *v18; // x25
  const MethodInfo *v19; // [xsp+8h] [xbp-48h]

  if ( (byte_4188286 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    byte_4188286 = 1;
  }
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        v19);
      return;
    }
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v17);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v18 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventTutorialMaster___);
  Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)v18);
  if ( !v18 )
    goto LABEL_14;
  EventTutorialMaster__checkTutorial_26066132(
    (EventTutorialMaster_o *)v18,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *checkedEntityList; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x25
  const MethodInfo *v20; // [xsp+8h] [xbp-48h]

  if ( (byte_4188287 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v17);
    byte_4188287 = 1;
  }
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_15;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    checkedEntityList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        v20);
      return;
    }
LABEL_15:
    sub_B2C434(checkedEntityList, *(_QWORD *)&openKind);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventTutorialMaster___);
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_WarQuestSelectionMaster);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  EventTutorialMaster__checkTutorial_26066132(
    (EventTutorialMaster_o *)Master_WarQuestSelectionMaster,
    (System_Collections_Generic_List_int__o *)checkedEntityList,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    v20);
}


void __fastcall EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x0

  if ( (byte_4188288 & 1) == 0 )
  {
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v2);
    byte_4188288 = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_B2C434(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkedEntityList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
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

  if ( (byte_4188283 & 1) == 0 )
  {
    sub_B2C35C(&EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo, args);
    byte_4188283 = 1;
  }
  v4 = sub_B2C42C(EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo);
  EventTutorialMaster__CoCheckTutorialLocal_d__11___ctor(
    (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  *(_QWORD *)(v4 + 32) = args;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)args, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4188289 & 1) == 0 )
  {
    sub_B2C35C(&EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo, method);
    byte_4188289 = 1;
  }
  v3 = sub_B2C42C(EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo);
  EventTutorialMaster__CoroutineCheckTutorial_d__17___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__17_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = args;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)args, v6, v7, v8, v9, v10, v11);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  if ( (byte_4188298 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4188298 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v15);
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
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_418828D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v3);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v4);
    sub_B2C35C(&Method_System_Func_EventTutorialEntity__bool___ctor__, v5);
    sub_B2C35C(&System_Func_EventTutorialEntity__bool__TypeInfo, v6);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__, v7);
    sub_B2C35C(&EventTutorialMaster___c__DisplayClass21_0_TypeInfo, v8);
    byte_418828D = 1;
  }
  v9 = sub_B2C42C(EventTutorialMaster___c__DisplayClass21_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass21_0___ctor((EventTutorialMaster___c__DisplayClass21_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = args;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)args, v12, v13, v14, v15, v16, v17);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventTutorialEntity__bool___ctor__);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v20,
                                        (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_418827D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418827D = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4188296 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188296 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventEntity_array *EnableEntityList; // x19
  System_Collections_Generic_List_int__o *v9; // x20
  int max_length; // w8
  unsigned int v11; // w21
  EventEntity_o *v12; // x8
  __int64 v14; // x0

  if ( (byte_4188295 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188295 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_13;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_13;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v14 = sub_B2C460(Instance);
        sub_B2C400(v14, 0LL);
      }
      v12 = EnableEntityList->m_Items[v11];
      if ( !v12 || !v9 )
        break;
      System_Collections_Generic_List_int___Add(
        v9,
        v12->fields.id,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = EnableEntityList->max_length;
      if ( (int)++v11 >= max_length )
        return v9;
    }
LABEL_13:
    sub_B2C434(Instance, v7);
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
  if ( (byte_418828E & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, args);
    byte_418828E = 1;
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
              (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_B2C434(data, args);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x7

  if ( (byte_418828B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418828B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v15);
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_418828A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418828A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v17);
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
  __int64 v7; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20
  EventTutorialMaster___c_c *v11; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__24_0; // x21
  Il2CppObject *v14; // x22
  struct EventTutorialMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4188290 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B2C35C(&Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, v6);
    sub_B2C35C(&EventTutorialMaster___c_TypeInfo, v7);
    byte_4188290 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MissionNotifyManager__StartPause(Instance, 0LL);
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    v11 = EventTutorialMaster___c_TypeInfo;
    if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v11 = EventTutorialMaster___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__24_0 = static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__24_0, v14, Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, 0LL);
      v15 = EventTutorialMaster___c_TypeInfo->static_fields;
      v15->__9__24_0 = _9__24_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v15->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( !v10 )
LABEL_20:
      sub_B2C434(Instance, v9);
    CommonUI__OpenTutorialImageDialog_17997428(v10, imageIds, -1, 0, _9__24_0, 0LL, 0LL, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_418828C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418828C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v9);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_26071720(
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_4188291 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4188291 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v17);
  }
  EventTutorialMaster__showTutorialWithoutCheck_26071924(
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
  System_String_o *PK; // x2

  if ( (byte_418827E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__, entity);
    byte_418827E = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4188293 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188293 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *checkedEntityList; // x0
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v47; // x8
  unsigned __int64 v48; // x27
  int v49; // w24
  EventTutorialEntity_o *v50; // x21
  _BOOL8 v51; // x0
  __int64 v52; // x1
  char v53; // w22
  int v54; // w8
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v57; // x3
  int32_t v58; // w8
  const MethodInfo *v59; // x2
  int32_t flagType; // w22
  int32_t v61; // w23
  System_Action_o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  System_Action_o *v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  __int64 v77; // x0
  _BYTE v78[32]; // [xsp+8h] [xbp-98h] BYREF
  int v79; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4188281 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v23);
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v24);
    sub_B2C35C(&NetworkManager_TypeInfo, v25);
    sub_B2C35C(&TutorialFlag_TypeInfo, v26);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__, v27);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__, v28);
    sub_B2C35C(&EventTutorialMaster___c__DisplayClass9_0_TypeInfo, v29);
    byte_4188281 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  v79 = 0;
  v30 = sub_B2C42C(EventTutorialMaster___c__DisplayClass9_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass9_0___ctor((EventTutorialMaster___c__DisplayClass9_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_55;
  *(_QWORD *)(v30 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 32) = callbackAfter;
  *(_DWORD *)(v30 + 24) = eventId;
  *(_DWORD *)(v30 + 28) = openKind;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v30 + 32),
    (System_Int32_array **)callbackAfter,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_DWORD *)(v30 + 40) = qId;
  *(_DWORD *)(v30 + 44) = bPhase;
  *(_DWORD *)(v30 + 48) = bWave;
  *(_DWORD *)(v30 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v47 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v47 < 1 )
  {
LABEL_45:
    ActionExtensions__Call(*(System_Action_o **)(v30 + 32), 0LL);
    return;
  }
  v48 = 0LL;
  v49 = 0;
  while ( 1 )
  {
    if ( v48 >= (unsigned int)v47 )
    {
      v77 = sub_B2C460(checkedEntityList);
      sub_B2C400(v77, 0LL);
    }
    v50 = sortedEntityArray->m_Items[v48];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v78,
        checkedEntityList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v80 = *(System_Collections_Generic_List_Enumerator_T__o *)v78;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v80,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v51 )
          break;
        if ( !v50 )
          sub_B2C434(v51, v52);
        if ( !v80.fields.current )
          sub_B2C434(v51, v52);
        if ( v50->fields.eventId == HIDWORD(v80.fields.current[1].klass)
          && v50->fields.flagType == LODWORD(v80.fields.current[1].monitor)
          && v50->fields.num == LODWORD(v80.fields.current[1].klass) )
        {
          v53 = 1;
          goto LABEL_19;
        }
      }
      v53 = 0;
LABEL_19:
      *(_DWORD *)&v78[4 * v49 + 24] = 188;
      v49 = ++v79;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v80,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v49 )
      {
        v54 = v49 - 1;
        if ( *(_DWORD *)&v78[4 * v49 + 20] == 188 )
        {
          --v49;
          v79 = v54;
        }
      }
      if ( (v53 & 1) != 0 )
        goto LABEL_41;
    }
    if ( !v50 )
      goto LABEL_55;
    flag = v50->fields.flag;
    if ( v50->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v50, v32);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v30 + 40), v57);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_41;
    }
    v58 = v50->fields.eventId;
    if ( ((v58 & 0x80000000) != 0 || v58 == *(_DWORD *)(v30 + 24)) && v50->fields.openType == *(_DWORD *)(v30 + 28) )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialEntity__isOpenCondition(v50, *(_DWORD *)(v30 + 40), *(_DWORD *)(v30 + 44), *(_DWORD *)(v30 + 48), *(_DWORD *)(v30 + 52), v45);
      if ( flag == 2 || ((unsigned __int8)checkedEntityList & 1) != 0 )
        break;
    }
    if ( v50->fields.flag == 1 )
    {
      flagType = v50->fields.flagType;
      v61 = *(_DWORD *)(v30 + 24);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_28619864(flagType, v61, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v50->fields.flagType,
          *(_DWORD *)(v30 + 24),
          0LL);
      }
    }
LABEL_41:
    LODWORD(v47) = sortedEntityArray->max_length;
    if ( (__int64)++v48 >= (int)v47 )
      goto LABEL_45;
  }
  if ( flag != 2 && !notSave )
  {
    v62 = *(System_Action_o **)(v30 + 64);
    if ( !v62 )
    {
      v62 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v62,
        (Il2CppObject *)v30,
        Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v30 + 64) = v62;
      sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 64), (System_Int32_array **)v62, v63, v64, v65, v66, v67, v68);
    }
    EventTutorialEntity__OpenTutorial(v50, v62, v59);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_55:
    sub_B2C434(checkedEntityList, v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v70 = *(System_Action_o **)(v30 + 56);
  if ( !v70 )
  {
    v70 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v70,
      (Il2CppObject *)v30,
      Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v30 + 56) = v70;
    sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 56), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v50, v70, v69);
}


void __fastcall EventTutorialMaster__checkTutorial_26066132(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *checkedEntityList; // x0
  const MethodInfo *eventId; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v54; // x8
  unsigned __int64 v55; // x28
  int v56; // w20
  EventTutorialEntity_o *v57; // x22
  _BOOL8 v58; // x0
  __int64 v59; // x1
  char v60; // w23
  int v61; // w8
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x2
  int32_t v66; // w23
  int32_t flagType; // w24
  System_Action_o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  const MethodInfo *v75; // x2
  System_Action_o *v76; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v84; // [xsp+0h] [xbp-A0h]
  _BYTE v85[32]; // [xsp+8h] [xbp-98h] BYREF
  int v86; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4188282 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, checkEventIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v24);
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v25);
    sub_B2C35C(&NetworkManager_TypeInfo, v26);
    sub_B2C35C(&TutorialFlag_TypeInfo, v27);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__, v28);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__, v29);
    sub_B2C35C(&EventTutorialMaster___c__DisplayClass10_0_TypeInfo, v30);
    byte_4188282 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  v86 = 0;
  v31 = sub_B2C42C(EventTutorialMaster___c__DisplayClass10_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass10_0___ctor((EventTutorialMaster___c__DisplayClass10_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_56;
  *(_QWORD *)(v31 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  *(_QWORD *)(v31 + 24) = checkEventIds;
  v84 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v31 + 24);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v31 + 24),
    (System_Int32_array **)checkEventIds,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  *(_QWORD *)(v31 + 40) = callbackAfter;
  *(_DWORD *)(v31 + 32) = openKind;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v31 + 40),
    (System_Int32_array **)callbackAfter,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  *(_DWORD *)(v31 + 48) = qId;
  *(_DWORD *)(v31 + 52) = bPhase;
  *(_DWORD *)(v31 + 56) = bWave;
  *(_DWORD *)(v31 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_56;
  v54 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v54 < 1 )
  {
LABEL_46:
    ActionExtensions__Call(*(System_Action_o **)(v31 + 40), 0LL);
    return;
  }
  v55 = 0LL;
  v56 = 0;
  while ( 1 )
  {
    if ( v55 >= (unsigned int)v54 )
    {
      v83 = sub_B2C460(checkedEntityList);
      sub_B2C400(v83, 0LL);
    }
    v57 = sortedEntityArray->m_Items[v55];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v85,
        checkedEntityList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v87 = *(System_Collections_Generic_List_Enumerator_T__o *)v85;
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v87,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v58 )
          break;
        if ( !v57 )
          sub_B2C434(v58, v59);
        if ( !v87.fields.current )
          sub_B2C434(v58, v59);
        if ( v57->fields.eventId == HIDWORD(v87.fields.current[1].klass)
          && v57->fields.flagType == LODWORD(v87.fields.current[1].monitor)
          && v57->fields.num == LODWORD(v87.fields.current[1].klass) )
        {
          v60 = 1;
          goto LABEL_19;
        }
      }
      v60 = 0;
LABEL_19:
      *(_DWORD *)&v85[4 * v56 + 24] = 188;
      v56 = ++v86;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v87,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v56 )
      {
        v61 = v56 - 1;
        if ( *(_DWORD *)&v85[4 * v56 + 20] == 188 )
        {
          --v56;
          v86 = v61;
        }
      }
      if ( (v60 & 1) != 0 )
        goto LABEL_42;
    }
    if ( !v57 )
      goto LABEL_56;
    flag = v57->fields.flag;
    if ( v57->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v57, eventId);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v31 + 48), v64);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_42;
    }
    eventId = (const MethodInfo *)(unsigned int)v57->fields.eventId;
    if ( ((unsigned int)eventId & 0x80000000) != 0 )
      goto LABEL_31;
    checkedEntityList = *v84;
    if ( !*v84 )
      goto LABEL_56;
    checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___Contains((System_Collections_Generic_List_int__o *)checkedEntityList, (int32_t)eventId, (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
    {
LABEL_31:
      if ( v57->fields.openType == *(_DWORD *)(v31 + 32) )
      {
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialEntity__isOpenCondition(v57, *(_DWORD *)(v31 + 48), *(_DWORD *)(v31 + 52), *(_DWORD *)(v31 + 56), *(_DWORD *)(v31 + 60), v52);
        if ( flag == 2 || ((unsigned __int8)checkedEntityList & 1) != 0 )
          break;
      }
    }
    if ( v57->fields.flag == 1 )
    {
      v66 = v57->fields.eventId;
      flagType = v57->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_28619864(flagType, v66, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_56;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v57->fields.flagType,
          v57->fields.eventId,
          0LL);
      }
    }
LABEL_42:
    LODWORD(v54) = sortedEntityArray->max_length;
    if ( (__int64)++v55 >= (int)v54 )
      goto LABEL_46;
  }
  if ( flag != 2 && !notSave )
  {
    v68 = *(System_Action_o **)(v31 + 72);
    if ( !v68 )
    {
      v68 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v68,
        (Il2CppObject *)v31,
        Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v31 + 72) = v68;
      sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 72), (System_Int32_array **)v68, v69, v70, v71, v72, v73, v74);
    }
    EventTutorialEntity__OpenTutorial(v57, v68, v65);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_56:
    sub_B2C434(checkedEntityList, eventId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v76 = *(System_Action_o **)(v31 + 64);
  if ( !v76 )
  {
    v76 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v76,
      (Il2CppObject *)v31,
      Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v31 + 64) = v76;
    sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 64), (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v57, v76, v75);
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
  EventTutorialMaster_o *v16; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v18; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x19
  int max_length; // w8
  unsigned int v22; // w20
  EventTutorialEntity_o *v23; // x27
  int32_t v24; // w8
  const MethodInfo *v25; // x5
  int v26; // w28
  struct System_String_o *MasterName_k__BackingField; // x9
  __int64 v28; // x8
  char *v29; // x9
  __int64 v31; // x0

  if ( (byte_4188299 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v11);
    sub_B2C35C(&int___TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14);
    this = (EventTutorialMaster_o *)sub_B2C35C(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15);
    byte_4188299 = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_B2C374(int___TypeInfo, openKinds->max_length);
  v16 = this;
  if ( (int)openKinds->max_length >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v18 = 0LL;
      while ( v18 < MasterName_k__BackingField_low )
      {
        *((_DWORD *)&this->fields.list + v18++) = 0;
        if ( (__int64)v18 >= (int)openKinds->max_length )
          goto LABEL_9;
      }
LABEL_27:
      v31 = sub_B2C460(this);
      sub_B2C400(v31, 0LL);
    }
LABEL_28:
    sub_B2C434(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        goto LABEL_27;
      v23 = sortedEntityArray->m_Items[v22];
      if ( !v23 )
        goto LABEL_28;
      v24 = v23->fields.eventId;
      if ( (v24 & 0x80000000) != 0 || v24 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
                                          (WellFired_USFGOActorChangePosition_PosSetType_array *)openKinds,
                                          v23->fields.openType,
                                          (const MethodInfo_1FFD59C *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v26 = (int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v23, qId, bPhase, bWave, bTurn, v25);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v16 )
              goto LABEL_28;
            if ( (unsigned int)v26 >= LODWORD(v16->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v19 )
              goto LABEL_28;
            System_Collections_Generic_List_XWeaponTrail_Element___Insert(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v19,
              *((_DWORD *)&v16->fields.list + v26),
              (XWeaponTrail_Element_o *)v23,
              (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v16->fields._MasterName_k__BackingField;
            if ( v26 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v22 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v19;
    }
    v28 = v26;
    while ( (unsigned int)v28 < (unsigned int)MasterName_k__BackingField )
    {
      v29 = (char *)v16 + 4 * v28++;
      ++*((_DWORD *)v29 + 8);
      MasterName_k__BackingField = v16->fields._MasterName_k__BackingField;
      if ( v28 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v19;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  int max_length; // w8
  const MethodInfo_2EF4460 **v19; // x28
  int v20; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x23
  EventTutorialEntity_o *v22; // x24
  int32_t v23; // w8
  struct System_String_array *v24; // x8
  __int64 v25; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x19
  const MethodInfo_2EF4460 **v27; // x23
  unsigned __int64 v28; // x28
  struct System_String_array *v29; // x8
  __int64 v31; // x0
  int32_t v32; // [xsp+Ch] [xbp-54h]

  if ( (byte_4188297 & 1) == 0 )
  {
    sub_B2C35C(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15769/*"[]"*/, v12);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v13);
    byte_4188297 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_15827/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_38;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v21 = 0LL;
    if ( v14 )
      goto LABEL_33;
LABEL_38:
    sub_B2C434(IsNullOrEmpty, v16);
  }
  v19 = (const MethodInfo_2EF4460 **)&Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  v20 = 0;
  v21 = 0LL;
  v32 = openKind;
  do
  {
    if ( v20 >= (unsigned int)max_length )
    {
LABEL_39:
      v31 = sub_B2C460(IsNullOrEmpty);
      sub_B2C400(v31, 0LL);
    }
    v22 = sortedEntityArray->m_Items[v20];
    if ( !v22 )
      goto LABEL_38;
    v23 = v22->fields.eventId;
    if ( ((v23 & 0x80000000) != 0 || v23 == eventId) && v22->fields.openType == openKind )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(targetIds, 0LL);
      if ( IsNullOrEmpty )
      {
        if ( !v14 )
          goto LABEL_38;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          *v19);
      }
      else
      {
        v24 = v22->fields.targetIds;
        if ( !v24 )
          goto LABEL_38;
        v25 = *(_QWORD *)&v24->max_length;
        if ( !v21 )
        {
          if ( !(_DWORD)v25
            || (IsNullOrEmpty = System_String__op_Equality(v24->m_Items[0], (System_String_o *)StringLiteral_15769/*"[]"*/, 0LL),
                v21 = 0LL,
                IsNullOrEmpty) )
          {
            v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
          }
        }
        if ( (int)v25 >= 1 )
        {
          v26 = v21;
          v27 = v19;
          v28 = 0LL;
          while ( 1 )
          {
            v29 = v22->fields.targetIds;
            if ( !v29 )
              goto LABEL_38;
            if ( v28 >= v29->max_length )
              goto LABEL_39;
            IsNullOrEmpty = System_String__op_Equality(v29->m_Items[v28], targetIds, 0LL);
            if ( IsNullOrEmpty )
              break;
            if ( (__int64)++v28 >= (int)v25 )
            {
              v19 = v27;
              goto LABEL_30;
            }
          }
          if ( !v14 )
            goto LABEL_38;
          v19 = v27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            *v27);
LABEL_30:
          v21 = v26;
          openKind = v32;
        }
      }
    }
    max_length = sortedEntityArray->max_length;
    ++v20;
  }
  while ( v20 < max_length );
  if ( !v14 )
    goto LABEL_38;
LABEL_33:
  if ( v21 && !v14->fields._size )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      v21,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v14;
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
        sub_B2C434(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
        {
          v10 = sub_B2C460(this);
          sub_B2C400(v10, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w26
  int32_t v19; // w27
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v21; // x5
  __int64 v22; // x10
  int32_t v23; // w8

  if ( (byte_4188285 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B2C35C(&EventTutorialEntity_TypeInfo, v15);
    byte_4188285 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v18 = Count;
  v19 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      list,
                                      v19,
                                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v22 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == EventTutorialEntity_TypeInfo )
      {
        v23 = Item->fields.eventId;
        if ( ((v23 & 0x80000000) != 0 || v23 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, v21) )
        {
          return 1;
        }
      }
    }
    if ( ++v19 >= v18 )
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
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w27
  int32_t v22; // w28
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v24; // x5
  __int64 v25; // x10
  int32_t v26; // w8
  int32_t v28; // [xsp+8h] [xbp-58h]

  if ( (byte_4188284 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v17);
    sub_B2C35C(&EventTutorialEntity_TypeInfo, v18);
    byte_4188284 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B2C434(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v28 = bPhase;
  v21 = Count;
  v22 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      list,
                                      v22,
                                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v25 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == EventTutorialEntity_TypeInfo )
      {
        v26 = Item->fields.eventId;
        if ( ((v26 & 0x80000000) == 0 || !isChkEventId)
          && ((v26 & 0x80000000) != 0 || v26 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isEnableCondition(Item, qId, v28, bWave, bTurn, v24) )
        {
          return 1;
        }
      }
    }
    if ( ++v22 >= v21 )
      return 0;
  }
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  EventTutorialMaster___c_c *v15; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v18; // x21
  struct EventTutorialMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  EventTutorialMaster___c_c *v27; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x19
  struct EventTutorialMaster___c_StaticFields *v29; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_1; // x20
  Il2CppObject *v31; // x21
  struct EventTutorialMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Int32_array **v40; // x0
  BattleServantConfConponent_o *v41; // x8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19
  struct EventTutorialMaster_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_4188280 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v5);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v6);
    sub_B2C35C(&Method_System_Func_EventTutorialEntity__int___ctor__, v7);
    sub_B2C35C(&System_Func_EventTutorialEntity__int__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v10);
    sub_B2C35C(&Method_EventTutorialMaster___c__preProcess_b__7_0__, v11);
    sub_B2C35C(&Method_EventTutorialMaster___c__preProcess_b__7_1__, v12);
    sub_B2C35C(&EventTutorialMaster___c_TypeInfo, v13);
    byte_4188280 = 1;
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v15 = EventTutorialMaster___c_TypeInfo;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v15 = EventTutorialMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v18,
      Method_EventTutorialMaster___c__preProcess_b__7_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v19 = EventTutorialMaster___c_TypeInfo->static_fields;
    v19->__9__7_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v14,
          (System_Func_TSource__TKey__o *)_9__7_0,
          (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v27 = EventTutorialMaster___c_TypeInfo;
  v28 = v26;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v27 = EventTutorialMaster___c_TypeInfo;
  }
  v29 = v27->static_fields;
  _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v29->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v29 = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_1,
      v31,
      Method_EventTutorialMaster___c__preProcess_b__7_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v32 = EventTutorialMaster___c_TypeInfo->static_fields;
    v32->__9__7_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v32->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v40 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v39,
                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  v41 = (BattleServantConfConponent_o *)EventTutorialMaster_TypeInfo->static_fields;
  v41->klass = (BattleServantConfConponent_c *)v40;
  sub_B2C2F8(v41, v40, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v49 = EventTutorialMaster_TypeInfo->static_fields;
  v49->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v49->checkedEntityList,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x23
  __int64 v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x1
  const MethodInfo *v15; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v18; // w25
  int32_t missionConditionDetailId; // w8
  __int64 v20; // x0

  if ( (byte_418828F & 1) == 0 )
  {
    sub_B2C35C(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    byte_418828F = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_15;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v20 = sub_B2C460(v13);
        sub_B2C400(v20, 0LL);
      }
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)sortedEntityArray->m_Items[v18];
      if ( !v14 )
        break;
      missionConditionDetailId = v14->fields.missionConditionDetailId;
      if ( ((missionConditionDetailId & 0x80000000) != 0 || missionConditionDetailId == eventId)
        && v14->fields.eventId == openKind )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(v13, v14);
  }
LABEL_14:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v12,
    0,
    callback,
    v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_26071924(
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v38; // w23
  EventTutorialEntity_o *v39; // x21
  int32_t v40; // w8
  const MethodInfo *v41; // x2
  System_Action_o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0

  if ( (byte_4188292 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v17);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__, v18);
    sub_B2C35C(&EventTutorialMaster___c__DisplayClass26_0_TypeInfo, v19);
    byte_4188292 = 1;
  }
  v20 = sub_B2C42C(EventTutorialMaster___c__DisplayClass26_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass26_0___ctor((EventTutorialMaster___c__DisplayClass26_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 32) = callbackAfter;
  *(_DWORD *)(v20 + 24) = eventId;
  *(_DWORD *)(v20 + 28) = openKind;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v20 + 32),
    (System_Int32_array **)callbackAfter,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_DWORD *)(v20 + 40) = qId;
  *(_DWORD *)(v20 + 44) = bPhase;
  *(_DWORD *)(v20 + 48) = bWave;
  *(_DWORD *)(v20 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_B2C434(isEnableCondition, v22);
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
      {
        v49 = sub_B2C460(isEnableCondition);
        sub_B2C400(v49, 0LL);
      }
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
      v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v20,
        Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v20 + 56) = v42;
      sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 56), (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
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
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x19
  __int64 v35; // x21
  int v36; // w8
  EventTutorialEntity_o *v37; // x19
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x2

  if ( (byte_4188294 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, tutoList);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__, v11);
    sub_B2C35C(&EventTutorialMaster___c__DisplayClass28_0_TypeInfo, v12);
    byte_4188294 = 1;
  }
  v13 = sub_B2C42C(EventTutorialMaster___c__DisplayClass28_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass28_0___ctor((EventTutorialMaster___c__DisplayClass28_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = tutoList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)tutoList, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v13 + 40) = callback;
  *(_DWORD *)(v13 + 32) = index;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  v34 = *(_QWORD *)(v13 + 24);
  if ( !v34 )
    goto LABEL_11;
  v35 = *(int *)(v13 + 32);
  v36 = *(_DWORD *)(v34 + 24);
  if ( (int)v35 < v36 )
  {
    if ( v36 <= (unsigned int)v35 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v37 = *(EventTutorialEntity_o **)(*(_QWORD *)(v34 + 16) + 8 * v35 + 32);
    v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v13,
      Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( v37 )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag(v37, v38, v39);
      return;
    }
LABEL_11:
    sub_B2C434(v14, v15);
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
  __int64 v8; // x0

  if ( (byte_41841AF & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_41841AF = 1;
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
                     (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        this->fields.eventIds = eventIds;
        sub_B2C2F8(&this->fields.eventIds, eventIds);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_B2C374(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (struct System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
        {
          v8 = sub_B2C460(OpenEventIds);
          sub_B2C400(v8, 0LL);
        }
        LODWORD(OpenEventIds->fields._syncRoot) = this->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_B2C434(OpenEventIds, v6);
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
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t _1__state; // w8
  Il2CppObject *v16; // x21
  struct EventTutorialMaster___c__DisplayClass11_0_o **p__8__1; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  struct EventTutorialEntity_array **p__7__wrap1; // x20
  int v22; // w8
  struct EventTutorialMaster___c__DisplayClass11_1_o **p__8__2; // x21
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialEntity_o *v25; // x1
  struct EventTutorialMaster___c__DisplayClass11_0_o *v26; // x8
  Il2CppObject *v27; // x22
  struct EventTutorialMaster___c__DisplayClass11_0_o *v28; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v29; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v30; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v31; // x8
  Il2CppObject *v32; // x20
  Il2CppClass *klass; // x8
  _BYTE *data; // x8
  EventTutorialEntity_o *data_5__4; // x22
  Il2CppObject *_8__2; // x24
  System_Action_o *v37; // x23
  struct EventTutorialMaster___c__DisplayClass11_1_o *v38; // x22
  EventTutorialEntity_o *v39; // x8
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *v42; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass11_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v45; // x8
  bool result; // w0
  System_Func_bool__o *v47; // x20
  UnityEngine_WaitWhile_o *v48; // x21
  Il2CppObject **p__2__current; // x19
  System_Func_bool__o *monitor; // x21
  UnityEngine_WaitWhile_o *v51; // x20
  Il2CppObject **v52; // x19
  __int64 v53; // x0

  v2 = this;
  if ( (byte_41841AD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v4);
    sub_B2C35C(&System_Func_bool__TypeInfo, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&TutorialFlag_TypeInfo, v8);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__, v9);
    sub_B2C35C(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo, v10);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, v11);
    sub_B2C35C(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__, v12);
    sub_B2C35C(&EventTutorialMaster___c__DisplayClass11_1_TypeInfo, v13);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v14);
    byte_41841AD = 1;
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
  v16 = (Il2CppObject *)sub_B2C42C(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v16, 0LL);
  p__8__1 = &v2->fields.__8__1;
  v2->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass11_0_o *)v16;
  sub_B2C2F8(&v2->fields.__8__1, v16);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_55;
  args = v2->fields.args;
  *(_QWORD *)&this->fields.__1__state = args;
  sub_B2C2F8(&this->fields, args);
  if ( !*p__8__1 )
    goto LABEL_55;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = static_fields->sortedEntityArray;
  v2->fields.__7__wrap1 = static_fields->sortedEntityArray;
  p__7__wrap1 = &v2->fields.__7__wrap1;
  sub_B2C2F8(&v2->fields.__7__wrap1, sortedEntityArray);
  v22 = 0;
  for ( v2->fields.__7__wrap2 = 0; ; v2->fields.__7__wrap2 = v22 )
  {
    v42 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      goto LABEL_55;
    max_length = v42->max_length;
    if ( v22 >= max_length )
    {
      v2->fields.__7__wrap1 = 0LL;
      sub_B2C2F8(p__7__wrap1, 0LL);
      _8__1 = v2->fields.__8__1;
      if ( _8__1 )
      {
        v45 = _8__1->fields.args;
        if ( v45 )
        {
          ActionExtensions__Call(v45->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_55:
      sub_B2C434(this, method);
    }
    if ( v22 >= (unsigned int)max_length )
    {
      v53 = sub_B2C460(this);
      sub_B2C400(v53, 0LL);
    }
    v25 = v42->m_Items[v22];
    v2->fields._data_5__4 = v25;
    p_data_5__4 = &v2->fields._data_5__4;
    sub_B2C2F8(&v2->fields._data_5__4, v25);
    v26 = v2->fields.__8__1;
    if ( !v26 )
      goto LABEL_55;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialMaster__IsOpenCondition(
                                                                  *p_data_5__4,
                                                                  v26->fields.args,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v39 = *p_data_5__4;
    if ( !*p_data_5__4 )
      goto LABEL_55;
    if ( v39->fields.flag == 1 )
    {
      eventId = v39->fields.eventId;
      flagType = v39->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( !TutorialFlag__Get_28619864(flagType, eventId, 0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      0LL,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
    sub_B2C2F8(p_data_5__4, 0LL);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v22 = v2->fields.__7__wrap2 + 1;
  }
  v27 = (Il2CppObject *)sub_B2C42C(EventTutorialMaster___c__DisplayClass11_1_TypeInfo);
  System_Object___ctor(v27, 0LL);
  v2->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass11_1_o *)v27;
  p__8__2 = &v2->fields.__8__2;
  sub_B2C2F8(&v2->fields.__8__2, v27);
  v28 = v2->fields.__8__1;
  if ( !v28 )
    goto LABEL_55;
  v29 = v28->fields.args;
  if ( !v29 )
    goto LABEL_55;
  if ( !v29->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialEntity__HasBeforeAction(
                                                                (EventTutorialEntity_o *)this,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v30 = v2->fields.__8__1;
  if ( !v30 )
    goto LABEL_55;
  v31 = v30->fields.args;
  if ( !v31 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v31->fields.adapter;
  if ( !this )
    goto LABEL_55;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v2->fields._data_5__4, 0LL);
  v32 = (Il2CppObject *)v2->fields.__8__1;
  if ( !v32 )
    goto LABEL_55;
  klass = v32[1].klass;
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
    v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v37, _8__2, Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, 0LL);
    if ( !data_5__4 )
      goto LABEL_55;
    EventTutorialEntity__OpenTutorial(data_5__4, v37, 0LL);
    v38 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_55;
    if ( v38->fields.isBusy )
    {
      v47 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v47,
        (Il2CppObject *)v38,
        Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__,
        (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
      v48 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v48, v47, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v48;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v48);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
LABEL_31:
    *p__8__2 = 0LL;
    sub_B2C2F8(p__8__2, 0LL);
    goto LABEL_32;
  }
  monitor = (System_Func_bool__o *)v32[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      monitor,
      v32,
      Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v32[1].monitor = monitor;
    sub_B2C2F8(&v32[1].monitor, monitor);
  }
  v51 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v51, monitor, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v51;
  v52 = &v2->fields.__2__current;
  sub_B2C2F8(v52, v51);
  result = 1;
  *((_DWORD *)v52 - 2) = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__11_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  bool result; // w0
  EventTutorialMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  int32_t v9; // w8

  if ( (byte_41841AE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_41841AE = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v9 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B2C434(0LL, v7);
    v8 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           Master_WarQuestSelectionMaster,
                           this->fields.args,
                           0LL);
    this->fields.__2__current = v8;
    sub_B2C2F8(&this->fields.__2__current, v8);
    v9 = 1;
    result = 1;
  }
  this->fields.__1__state = v9;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__17_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841AB & 1) == 0 )
  {
    sub_B2C35C(&EventTutorialMaster___c_TypeInfo, v1);
    byte_41841AB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c___OpenTutorialImages_b__24_0(
        EventTutorialMaster___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_41841AC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_41841AC = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, method);
  EventTutorialMaster__checkTutorial_26066132(
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
    sub_B2C434(0LL, method);
  EventTutorialMaster__checkTutorial_26066132(
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
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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