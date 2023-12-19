void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9C04 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, method);
    byte_40F9C04 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    165,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-48h]

  if ( (byte_40F9C0B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    byte_40F9C0B = 1;
  }
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_B170D4();
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v17 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  OpenEventIds = EventTutorialMaster__GetOpenEventIds((const MethodInfo *)v17);
  if ( !v17 )
    goto LABEL_14;
  EventTutorialMaster__checkTutorial_24588768(
    (EventTutorialMaster_o *)v17,
    OpenEventIds,
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
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x0
  EventTutorialMaster_o *Master_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v20; // x25
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  const MethodInfo *v22; // [xsp+8h] [xbp-48h]

  if ( (byte_40F9C0C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v17);
    byte_40F9C0C = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_15;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkedEntityList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        1,
        v22);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v20 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  OpenEventIds = EventTutorialMaster__GetOpenEventIds((const MethodInfo *)v20);
  if ( !v20 )
    goto LABEL_15;
  EventTutorialMaster__checkTutorial_24588768(
    (EventTutorialMaster_o *)v20,
    OpenEventIds,
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
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x0

  if ( (byte_40F9C0D & 1) == 0 )
  {
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v2);
    byte_40F9C0D = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkedEntityList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoCheckTutorialLocal(
        EventTutorialMaster_o *this,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9C08 & 1) == 0 )
  {
    sub_B16FFC(&EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo, args);
    byte_40F9C08 = 1;
  }
  v6 = sub_B170CC(EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo, args, method, v3, v4);
  EventTutorialMaster__CoCheckTutorialLocal_d__11___ctor(
    (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = args;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)args, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9C0E & 1) == 0 )
  {
    sub_B16FFC(&EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo, method);
    byte_40F9C0E = 1;
  }
  v6 = sub_B170CC(EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo, method, v2, v3, v4);
  EventTutorialMaster__CoroutineCheckTutorial_d__17___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__17_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = args;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)args, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  WebViewManager_o *Instance; // x0
  EventTutorialMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x7

  if ( (byte_40F9C1D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKinds);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F9C1D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventTutorialMaster__getAvailableEventTutorialEntitys(
           MasterData_WarQuestSelectionMaster,
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_40F9C12 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v6);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v7);
    sub_B16FFC(&Method_System_Func_EventTutorialEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_EventTutorialEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__, v10);
    sub_B16FFC(&EventTutorialMaster___c__DisplayClass21_0_TypeInfo, v11);
    byte_40F9C12 = 1;
  }
  v12 = sub_B170CC(EventTutorialMaster___c__DisplayClass21_0_TypeInfo, method, v2, v3, v4);
  EventTutorialMaster___c__DisplayClass21_0___ctor((EventTutorialMaster___c__DisplayClass21_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = args;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)args, v13, v14, v15, v16, v17, v18);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventTutorialEntity__bool__TypeInfo,
                                                                             v20,
                                                                             v21,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v12,
    Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventTutorialEntity__bool___ctor__);
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v25,
                                        (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_40F9C02 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40F9C02 = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  EventTutorialMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x4

  if ( (byte_40F9C1B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9C1B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventTutorialMaster__getEventTutorialEntity(
           MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_array *EnableEntityList; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int max_length; // w8
  unsigned int v18; // w21
  EventEntity_o *v19; // x8

  if ( (byte_40F9C1A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9C1A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  EnableEntityList = EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 0, 0, 0LL);
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v9,
                                                    v10,
                                                    v11,
                                                    v12);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_13;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      v19 = EnableEntityList->m_Items[v18];
      if ( !v19 || !v13 )
        break;
      System_Collections_Generic_List_int___Add(
        v13,
        v19->fields.id,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = EnableEntityList->max_length;
      if ( (int)++v18 >= max_length )
        return v13;
    }
LABEL_13:
    sub_B170D4();
  }
  return v13;
}


bool __fastcall EventTutorialMaster__IsOpenCondition(
        EventTutorialEntity_o *data,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  System_Collections_Generic_IEnumerable_TSource__o *EventIds; // x0

  if ( (byte_40F9C13 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, args);
    byte_40F9C13 = 1;
  }
  if ( !data )
    goto LABEL_12;
  if ( (data->fields.eventId & 0x80000000) == 0 )
  {
    if ( args )
    {
      EventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_EventTutorialArgs__get_EventIds(
                                                                        args,
                                                                        0LL);
      if ( !System_Linq_Enumerable__Contains_int_(
              EventIds,
              data->fields.eventId,
              (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !args )
    goto LABEL_12;
LABEL_9:
  if ( data->fields.openType == args->fields.openKind )
    return EventTutorialEntity__isOpenCondition(
             data,
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
  WebViewManager_o *Instance; // x0
  EventTutorialMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x7

  if ( (byte_40F9C10 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F9C10 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventTutorialMaster__isTutorialAvailable(
           MasterData_WarQuestSelectionMaster,
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
  WebViewManager_o *Instance; // x0
  EventTutorialMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_40F9C0F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F9C0F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventTutorialMaster__isTutorialDataExists(
           MasterData_WarQuestSelectionMaster,
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
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x20
  EventTutorialMaster___c_c *v14; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__24_0; // x21
  Il2CppObject *v17; // x22
  struct EventTutorialMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F9C15 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B16FFC(&Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, v6);
    sub_B16FFC(&EventTutorialMaster___c_TypeInfo, v7);
    byte_40F9C15 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v8 )
      goto LABEL_20;
    MissionNotifyManager__StartPause(v8, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = EventTutorialMaster___c_TypeInfo;
    if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v14 = EventTutorialMaster___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__24_0 = static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
      System_Action___ctor(_9__24_0, v17, Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, 0LL);
      v18 = EventTutorialMaster___c_TypeInfo->static_fields;
      v18->__9__24_0 = _9__24_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v18->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    if ( !Instance )
LABEL_20:
      sub_B170D4();
    CommonUI__OpenTutorialImageDialog_18263664(Instance, imageIds, -1, 0, _9__24_0, 0LL, 0LL, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventTutorialMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x4

  if ( (byte_40F9C11 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9C11 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EventTutorialMaster__showTutorialWithoutCheck(MasterData_WarQuestSelectionMaster, eventId, openKind, callback, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_24594356(
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
  WebViewManager_o *Instance; // x0
  EventTutorialMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_40F9C16 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialMaster___, *(_QWORD *)&openKind);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F9C16 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EventTutorialMaster__showTutorialWithoutCheck_24594560(
    MasterData_WarQuestSelectionMaster,
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

  if ( (byte_40F9C03 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__, entity);
    byte_40F9C03 = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  EventTutorialMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x4

  if ( (byte_40F9C18 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialMaster___, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F9C18 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  EventTutorialMaster__tutorialChainWithoutCheck(MasterData_WarQuestSelectionMaster, tutoList, 0, callback, v8);
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  _BOOL8 isTargetIdExistFromArray; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v48; // x8
  unsigned __int64 v49; // x27
  int v50; // w24
  EventTutorialEntity_o *v51; // x21
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x0
  char v53; // w22
  int v54; // w8
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v57; // x3
  int32_t v58; // w8
  __int64 v59; // x3
  __int64 v60; // x4
  int32_t flagType; // w22
  int32_t v62; // w23
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Action_o *v64; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct System_Collections_Generic_List_EventTutorialEntity__o *v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Action_o *v76; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  _BYTE v83[32]; // [xsp+8h] [xbp-98h] BYREF
  int v84; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F9C06 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v23);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v24);
    sub_B16FFC(&NetworkManager_TypeInfo, v25);
    sub_B16FFC(&TutorialFlag_TypeInfo, v26);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__, v27);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__, v28);
    sub_B16FFC(&EventTutorialMaster___c__DisplayClass9_0_TypeInfo, v29);
    byte_40F9C06 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v84 = 0;
  v30 = sub_B170CC(
          EventTutorialMaster___c__DisplayClass9_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&openKind,
          callbackAfter,
          *(_QWORD *)&qId);
  EventTutorialMaster___c__DisplayClass9_0___ctor((EventTutorialMaster___c__DisplayClass9_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_55;
  *(_QWORD *)(v30 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v30 + 32) = callbackAfter;
  *(_DWORD *)(v30 + 24) = eventId;
  *(_DWORD *)(v30 + 28) = openKind;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v30 + 32),
    (System_Int32_array **)callbackAfter,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_DWORD *)(v30 + 40) = qId;
  *(_DWORD *)(v30 + 44) = bPhase;
  *(_DWORD *)(v30 + 48) = bWave;
  *(_DWORD *)(v30 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v48 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v48 < 1 )
  {
LABEL_45:
    ActionExtensions__Call(*(System_Action_o **)(v30 + 32), 0LL);
    return;
  }
  v49 = 0LL;
  v50 = 0;
  while ( 1 )
  {
    if ( v49 >= (unsigned int)v48 )
    {
      sub_B17100(isTargetIdExistFromArray, v44, v45);
      sub_B170A0();
    }
    v51 = sortedEntityArray->m_Items[v49];
    if ( notSave )
    {
      checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v83,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)checkedEntityList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v85 = *(System_Collections_Generic_List_Enumerator_T__o *)v83;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v85,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__) )
      {
        if ( !v51 )
          sub_B170D4();
        if ( !v85.fields.current )
          sub_B170D4();
        if ( v51->fields.eventId == HIDWORD(v85.fields.current[1].klass)
          && v51->fields.flagType == LODWORD(v85.fields.current[1].monitor)
          && v51->fields.num == LODWORD(v85.fields.current[1].klass) )
        {
          v53 = 1;
          goto LABEL_19;
        }
      }
      v53 = 0;
LABEL_19:
      *(_DWORD *)&v83[4 * v50 + 24] = 188;
      v50 = ++v84;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v85,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v50 )
      {
        v54 = v50 - 1;
        if ( *(_DWORD *)&v83[4 * v50 + 20] == 188 )
        {
          --v50;
          v84 = v54;
        }
      }
      if ( (v53 & 1) != 0 )
        goto LABEL_41;
    }
    if ( !v51 )
      goto LABEL_55;
    flag = v51->fields.flag;
    if ( v51->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v51, v44);
      isTargetIdExistFromArray = EventTutorialMaster__isTargetIdExistFromArray(
                                   Targets,
                                   (System_Int32_array_array *)Targets,
                                   *(_DWORD *)(v30 + 40),
                                   v57);
      if ( !isTargetIdExistFromArray )
        goto LABEL_41;
    }
    v58 = v51->fields.eventId;
    if ( ((v58 & 0x80000000) != 0 || v58 == *(_DWORD *)(v30 + 24)) && v51->fields.openType == *(_DWORD *)(v30 + 28) )
    {
      isTargetIdExistFromArray = EventTutorialEntity__isOpenCondition(
                                   v51,
                                   *(_DWORD *)(v30 + 40),
                                   *(_DWORD *)(v30 + 44),
                                   *(_DWORD *)(v30 + 48),
                                   *(_DWORD *)(v30 + 52),
                                   v46);
      if ( flag == 2 || isTargetIdExistFromArray )
        break;
    }
    if ( v51->fields.flag == 1 )
    {
      flagType = v51->fields.flagType;
      v62 = *(_DWORD *)(v30 + 24);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      isTargetIdExistFromArray = TutorialFlag__Get_28025448(flagType, v62, 0LL);
      if ( !isTargetIdExistFromArray )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           0LL,
                                                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !Request_WarBoardWallAttackRequest )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          Request_WarBoardWallAttackRequest,
          v51->fields.flagType,
          *(_DWORD *)(v30 + 24),
          0LL);
      }
    }
LABEL_41:
    LODWORD(v48) = sortedEntityArray->max_length;
    if ( (__int64)++v49 >= (int)v48 )
      goto LABEL_45;
  }
  if ( flag != 2 && !notSave )
  {
    v64 = *(System_Action_o **)(v30 + 64);
    if ( !v64 )
    {
      v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v59, v60);
      System_Action___ctor(
        v64,
        (Il2CppObject *)v30,
        Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v30 + 64) = v64;
      sub_B16F98((BattleServantConfConponent_o *)(v30 + 64), (System_Int32_array **)v64, v65, v66, v67, v68, v69, v70);
    }
    EventTutorialEntity__OpenTutorial(v51, v64, v45);
    return;
  }
  v71 = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !v71 )
LABEL_55:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v71,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v76 = *(System_Action_o **)(v30 + 56);
  if ( !v76 )
  {
    v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
    System_Action___ctor(
      v76,
      (Il2CppObject *)v30,
      Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v30 + 56) = v76;
    sub_B16F98((BattleServantConfConponent_o *)(v30 + 56), (System_Int32_array **)v76, v77, v78, v79, v80, v81, v82);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v51, v76, v73);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__checkTutorial_24588768(
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
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  _BOOL8 isTargetIdExistFromArray; // x0
  const MethodInfo *eventId; // x1
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v55; // x8
  unsigned __int64 v56; // x28
  int v57; // w20
  EventTutorialEntity_o *v58; // x22
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x0
  char v60; // w23
  int v61; // w8
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v64; // x3
  __int64 v65; // x3
  __int64 v66; // x4
  int32_t v67; // w23
  int32_t flagType; // w24
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Action_o *v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct System_Collections_Generic_List_EventTutorialEntity__o *v77; // x0
  __int64 v78; // x1
  const MethodInfo *v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Action_o *v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_List_int__o **v89; // [xsp+0h] [xbp-A0h]
  _BYTE v90[32]; // [xsp+8h] [xbp-98h] BYREF
  int v91; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F9C07 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, checkEventIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v20);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v24);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v25);
    sub_B16FFC(&NetworkManager_TypeInfo, v26);
    sub_B16FFC(&TutorialFlag_TypeInfo, v27);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__, v28);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__, v29);
    sub_B16FFC(&EventTutorialMaster___c__DisplayClass10_0_TypeInfo, v30);
    byte_40F9C07 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  v91 = 0;
  v31 = sub_B170CC(
          EventTutorialMaster___c__DisplayClass10_0_TypeInfo,
          checkEventIds,
          *(_QWORD *)&openKind,
          callbackAfter,
          *(_QWORD *)&qId);
  EventTutorialMaster___c__DisplayClass10_0___ctor((EventTutorialMaster___c__DisplayClass10_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_56;
  *(_QWORD *)(v31 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v31 + 24) = checkEventIds;
  v89 = (System_Collections_Generic_List_int__o **)(v31 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v31 + 24),
    (System_Int32_array **)checkEventIds,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  *(_QWORD *)(v31 + 40) = callbackAfter;
  *(_DWORD *)(v31 + 32) = openKind;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v31 + 40),
    (System_Int32_array **)callbackAfter,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  *(_DWORD *)(v31 + 48) = qId;
  *(_DWORD *)(v31 + 52) = bPhase;
  *(_DWORD *)(v31 + 56) = bWave;
  *(_DWORD *)(v31 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_56;
  v55 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v55 < 1 )
  {
LABEL_46:
    ActionExtensions__Call(*(System_Action_o **)(v31 + 40), 0LL);
    return;
  }
  v56 = 0LL;
  v57 = 0;
  while ( 1 )
  {
    if ( v56 >= (unsigned int)v55 )
    {
      sub_B17100(isTargetIdExistFromArray, eventId, v52);
      sub_B170A0();
    }
    v58 = sortedEntityArray->m_Items[v56];
    if ( notSave )
    {
      checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v90,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)checkedEntityList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v92 = *(System_Collections_Generic_List_Enumerator_T__o *)v90;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v92,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__) )
      {
        if ( !v58 )
          sub_B170D4();
        if ( !v92.fields.current )
          sub_B170D4();
        if ( v58->fields.eventId == HIDWORD(v92.fields.current[1].klass)
          && v58->fields.flagType == LODWORD(v92.fields.current[1].monitor)
          && v58->fields.num == LODWORD(v92.fields.current[1].klass) )
        {
          v60 = 1;
          goto LABEL_19;
        }
      }
      v60 = 0;
LABEL_19:
      *(_DWORD *)&v90[4 * v57 + 24] = 188;
      v57 = ++v91;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v92,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v57 )
      {
        v61 = v57 - 1;
        if ( *(_DWORD *)&v90[4 * v57 + 20] == 188 )
        {
          --v57;
          v91 = v61;
        }
      }
      if ( (v60 & 1) != 0 )
        goto LABEL_42;
    }
    if ( !v58 )
      goto LABEL_56;
    flag = v58->fields.flag;
    if ( v58->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v58, eventId);
      isTargetIdExistFromArray = EventTutorialMaster__isTargetIdExistFromArray(
                                   Targets,
                                   (System_Int32_array_array *)Targets,
                                   *(_DWORD *)(v31 + 48),
                                   v64);
      if ( !isTargetIdExistFromArray )
        goto LABEL_42;
    }
    eventId = (const MethodInfo *)(unsigned int)v58->fields.eventId;
    if ( ((unsigned int)eventId & 0x80000000) != 0 )
      goto LABEL_31;
    if ( !*v89 )
      goto LABEL_56;
    isTargetIdExistFromArray = System_Collections_Generic_List_int___Contains(
                                 *v89,
                                 (int32_t)eventId,
                                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( isTargetIdExistFromArray )
    {
LABEL_31:
      if ( v58->fields.openType == *(_DWORD *)(v31 + 32) )
      {
        isTargetIdExistFromArray = EventTutorialEntity__isOpenCondition(
                                     v58,
                                     *(_DWORD *)(v31 + 48),
                                     *(_DWORD *)(v31 + 52),
                                     *(_DWORD *)(v31 + 56),
                                     *(_DWORD *)(v31 + 60),
                                     v53);
        if ( flag == 2 || isTargetIdExistFromArray )
          break;
      }
    }
    if ( v58->fields.flag == 1 )
    {
      v67 = v58->fields.eventId;
      flagType = v58->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      isTargetIdExistFromArray = TutorialFlag__Get_28025448(flagType, v67, 0LL);
      if ( !isTargetIdExistFromArray )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           0LL,
                                                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !Request_WarBoardWallAttackRequest )
          goto LABEL_56;
        TutorialEventSetRequest__beginRequest(
          Request_WarBoardWallAttackRequest,
          v58->fields.flagType,
          v58->fields.eventId,
          0LL);
      }
    }
