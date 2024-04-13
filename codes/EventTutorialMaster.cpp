void __fastcall EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E84C5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    166,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventTutorialMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  WarQuestSelectionMaster_o *v20; // x25
  const MethodInfo *v21; // [xsp+8h] [xbp-48h]

  if ( (byte_42E84CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventTutorialMaster___, openKind, (_DWORD)callbackAfter, *(_QWORD *)&qId);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    byte_42E84CC = 1;
  }
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        v21);
      return;
    }
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v19);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  v20 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventTutorialMaster___);
  Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)v20);
  if ( !v20 )
    goto LABEL_14;
  EventTutorialMaster__checkTutorial_24730284(
    (EventTutorialMaster_o *)v20,
    (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    0,
    v21);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *checkedEntityList; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x25
  const MethodInfo *v26; // [xsp+8h] [xbp-48h]

  if ( (byte_42E84CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventTutorialMaster___, openKind, (_DWORD)callbackAfter, *(_QWORD *)&qId);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v21, v22, v23);
    byte_42E84CD = 1;
  }
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_15;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    checkedEntityList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
  if ( eventId > 0 )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
        v26);
      return;
    }
LABEL_15:
    sub_B5D69C(checkedEntityList, *(_QWORD *)&openKind);
  }
  if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventTutorialMaster___);
  checkedEntityList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_WarQuestSelectionMaster);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  EventTutorialMaster__checkTutorial_24730284(
    (EventTutorialMaster_o *)Master_WarQuestSelectionMaster,
    (System_Collections_Generic_List_int__o *)checkedEntityList,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    v26);
}


void __fastcall EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x0

  if ( (byte_42E84CE & 1) == 0 )
  {
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__, v4, v5, v6);
    byte_42E84CE = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)checkedEntityList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoCheckTutorialLocal(
        EventTutorialMaster_o *this,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E84C9 & 1) == 0 )
  {
    sub_B5D5C4(&EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo, (_DWORD)args, (_DWORD)method, v3);
    byte_42E84C9 = 1;
  }
  v5 = sub_B5D694(EventTutorialMaster__CoCheckTutorialLocal_d__11_TypeInfo);
  EventTutorialMaster__CoCheckTutorialLocal_d__11___ctor(
    (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = args;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)args, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E84CF & 1) == 0 )
  {
    sub_B5D5C4(&EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E84CF = 1;
  }
  v5 = sub_B5D694(EventTutorialMaster__CoroutineCheckTutorial_d__17_TypeInfo);
  EventTutorialMaster__CoroutineCheckTutorial_d__17___ctor(
    (EventTutorialMaster__CoroutineCheckTutorial_d__17_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = args;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)args, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetAvailableEventTutorialEntitys(
        int32_t eventId,
        EventTutorialMaster_OpenType_array *openKinds,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x7

  if ( (byte_42E84DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialMaster___, (_DWORD)openKinds, qId, *(_QWORD *)&bPhase);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E84DE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v17);
  }
  return EventTutorialMaster__getAvailableEventTutorialEntitys(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKinds,
           qId,
           bPhase,
           bWave,
           bTurn,
           v18);
}


EventTutorialEntity_array *__fastcall EventTutorialMaster__GetAvailableTutorialArray(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_42E84D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___, v5, v6, v7);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_EventTutorialEntity__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_EventTutorialEntity__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__, v17, v18, v19);
    sub_B5D5C4(&EventTutorialMaster___c__DisplayClass21_0_TypeInfo, v20, v21, v22);
    byte_42E84D3 = 1;
  }
  v23 = sub_B5D694(EventTutorialMaster___c__DisplayClass21_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass21_0___ctor((EventTutorialMaster___c__DisplayClass21_0_o *)v23, 0LL);
  if ( !v23 )
    sub_B5D69C(v24, v25);
  *(_QWORD *)(v23 + 16) = args;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)args, v26, v27, v28, v29, v30, v31);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v33,
    (Il2CppObject *)v23,
    Method_EventTutorialMaster___c__DisplayClass21_0__GetAvailableTutorialArray_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventTutorialEntity__bool___ctor__);
  v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v34,
                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_42E84C3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__,
      eventId,
      flagType,
      *(_QWORD *)&num);
    byte_42E84C3 = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__GetEventTutorialEntity(
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_42E84DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKind, (_DWORD)targetIds, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E84DC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  return EventTutorialMaster__getEventTutorialEntity(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           targetIds,
           v12);
}


System_Collections_Generic_List_int__o *__fastcall EventTutorialMaster__GetOpenEventIds(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  EventEntity_array *EnableEntityList; // x19
  System_Collections_Generic_List_int__o *v19; // x20
  int max_length; // w8
  unsigned int v21; // w21
  EventEntity_o *v22; // x8
  __int64 v24; // x0

  if ( (byte_42E84DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E84DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_13;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !EnableEntityList )
    goto LABEL_13;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v24 = sub_B5D6C8(Instance);
        sub_B5D668(v24, 0LL);
      }
      v22 = EnableEntityList->m_Items[v21];
      if ( !v22 || !v19 )
        break;
      System_Collections_Generic_List_int___Add(
        v19,
        v22->fields.id,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      max_length = EnableEntityList->max_length;
      if ( (int)++v21 >= max_length )
        return v19;
    }
LABEL_13:
    sub_B5D69C(Instance, v17);
  }
  return v19;
}


