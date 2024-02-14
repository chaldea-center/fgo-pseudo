void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42150F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method);
    byte_42150F1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    165,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  WarQuestSelectionMaster_o *v17; // x25
  const MethodInfo *v18; // [xsp+8h] [xbp-48h]

  if ( (byte_42150F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    byte_42150F8 = 1;
  }
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v17 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)v17);
  if ( !v17 )
    goto LABEL_14;
  EventTutorialMaster__checkTutorial_25633520(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *checkedEntityList; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x25
  const MethodInfo *v20; // [xsp+8h] [xbp-48h]

  if ( (byte_42150F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v17);
    byte_42150F9 = 1;
  }
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_15;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    checkedEntityList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_B0D97C(checkedEntityList);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_WarQuestSelectionMaster);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  EventTutorialMaster__checkTutorial_25633520(
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

  if ( (byte_42150FA & 1) == 0 )
  {
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v2);
    byte_42150FA = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkedEntityList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoCheckTutorialLocal(
        EventTutorialMaster_o *this,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42150F5 & 1) == 0 )
  {
    sub_B0D8A4(&EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo, args);
    byte_42150F5 = 1;
  }
  v4 = sub_B0D974(EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo, args, method);
  EventTutorialMaster__CoCheckTutorialLocal_d__11___ctor(
    (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = args;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)args, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42150FB & 1) == 0 )
  {
    sub_B0D8A4(&EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo, method);
    byte_42150FB = 1;
  }
  v4 = sub_B0D974(EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo, method, v2);
  EventTutorialMaster__CoroutineCheckTutorial_d__17___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__17_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = args;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)args, v6, v7, v8, v9, v10, v11);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v15; // x7

  if ( (byte_421510A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_421510A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_42150FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v4);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_EventTutorialEntity__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_EventTutorialEntity__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__, v8);
    sub_B0D8A4(&EventTutorialMaster___c__DisplayClass21_0_TypeInfo, v9);
    byte_42150FF = 1;
  }
  v10 = sub_B0D974(EventTutorialMaster___c__DisplayClass21_0_TypeInfo, method, v2);
  EventTutorialMaster___c__DisplayClass21_0___ctor((EventTutorialMaster___c__DisplayClass21_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  *(_QWORD *)(v10 + 16) = args;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)args, v12, v13, v14, v15, v16, v17);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_EventTutorialEntity__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v10,
    Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_EventTutorialEntity__bool___ctor__);
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v22,
                                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_42150EF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_42150EF = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
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
  const MethodInfo *v9; // x4

  if ( (byte_4215108 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4215108 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  EventEntity_array *EnableEntityList; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_int__o *v10; // x20
  int max_length; // w8
  unsigned int v12; // w21
  EventEntity_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_4215107 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215107 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_13;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v8, v9);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_13;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B0D9A8(Instance);
        sub_B0D948(v15, 0LL);
      }
      v13 = EnableEntityList->m_Items[v12];
      if ( !v13 || !v10 )
        break;
      System_Collections_Generic_List_int___Add(
        v10,
        v13->fields.id,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = EnableEntityList->max_length;
      if ( (int)++v12 >= max_length )
        return v10;
    }