LABEL_42:
    LODWORD(v55) = sortedEntityArray->max_length;
    if ( (__int64)++v56 >= (int)v55 )
      goto LABEL_46;
  }
  if ( flag != 2 && !notSave )
  {
    v70 = *(System_Action_o **)(v31 + 72);
    if ( !v70 )
    {
      v70 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, eventId, v52, v65, v66);
      System_Action___ctor(
        v70,
        (Il2CppObject *)v31,
        Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v31 + 72) = v70;
      sub_B16F98((BattleServantConfConponent_o *)(v31 + 72), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
    }
    EventTutorialEntity__OpenTutorial(v58, v70, v52);
    return;
  }
  v77 = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !v77 )
LABEL_56:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v77,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v82 = *(System_Action_o **)(v31 + 64);
  if ( !v82 )
  {
    v82 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v78, v79, v80, v81);
    System_Action___ctor(
      v82,
      (Il2CppObject *)v31,
      Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v31 + 64) = v82;
    sub_B16F98((BattleServantConfConponent_o *)(v31 + 64), (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v58, v82, v79);
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
  __int64 isOpenCondition; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x25
  unsigned __int64 v22; // x9
  unsigned __int64 v23; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x19
  int max_length; // w8
  unsigned int v27; // w20
  EventTutorialEntity_o *v28; // x27
  int32_t v29; // w8
  const MethodInfo *v30; // x5
  int v31; // w28
  __int64 v32; // x9
  __int64 v33; // x8
  __int64 v34; // x9

  if ( (byte_40F9C1E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___, *(_QWORD *)&eventId);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15);
    byte_40F9C1E = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  isOpenCondition = sub_B17014(int___TypeInfo, openKinds->max_length, openKinds);
  v21 = isOpenCondition;
  if ( (int)openKinds->max_length >= 1 )
  {
    if ( isOpenCondition )
    {
      v22 = *(unsigned int *)(isOpenCondition + 24);
      v23 = 0LL;
      while ( v23 < v22 )
      {
        *(_DWORD *)(isOpenCondition + 32 + 4 * v23++) = 0;
        if ( (__int64)v23 >= (int)openKinds->max_length )
          goto LABEL_9;
      }
LABEL_27:
      sub_B17100(isOpenCondition, v17, v18);
      sub_B170A0();
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_9:
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        goto LABEL_27;
      v28 = sortedEntityArray->m_Items[v27];
      if ( !v28 )
        goto LABEL_28;
      v29 = v28->fields.eventId;
      if ( (v29 & 0x80000000) != 0 || v29 == eventId )
      {
        isOpenCondition = System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
                            (WellFired_USFGOActorChangePosition_PosSetType_array *)openKinds,
                            v28->fields.openType,
                            (const MethodInfo_20455D0 *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( (isOpenCondition & 0x80000000) == 0 )
        {
          v31 = isOpenCondition;
          isOpenCondition = EventTutorialEntity__isOpenCondition(v28, qId, bPhase, bWave, bTurn, v30);
          if ( (isOpenCondition & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_28;
            if ( (unsigned int)v31 >= *(_DWORD *)(v21 + 24) )
              goto LABEL_27;
            if ( !v24 )
              goto LABEL_28;
            System_Collections_Generic_List_XWeaponTrail_Element___Insert(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v24,
              *(_DWORD *)(v21 + 4LL * v31 + 32),
              (XWeaponTrail_Element_o *)v28,
              (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            v32 = *(_QWORD *)(v21 + 24);
            if ( v31 < (int)v32 )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v27 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v24;
    }
    v33 = v31;
    while ( (unsigned int)v33 < (unsigned int)v32 )
    {
      v34 = v21 + 4 * v33++;
      ++*(_DWORD *)(v34 + 32);
      v32 = *(_QWORD *)(v21 + 24);
      if ( v33 >= (int)v32 )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v24;
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  int max_length; // w8
  const MethodInfo_2F25CD8 **v24; // x28
  int v25; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x23
  EventTutorialEntity_o *v27; // x24
  int32_t v28; // w8
  struct System_String_array *v29; // x8
  __int64 v30; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x19
  const MethodInfo_2F25CD8 **v32; // x23
  unsigned __int64 v33; // x28
  struct System_String_array *v34; // x8
  int32_t v36; // [xsp+Ch] [xbp-54h]

  if ( (byte_40F9C1C & 1) == 0 )
  {
    sub_B16FFC(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15706, v12);
    sub_B16FFC(&StringLiteral_15764, v13);
    byte_40F9C1C = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0LL) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_15764, (Il2CppObject *)targetIds, 0LL);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_38;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v26 = 0LL;
    if ( v18 )
      goto LABEL_33;
LABEL_38:
    sub_B170D4();
  }
  v24 = (const MethodInfo_2F25CD8 **)&Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  v25 = 0;
  v26 = 0LL;
  v36 = openKind;
  do
  {
    if ( v25 >= (unsigned int)max_length )
    {
LABEL_39:
      sub_B17100(IsNullOrEmpty, v20, v21);
      sub_B170A0();
    }
    v27 = sortedEntityArray->m_Items[v25];
    if ( !v27 )
      goto LABEL_38;
    v28 = v27->fields.eventId;
    if ( ((v28 & 0x80000000) != 0 || v28 == eventId) && v27->fields.openType == openKind )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(targetIds, 0LL);
      if ( IsNullOrEmpty )
      {
        if ( !v18 )
          goto LABEL_38;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          *v24);
      }
      else
      {
        v29 = v27->fields.targetIds;
        if ( !v29 )
          goto LABEL_38;
        v30 = *(_QWORD *)&v29->max_length;
        if ( !v26 )
        {
          if ( !(_DWORD)v30
            || (IsNullOrEmpty = System_String__op_Equality(v29->m_Items[0], (System_String_o *)StringLiteral_15706, 0LL),
                v26 = 0LL,
                IsNullOrEmpty) )
          {
            v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)v27;
          }
        }
        if ( (int)v30 >= 1 )
        {
          v31 = v26;
          v32 = v24;
          v33 = 0LL;
          while ( 1 )
          {
            v34 = v27->fields.targetIds;
            if ( !v34 )
              goto LABEL_38;
            if ( v33 >= v34->max_length )
              goto LABEL_39;
            IsNullOrEmpty = System_String__op_Equality(v34->m_Items[v33], targetIds, 0LL);
            if ( IsNullOrEmpty )
              break;
            if ( (__int64)++v33 >= (int)v30 )
            {
              v24 = v32;
              goto LABEL_30;
            }
          }
          if ( !v18 )
            goto LABEL_38;
          v24 = v32;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
            *v32);
LABEL_30:
          v26 = v31;
          openKind = v36;
        }
      }
    }
    max_length = sortedEntityArray->max_length;
    ++v25;
  }
  while ( v25 < max_length );
  if ( !v18 )
    goto LABEL_38;
LABEL_33:
  if ( v26 && !v18->fields._size )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v18,
      v26,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( targets && (v4 = *(_QWORD *)&targets->max_length) != 0 && (int)v4 >= 1 )
  {
    v5 = 0LL;
    v6 = 0;
    do
    {
      v7 = targets->m_Items[v5];
      if ( !v7 )
        sub_B170D4();
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
        {
          sub_B17100(this, targets, *(_QWORD *)&targetId);
          sub_B170A0();
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v22; // x5
  __int64 v23; // x10
  int32_t v24; // w8

  if ( (byte_40F9C0A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B16FFC(&EventTutorialEntity_TypeInfo, v15);
    byte_40F9C0A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v18 = Count;
  v19 = 0;
  while ( 1 )
  {
    v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v20 )
      goto LABEL_17;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      v20,
                                      v19,
                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v23 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == EventTutorialEntity_TypeInfo )
      {
        v24 = Item->fields.eventId;
        if ( ((v24 & 0x80000000) != 0 || v24 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, v22) )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x0
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v25; // x5
  __int64 v26; // x10
  int32_t v27; // w8
  int32_t v29; // [xsp+8h] [xbp-58h]

  if ( (byte_40F9C09 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v17);
    sub_B16FFC(&EventTutorialEntity_TypeInfo, v18);
    byte_40F9C09 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v29 = bPhase;
  v21 = Count;
  v22 = 0;
  while ( 1 )
  {
    v23 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v23 )
      goto LABEL_19;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      v23,
                                      v22,
                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v26 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == EventTutorialEntity_TypeInfo )
      {
        v27 = Item->fields.eventId;
        if ( ((v27 & 0x80000000) == 0 || !isChkEventId)
          && ((v27 & 0x80000000) != 0 || v27 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isEnableCondition(Item, qId, v29, bWave, bTurn, v25) )
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  EventTutorialMaster___c_c *v19; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v22; // x21
  struct EventTutorialMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  EventTutorialMaster___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x19
  struct EventTutorialMaster___c_StaticFields *v37; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_1; // x20
  Il2CppObject *v39; // x21
  struct EventTutorialMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Int32_array **v48; // x0
  BattleServantConfConponent_o *v49; // x8
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x19
  struct EventTutorialMaster_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_40F9C05 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v5);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_EventTutorialEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_EventTutorialEntity__int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v10);
    sub_B16FFC(&Method_EventTutorialMaster___c__preProcess_b__7_0__, v11);
    sub_B16FFC(&Method_EventTutorialMaster___c__preProcess_b__7_1__, v12);
    sub_B16FFC(&EventTutorialMaster___c_TypeInfo, v13);
    byte_40F9C05 = 1;
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v19 = EventTutorialMaster___c_TypeInfo;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v19 = EventTutorialMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_EventTutorialEntity__int__TypeInfo,
                                                                                v14,
                                                                                v15,
                                                                                v16,
                                                                                v17);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v22,
      Method_EventTutorialMaster___c__preProcess_b__7_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v23 = EventTutorialMaster___c_TypeInfo->static_fields;
    v23->__9__7_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v18,
          (System_Func_TSource__TKey__o *)_9__7_0,
          (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v35 = EventTutorialMaster___c_TypeInfo;
  v36 = v30;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v35 = EventTutorialMaster___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v37->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v37 = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_EventTutorialEntity__int__TypeInfo,
                                                                                v31,
                                                                                v32,
                                                                                v33,
                                                                                v34);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_1,
      v39,
      Method_EventTutorialMaster___c__preProcess_b__7_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v40 = EventTutorialMaster___c_TypeInfo->static_fields;
    v40->__9__7_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v36,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v48 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v47,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  v49 = (BattleServantConfConponent_o *)EventTutorialMaster_TypeInfo->static_fields;
  v49->klass = (BattleServantConfConponent_c *)v48;
  sub_B16F98(v49, v48, v50, v51, v52, v53, v54, v55);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  v56,
                                                                                                  v57,
                                                                                                  v58,
                                                                                                  v59);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v61 = EventTutorialMaster_TypeInfo->static_fields;
  v61->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v60;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v61->checkedEntityList,
    (System_Int32_array **)v60,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
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
  __int64 v15; // x2
  const MethodInfo *v16; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v19; // w25
  int32_t missionConditionDetailId; // w8

  if ( (byte_40F9C14 & 1) == 0 )
  {
    sub_B16FFC(&EventTutorialMaster_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    byte_40F9C14 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&openKind,
                                                                                                  callback,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_15;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        sub_B17100(v13, v14, v15);
        sub_B170A0();
      }
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)sortedEntityArray->m_Items[v19];
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
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_14:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v12,
    0,
    callback,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__showTutorialWithoutCheck_24594560(
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
  _BOOL8 isEnableCondition; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v39; // w23
  EventTutorialEntity_o *v40; // x21
  int32_t v41; // w8
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_o *v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_40F9C17 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v17);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__, v18);
    sub_B16FFC(&EventTutorialMaster___c__DisplayClass26_0_TypeInfo, v19);
    byte_40F9C17 = 1;
  }
  v20 = sub_B170CC(
          EventTutorialMaster___c__DisplayClass26_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&openKind,
          callbackAfter,
          *(_QWORD *)&qId);
  EventTutorialMaster___c__DisplayClass26_0___ctor((EventTutorialMaster___c__DisplayClass26_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v20 + 32) = callbackAfter;
  *(_DWORD *)(v20 + 24) = eventId;
  *(_DWORD *)(v20 + 28) = openKind;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v20 + 32),
    (System_Int32_array **)callbackAfter,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_DWORD *)(v20 + 40) = qId;
  *(_DWORD *)(v20 + 44) = bPhase;
  *(_DWORD *)(v20 + 48) = bWave;
  *(_DWORD *)(v20 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_B170D4();
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v20 + 32), 0LL);
  }
  else
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
      {
        sub_B17100(isEnableCondition, v34, v35);
        sub_B170A0();
      }
      v40 = sortedEntityArray->m_Items[v39];
      if ( !v40 )
        goto LABEL_18;
      v41 = v40->fields.eventId;
      if ( ((v41 & 0x80000000) != 0 || v41 == *(_DWORD *)(v20 + 24)) && v40->fields.openType == *(_DWORD *)(v20 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v40,
                              *(_DWORD *)(v20 + 40),
                              *(_DWORD *)(v20 + 44),
                              *(_DWORD *)(v20 + 48),
                              *(_DWORD *)(v20 + 52),
                              v36);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_14;
    }
    v44 = *(System_Action_o **)(v20 + 56);
    if ( !v44 )
    {
      v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v42, v43);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v20,
        Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v20 + 56) = v44;
      sub_B16F98((BattleServantConfConponent_o *)(v20 + 56), (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
    }
    EventTutorialEntity__OpenTutorial(v40, v44, v35);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x19
  __int64 v37; // x21
  int v38; // w8
  EventTutorialEntity_o *v39; // x19
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x2

  if ( (byte_40F9C19 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, tutoList);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__, v11);
    sub_B16FFC(&EventTutorialMaster___c__DisplayClass28_0_TypeInfo, v12);
    byte_40F9C19 = 1;
  }
  v13 = sub_B170CC(EventTutorialMaster___c__DisplayClass28_0_TypeInfo, tutoList, *(_QWORD *)&index, callback, method);
  EventTutorialMaster___c__DisplayClass28_0___ctor((EventTutorialMaster___c__DisplayClass28_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = tutoList;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)tutoList, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v13 + 40) = callback;
  *(_DWORD *)(v13 + 32) = index;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)callback, v26, v27, v28, v29, v30, v31);
  v36 = *(_QWORD *)(v13 + 24);
  if ( !v36 )
    goto LABEL_11;
  v37 = *(int *)(v13 + 32);
  v38 = *(_DWORD *)(v36 + 24);
  if ( (int)v37 < v38 )
  {
    if ( v38 <= (unsigned int)v37 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v39 = *(EventTutorialEntity_o **)(*(_QWORD *)(v36 + 16) + 8 * v37 + 32);
    v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
    System_Action___ctor(
      v40,
      (Il2CppObject *)v13,
      Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( v39 )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag(v39, v40, v41);
      return;
    }
LABEL_11:
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Int32_array *eventIds; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_int__o *OpenEventIds; // x0

  if ( (byte_40F707C & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    byte_40F707C = 1;
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
                     (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        this->fields.eventIds = eventIds;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.eventIds,
          (System_Int32_array **)eventIds,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        return eventIds;
      }
    }
    else
    {
      v6 = sub_B17014(int___TypeInfo, 1LL, v2);
      if ( v6 )
      {
        eventIds = (struct System_Int32_array *)v6;
        if ( !*(_DWORD *)(v6 + 24) )
        {
          sub_B17100(v6, v7, v8);
          sub_B170A0();
        }
        *(_DWORD *)(v6 + 32) = this->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_B170D4();
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int32_t _1__state; // w8
  Il2CppObject *v22; // x21
  struct EventTutorialMaster___c__DisplayClass11_0_o **p__8__1; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct EventTutorialMaster___c__DisplayClass11_0_o *_8__1; // x0
  System_Int32_array **args; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  BattleServantConfConponent_o *p__7__wrap1; // x20
  __int64 v47; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t v55; // w8
  struct EventTutorialMaster___c__DisplayClass11_1_o **p__8__2; // x21
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialEntity_o *v58; // x1
  struct EventTutorialMaster___c__DisplayClass11_0_o *v59; // x8
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  Il2CppObject *v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct EventTutorialMaster___c__DisplayClass11_0_o *v74; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v75; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v76; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v77; // x8
  TutorialCommunicateAdapter_o *adapter; // x0
  struct EventTutorialMaster___c__DisplayClass11_0_o *v79; // x20
  struct EventTutorialMaster_EventTutorialArgs_o *v80; // x8
  struct TutorialCommunicateAdapter_o *v81; // x8
  EventTutorialEntity_o *data_5__4; // x22
  Il2CppObject *_8__2; // x24
  System_Action_o *v84; // x23
  __int64 v85; // x1
  struct EventTutorialMaster___c__DisplayClass11_1_o *v86; // x22
  EventTutorialEntity_o *v87; // x8
  int32_t eventId; // w21
  int32_t flagType; // w22
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  BattleServantConfConponent_c *klass; // x9
  int32_t namespaze; // w10
  struct EventTutorialMaster___c__DisplayClass11_0_o *v93; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v94; // x8
  bool result; // w0
  System_Func_bool__o *v96; // x20
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  UnityEngine_WaitWhile_o *v101; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Func_bool__o *_9__0; // x21
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  UnityEngine_WaitWhile_o *v116; // x20
  Il2CppObject **v117; // x19
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7

  if ( (byte_40F707A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&EventTutorialMaster_TypeInfo, v9);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v10);
    sub_B16FFC(&System_Func_bool__TypeInfo, v11);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&TutorialFlag_TypeInfo, v14);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__, v15);
    sub_B16FFC(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo, v16);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, v17);
    sub_B16FFC(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__, v18);
    sub_B16FFC(&EventTutorialMaster___c__DisplayClass11_1_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v20);
    byte_40F707A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__2 = &this->fields.__8__2;
    p_data_5__4 = &this->fields._data_5__4;
    this->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state == 1 )
  {
    p__8__2 = &this->fields.__8__2;
    this->fields.__1__state = -1;
    goto LABEL_27;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v22 = (Il2CppObject *)sub_B170CC(EventTutorialMaster___c__DisplayClass11_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v22, 0LL);
  p__8__1 = &this->fields.__8__1;
  this->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass11_0_o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__8__1,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  _8__1 = this->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_55;
  args = (System_Int32_array **)this->fields.args;
  _8__1->fields.args = (struct EventTutorialMaster_EventTutorialArgs_o *)args;
  sub_B16F98((BattleServantConfConponent_o *)&_8__1->fields, args, v30, v31, v32, v33, v34, v35);
  if ( !*p__8__1 )
    goto LABEL_55;
  if ( !(*p__8__1)->fields.args )
    return 0;
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  sortedEntityArray = static_fields->sortedEntityArray;
  this->fields.__7__wrap1 = static_fields->sortedEntityArray;
  p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__7__wrap1,
    (System_Int32_array **)sortedEntityArray,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v55 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = v55 )
  {
    klass = p__7__wrap1->klass;
    if ( !p__7__wrap1->klass )
      goto LABEL_55;
    namespaze = (int32_t)klass->_1.namespaze;
    if ( v55 >= namespaze )
    {
      this->fields.__7__wrap1 = 0LL;
      sub_B16F98(p__7__wrap1, 0LL, v49, v50, v51, v52, v53, v54);
      v93 = this->fields.__8__1;
      if ( v93 )
      {
        v94 = v93->fields.args;
        if ( v94 )
        {
          ActionExtensions__Call(v94->fields.callbackAfter, 0LL);
          return 0;
        }
      }
LABEL_55:
      sub_B170D4();
    }
    if ( v55 >= (unsigned int)namespaze )
    {
      sub_B17100(v47, v48, v49);
      sub_B170A0();
    }
    v58 = (struct EventTutorialEntity_o *)*((_QWORD *)&klass->_1.byval_arg.data + v55);
    this->fields._data_5__4 = v58;
    p_data_5__4 = &this->fields._data_5__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._data_5__4,
      (System_Int32_array **)v58,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v59 = this->fields.__8__1;
    if ( !v59 )
      goto LABEL_55;
    if ( EventTutorialMaster__IsOpenCondition(*p_data_5__4, v59->fields.args, 0LL) )
      break;
LABEL_32:
    v87 = *p_data_5__4;
    if ( !*p_data_5__4 )
      goto LABEL_55;
    if ( v87->fields.flag == 1 )
    {
      eventId = v87->fields.eventId;
      flagType = v87->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( !TutorialFlag__Get_28025448(flagType, eventId, 0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           0LL,
                                                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*p_data_5__4 || !Request_WarBoardWallAttackRequest )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          Request_WarBoardWallAttackRequest,
          (*p_data_5__4)->fields.flagType,
          (*p_data_5__4)->fields.eventId,
          0LL);
      }
    }
    this->fields._data_5__4 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_data_5__4, 0LL, v61, v62, v63, v64, v65, v66);
    p__7__wrap1 = (BattleServantConfConponent_o *)&this->fields.__7__wrap1;
    v55 = this->fields.__7__wrap2 + 1;
  }
  v67 = (Il2CppObject *)sub_B170CC(EventTutorialMaster___c__DisplayClass11_1_TypeInfo, v60, v61, v62, v63);
  System_Object___ctor(v67, 0LL);
  this->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass11_1_o *)v67;
  p__8__2 = &this->fields.__8__2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__8__2,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = this->fields.__8__1;
  if ( !v74 )
    goto LABEL_55;
  v75 = v74->fields.args;
  if ( !v75 )
    goto LABEL_55;
  if ( !v75->fields.adapter )
    goto LABEL_27;
  if ( !*p_data_5__4 )
    goto LABEL_55;
  if ( !EventTutorialEntity__HasBeforeAction(*p_data_5__4, 0LL) )
    goto LABEL_27;
  v76 = this->fields.__8__1;
  if ( !v76 )
    goto LABEL_55;
  v77 = v76->fields.args;
  if ( !v77 )
    goto LABEL_55;
  adapter = v77->fields.adapter;
  if ( !adapter )
    goto LABEL_55;
  TutorialCommunicateAdapter__SendRequest(adapter, this->fields._data_5__4, 0LL);
  v79 = this->fields.__8__1;
  if ( !v79 )
    goto LABEL_55;
  v80 = v79->fields.args;
  if ( !v80 )
    goto LABEL_55;
  v81 = v80->fields.adapter;
  if ( !v81 )
    goto LABEL_55;
  if ( !v81->fields._IsPerformanceBusy_k__BackingField )
  {
LABEL_27:
    if ( !*p__8__2 )
      goto LABEL_55;
    (*p__8__2)->fields.isBusy = 1;
    p_data_5__4 = &this->fields._data_5__4;
    data_5__4 = this->fields._data_5__4;
    _8__2 = (Il2CppObject *)this->fields.__8__2;
    v84 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v84, _8__2, Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, 0LL);
    if ( !data_5__4 )
      goto LABEL_55;
    EventTutorialEntity__OpenTutorial(data_5__4, v84, 0LL);
    v86 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_55;
    if ( v86->fields.isBusy )
    {
      v96 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v85, v2, v3, v4);
      System_Func_bool____ctor(
        v96,
        (Il2CppObject *)v86,
        Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__,
        (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
      v101 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v97, v98, v99, v100);
      UnityEngine_WaitWhile___ctor(v101, v96, 0LL);
      this->fields.__2__current = (Il2CppObject *)v101;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v101,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
LABEL_31:
    *p__8__2 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p__8__2, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_32;
  }
  _9__0 = v79->fields.__9__0;
  if ( !_9__0 )
  {
    _9__0 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, method, v2, v3, v4);
    System_Func_bool____ctor(
      _9__0,
      (Il2CppObject *)v79,
      Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v79->fields.__9__0 = _9__0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v79->fields.__9__0,
      (System_Int32_array **)_9__0,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
  }
  v116 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, method, v2, v3, v4);
  UnityEngine_WaitWhile___ctor(v116, _9__0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v116;
  v117 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v117, (System_Int32_array **)v116, v118, v119, v120, v121, v122, v123);
  result = 1;
  *((_DWORD *)v117 - 2) = 1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__11_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t v14; // w8

  if ( (byte_40F707B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventTutorialMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F707B = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
    v7 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                           Master_WarQuestSelectionMaster,
                           this->fields.args,
                           0LL);
    this->fields.__2__current = v7;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__17_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7078 & 1) == 0 )
  {
    sub_B16FFC(&EventTutorialMaster___c_TypeInfo, v1);
    byte_40F7078 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventTutorialMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventTutorialMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F7079 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v2);
    byte_40F7079 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v3, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  EventTutorialMaster__checkTutorial_24588768(
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
    sub_B170D4();
  EventTutorialMaster__checkTutorial_24588768(
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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