bool __fastcall EventTutorialMaster__IsOpenCondition(
        EventTutorialEntity_o *data,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  EventTutorialEntity_o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *EventIds; // x0

  v6 = data;
  if ( (byte_42E84D4 & 1) == 0 )
  {
    data = (EventTutorialEntity_o *)sub_B5D5C4(
                                      &Method_System_Linq_Enumerable_Contains_int___,
                                      (_DWORD)args,
                                      (_DWORD)method,
                                      v3);
    byte_42E84D4 = 1;
  }
  if ( !v6 )
    goto LABEL_12;
  if ( (v6->fields.eventId & 0x80000000) == 0 )
  {
    if ( args )
    {
      EventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_EventTutorialArgs__get_EventIds(
                                                                        args,
                                                                        0LL);
      if ( !System_Linq_Enumerable__Contains_int_(
              EventIds,
              v6->fields.eventId,
              (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
        return 0;
      goto LABEL_9;
    }
LABEL_12:
    sub_B5D69C(data, args);
  }
  if ( !args )
    goto LABEL_12;
LABEL_9:
  if ( v6->fields.openType == args->fields.openKind )
    return EventTutorialEntity__isOpenCondition(
             v6,
             args->fields.qId,
             args->fields.bPhase,
             args->fields.bWave,
             args->fields.bTurn,
             v4);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x7

  if ( (byte_42E84D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKind, qId, *(_QWORD *)&bPhase);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E84D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v17);
  }
  return EventTutorialMaster__isTutorialAvailable(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKind,
           qId,
           bPhase,
           bWave,
           bTurn,
           v18);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+0h] [xbp-50h]

  if ( (byte_42E84D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKind, qId, *(_QWORD *)&bPhase);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E84D0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v19);
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
           v21);
}


void __fastcall EventTutorialMaster__OpenTutorialImages(System_Int32_array *imageIds, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  MissionNotifyManager_o *Instance; // x0
  __int64 v21; // x1
  CommonUI_o *v22; // x20
  EventTutorialMaster___c_c *v23; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__24_0; // x21
  Il2CppObject *v26; // x22
  struct EventTutorialMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42E84D6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, v14, v15, v16);
    sub_B5D5C4(&EventTutorialMaster___c_TypeInfo, v17, v18, v19);
    byte_42E84D6 = 1;
  }
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MissionNotifyManager__StartPause(Instance, 0LL);
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = (CommonUI_o *)Instance;
    v23 = EventTutorialMaster___c_TypeInfo;
    if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
      v23 = EventTutorialMaster___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__24_0 = static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__24_0, v26, Method_EventTutorialMaster___c__OpenTutorialImages_b__24_0__, 0LL);
      v27 = EventTutorialMaster___c_TypeInfo->static_fields;
      v27->__9__24_0 = _9__24_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v27->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    if ( !v22 )
LABEL_20:
      sub_B5D69C(Instance, v21);
    CommonUI__OpenTutorialImageDialog_18228308(v22, imageIds, -1, 0, _9__24_0, 0LL, 0LL, 0LL);
  }
}


void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_42E84D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKind, (_DWORD)callback, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E84D2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  EventTutorialMaster__showTutorialWithoutCheck((EventTutorialMaster_o *)Instance, eventId, openKind, callback, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialMaster__ShowTutorialWithoutCheck_24735872(
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_42E84D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialMaster___, openKind, (_DWORD)callback, *(_QWORD *)&qId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E84D7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v19);
  }
  EventTutorialMaster__showTutorialWithoutCheck_24736076(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    qId,
    bPhase,
    bWave,
    bTurn,
    v20);
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

  if ( (byte_42E84C4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&flagType);
    byte_42E84C4 = 1;
  }
  PK = EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


void __fastcall EventTutorialMaster__TutorialChainWithoutCheckStart(
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_42E84D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialMaster___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E84D9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  EventTutorialMaster__tutorialChainWithoutCheck((EventTutorialMaster_o *)Instance, tutoList, 0, callback, v11);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *checkedEntityList; // x0
  const MethodInfo *v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  __int64 v71; // x8
  unsigned __int64 v72; // x27
  int v73; // w24
  EventTutorialEntity_o *v74; // x21
  _BOOL8 v75; // x0
  __int64 v76; // x1
  char v77; // w22
  int v78; // w8
  int32_t flag; // w22
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v81; // x3
  int32_t v82; // w8
  const MethodInfo *v83; // x2
  int32_t flagType; // w22
  int32_t v85; // w23
  System_Action_o *v86; // x22
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  const MethodInfo *v93; // x2
  System_Action_o *v94; // x22
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x0
  _BYTE v102[32]; // [xsp+8h] [xbp-98h] BYREF
  int v103; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v104; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E84C7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, openKind, callbackAfter);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v24, v25, v26);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__, v45, v46, v47);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__, v48, v49, v50);
    sub_B5D5C4(&EventTutorialMaster___c__DisplayClass9_0_TypeInfo, v51, v52, v53);
    byte_42E84C7 = 1;
  }
  memset(&v104, 0, sizeof(v104));
  v103 = 0;
  v54 = sub_B5D694(EventTutorialMaster___c__DisplayClass9_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass9_0___ctor((EventTutorialMaster___c__DisplayClass9_0_o *)v54, 0LL);
  if ( !v54 )
    goto LABEL_55;
  *(_QWORD *)(v54 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  *(_QWORD *)(v54 + 32) = callbackAfter;
  *(_DWORD *)(v54 + 24) = eventId;
  *(_DWORD *)(v54 + 28) = openKind;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v54 + 32),
    (System_Int32_array **)callbackAfter,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  *(_DWORD *)(v54 + 40) = qId;
  *(_DWORD *)(v54 + 44) = bPhase;
  *(_DWORD *)(v54 + 48) = bWave;
  *(_DWORD *)(v54 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_55;
  v71 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v71 < 1 )
  {
LABEL_45:
    ActionExtensions__Call(*(System_Action_o **)(v54 + 32), 0LL);
    return;
  }
  v72 = 0LL;
  v73 = 0;
  while ( 1 )
  {
    if ( v72 >= (unsigned int)v71 )
    {
      v101 = sub_B5D6C8(checkedEntityList);
      sub_B5D668(v101, 0LL);
    }
    v74 = sortedEntityArray->m_Items[v72];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_55;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v102,
        checkedEntityList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v104 = *(System_Collections_Generic_List_Enumerator_T__o *)v102;
      while ( 1 )
      {
        v75 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v104,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v75 )
          break;
        if ( !v74 )
          sub_B5D69C(v75, v76);
        if ( !v104.fields.current )
          sub_B5D69C(v75, v76);
        if ( v74->fields.eventId == HIDWORD(v104.fields.current[1].klass)
          && v74->fields.flagType == LODWORD(v104.fields.current[1].monitor)
          && v74->fields.num == LODWORD(v104.fields.current[1].klass) )
        {
          v77 = 1;
          goto LABEL_19;
        }
      }
      v77 = 0;
LABEL_19:
      *(_DWORD *)&v102[4 * v73 + 24] = 188;
      v73 = ++v103;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v104,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v73 )
      {
        v78 = v73 - 1;
        if ( *(_DWORD *)&v102[4 * v73 + 20] == 188 )
        {
          --v73;
          v103 = v78;
        }
      }
      if ( (v77 & 1) != 0 )
        goto LABEL_41;
    }
    if ( !v74 )
      goto LABEL_55;
    flag = v74->fields.flag;
    if ( v74->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v74, v56);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v54 + 40), v81);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_41;
    }
    v82 = v74->fields.eventId;
    if ( ((v82 & 0x80000000) != 0 || v82 == *(_DWORD *)(v54 + 24)) && v74->fields.openType == *(_DWORD *)(v54 + 28) )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialEntity__isOpenCondition(v74, *(_DWORD *)(v54 + 40), *(_DWORD *)(v54 + 44), *(_DWORD *)(v54 + 48), *(_DWORD *)(v54 + 52), v69);
      if ( flag == 2 || ((unsigned __int8)checkedEntityList & 1) != 0 )
        break;
    }
    if ( v74->fields.flag == 1 )
    {
      flagType = v74->fields.flagType;
      v85 = *(_DWORD *)(v54 + 24);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_29297972(flagType, v85, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v74->fields.flagType,
          *(_DWORD *)(v54 + 24),
          0LL);
      }
    }