LABEL_13:
    sub_B0D97C(Instance);
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
  if ( (byte_4215100 & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, args);
    byte_4215100 = 1;
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
              (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_B0D97C(data);
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
  const MethodInfo *v15; // x7

  if ( (byte_42150FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_42150FD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_42150FC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_42150FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v7; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *v11; // x20
  EventTutorialMaster___c_c *v12; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__24_0; // x21
  Il2CppObject *v15; // x22
  struct EventTutorialMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4215102 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B0D8A4(&Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, v6);
    sub_B0D8A4(&EventTutorialMaster___c_TypeInfo, v7);
    byte_4215102 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MissionNotifyManager__StartPause(Instance, 0LL);
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (CommonUI_o *)Instance;
    v12 = EventTutorialMaster___c_TypeInfo;
    if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v12 = EventTutorialMaster___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__24_0 = static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
      System_Action___ctor(_9__24_0, v15, Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, 0LL);
      v16 = EventTutorialMaster___c_TypeInfo->static_fields;
      v16->__9__24_0 = _9__24_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v16->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( !v11 )
LABEL_20:
      sub_B0D97C(Instance);
    CommonUI__OpenTutorialImageDialog_17043120(v11, imageIds, -1, 0, _9__24_0, 0LL, 0LL, 0LL);
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
  const MethodInfo *v9; // x4

  if ( (byte_42150FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42150FE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_25639108(
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
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_4215103 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4215103 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  EventTutorialMaster__showTutorialWithoutCheck_25639312(
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

  if ( (byte_42150F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__, entity);
    byte_42150F0 = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4215105 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215105 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *checkedEntityList; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v47; // x8
  unsigned __int64 v48; // x27
  int v49; // w24
  EventTutorialEntity_o *v50; // x21
  _BOOL8 v51; // x0
  char v52; // w22
  int v53; // w8
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v56; // x3
  int32_t v57; // w8
  const MethodInfo *v58; // x2
  int32_t flagType; // w22
  int32_t v60; // w23
  System_Action_o *v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
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

  if ( (byte_42150F3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v23);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v24);
    sub_B0D8A4(&NetworkManager_TypeInfo, v25);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v26);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__, v27);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__, v28);
    sub_B0D8A4(&EventTutorialMaster___c__DisplayClass9_0_TypeInfo, v29);
    byte_42150F3 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  v79 = 0;
  v30 = sub_B0D974(EventTutorialMaster___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
  EventTutorialMaster___c__DisplayClass9_0___ctor((EventTutorialMaster___c__DisplayClass9_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_55;
  *(_QWORD *)(v30 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v30 + 32) = callbackAfter;
  *(_DWORD *)(v30 + 24) = eventId;
  *(_DWORD *)(v30 + 28) = openKind;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v30 + 32),
    (System_Int32_array **)callbackAfter,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
      v77 = sub_B0D9A8(checkedEntityList);
      sub_B0D948(v77, 0LL);
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
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v80 = *(System_Collections_Generic_List_Enumerator_T__o *)v78;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v80,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v51 )
          break;
        if ( !v50 )
          sub_B0D97C(v51);
        if ( !v80.fields.current )
          sub_B0D97C(v51);
        if ( v50->fields.eventId == HIDWORD(v80.fields.current[1].klass)
          && v50->fields.flagType == LODWORD(v80.fields.current[1].monitor)
          && v50->fields.num == LODWORD(v80.fields.current[1].klass) )
        {
          v52 = 1;
          goto LABEL_19;
        }
      }
      v52 = 0;
LABEL_19:
      *(_DWORD *)&v78[4 * v49 + 24] = 188;
      v49 = ++v79;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v80,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v49 )
      {
        v53 = v49 - 1;
        if ( *(_DWORD *)&v78[4 * v49 + 20] == 188 )
        {
          --v49;
          v79 = v53;
        }
      }
      if ( (v52 & 1) != 0 )
        goto LABEL_41;
    }
    if ( !v50 )
      goto LABEL_55;
    flag = v50->fields.flag;
    if ( v50->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v50, v44);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v30 + 40), v56);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_41;
    }
    v57 = v50->fields.eventId;
    if ( ((v57 & 0x80000000) != 0 || v57 == *(_DWORD *)(v30 + 24)) && v50->fields.openType == *(_DWORD *)(v30 + 28) )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialEntity__isOpenCondition(v50, *(_DWORD *)(v30 + 40), *(_DWORD *)(v30 + 44), *(_DWORD *)(v30 + 48), *(_DWORD *)(v30 + 52), v45);
      if ( flag == 2 || ((unsigned __int8)checkedEntityList & 1) != 0 )
        break;
    }
    if ( v50->fields.flag == 1 )
    {
      flagType = v50->fields.flagType;
      v60 = *(_DWORD *)(v30 + 24);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_28090592(flagType, v60, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
    v61 = *(System_Action_o **)(v30 + 64);
    if ( !v61 )
    {
      v61 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v44, v58);
      System_Action___ctor(
        v61,
        (Il2CppObject *)v30,
        Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v30 + 64) = v61;
      sub_B0D840((BattleServantConfConponent_o *)(v30 + 64), (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
    }
    EventTutorialEntity__OpenTutorial(v50, v61, v58);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_55:
    sub_B0D97C(checkedEntityList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v70 = *(System_Action_o **)(v30 + 56);
  if ( !v70 )
  {
    v70 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v68, v69);
    System_Action___ctor(
      v70,
      (Il2CppObject *)v30,
      Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v30 + 56) = v70;
    sub_B0D840((BattleServantConfConponent_o *)(v30 + 56), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v50, v70, v69);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__checkTutorial_25633520(
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
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *eventId; // x1
  const MethodInfo *v52; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v54; // x8
  unsigned __int64 v55; // x28
  int v56; // w20
  EventTutorialEntity_o *v57; // x22
  _BOOL8 v58; // x0
  char v59; // w23
  int v60; // w8
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x2
  int32_t v65; // w23
  int32_t flagType; // w24
  System_Action_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
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

  if ( (byte_42150F4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, checkEventIds);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v24);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v25);
    sub_B0D8A4(&NetworkManager_TypeInfo, v26);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v27);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__, v28);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__, v29);
    sub_B0D8A4(&EventTutorialMaster___c__DisplayClass10_0_TypeInfo, v30);
    byte_42150F4 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  v86 = 0;
  v31 = sub_B0D974(EventTutorialMaster___c__DisplayClass10_0_TypeInfo, checkEventIds, *(_QWORD *)&openKind);
  EventTutorialMaster___c__DisplayClass10_0___ctor((EventTutorialMaster___c__DisplayClass10_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_56;
  *(_QWORD *)(v31 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v31 + 24) = checkEventIds;
  v84 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v31 + 24);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v31 + 24),
    (System_Int32_array **)checkEventIds,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_QWORD *)(v31 + 40) = callbackAfter;
  *(_DWORD *)(v31 + 32) = openKind;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v31 + 40),
    (System_Int32_array **)callbackAfter,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
      v83 = sub_B0D9A8(checkedEntityList);
      sub_B0D948(v83, 0LL);
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
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v87 = *(System_Collections_Generic_List_Enumerator_T__o *)v85;
      while ( 1 )
      {
        v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v87,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v58 )
          break;
        if ( !v57 )
          sub_B0D97C(v58);
        if ( !v87.fields.current )
          sub_B0D97C(v58);
        if ( v57->fields.eventId == HIDWORD(v87.fields.current[1].klass)
          && v57->fields.flagType == LODWORD(v87.fields.current[1].monitor)
          && v57->fields.num == LODWORD(v87.fields.current[1].klass) )
        {
          v59 = 1;
          goto LABEL_19;
        }
      }
      v59 = 0;