LABEL_41:
    LODWORD(v71) = sortedEntityArray->max_length;
    if ( (__int64)++v72 >= (int)v71 )
      goto LABEL_45;
  }
  if ( flag != 2 && !notSave )
  {
    v86 = *(System_Action_o **)(v54 + 64);
    if ( !v86 )
    {
      v86 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v86,
        (Il2CppObject *)v54,
        Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v54 + 64) = v86;
      sub_B5D560((BattleServantConfConponent_o *)(v54 + 64), (System_Int32_array **)v86, v87, v88, v89, v90, v91, v92);
    }
    EventTutorialEntity__OpenTutorial(v74, v86, v83);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_55:
    sub_B5D69C(checkedEntityList, v56);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v94 = *(System_Action_o **)(v54 + 56);
  if ( !v94 )
  {
    v94 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v94,
      (Il2CppObject *)v54,
      Method_EventTutorialMaster___c__DisplayClass9_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v54 + 56) = v94;
    sub_B5D560((BattleServantConfConponent_o *)(v54 + 56), (System_Int32_array **)v94, v95, v96, v97, v98, v99, v100);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v74, v94, v93);
}


void __fastcall EventTutorialMaster__checkTutorial_24730284(
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  __int64 v57; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *checkedEntityList; // x0
  const MethodInfo *eventId; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  const MethodInfo *v78; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  __int64 v80; // x8
  unsigned __int64 v81; // x28
  int v82; // w20
  EventTutorialEntity_o *v83; // x22
  _BOOL8 v84; // x0
  __int64 v85; // x1
  char v86; // w23
  int v87; // w8
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x2
  int32_t v92; // w23
  int32_t flagType; // w24
  System_Action_o *v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  const MethodInfo *v101; // x2
  System_Action_o *v102; // x21
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  __int64 v109; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **v110; // [xsp+0h] [xbp-A0h]
  _BYTE v111[32]; // [xsp+8h] [xbp-98h] BYREF
  int v112; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E84C8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)checkEventIds, openKind, callbackAfter);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v24, v25, v26);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v39, v40, v41);
    sub_B5D5C4(&NetworkManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__, v48, v49, v50);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__, v51, v52, v53);
    sub_B5D5C4(&EventTutorialMaster___c__DisplayClass10_0_TypeInfo, v54, v55, v56);
    byte_42E84C8 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  v112 = 0;
  v57 = sub_B5D694(EventTutorialMaster___c__DisplayClass10_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass10_0___ctor((EventTutorialMaster___c__DisplayClass10_0_o *)v57, 0LL);
  if ( !v57 )
    goto LABEL_56;
  *(_QWORD *)(v57 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v57 + 16), (System_Int32_array **)this, v60, v61, v62, v63, v64, v65);
  *(_QWORD *)(v57 + 24) = checkEventIds;
  v110 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(v57 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v57 + 24),
    (System_Int32_array **)checkEventIds,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  *(_QWORD *)(v57 + 40) = callbackAfter;
  *(_DWORD *)(v57 + 32) = openKind;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v57 + 40),
    (System_Int32_array **)callbackAfter,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  *(_DWORD *)(v57 + 48) = qId;
  *(_DWORD *)(v57 + 52) = bPhase;
  *(_DWORD *)(v57 + 56) = bWave;
  *(_DWORD *)(v57 + 60) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_56;
  v80 = *(_QWORD *)&sortedEntityArray->max_length;
  if ( (int)v80 < 1 )
  {
LABEL_46:
    ActionExtensions__Call(*(System_Action_o **)(v57 + 40), 0LL);
    return;
  }
  v81 = 0LL;
  v82 = 0;
  while ( 1 )
  {
    if ( v81 >= (unsigned int)v80 )
    {
      v109 = sub_B5D6C8(checkedEntityList);
      sub_B5D668(v109, 0LL);
    }
    v83 = sortedEntityArray->m_Items[v81];
    if ( notSave )
    {
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !checkedEntityList )
        goto LABEL_56;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v111,
        checkedEntityList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v113 = *(System_Collections_Generic_List_Enumerator_T__o *)v111;
      while ( 1 )
      {
        v84 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v113,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v84 )
          break;
        if ( !v83 )
          sub_B5D69C(v84, v85);
        if ( !v113.fields.current )
          sub_B5D69C(v84, v85);
        if ( v83->fields.eventId == HIDWORD(v113.fields.current[1].klass)
          && v83->fields.flagType == LODWORD(v113.fields.current[1].monitor)
          && v83->fields.num == LODWORD(v113.fields.current[1].klass) )
        {
          v86 = 1;
          goto LABEL_19;
        }
      }
      v86 = 0;
LABEL_19:
      *(_DWORD *)&v111[4 * v82 + 24] = 188;
      v82 = ++v112;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v113,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
      if ( v82 )
      {
        v87 = v82 - 1;
        if ( *(_DWORD *)&v111[4 * v82 + 20] == 188 )
        {
          --v82;
          v112 = v87;
        }
      }
      if ( (v86 & 1) != 0 )
        goto LABEL_42;
    }
    if ( !v83 )
      goto LABEL_56;
    flag = v83->fields.flag;
    if ( v83->fields.openType == 84 )
    {
      Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v83, eventId);
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, *(_DWORD *)(v57 + 48), v90);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
        goto LABEL_42;
    }
    eventId = (const MethodInfo *)(unsigned int)v83->fields.eventId;
    if ( ((unsigned int)eventId & 0x80000000) != 0 )
      goto LABEL_31;
    checkedEntityList = *v110;
    if ( !*v110 )
      goto LABEL_56;
    checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Collections_Generic_List_int___Contains((System_Collections_Generic_List_int__o *)checkedEntityList, (int32_t)eventId, (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( ((unsigned __int8)checkedEntityList & 1) != 0 )
    {
LABEL_31:
      if ( v83->fields.openType == *(_DWORD *)(v57 + 32) )
      {
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialEntity__isOpenCondition(v83, *(_DWORD *)(v57 + 48), *(_DWORD *)(v57 + 52), *(_DWORD *)(v57 + 56), *(_DWORD *)(v57 + 60), v78);
        if ( flag == 2 || ((unsigned __int8)checkedEntityList & 1) != 0 )
          break;
      }
    }
    if ( v83->fields.flag == 1 )
    {
      v92 = v83->fields.eventId;
      flagType = v83->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TutorialFlag__Get_29297972(flagType, v92, 0LL);
      if ( ((unsigned __int8)checkedEntityList & 1) == 0 )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(0LL, (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !checkedEntityList )
          goto LABEL_56;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)checkedEntityList,
          v83->fields.flagType,
          v83->fields.eventId,
          0LL);
      }
    }
LABEL_42:
    LODWORD(v80) = sortedEntityArray->max_length;
    if ( (__int64)++v81 >= (int)v80 )
      goto LABEL_46;
  }
  if ( flag != 2 && !notSave )
  {
    v94 = *(System_Action_o **)(v57 + 72);
    if ( !v94 )
    {
      v94 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v94,
        (Il2CppObject *)v57,
        Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__1__,
        0LL);
      *(_QWORD *)(v57 + 72) = v94;
      sub_B5D560((BattleServantConfConponent_o *)(v57 + 72), (System_Int32_array **)v94, v95, v96, v97, v98, v99, v100);
    }
    EventTutorialEntity__OpenTutorial(v83, v94, v91);
    return;
  }
  checkedEntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
LABEL_56:
    sub_B5D69C(checkedEntityList, eventId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)checkedEntityList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v102 = *(System_Action_o **)(v57 + 64);
  if ( !v102 )
  {
    v102 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v102,
      (Il2CppObject *)v57,
      Method_EventTutorialMaster___c__DisplayClass10_0__checkTutorial_b__0__,
      0LL);
    *(_QWORD *)(v57 + 64) = v102;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v57 + 64),
      (System_Int32_array **)v102,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v83, v102, v101);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  EventTutorialMaster_o *v26; // x25
  unsigned __int64 MasterName_k__BackingField_low; // x9
  unsigned __int64 v28; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x26
  struct EventTutorialEntity_array *sortedEntityArray; // x19
  int max_length; // w8
  unsigned int v32; // w20
  EventTutorialEntity_o *v33; // x27
  int32_t v34; // w8
  const MethodInfo *v35; // x5
  int v36; // w28
  struct System_String_o *MasterName_k__BackingField; // x9
  __int64 v38; // x8
  char *v39; // x9
  __int64 v41; // x0

  if ( (byte_42E84DF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_IndexOf_EventTutorialMaster_OpenType___,
      eventId,
      (_DWORD)openKinds,
      *(_QWORD *)&qId);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v20, v21, v22);
    this = (EventTutorialMaster_o *)sub_B5D5C4(
                                      &System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                      v23,
                                      v24,
                                      v25);
    byte_42E84DF = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_B5D5DC(int___TypeInfo, openKinds->max_length);
  v26 = this;
  if ( (int)openKinds->max_length >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      v28 = 0LL;
      while ( v28 < MasterName_k__BackingField_low )
      {
        *((_DWORD *)&this->fields.list + v28++) = 0;
        if ( (__int64)v28 >= (int)openKinds->max_length )
          goto LABEL_9;
      }
LABEL_27:
      v41 = sub_B5D6C8(this);
      sub_B5D668(v41, 0LL);
    }