LABEL_19:
      *(_DWORD *)&v85[4 * v56 + 24] = 188;
      v56 = ++v86;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v87,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v56 )
      {
        v60 = v56 - 1;
        if ( *(_DWORD *)&v85[4 * v56 + 20] == 188 )
        {
          --v56;
          v86 = v60;
        }
      }
      if ( (v59 & 1) != 0 )
        goto LABEL_42;
    }
    if ( !v57 )
      goto LABEL_56;
    flag = v57->fields.flag;
    if ( v57->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v57, eventId);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v31 + 48), v63);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_42;
    }
    eventId = (const MethodInfo *)(unsigned int)v57->fields.eventId;
    if ( ((unsigned int)eventId & 0x80000000) != 0 )
      goto LABEL_31;
    checkedEntityList = *v84;
    if ( !*v84 )
      goto LABEL_56;
    checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___Contains((System_Collections_Generic_List_int__o *)checkedEntityList, (int32_t)eventId, (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
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
      v65 = v57->fields.eventId;
      flagType = v57->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_28090592(flagType, v65, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
    v67 = *(System_Action_o **)(v31 + 72);
    if ( !v67 )
    {
      v67 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, eventId, v64);
      System_Action___ctor(
        v67,
        (Il2CppObject *)v31,
        Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v31 + 72) = v67;
      sub_B0D840((BattleServantConfConponent_o *)(v31 + 72), (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
    }
    EventTutorialEntity__OpenTutorial(v57, v67, v64);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_56:
    sub_B0D97C(checkedEntityList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v76 = *(System_Action_o **)(v31 + 64);
  if ( !v76 )
  {
    v76 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v74, v75);
    System_Action___ctor(
      v76,
      (Il2CppObject *)v31,
      Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v31 + 64) = v76;
    sub_B0D840((BattleServantConfConponent_o *)(v31 + 64), (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82);
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
  __int64 v16; // x1
  __int64 v17; // x2
  EventTutorialMaster_o *v18; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v20; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x19
  int max_length; // w8
  unsigned int v24; // w20
  EventTutorialEntity_o *v25; // x27
  int32_t v26; // w8
  const MethodInfo *v27; // x5
  int v28; // w28
  struct System_String_o *MasterName_k__BackingField; // x9
  __int64 v30; // x8
  char *v31; // x9
  __int64 v33; // x0

  if ( (byte_421510B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v11);
    sub_B0D8A4(&int___TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14);
    this = (EventTutorialMaster_o *)sub_B0D8A4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15);
    byte_421510B = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_B0D8BC(int___TypeInfo, openKinds->max_length);
  v18 = this;
  if ( (int)openKinds->max_length >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v20 = 0LL;
      while ( v20 < MasterName_k__BackingField_low )
      {
        *((_DWORD *)&this->fields.list + v20++) = 0;
        if ( (__int64)v20 >= (int)openKinds->max_length )
          goto LABEL_9;
      }
LABEL_27:
      v33 = sub_B0D9A8(this);
      sub_B0D948(v33, 0LL);
    }
LABEL_28:
    sub_B0D97C(this);
  }
LABEL_9:
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
        this = (EventTutorialMaster_o *)System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
                                          (WellFired_USFGOActorChangePosition_PosSetType_array *)openKinds,
                                          v25->fields.openType,
                                          (const MethodInfo_1F69B90 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v28 = (int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v25, qId, bPhase, bWave, bTurn, v27);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_28;
            if ( (unsigned int)v28 >= LODWORD(v18->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v21 )
              goto LABEL_28;
            System_Collections_Generic_List_XWeaponTrail_Element___Insert(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
              *((_DWORD *)&v18->fields.list + v28),
              (XWeaponTrail_Element_o *)v25,
              (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v18->fields._MasterName_k__BackingField;
            if ( v28 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v24 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v21;
    }
    v30 = v28;
    while ( (unsigned int)v30 < (unsigned int)MasterName_k__BackingField )
    {
      v31 = (char *)v18 + 4 * v30++;
      ++*((_DWORD *)v31 + 8);
      MasterName_k__BackingField = v18->fields._MasterName_k__BackingField;
      if ( v30 >= (int)MasterName_k__BackingField )
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x22
  _BOOL8 IsNullOrEmpty; // x0
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  int max_length; // w8
  const MethodInfo_2FC56E8 **v20; // x28
  int v21; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x23
  EventTutorialEntity_o *v23; // x24
  int32_t v24; // w8
  struct System_String_array *v25; // x8
  __int64 v26; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x19
  const MethodInfo_2FC56E8 **v28; // x23
  unsigned __int64 v29; // x28
  struct System_String_array *v30; // x8
  __int64 v32; // x0
  int32_t v33; // [xsp+Ch] [xbp-54h]

  if ( (byte_4215109 & 1) == 0 )
  {
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_15816/*"[]"*/, v12);
    sub_B0D8A4(&StringLiteral_15874/*"[{0}]"*/, v13);
    byte_4215109 = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_15874/*"[{0}]"*/, (Il2CppObject *)targetIds, 0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_38;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v22 = 0LL;
    if ( v16 )
      goto LABEL_33;
LABEL_38:
    sub_B0D97C(IsNullOrEmpty);
  }
  v20 = (const MethodInfo_2FC56E8 **)&Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  v21 = 0;
  v22 = 0LL;
  v33 = openKind;
  do
  {
    if ( v21 >= (unsigned int)max_length )
    {
LABEL_39:
      v32 = sub_B0D9A8(IsNullOrEmpty);
      sub_B0D948(v32, 0LL);
    }
    v23 = sortedEntityArray->m_Items[v21];
    if ( !v23 )
      goto LABEL_38;
    v24 = v23->fields.eventId;
    if ( ((v24 & 0x80000000) != 0 || v24 == eventId) && v23->fields.openType == openKind )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(targetIds, 0LL);
      if ( IsNullOrEmpty )
      {
        if ( !v16 )
          goto LABEL_38;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          *v20);
      }
      else
      {
        v25 = v23->fields.targetIds;
        if ( !v25 )
          goto LABEL_38;
        v26 = *(_QWORD *)&v25->max_length;
        if ( !v22 )
        {
          if ( !(_DWORD)v26
            || (IsNullOrEmpty = System_String__op_Equality(v25->m_Items[0], (System_String_o *)StringLiteral_15816/*"[]"*/, 0LL),
                v22 = 0LL,
                IsNullOrEmpty) )
          {
            v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
          }
        }
        if ( (int)v26 >= 1 )
        {
          v27 = v22;
          v28 = v20;
          v29 = 0LL;
          while ( 1 )
          {
            v30 = v23->fields.targetIds;
            if ( !v30 )
              goto LABEL_38;
            if ( v29 >= v30->max_length )
              goto LABEL_39;
            IsNullOrEmpty = System_String__op_Equality(v30->m_Items[v29], targetIds, 0LL);
            if ( IsNullOrEmpty )
              break;
            if ( (__int64)++v29 >= (int)v26 )
            {
              v20 = v28;
              goto LABEL_30;
            }
          }
          if ( !v16 )
            goto LABEL_38;
          v20 = v28;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            *v28);
LABEL_30:
          v22 = v27;
          openKind = v33;
        }
      }
    }
    max_length = sortedEntityArray->max_length;
    ++v21;
  }
  while ( v21 < max_length );
  if ( !v16 )
    goto LABEL_38;
LABEL_33:
  if ( v22 && !v16->fields._size )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      v22,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v16;
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
        sub_B0D97C(this);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
        {
          v10 = sub_B0D9A8(this);
          sub_B0D948(v10, 0LL);
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

  if ( (byte_42150F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B0D8A4(&EventTutorialEntity_TypeInfo, v15);
    byte_42150F7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                      (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_42150F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v17);
    sub_B0D8A4(&EventTutorialEntity_TypeInfo, v18);
    byte_42150F6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                      (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  EventTutorialMaster___c_c *v17; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v20; // x21
  struct EventTutorialMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  EventTutorialMaster___c_c *v31; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x19
  struct EventTutorialMaster___c_StaticFields *v33; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_1; // x20
  Il2CppObject *v35; // x21
  struct EventTutorialMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Int32_array **v44; // x0
  BattleServantConfConponent_o *v45; // x8
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x19
  struct EventTutorialMaster_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_42150F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v5);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Func_EventTutorialEntity__int___ctor__, v7);
    sub_B0D8A4(&System_Func_EventTutorialEntity__int__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_EventTutorialMaster___c__preProcess_b__7_0__, v11);
    sub_B0D8A4(&Method_EventTutorialMaster___c__preProcess_b__7_1__, v12);
    sub_B0D8A4(&EventTutorialMaster___c_TypeInfo, v13);
    byte_42150F2 = 1;
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v17 = EventTutorialMaster___c_TypeInfo;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v17 = EventTutorialMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_EventTutorialEntity__int__TypeInfo,
                                                                                v14,
                                                                                v15);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v20,
      Method_EventTutorialMaster___c__preProcess_b__7_0__,
      (const MethodInfo_2619564 *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v21 = EventTutorialMaster___c_TypeInfo->static_fields;
    v21->__9__7_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v16,
          (System_Func_TSource__TKey__o *)_9__7_0,
          (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v31 = EventTutorialMaster___c_TypeInfo;
  v32 = v28;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v31 = EventTutorialMaster___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v33->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_EventTutorialEntity__int__TypeInfo,
                                                                                v29,
                                                                                v30);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_1,
      v35,
      Method_EventTutorialMaster___c__preProcess_b__7_1__,
      (const MethodInfo_2619564 *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v36 = EventTutorialMaster___c_TypeInfo->static_fields;
    v36->__9__7_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v36->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v44 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v43,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  v45 = (BattleServantConfConponent_o *)EventTutorialMaster_TypeInfo->static_fields;
  v45->klass = (BattleServantConfConponent_c *)v44;
  sub_B0D840(v45, v44, v46, v47, v48, v49, v50, v51);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  v52,
                                                                                                  v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v55 = EventTutorialMaster_TypeInfo->static_fields;
  v55->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v54;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v55->checkedEntityList,
    (System_Int32_array **)v54,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
  const MethodInfo *v14; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v17; // w25
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x1
  int32_t missionConditionDetailId; // w8
  __int64 v20; // x0

  if ( (byte_4215101 & 1) == 0 )
  {
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    byte_4215101 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&openKind);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_15;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v20 = sub_B0D9A8(v13);
        sub_B0D948(v20, 0LL);
      }
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)sortedEntityArray->m_Items[v17];
      if ( !v18 )
        break;
      missionConditionDetailId = v18->fields.missionConditionDetailId;
      if ( ((missionConditionDetailId & 0x80000000) != 0 || missionConditionDetailId == eventId)
        && v18->fields.eventId == openKind )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B0D97C(v13);
  }
LABEL_14:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v12,
    0,
    callback,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_25639312(
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
  const MethodInfo *v34; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v37; // w23
  EventTutorialEntity_o *v38; // x21
  int32_t v39; // w8
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  System_Action_o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0

  if ( (byte_4215104 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v17);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__, v18);
    sub_B0D8A4(&EventTutorialMaster___c__DisplayClass26_0_TypeInfo, v19);
    byte_4215104 = 1;
  }
  v20 = sub_B0D974(EventTutorialMaster___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&openKind);
  EventTutorialMaster___c__DisplayClass26_0___ctor((EventTutorialMaster___c__DisplayClass26_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v20 + 32) = callbackAfter;
  *(_DWORD *)(v20 + 24) = eventId;
  *(_DWORD *)(v20 + 28) = openKind;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v20 + 32),
    (System_Int32_array **)callbackAfter,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *(_DWORD *)(v20 + 40) = qId;
  *(_DWORD *)(v20 + 44) = bPhase;
  *(_DWORD *)(v20 + 48) = bWave;
  *(_DWORD *)(v20 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_B0D97C(isEnableCondition);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v20 + 32), 0LL);
  }
  else
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= max_length )
      {
        v49 = sub_B0D9A8(isEnableCondition);
        sub_B0D948(v49, 0LL);
      }
      v38 = sortedEntityArray->m_Items[v37];
      if ( !v38 )
        goto LABEL_18;
      v39 = v38->fields.eventId;
      if ( ((v39 & 0x80000000) != 0 || v39 == *(_DWORD *)(v20 + 24)) && v38->fields.openType == *(_DWORD *)(v20 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v38,
                              *(_DWORD *)(v20 + 40),
                              *(_DWORD *)(v20 + 44),
                              *(_DWORD *)(v20 + 48),
                              *(_DWORD *)(v20 + 52),
                              v34);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_14;
    }
    v42 = *(System_Action_o **)(v20 + 56);
    if ( !v42 )
    {
      v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v20,
        Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v20 + 56) = v42;
      sub_B0D840((BattleServantConfConponent_o *)(v20 + 56), (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
    }
    EventTutorialEntity__OpenTutorial(v38, v42, v41);
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
  __int64 v13; // x20
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x19
  __int64 v36; // x21
  int v37; // w8
  EventTutorialEntity_o *v38; // x19
  System_Action_o *v39; // x21
  const MethodInfo *v40; // x2

  if ( (byte_4215106 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, tutoList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__, v11);
    sub_B0D8A4(&EventTutorialMaster___c__DisplayClass28_0_TypeInfo, v12);
    byte_4215106 = 1;
  }
  v13 = sub_B0D974(EventTutorialMaster___c__DisplayClass28_0_TypeInfo, tutoList, *(_QWORD *)&index);
  EventTutorialMaster___c__DisplayClass28_0___ctor((EventTutorialMaster___c__DisplayClass28_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 24) = tutoList;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)tutoList, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v13 + 40) = callback;
  *(_DWORD *)(v13 + 32) = index;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  v35 = *(_QWORD *)(v13 + 24);
  if ( !v35 )
    goto LABEL_11;
  v36 = *(int *)(v13 + 32);
  v37 = *(_DWORD *)(v35 + 24);
  if ( (int)v36 < v37 )
  {
    if ( v37 <= (unsigned int)v36 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v38 = *(EventTutorialEntity_o **)(*(_QWORD *)(v35 + 16) + 8 * v36 + 32);
    v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v13,
      Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( v38 )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag(v38, v39, v40);
      return;
    }
LABEL_11:
    sub_B0D97C(v14);
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
  __int64 v7; // x0

  if ( (byte_4210F2B & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_4210F2B = 1;
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
                     (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        this->fields.eventIds = eventIds;
        sub_B0D840(&this->fields.eventIds, eventIds);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_B0D8BC(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (struct System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
        {
          v7 = sub_B0D9A8(OpenEventIds);
          sub_B0D948(v7, 0LL);
        }
        LODWORD(OpenEventIds->fields._syncRoot) = this->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_B0D97C(OpenEventIds);
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
  __int64 v2; // x2
  EventTutorialMaster__CoCheckTutorialLocal_d__11_o *v3; // x19
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
  __int64 v15; // x1
  int32_t _1__state; // w8
  Il2CppObject *v17; // x21
  struct EventTutorialMaster___c__DisplayClass11_0_o **p__8__1; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  struct EventTutorialEntity_array **p__7__wrap1; // x20
  int v23; // w8
  struct EventTutorialMaster___c__DisplayClass11_1_o **p__8__2; // x21
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialEntity_o *v26; // x1
  struct EventTutorialMaster___c__DisplayClass11_0_o *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x22
  struct EventTutorialMaster___c__DisplayClass11_0_o *v31; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v32; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v33; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v34; // x8
  Il2CppObject *v35; // x20
  Il2CppClass *klass; // x8
  _BYTE *data; // x8
  EventTutorialEntity_o *data_5__4; // x22
  Il2CppObject *_8__2; // x24
  System_Action_o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  struct EventTutorialMaster___c__DisplayClass11_1_o *v43; // x22
  EventTutorialEntity_o *v44; // x8
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *v47; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass11_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v50; // x8
  bool result; // w0
  System_Func_bool__o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_WaitWhile_o *v55; // x21
  Il2CppObject **p__2__current; // x19
  System_Func_bool__o *monitor; // x21
  UnityEngine_WaitWhile_o *v58; // x20
  Il2CppObject **v59; // x19
  __int64 v60; // x0

  v3 = this;
  if ( (byte_4210F29 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v5);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v6);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v9);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__, v10);
    sub_B0D8A4(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo, v11);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, v12);
    sub_B0D8A4(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__, v13);
    sub_B0D8A4(&EventTutorialMaster___c__DisplayClass11_1_TypeInfo, v14);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v15);
    byte_4210F29 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__2 = &v3->fields.__8__2;
    p_data_5__4 = &v3->fields._data_5__4;
    v3->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state == 1 )
  {
    p__8__2 = &v3->fields.__8__2;
    v3->fields.__1__state = -1;
    goto LABEL_27;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v17 = (Il2CppObject *)sub_B0D974(EventTutorialMaster___c__DisplayClass11_0_TypeInfo, method, v2);
  System_Object___ctor(v17, 0LL);
  p__8__1 = &v3->fields.__8__1;
  v3->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass11_0_o *)v17;
  sub_B0D840(&v3->fields.__8__1, v17);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_55;
  args = v3->fields.args;
  *(_QWORD *)&this->fields.__1__state = args;
  sub_B0D840(&this->fields, args);
  if ( !*p__8__1 )
    goto LABEL_55;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = static_fields->sortedEntityArray;
  v3->fields.__7__wrap1 = static_fields->sortedEntityArray;
  p__7__wrap1 = &v3->fields.__7__wrap1;
  sub_B0D840(&v3->fields.__7__wrap1, sortedEntityArray);
  v23 = 0;
  for ( v3->fields.__7__wrap2 = 0; ; v3->fields.__7__wrap2 = v23 )
  {
    v47 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      goto LABEL_55;
    max_length = v47->max_length;
    if ( v23 >= max_length )
    {
      v3->fields.__7__wrap1 = 0LL;
      sub_B0D840(p__7__wrap1, 0LL);
      _8__1 = v3->fields.__8__1;
      if ( _8__1 )
      {
        v50 = _8__1->fields.args;
        if ( v50 )
        {
          ActionExtensions__Call(v50->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_55:
      sub_B0D97C(this);
    }
    if ( v23 >= (unsigned int)max_length )
    {
      v60 = sub_B0D9A8(this);
      sub_B0D948(v60, 0LL);
    }
    v26 = v47->m_Items[v23];
    v3->fields._data_5__4 = v26;
    p_data_5__4 = &v3->fields._data_5__4;
    sub_B0D840(&v3->fields._data_5__4, v26);
    v27 = v3->fields.__8__1;
    if ( !v27 )
      goto LABEL_55;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialMaster__IsOpenCondition(
                                                                  *p_data_5__4,
                                                                  v27->fields.args,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v44 = *p_data_5__4;
    if ( !*p_data_5__4 )
      goto LABEL_55;
    if ( v44->fields.flag == 1 )
    {
      eventId = v44->fields.eventId;
      flagType = v44->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( !TutorialFlag__Get_28090592(flagType, eventId, 0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      0LL,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*p_data_5__4 || !this )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*p_data_5__4)->fields.flagType,
          (*p_data_5__4)->fields.eventId,
          0LL);
      }
    }
    v3->fields._data_5__4 = 0LL;
    sub_B0D840(p_data_5__4, 0LL);
    p__7__wrap1 = &v3->fields.__7__wrap1;
    v23 = v3->fields.__7__wrap2 + 1;
  }
  v30 = (Il2CppObject *)sub_B0D974(EventTutorialMaster___c__DisplayClass11_1_TypeInfo, v28, v29);
  System_Object___ctor(v30, 0LL);
  v3->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass11_1_o *)v30;
  p__8__2 = &v3->fields.__8__2;
  sub_B0D840(&v3->fields.__8__2, v30);
  v31 = v3->fields.__8__1;
  if ( !v31 )
    goto LABEL_55;
  v32 = v31->fields.args;
  if ( !v32 )
    goto LABEL_55;
  if ( !v32->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialEntity__HasBeforeAction(
                                                                (EventTutorialEntity_o *)this,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v33 = v3->fields.__8__1;
  if ( !v33 )
    goto LABEL_55;
  v34 = v33->fields.args;
  if ( !v34 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v34->fields.adapter;
  if ( !this )
    goto LABEL_55;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v3->fields._data_5__4, 0LL);
  v35 = (Il2CppObject *)v3->fields.__8__1;
  if ( !v35 )
    goto LABEL_55;
  klass = v35[1].klass;
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
    p_data_5__4 = &v3->fields._data_5__4;
    data_5__4 = v3->fields._data_5__4;
    _8__2 = (Il2CppObject *)v3->fields.__8__2;
    v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v40, _8__2, Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, 0LL);
    if ( !data_5__4 )
      goto LABEL_55;
    EventTutorialEntity__OpenTutorial(data_5__4, v40, 0LL);
    v43 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_55;
    if ( v43->fields.isBusy )
    {
      v52 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v41, v42);
      System_Func_bool____ctor(
        v52,
        (Il2CppObject *)v43,
        Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__,
        (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
      v55 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v53, v54);
      UnityEngine_WaitWhile___ctor(v55, v52, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v55;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v55);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
LABEL_31:
    *p__8__2 = 0LL;
    sub_B0D840(p__8__2, 0LL);
    goto LABEL_32;
  }
  monitor = (System_Func_bool__o *)v35[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, method, v2);
    System_Func_bool____ctor(
      monitor,
      v35,
      Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__,
      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
    v35[1].monitor = monitor;
    sub_B0D840(&v35[1].monitor, monitor);
  }
  v58 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, method, v2);
  UnityEngine_WaitWhile___ctor(v58, monitor, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v58;
  v59 = &v3->fields.__2__current;
  sub_B0D840(v59, v58);
  result = 1;
  *((_DWORD *)v59 - 2) = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__11_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v7; // x0
  int32_t v8; // w8

  if ( (byte_4210F2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4210F2A = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v8 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    v7 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           Master_WarQuestSelectionMaster,
                           this->fields.args,
                           0LL);
    this->fields.__2__current = v7;
    sub_B0D840(&this->fields.__2__current, v7);
    v8 = 1;
    result = 1;
  }
  this->fields.__1__state = v8;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__17_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4210F27 & 1) == 0 )
  {
    sub_B0D8A4(&EventTutorialMaster___c_TypeInfo, v1);
    byte_4210F27 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventTutorialMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4210F28 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_4210F28 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  MissionNotifyManager__EndPause(v3, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  EventTutorialMaster__checkTutorial_25633520(
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
    sub_B0D97C(0LL);
  EventTutorialMaster__checkTutorial_25633520(
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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