LABEL_28:
    sub_B5D69C(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
        goto LABEL_27;
      v33 = sortedEntityArray->m_Items[v32];
      if ( !v33 )
        goto LABEL_28;
      v34 = v33->fields.eventId;
      if ( (v34 & 0x80000000) != 0 || v34 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
                                          (WellFired_USFGOActorChangePosition_PosSetType_array *)openKinds,
                                          v33->fields.openType,
                                          (const MethodInfo_1FC17DC *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v36 = (int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(v33, qId, bPhase, bWave, bTurn, v35);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v26 )
              goto LABEL_28;
            if ( (unsigned int)v36 >= LODWORD(v26->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v29 )
              goto LABEL_28;
            System_Collections_Generic_List_XWeaponTrail_Element___Insert(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v29,
              *((_DWORD *)&v26->fields.list + v36),
              (XWeaponTrail_Element_o *)v33,
              (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v26->fields._MasterName_k__BackingField;
            if ( v36 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      max_length = sortedEntityArray->max_length;
      if ( (int)++v32 >= max_length )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v29;
    }
    v38 = v36;
    while ( (unsigned int)v38 < (unsigned int)MasterName_k__BackingField )
    {
      v39 = (char *)v26 + 4 * v38++;
      ++*((_DWORD *)v39 + 8);
      MasterName_k__BackingField = v26->fields._MasterName_k__BackingField;
      if ( v38 >= (int)MasterName_k__BackingField )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v29;
}


System_Collections_Generic_List_EventTutorialEntity__o *__fastcall EventTutorialMaster__getEventTutorialEntity(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_String_o *targetIds,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  int32_t v6; // w19
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v28; // x1
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  int max_length; // w8
  const MethodInfo_3056FC0 **v31; // x28
  int v32; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x23
  EventTutorialEntity_o *v34; // x24
  int32_t v35; // w8
  struct System_String_array *v36; // x8
  __int64 v37; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x19
  const MethodInfo_3056FC0 **v39; // x23
  unsigned __int64 v40; // x28
  struct System_String_array *v41; // x8
  __int64 v43; // x0
  int32_t v44; // [xsp+Ch] [xbp-54h]

  v5 = (Il2CppObject *)targetIds;
  v6 = openKind;
  if ( (byte_42E84DD & 1) == 0 )
  {
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, eventId, openKind, targetIds);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15960/*"[]"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16018/*"[{0}]"*/, v23, v24, v25);
    byte_42E84DD = 1;
  }
  if ( !System_String__IsNullOrEmpty((System_String_o *)v5, 0LL) )
    v5 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_16018/*"[{0}]"*/, v5, 0LL);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_38;
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
    v33 = 0LL;
    if ( v26 )
      goto LABEL_33;
LABEL_38:
    sub_B5D69C(IsNullOrEmpty, v28);
  }
  v31 = (const MethodInfo_3056FC0 **)&Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  v32 = 0;
  v33 = 0LL;
  v44 = v6;
  do
  {
    if ( v32 >= (unsigned int)max_length )
    {
LABEL_39:
      v43 = sub_B5D6C8(IsNullOrEmpty);
      sub_B5D668(v43, 0LL);
    }
    v34 = sortedEntityArray->m_Items[v32];
    if ( !v34 )
      goto LABEL_38;
    v35 = v34->fields.eventId;
    if ( ((v35 & 0x80000000) != 0 || v35 == eventId) && v34->fields.openType == v6 )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v5, 0LL);
      if ( IsNullOrEmpty )
      {
        if ( !v26 )
          goto LABEL_38;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          *v31);
      }
      else
      {
        v36 = v34->fields.targetIds;
        if ( !v36 )
          goto LABEL_38;
        v37 = *(_QWORD *)&v36->max_length;
        if ( !v33 )
        {
          if ( !(_DWORD)v37
            || (IsNullOrEmpty = System_String__op_Equality(v36->m_Items[0], (System_String_o *)StringLiteral_15960/*"[]"*/, 0LL),
                v33 = 0LL,
                IsNullOrEmpty) )
          {
            v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)v34;
          }
        }
        if ( (int)v37 >= 1 )
        {
          v38 = v33;
          v39 = v31;
          v40 = 0LL;
          while ( 1 )
          {
            v41 = v34->fields.targetIds;
            if ( !v41 )
              goto LABEL_38;
            if ( v40 >= v41->max_length )
              goto LABEL_39;
            IsNullOrEmpty = System_String__op_Equality(v41->m_Items[v40], (System_String_o *)v5, 0LL);
            if ( IsNullOrEmpty )
              break;
            if ( (__int64)++v40 >= (int)v37 )
            {
              v31 = v39;
              goto LABEL_30;
            }
          }
          if ( !v26 )
            goto LABEL_38;
          v31 = v39;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
            *v39);
LABEL_30:
          v33 = v38;
          v6 = v44;
        }
      }
    }
    max_length = sortedEntityArray->max_length;
    ++v32;
  }
  while ( v32 < max_length );
  if ( !v26 )
    goto LABEL_38;
LABEL_33:
  if ( v33 && !v26->fields._size )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      v33,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v26;
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
        sub_B5D69C(this, targets);
      v8 = *(_QWORD *)&v7->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
        {
          v10 = sub_B5D6C8(this);
          sub_B5D668(v10, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v22; // w26
  int32_t v23; // w27
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v25; // x5
  __int64 v26; // x10
  int32_t v27; // w8

  if ( (byte_42E84CB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      openKind,
      *(_QWORD *)&qId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14, v15, v16);
    sub_B5D5C4(&EventTutorialEntity_TypeInfo, v17, v18, v19);
    byte_42E84CB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v22 = Count;
  v23 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      list,
                                      v23,
                                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v26 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == EventTutorialEntity_TypeInfo )
      {
        v27 = Item->fields.eventId;
        if ( ((v27 & 0x80000000) != 0 || v27 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, v25) )
        {
          return 1;
        }
      }
    }
    if ( ++v23 >= v22 )
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v25; // w27
  int32_t v26; // w28
  EventTutorialEntity_o *Item; // x0
  const MethodInfo *v28; // x5
  __int64 v29; // x10
  int32_t v30; // w8
  int32_t v32; // [xsp+8h] [xbp-58h]

  if ( (byte_42E84CA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      openKind,
      *(_QWORD *)&qId);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v17, v18, v19);
    sub_B5D5C4(&EventTutorialEntity_TypeInfo, v20, v21, v22);
    byte_42E84CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v32 = bPhase;
  v25 = Count;
  v26 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    Item = (EventTutorialEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      list,
                                      v26,
                                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v29 = *(&EventTutorialEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (EventTutorialEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == EventTutorialEntity_TypeInfo )
      {
        v30 = Item->fields.eventId;
        if ( ((v30 & 0x80000000) == 0 || !isChkEventId)
          && ((v30 & 0x80000000) != 0 || v30 == eventId)
          && Item->fields.openType == openKind
          && EventTutorialEntity__isEnableCondition(Item, qId, v32, bWave, bTurn, v28) )
        {
          return 1;
        }
      }
    }
    if ( ++v26 >= v25 )
      return 0;
  }
}


bool __fastcall EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  EventTutorialMaster___c_c *v39; // x8
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x20
  Il2CppObject *v42; // x21
  struct EventTutorialMaster___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x0
  EventTutorialMaster___c_c *v51; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x19
  struct EventTutorialMaster___c_StaticFields *v53; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_1; // x20
  Il2CppObject *v55; // x21
  struct EventTutorialMaster___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Int32_array **v64; // x0
  BattleServantConfConponent_o *v65; // x8
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x19
  struct EventTutorialMaster_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7

  if ( (byte_42E84C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___, v11, v12, v13);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_EventTutorialEntity__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_EventTutorialEntity__int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_EventTutorialMaster___c__preProcess_b__7_0__, v29, v30, v31);
    sub_B5D5C4(&Method_EventTutorialMaster___c__preProcess_b__7_1__, v32, v33, v34);
    sub_B5D5C4(&EventTutorialMaster___c_TypeInfo, v35, v36, v37);
    byte_42E84C6 = 1;
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v39 = EventTutorialMaster___c_TypeInfo;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v39 = EventTutorialMaster___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_0,
      v42,
      Method_EventTutorialMaster___c__preProcess_b__7_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v43 = EventTutorialMaster___c_TypeInfo->static_fields;
    v43->__9__7_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v43->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v38,
          (System_Func_TSource__TKey__o *)_9__7_0,
          (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v51 = EventTutorialMaster___c_TypeInfo;
  v52 = v50;
  if ( (BYTE3(EventTutorialMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTutorialMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo);
    v51 = EventTutorialMaster___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v53->__9__7_1;
  if ( !_9__7_1 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v53 = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__7_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__7_1,
      v55,
      Method_EventTutorialMaster___c__preProcess_b__7_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventTutorialEntity__int___ctor__);
    v56 = EventTutorialMaster___c_TypeInfo->static_fields;
    v56->__9__7_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__7_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v56->__9__7_1,
      (System_Int32_array **)_9__7_1,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v52,
                                                               (System_Func_TSource__TKey__o *)_9__7_1,
                                                               (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v64 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v63,
                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  v65 = (BattleServantConfConponent_o *)EventTutorialMaster_TypeInfo->static_fields;
  v65->klass = (BattleServantConfConponent_c *)v64;
  sub_B5D560(v65, v64, v66, v67, v68, v69, v70, v71);
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v73 = EventTutorialMaster_TypeInfo->static_fields;
  v73->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v72;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v73->checkedEntityList,
    (System_Int32_array **)v72,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  return 1;
}


void __fastcall EventTutorialMaster__showTutorialWithoutCheck(
        EventTutorialMaster_o *this,
        int32_t eventId,
        int32_t openKind,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x23
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x1
  const MethodInfo *v21; // x4
  struct EventTutorialEntity_array *sortedEntityArray; // x24
  int max_length; // w8
  unsigned int v24; // w25
  int32_t missionConditionDetailId; // w8
  __int64 v26; // x0

  if ( (byte_42E84D5 & 1) == 0 )
  {
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, eventId, openKind, callback);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v15, v16, v17);
    byte_42E84D5 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_15;
  max_length = sortedEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        v26 = sub_B5D6C8(v19);
        sub_B5D668(v26, 0LL);
      }
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sortedEntityArray->m_Items[v24];
      if ( !v20 )
        break;
      missionConditionDetailId = v20->fields.missionConditionDetailId;
      if ( ((missionConditionDetailId & 0x80000000) != 0 || missionConditionDetailId == eventId)
        && v20->fields.eventId == openKind )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          v20,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(v19, v20);
  }
LABEL_14:
  EventTutorialMaster__tutorialChainWithoutCheck(
    this,
    (System_Collections_Generic_List_EventTutorialEntity__o *)v18,
    0,
    callback,
    v21);
}


void __fastcall EventTutorialMaster__showTutorialWithoutCheck_24736076(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  _BOOL8 isEnableCondition; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x5
  struct EventTutorialEntity_array *sortedEntityArray; // x22
  int max_length; // w8
  unsigned int v44; // w23
  EventTutorialEntity_o *v45; // x21
  int32_t v46; // w8
  const MethodInfo *v47; // x2
  System_Action_o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0

  if ( (byte_42E84D8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, openKind, callbackAfter);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__, v20, v21, v22);
    sub_B5D5C4(&EventTutorialMaster___c__DisplayClass26_0_TypeInfo, v23, v24, v25);
    byte_42E84D8 = 1;
  }
  v26 = sub_B5D694(EventTutorialMaster___c__DisplayClass26_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass26_0___ctor((EventTutorialMaster___c__DisplayClass26_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_18;
  *(_QWORD *)(v26 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 32) = callbackAfter;
  *(_DWORD *)(v26 + 24) = eventId;
  *(_DWORD *)(v26 + 28) = openKind;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v26 + 32),
    (System_Int32_array **)callbackAfter,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *(_DWORD *)(v26 + 40) = qId;
  *(_DWORD *)(v26 + 44) = bPhase;
  *(_DWORD *)(v26 + 48) = bWave;
  *(_DWORD *)(v26 + 52) = bTurn;
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_B5D69C(isEnableCondition, v28);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v26 + 32), 0LL);
  }
  else
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= max_length )
      {
        v55 = sub_B5D6C8(isEnableCondition);
        sub_B5D668(v55, 0LL);
      }
      v45 = sortedEntityArray->m_Items[v44];
      if ( !v45 )
        goto LABEL_18;
      v46 = v45->fields.eventId;
      if ( ((v46 & 0x80000000) != 0 || v46 == *(_DWORD *)(v26 + 24)) && v45->fields.openType == *(_DWORD *)(v26 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v45,
                              *(_DWORD *)(v26 + 40),
                              *(_DWORD *)(v26 + 44),
                              *(_DWORD *)(v26 + 48),
                              *(_DWORD *)(v26 + 52),
                              v41);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_14;
    }
    v48 = *(System_Action_o **)(v26 + 56);
    if ( !v48 )
    {
      v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v26,
        Method_EventTutorialMaster___c__DisplayClass26_0__showTutorialWithoutCheck_b__0__,
        0LL);
      *(_QWORD *)(v26 + 56) = v48;
      sub_B5D560((BattleServantConfConponent_o *)(v26 + 56), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
    }
    EventTutorialEntity__OpenTutorial(v45, v48, v47);
  }
}


void __fastcall EventTutorialMaster__tutorialChainWithoutCheck(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_EventTutorialEntity__o *tutoList,
        int32_t index,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
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
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x19
  __int64 v43; // x21
  int v44; // w8
  EventTutorialEntity_o *v45; // x19
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x2

  if ( (byte_42E84DA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)tutoList, index, callback);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventTutorialMaster___c__DisplayClass28_0_TypeInfo, v18, v19, v20);
    byte_42E84DA = 1;
  }
  v21 = sub_B5D694(EventTutorialMaster___c__DisplayClass28_0_TypeInfo);
  EventTutorialMaster___c__DisplayClass28_0___ctor((EventTutorialMaster___c__DisplayClass28_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_11;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = tutoList;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)tutoList, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v21 + 40) = callback;
  *(_DWORD *)(v21 + 32) = index;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 40), (System_Int32_array **)callback, v36, v37, v38, v39, v40, v41);
  v42 = *(_QWORD *)(v21 + 24);
  if ( !v42 )
    goto LABEL_11;
  v43 = *(int *)(v21 + 32);
  v44 = *(_DWORD *)(v42 + 24);
  if ( (int)v43 < v44 )
  {
    if ( v44 <= (unsigned int)v43 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v45 = *(EventTutorialEntity_o **)(*(_QWORD *)(v42 + 16) + 8 * v43 + 32);
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v21,
      Method_EventTutorialMaster___c__DisplayClass28_0__tutorialChainWithoutCheck_b__0__,
      0LL);
    if ( v45 )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag(v45, v46, v47);
      return;
    }
LABEL_11:
    sub_B5D69C(v22, v23);
  }
  ActionExtensions__Call(*(System_Action_o **)(v21 + 40), 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Int32_array *eventIds; // x21
  System_Collections_Generic_List_int__o *OpenEventIds; // x0
  __int64 v10; // x1
  __int64 v12; // x0

  if ( (byte_42E56AC & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    byte_42E56AC = 1;
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
                     (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        this->fields.eventIds = eventIds;
        sub_B5D560(&this->fields.eventIds);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_B5D5DC(int___TypeInfo, 1LL);
      if ( OpenEventIds )
      {
        eventIds = (struct System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
        {
          v12 = sub_B5D6C8(OpenEventIds);
          sub_B5D668(v12, 0LL);
        }
        LODWORD(OpenEventIds->fields._syncRoot) = this->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_B5D69C(OpenEventIds, v10);
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
  int v2; // w2
  __int64 v3; // x3
  EventTutorialMaster__CoCheckTutorialLocal_d__11_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int32_t _1__state; // w8
  Il2CppObject *v42; // x21
  struct EventTutorialMaster___c__DisplayClass11_0_o **p__8__1; // x20
  struct EventTutorialEntity_array **p__7__wrap1; // x20
  int v45; // w8
  struct EventTutorialMaster___c__DisplayClass11_1_o **p__8__2; // x21
  EventTutorialEntity_o **p_data_5__4; // x20
  struct EventTutorialMaster___c__DisplayClass11_0_o *v48; // x8
  Il2CppObject *v49; // x22
  struct EventTutorialMaster___c__DisplayClass11_0_o *v50; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v51; // x8
  struct EventTutorialMaster___c__DisplayClass11_0_o *v52; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v53; // x8
  Il2CppObject *v54; // x20
  Il2CppClass *klass; // x8
  _BYTE *data; // x8
  EventTutorialEntity_o *data_5__4; // x22
  Il2CppObject *_8__2; // x24
  System_Action_o *v59; // x23
  struct EventTutorialMaster___c__DisplayClass11_1_o *v60; // x22
  EventTutorialEntity_o *v61; // x8
  int32_t eventId; // w21
  int32_t flagType; // w22
  struct EventTutorialEntity_array *v64; // x9
  int max_length; // w10
  struct EventTutorialMaster___c__DisplayClass11_0_o *_8__1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  bool result; // w0
  System_Func_bool__o *v69; // x20
  UnityEngine_WaitWhile_o *v70; // x21
  Il2CppObject **p__2__current; // x19
  System_Func_bool__o *monitor; // x21
  UnityEngine_WaitWhile_o *v73; // x20
  Il2CppObject **v74; // x19
  __int64 v75; // x0

  v4 = this;
  if ( (byte_42E56AA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__, v23, v24, v25);
    sub_B5D5C4(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, v29, v30, v31);
    sub_B5D5C4(&Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__, v32, v33, v34);
    sub_B5D5C4(&EventTutorialMaster___c__DisplayClass11_1_TypeInfo, v35, v36, v37);
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)sub_B5D5C4(
                                                                  &UnityEngine_WaitWhile_TypeInfo,
                                                                  v38,
                                                                  v39,
                                                                  v40);
    byte_42E56AA = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__2 = &v4->fields.__8__2;
    p_data_5__4 = &v4->fields._data_5__4;
    v4->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state == 1 )
  {
    p__8__2 = &v4->fields.__8__2;
    v4->fields.__1__state = -1;
    goto LABEL_27;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v42 = (Il2CppObject *)sub_B5D694(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v42, 0LL);
  p__8__1 = &v4->fields.__8__1;
  v4->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass11_0_o *)v42;
  sub_B5D560(&v4->fields.__8__1);
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_55;
  *(_QWORD *)&this->fields.__1__state = v4->fields.args;
  sub_B5D560(&this->fields);
  if ( !*p__8__1 )
    goto LABEL_55;
  if ( !(*p__8__1)->fields.args )
    return 0;
  v4->fields.__7__wrap1 = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  p__7__wrap1 = &v4->fields.__7__wrap1;
  sub_B5D560(&v4->fields.__7__wrap1);
  v45 = 0;
  for ( v4->fields.__7__wrap2 = 0; ; v4->fields.__7__wrap2 = v45 )
  {
    v64 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      goto LABEL_55;
    max_length = v64->max_length;
    if ( v45 >= max_length )
    {
      v4->fields.__7__wrap1 = 0LL;
      sub_B5D560(p__7__wrap1);
      _8__1 = v4->fields.__8__1;
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
      sub_B5D69C(this, method);
    }
    if ( v45 >= (unsigned int)max_length )
    {
      v75 = sub_B5D6C8(this);
      sub_B5D668(v75, 0LL);
    }
    v4->fields._data_5__4 = v64->m_Items[v45];
    p_data_5__4 = &v4->fields._data_5__4;
    sub_B5D560(&v4->fields._data_5__4);
    v48 = v4->fields.__8__1;
    if ( !v48 )
      goto LABEL_55;
    this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialMaster__IsOpenCondition(
                                                                  *p_data_5__4,
                                                                  v48->fields.args,
                                                                  0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_32:
    v61 = *p_data_5__4;
    if ( !*p_data_5__4 )
      goto LABEL_55;
    if ( v61->fields.flag == 1 )
    {
      eventId = v61->fields.eventId;
      flagType = v61->fields.flagType;
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( !TutorialFlag__Get_29297972(flagType, eventId, 0LL) )
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      0LL,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*p_data_5__4 || !this )
          goto LABEL_55;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)this,
          (*p_data_5__4)->fields.flagType,
          (*p_data_5__4)->fields.eventId,
          0LL);
      }
    }
    v4->fields._data_5__4 = 0LL;
    sub_B5D560(p_data_5__4);
    p__7__wrap1 = &v4->fields.__7__wrap1;
    v45 = v4->fields.__7__wrap2 + 1;
  }
  v49 = (Il2CppObject *)sub_B5D694(EventTutorialMaster___c__DisplayClass11_1_TypeInfo);
  System_Object___ctor(v49, 0LL);
  v4->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass11_1_o *)v49;
  p__8__2 = &v4->fields.__8__2;
  sub_B5D560(&v4->fields.__8__2);
  v50 = v4->fields.__8__1;
  if ( !v50 )
    goto LABEL_55;
  v51 = v50->fields.args;
  if ( !v51 )
    goto LABEL_55;
  if ( !v51->fields.adapter )
    goto LABEL_27;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)*p_data_5__4;
  if ( !*p_data_5__4 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)EventTutorialEntity__HasBeforeAction(
                                                                (EventTutorialEntity_o *)this,
                                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_27;
  v52 = v4->fields.__8__1;
  if ( !v52 )
    goto LABEL_55;
  v53 = v52->fields.args;
  if ( !v53 )
    goto LABEL_55;
  this = (EventTutorialMaster__CoCheckTutorialLocal_d__11_o *)v53->fields.adapter;
  if ( !this )
    goto LABEL_55;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)this, v4->fields._data_5__4, 0LL);
  v54 = (Il2CppObject *)v4->fields.__8__1;
  if ( !v54 )
    goto LABEL_55;
  klass = v54[1].klass;
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
    p_data_5__4 = &v4->fields._data_5__4;
    data_5__4 = v4->fields._data_5__4;
    _8__2 = (Il2CppObject *)v4->fields.__8__2;
    v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v59, _8__2, Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__1__, 0LL);
    if ( !data_5__4 )
      goto LABEL_55;
    EventTutorialEntity__OpenTutorial(data_5__4, v59, 0LL);
    v60 = *p__8__2;
    if ( !*p__8__2 )
      goto LABEL_55;
    if ( v60->fields.isBusy )
    {
      v69 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v69,
        (Il2CppObject *)v60,
        Method_EventTutorialMaster___c__DisplayClass11_1__CoCheckTutorialLocal_b__2__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v70 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v70, v69, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v70;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
LABEL_31:
    *p__8__2 = 0LL;
    sub_B5D560(p__8__2);
    goto LABEL_32;
  }
  monitor = (System_Func_bool__o *)v54[1].monitor;
  if ( !monitor )
  {
    monitor = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      monitor,
      v54,
      Method_EventTutorialMaster___c__DisplayClass11_0__CoCheckTutorialLocal_b__0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v54[1].monitor = monitor;
    sub_B5D560(&v54[1].monitor);
  }
  v73 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v73, monitor, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v73;
  v74 = &v4->fields.__2__current;
  sub_B5D560(v74);
  result = 1;
  *((_DWORD *)v74 - 2) = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__11_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  bool result; // w0
  EventTutorialMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  int32_t v12; // w8

  if ( (byte_42E56AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventTutorialMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E56AB = 1;
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
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventTutorialMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v11);
    this->fields.__2__current = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                                                  Master_WarQuestSelectionMaster,
                                                  this->fields.args,
                                                  0LL);
    sub_B5D560(&this->fields.__2__current);
    v12 = 1;
    result = 1;
  }
  this->fields.__1__state = v12;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__17_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventTutorialMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E56A8 & 1) == 0 )
  {
    sub_B5D5C4(&EventTutorialMaster___c_TypeInfo, v1, v2, v3);
    byte_42E56A8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventTutorialMaster___c___ctor(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialMaster___c___OpenTutorialImages_b__24_0(
        EventTutorialMaster___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  MissionNotifyManager_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42E56A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4, v5, v6);
    byte_42E56A9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v7 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  MissionNotifyManager__EndPause(v7, 0LL);
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return -x->fields.priority;
}


int32_t __fastcall EventTutorialMaster___c___preProcess_b__7_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, method);
  EventTutorialMaster__checkTutorial_24730284(
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
    sub_B5D69C(0LL, method);
  EventTutorialMaster__checkTutorial_24730284(
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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