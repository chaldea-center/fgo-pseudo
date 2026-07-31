void EventTutorialMaster___ctor(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_HashSet_int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59389BC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_59389BC = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.openedEventIds = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.openedEventIds, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.refreshedWarIds = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.refreshedWarIds,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    173,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string___ctor__);
}


System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__o *EventTutorialMaster__BuildTerminalTutorialPreloadArgs(
        int32_t mapId,
        int32_t eventId,
        bool includeBlankEarthTutorial,
        bool isPlanetMap,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x20
  System_Array_o *v10; // x0
  System_RuntimeFieldHandle_o v11; // x1
  System_Array_o *v12; // x25
  __int64 v13; // x24
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int32_t v34; // w1
  MissionNaviTransitionBoardItem_o *v35; // x0
  __int64 v36; // x23
  __int64 v37; // x1
  TerminalPramsManager_c *v38; // x0
  int v39; // w8
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x8
  System_Collections_Generic_List_object__o *v45; // x0
  Il2CppObject *v46; // x1
  __int64 v47; // x23
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t version; // w10
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x21
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w10
  int v67; // w9
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0

  if ( (byte_59389BB & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__TypeInfo);
    sub_21FFC50(&EventTutorialMaster_OpenType___TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    byte_59389BB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs___ctor__);
  if ( mapId >= 1 )
  {
    v10 = (System_Array_o *)sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 3);
    v11.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v12 = v10;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v10, v11, 0);
    v13 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v16 = (TerminalPramsManager_c *)WarMaster__getEventID(v15->static_fields->_WarId_k__BackingField, 0);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 24) = v12;
      *(_DWORD *)(v13 + 16) = (_DWORD)v16;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)v12, v18, v19, v20, v21, v22, v23);
      *(_DWORD *)(v13 + 40) = mapId;
      if ( v9 )
      {
        items = v9->fields._items;
        v31 = Method_System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__Add__;
        ++v9->fields._version;
        if ( items )
        {
          size = v9->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
          {
            v33 = &items->obj.klass + size;
            v34 = v13;
            v9->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v13;
            v35 = (MissionNaviTransitionBoardItem_o *)(v33 + 4);
LABEL_30:
            sub_21FFBF4(v35, v34, v24, v25, v26, v27, v28, v29);
            goto LABEL_34;
          }
          v44 = v31[4];
          v45 = v9;
          v46 = (Il2CppObject *)v13;
          goto LABEL_33;
        }
      }
    }
LABEL_51:
    sub_21FFECC(v16, v17);
  }
  v36 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v16 = (TerminalPramsManager_c *)WarMaster__getEventID(v38->static_fields->_WarId_k__BackingField, 0);
  if ( !v36 )
    goto LABEL_51;
  v39 = (unsigned __int8)byte_5932644;
  *(_DWORD *)(v36 + 16) = (_DWORD)v16;
  *(_DWORD *)(v36 + 20) = 18;
  if ( !v39 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17);
    v16 = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(v36 + 40) = v16->static_fields->_WarId_k__BackingField;
  if ( !v9 )
    goto LABEL_51;
  v40 = v9->fields._items;
  v41 = Method_System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__Add__;
  ++v9->fields._version;
  if ( !v40 )
    goto LABEL_51;
  v42 = v9->fields._size;
  if ( (unsigned int)v42 < LODWORD(v40->max_length) )
  {
    v43 = &v40->obj.klass + v42;
    v34 = v36;
    v9->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v36;
    v35 = (MissionNaviTransitionBoardItem_o *)(v43 + 4);
    goto LABEL_30;
  }
  v44 = v41[4];
  v45 = v9;
  v46 = (Il2CppObject *)v36;
LABEL_33:
  System_Collections_Generic_List_object___AddWithResize(
    v45,
    v46,
    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v44 + 192) + 112LL));
LABEL_34:
  if ( eventId < 1 )
    goto LABEL_39;
  v47 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v47, 0);
  if ( !v47 )
    goto LABEL_51;
  version = v9->fields._version;
  v55 = v9->fields._items;
  *(_DWORD *)(v47 + 16) = eventId;
  *(_DWORD *)(v47 + 20) = 104;
  v56 = Method_System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__Add__;
  v9->fields._version = version + 1;
  if ( !v55 )
    goto LABEL_51;
  v57 = v9->fields._size;
  if ( (unsigned int)v57 < LODWORD(v55->max_length) )
  {
    v58 = &v55->obj.klass + v57;
    v9->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v47;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v58 + 4), v47, v48, v49, v50, v51, v52, v53);
LABEL_39:
    if ( !includeBlankEarthTutorial )
      return (System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__o *)v9;
    goto LABEL_42;
  }
  System_Collections_Generic_List_object___AddWithResize(
    v9,
    (Il2CppObject *)v47,
    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  if ( !includeBlankEarthTutorial )
    return (System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__o *)v9;
LABEL_42:
  v59 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  System_Object___ctor((Il2CppObject *)v59, 0);
  if ( !v59 )
    goto LABEL_51;
  v66 = v9->fields._version;
  v67 = isPlanetMap ? 108 : 83;
  v68 = v9->fields._items;
  *(_DWORD *)(v59 + 16) = 0;
  *(_DWORD *)(v59 + 20) = v67;
  v69 = Method_System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__Add__;
  v9->fields._version = v66 + 1;
  if ( !v68 )
    goto LABEL_51;
  v70 = v9->fields._size;
  if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v59,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &v68->obj.klass + v70;
    v9->fields._size = v70 + 1;
    v71[4] = (Il2CppClass *)v59;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v71 + 4), v59, v60, v61, v62, v63, v64, v65);
  }
  return (System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__o *)v9;
}


bool EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
        int32_t eventId,
        int32_t eventTutorialFlag,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  __int64 v6; // x1
  bool IsTutorialAvailable; // w21

  if ( (byte_59389A5 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_59389A5 = 1;
  }
  IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(eventId, 0, 0, 0, 0, 0, v3);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
  return IsTutorialAvailable & ~CondType__IsEventTutorialFlagOn(eventId, eventTutorialFlag, 0) & 1;
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w8
  EventTutorialMaster_o *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x25
  const MethodInfo *isEventIdOneOrMore; // [xsp+8h] [xbp-68h]
  const MethodInfo *v20; // [xsp+10h] [xbp-60h]

  if ( (byte_593899A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593899A = 1;
  }
  v15 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  if ( eventId > 0 )
  {
    if ( !v15 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&openKind);
    Master_object = (EventTutorialMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
LABEL_12:
    sub_21FFECC(Master_object, v17);
  }
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&openKind);
  v18 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  Master_object = (EventTutorialMaster_o *)EventTutorialMaster__GetOpenEventIds((const MethodInfo *)v18);
  if ( !v18 )
    goto LABEL_12;
  EventTutorialMaster__checkTutorial_49206860(
    (EventTutorialMaster_o *)v18,
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
  int v18; // w8
  Il2CppObject *Master_object; // x25
  const MethodInfo *isEventIdOneOrMore; // [xsp+8h] [xbp-68h]
  const MethodInfo *v21; // [xsp+10h] [xbp-60h]

  v14 = eventId;
  if ( (byte_593899B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    *(_QWORD *)&eventId = sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_593899B = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    goto LABEL_15;
  size = checkedEntityList->fields._size;
  v17 = checkedEntityList->fields._version + 1;
  checkedEntityList->fields._size = 0;
  checkedEntityList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)checkedEntityList->fields._items, 0, size, 0);
  v18 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  if ( v14 > 0 )
  {
    if ( !v18 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&openKind);
    *(_QWORD *)&eventId = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
LABEL_15:
    sub_21FFECC(*(_QWORD *)&eventId, *(_QWORD *)&openKind);
  }
  if ( !v18 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&openKind);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  *(_QWORD *)&eventId = EventTutorialMaster__GetOpenEventIds((const MethodInfo *)Master_object);
  if ( !Master_object )
    goto LABEL_15;
  EventTutorialMaster__checkTutorial_49206860(
    (EventTutorialMaster_o *)Master_object,
    *(System_Collections_Generic_List_int__o **)&eventId,
    openKind,
    callbackAfter,
    qId,
    bPhase,
    bWave,
    bTurn,
    1,
    0,
    v21);
}


void EventTutorialMaster__ClearLocalCheckedEntities(const MethodInfo *method)
{
  __int64 v1; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *checkedEntityList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_593899C & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    method = (const MethodInfo *)sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Clear__);
    byte_593899C = 1;
  }
  checkedEntityList = EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !checkedEntityList )
    sub_21FFECC(method, v1);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5938996 & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster__CoCheckTutorialLocal_d__13_TypeInfo);
    byte_5938996 = 1;
  }
  v5 = sub_21FFEBC(EventTutorialMaster__CoCheckTutorialLocal_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = args;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)args, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *EventTutorialMaster__CoRunTutorialPreloadPipeline(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593899E & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_TypeInfo);
    byte_593899E = 1;
  }
  v3 = sub_21FFEBC(EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = args;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)args, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *EventTutorialMaster__CoWaitLoadVoiceIfNeeded(
        QuestAfterAction_o *questAfterAction,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593899F & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_TypeInfo);
    byte_593899F = 1;
  }
  v3 = sub_21FFEBC(EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = questAfterAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)questAfterAction, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *EventTutorialMaster__CoroutineCheckTutorial(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593899D & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster__CoroutineCheckTutorial_d__20_TypeInfo);
    byte_593899D = 1;
  }
  v3 = sub_21FFEBC(EventTutorialMaster__CoroutineCheckTutorial_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = args;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)args, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialMaster__GetAvailableEventTutorialEntitys(
        int32_t eventId,
        EventTutorialMaster_OpenType_array *openKinds,
        int32_t qId,
        int32_t bPhase,
        int32_t bWave,
        int32_t bTurn,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_59389B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v16);
  }
  return EventTutorialMaster__getAvailableEventTutorialEntitys(
           (EventTutorialMaster_o *)Instance,
           eventId,
           openKinds,
           qId,
           bPhase,
           bWave,
           bTurn,
           targetId,
           v18);
}


EventTutorialEntity_array *EventTutorialMaster__GetAvailableTutorialArray(
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x19
  System_Func_object__bool__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_59389A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass27_0__GetAvailableTutorialArray_b__0__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass27_0_TypeInfo);
    byte_59389A4 = 1;
  }
  v3 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 16) = args;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)args, v6, v7, v8, v9, v10, v11);
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  v13 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventTutorialEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_EventTutorialMaster___c__DisplayClass27_0__GetAvailableTutorialArray_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (EventTutorialEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                        v14,
                                        (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
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

  if ( (byte_59389BD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
    byte_59389BD = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&num);
  return (EventTutorialEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__GetEntity__);
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

  if ( (byte_59389AE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v8);
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
  int32_t v8; // [xsp+8h] [xbp-28h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59389B9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10371/*"OnceDailyDispTutorialInfo_{0}_{1}"*/);
    byte_59389B9 = 1;
  }
  v9 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v9);
  v8 = flagType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v8);
  return System_String__Format_75484576((System_String_o *)StringLiteral_10371/*"OnceDailyDispTutorialInfo_{0}_{1}"*/, v5, v6, 0);
}


System_Collections_Generic_List_int__o *EventTutorialMaster__GetOpenEventIds(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 id; // x1
  EventEntity_array *EnableEntityList; // x19
  System_Collections_Generic_List_int__o *v4; // x20
  int max_length; // w8
  unsigned int v6; // w22
  EventEntity_o *v7; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_59389AD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_17;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 0, 0, 1, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EnableEntityList )
    goto LABEL_17;
  max_length = EnableEntityList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_21FFED4(Instance);
      v7 = EnableEntityList->m_Items[v6];
      if ( !v7 )
        break;
      if ( !v4 )
        break;
      items = v4->fields._items;
      id = (unsigned int)v7->fields.id;
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
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_21FFECC(Instance, id);
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
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  System_Func_EventTutorialEntity__bool__c *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *sortedEntityArray; // x22
  System_Func_object__bool__o *v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_59389BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_EventTutorialEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&System_Func_EventTutorialEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass49_0__GetTutorialEntityList_b__0__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass49_0_TypeInfo);
    byte_59389BA = 1;
  }
  v6 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_21FFECC(v7, v8);
  static_fields = EventTutorialMaster_TypeInfo->static_fields;
  v10 = System_Func_EventTutorialEntity__bool__TypeInfo;
  *(_DWORD *)(v6 + 16) = eventId;
  *(_DWORD *)(v6 + 20) = flagType;
  sortedEntityArray = (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->sortedEntityArray;
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(v10);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_EventTutorialMaster___c__DisplayClass49_0__GetTutorialEntityList_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          sortedEntityArray,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventTutorialEntity___);
  return (System_Collections_Generic_List_EventTutorialEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v13,
                                                                     (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_EventTutorialEntity___);
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
  const MethodInfo *v25; // x6

  if ( (byte_5938999 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_5938999 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v21 = Item->fields.eventId, v22 = Item, (v21 & 0x80000000) == 0) && v21 != eventId
        || Item->fields.openType != openKind
        || (Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(Item, *(const MethodInfo **)&eventId),
            !EventTutorialMaster__isTargetIdExistFromArray(Targets, (System_Int32_array_array *)Targets, targetId, v24))
        || !EventTutorialEntity__isOpenCondition(v22, qId, bPhase, bWave, bTurn, -1, v25) )
      {
        v19 = ++v18 < v17;
        if ( v17 != v18 )
          continue;
      }
      return v19;
    }
LABEL_17:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool EventTutorialMaster__IsOpenCondition(
        EventTutorialEntity_o *data,
        EventTutorialMaster_EventTutorialArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  EventTutorialEntity_o *v5; // x20
  System_Collections_Generic_IEnumerable_TSource__o *EventIds; // x0
  _BOOL4 v7; // w21
  _BOOL4 v8; // w8

  v5 = data;
  if ( (byte_59389A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    data = (EventTutorialEntity_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
    byte_59389A6 = 1;
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
             (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_9;
    }
LABEL_17:
    sub_21FFECC(data, args);
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
           (const MethodInfo_3843278 *)Method_System_Linq_Enumerable_Contains_EventTutorialMaster_OpenType___);
  return v8
      && v7
      && EventTutorialEntity__isOpenCondition(
           v5,
           args->fields.qId,
           args->fields.bPhase,
           args->fields.bWave,
           args->fields.bTurn,
           -1,
           v3);
}


bool EventTutorialMaster__IsOpenOnceDailyDispTutorial(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v5; // x1
  EventTutorialMaster_o *Time; // x0
  const MethodInfo *v7; // x2
  bool v8; // w8
  int64_t endedTime; // [xsp+8h] [xbp-28h] BYREF
  int64_t startedTime; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_59389B5 & 1) == 0 )
  {
    this = (EventTutorialMaster_o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59389B5 = 1;
  }
  startedTime = 0;
  endedTime = 0;
  if ( entity && EventTutorialMaster__TryGetEventTimes(this, entity, &startedTime, &endedTime, v3) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    Time = (EventTutorialMaster_o *)NetworkManager__getTime(0);
    v8 = 0;
    if ( (__int64)Time >= startedTime && (__int64)Time <= endedTime )
      return !EventTutorialMaster__IsShownOnceDailyTutorial(Time, entity, v7);
  }
  else
  {
    return 0;
  }
  return v8;
}


bool EventTutorialMaster__IsShownOnceDailyTutorial(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o *entity,
        const MethodInfo *method)
{
  System_Int32_array *OnceDailyDispTutorialResetTime; // x0
  __int64 v5; // x1
  int max_length; // w8
  int32_t v7; // w20
  int32_t v8; // w21
  System_DateTime_o v9; // x1
  System_DateTime_o v10; // x0
  int32_t Year; // w22
  System_DateTime_o v12; // x0
  int32_t Month; // w23
  System_DateTime_o v14; // x0
  int32_t Day; // w3
  System_DateTime_o v16; // x0
  System_DateTime_o v17; // x0
  System_DateTime_o v18; // x0
  System_DateTime_o v19; // x1
  System_DateTime_o v20; // x0
  const MethodInfo *v21; // x2
  System_String_o *OnceDailyDispTutorialSaveKey; // x0
  System_String_o *String_83184936; // x0
  __int64 v24; // x1
  int64_t v25; // x20
  System_DateTime_o v27; // x0
  System_DateTime_o v28; // x1
  System_DateTime_o v29; // x19
  System_DateTime_o v30; // x0
  int64_t v31; // [xsp+0h] [xbp-60h] BYREF
  uint64_t v32; // [xsp+8h] [xbp-58h] BYREF
  uint64_t v33; // [xsp+10h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59389B6 & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59389B6 = 1;
  }
  v33 = 0;
  dateData = 0;
  v31 = 0;
  v32 = 0;
  if ( !entity )
    return 0;
  OnceDailyDispTutorialResetTime = EventTutorialEntity__GetOnceDailyDispTutorialResetTime(
                                     entity,
                                     (const MethodInfo *)entity);
  if ( !OnceDailyDispTutorialResetTime || (max_length = OnceDailyDispTutorialResetTime->max_length, max_length < 1) )
  {
    v7 = 0;
    goto LABEL_9;
  }
  v7 = OnceDailyDispTutorialResetTime->m_Items[0];
  if ( max_length == 1 )
  {
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
  v8 = OnceDailyDispTutorialResetTime->m_Items[1];
LABEL_10:
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9.fields._dateData);
  v10.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v10, 0);
  v12.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v12, 0);
  v14.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v14, 0);
  v16.fields._dateData = (uint64_t)&v33;
  System_DateTime___ctor_76800996(v16, Year, Month, Day, v7, v8, 0, 0);
  v17.fields._dateData = (uint64_t)&v33;
  v18.fields._dateData = System_DateTime__AddDays(v17, -1.0, 0).fields._dateData;
  v19.fields._dateData = v33;
  v32 = v18.fields._dateData;
  v20.fields._dateData = dateData;
  if ( System_DateTime__op_GreaterThan(v20, v19, 0) )
    v32 = v33;
  OnceDailyDispTutorialSaveKey = EventTutorialMaster__GetOnceDailyDispTutorialSaveKey(
                                   entity->fields.eventId,
                                   entity->fields.flagType,
                                   v21);
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(OnceDailyDispTutorialSaveKey, 0);
  if ( System_Int64__TryParse(String_83184936, &v31, 0) )
  {
    v25 = v31;
  }
  else
  {
    v25 = 0;
    v31 = 0;
  }
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v24);
  v27.fields._dateData = (uint64_t)&v32;
  v29.fields._dateData = System_DateTime__AddHours(v27, -9.0, 0).fields._dateData;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28.fields._dateData);
  v30.fields._dateData = v29.fields._dateData;
  return v25 > NetworkManager__getTime_48310584(v30, 0);
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

  if ( (byte_59389A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v14);
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

  if ( (byte_59389A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v16);
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

  if ( (byte_59389A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v16);
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
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__31_0; // x21
  Il2CppObject *v9; // x22
  struct EventTutorialMaster___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59389A8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_EventTutorialMaster___c__OpenTutorialImages_b__31_0__);
    sub_21FFC50(&EventTutorialMaster___c_TypeInfo);
    byte_59389A8 = 1;
  }
  if ( imageIds && imageIds->max_length )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (CommonUI_o *)Instance;
    v6 = EventTutorialMaster___c_TypeInfo;
    if ( !*(&EventTutorialMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v4);
      v6 = EventTutorialMaster___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__31_0 = static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v4);
        static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(_9__31_0, v9, Method_EventTutorialMaster___c__OpenTutorialImages_b__31_0__, 0);
      v10 = EventTutorialMaster___c_TypeInfo->static_fields;
      v10->__9__31_0 = _9__31_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__31_0, (int32_t)_9__31_0, v11, v12, v13, v14, v15, v16);
    }
    if ( !v5 )
LABEL_15:
      sub_21FFECC(Instance, v4);
    CommonUI__OpenTutorialImageDialog_37315544(v5, imageIds, -1, 0, _9__31_0, 0, 0, 0, 0);
  }
}


void EventTutorialMaster__PlayTutorialSetUpAction(EventTutorialMaster_o *this, int32_t mapId, const MethodInfo *method)
{
  System_Array_o *v4; // x0
  System_RuntimeFieldHandle_o v5; // x1
  System_Array_o *v6; // x21
  __int64 v7; // x19
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  QuestAfterAction_o *EventID; // x0
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  int v20; // w8
  TerminalPramsManager_c *v21; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  __int64 v23; // x1
  EventTutorialMaster___c_c *v24; // x8
  EventTutorialEntity_array *v25; // x19
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__41_0; // x20
  Il2CppObject *v28; // x21
  struct EventTutorialMaster___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_String_array *v37; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v38; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v39; // x0
  System_Object_array *v40; // x20
  TerminalPramsManager_c *v41; // x0
  int max_length; // w8
  unsigned int v43; // w25
  EventTutorialEntity_o *v44; // x8
  int32_t v45; // w21
  int32_t flagType; // w22

  if ( (byte_59389B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_21FFC50(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
    sub_21FFC50(&EventTutorialMaster_OpenType___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_21FFC50(&Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__41_0__);
    sub_21FFC50(&EventTutorialMaster___c_TypeInfo);
    byte_59389B2 = 1;
  }
  if ( mapId < 1 )
  {
    v7 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
      v19 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v19->static_fields->_WarId_k__BackingField, 0);
    if ( !v7 )
      goto LABEL_50;
    v20 = (unsigned __int8)byte_5932644;
    *(_DWORD *)(v7 + 16) = (_DWORD)EventID;
    *(_DWORD *)(v7 + 20) = 18;
    if ( !v20 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
      v21 = TerminalPramsManager_TypeInfo;
    }
    mapId = v21->static_fields->_WarId_k__BackingField;
  }
  else
  {
    v4 = (System_Array_o *)sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 3);
    v5.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v6 = v4;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v4, v5, 0);
    v7 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      v9 = TerminalPramsManager_TypeInfo;
    }
    EventID = (QuestAfterAction_o *)WarMaster__getEventID(v9->static_fields->_WarId_k__BackingField, 0);
    if ( !v7 )
      goto LABEL_50;
    *(_QWORD *)(v7 + 24) = v6;
    *(_DWORD *)(v7 + 16) = (_DWORD)EventID;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v6, v12, v13, v14, v15, v16, v17);
  }
  *(_DWORD *)(v7 + 40) = mapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v7,
                             v11);
  v24 = EventTutorialMaster___c_TypeInfo;
  v25 = AvailableTutorialArray;
  if ( !*(&EventTutorialMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v23);
    v24 = EventTutorialMaster___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__41_0 = (System_Func_object__object__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v23);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__41_0,
      v28,
      Method_EventTutorialMaster___c__PlayTutorialSetUpAction_b__41_0__,
      0);
    v29 = EventTutorialMaster___c_TypeInfo->static_fields;
    v29->__9__41_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__41_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v29->__9__41_0, (int32_t)_9__41_0, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__41_0,
                                                               (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v37 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v36,
                                 (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v38 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                EventID,
                                                                                v37,
                                                                                0);
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  v39 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(EventID, v38, 0);
  v40 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  if ( !byte_5935A05 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935A05 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v41 = TerminalPramsManager_TypeInfo;
  }
  EventID = (QuestAfterAction_o *)v41->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
  if ( EventID )
    System_Collections_Generic_HashSet_object___Clear(
      (System_Collections_Generic_HashSet_object__o *)EventID,
      (const MethodInfo_4286DE4 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___Clear__);
  if ( !v25 )
    goto LABEL_50;
  max_length = v25->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
        sub_21FFED4(EventID);
      v44 = v25->m_Items[v43];
      if ( !v44 )
        break;
      v45 = v44->fields.eventId;
      flagType = v44->fields.flagType;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
      TerminalPramsManager__SetForcePlayEventTutorialArray(v45, flagType, 0);
      max_length = v25->max_length;
      if ( (int)++v43 >= max_length )
        goto LABEL_48;
    }
LABEL_50:
    sub_21FFECC(EventID, v11);
  }
LABEL_48:
  EventID = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !EventID )
    goto LABEL_50;
  QuestAfterAction__PlaySpecifiedActionInstantly(EventID, (QuestAfterAction_Command_array *)v40, 0);
}


void EventTutorialMaster__RefreshQuestTree(
        EventTutorialMaster_o *this,
        System_Collections_Generic_List_QuestReleaseEntity__o *releaseEntList,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  Il2CppObject *current; // x25
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  MapControl_QuestInfo_o *QuestInfo; // x21
  System_Collections_Generic_HashSet_int__o *refreshedWarIds; // x0
  __int64 v14; // x1
  _BOOL4 IsDisaplayable; // w22
  int32_t klass_high; // w23
  int32_t monitor; // w24
  int64_t klass; // x25
  _BOOL8 IsOpen; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_HashSet_int__o *v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59389B4 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_59389B4 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, releaseEntList);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, releaseEntList);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_34;
  mTerminalList = (UnityEngine_Object_o *)mInstance->fields.mTerminalList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, releaseEntList);
  v5 = (TerminalSceneComponent_c *)UnityEngine_Object__op_Equality(mTerminalList, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( releaseEntList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        (System_Collections_Generic_List_object__o *)releaseEntList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
      v24 = v23;
      v23.fields._list = 0;
      *(_QWORD *)&v23.fields._index = &v24;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
      {
        current = v24.fields._current;
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !current )
          sub_21FFECC(Instance, v10);
        if ( !Instance )
          sub_21FFECC(0, v10);
        QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, (int32_t)current[1].klass, 0);
        if ( !QuestInfo )
          break;
        refreshedWarIds = this->fields.refreshedWarIds;
        if ( !refreshedWarIds )
          sub_21FFECC(0, v11);
        if ( !System_Collections_Generic_HashSet_int___Contains(
                refreshedWarIds,
                QuestInfo->fields.warId,
                (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
        {
          IsDisaplayable = MapControl_QuestInfo__IsDisaplayable(QuestInfo, 0);
          klass_high = HIDWORD(current[1].klass);
          monitor = (int32_t)current[1].monitor;
          klass = (int64_t)current[2].klass;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14);
          IsOpen = CondType__IsOpen(klass_high, monitor, klass, 0, 0, 0);
          if ( IsDisaplayable != IsOpen )
          {
            if ( !mTerminalList )
              sub_21FFECC(IsOpen, v20);
            ScrTerminalListTop__RefreshQuestTree((ScrTerminalListTop_o *)mTerminalList, QuestInfo->fields.warId, 0);
            v22 = this->fields.refreshedWarIds;
            if ( !v22 )
              sub_21FFECC(0, v21);
            System_Collections_Generic_HashSet_int___Add(
              v22,
              QuestInfo->fields.warId,
              (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
      return;
    }
LABEL_34:
    sub_21FFECC(v5, releaseEntList);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTutorialMaster__RequestTutorialEventSet(
        int32_t eventId,
        int32_t flagType,
        NetworkManager_ResultCallbackFunc_o *func,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_5938993 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938993 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&flagType);
  Request_object = NetworkManager__getRequest_object_(
                     func,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v8);
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)Request_object, flagType, eventId, 0);
}


void EventTutorialMaster__SaveOnceDailyDispTutorialTime(int32_t eventId, int32_t flagType, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *OnceDailyDispTutorialSaveKey; // x19
  System_String_o *v7; // x0
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59389B8 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59389B8 = 1;
  }
  Time = 0;
  OnceDailyDispTutorialSaveKey = EventTutorialMaster__GetOnceDailyDispTutorialSaveKey(eventId, flagType, method);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  Time = NetworkManager__getTime(0);
  v7 = System_Int64__ToString((int64_t)&Time, 0);
  UnityEngine_PlayerPrefs__SetString(OnceDailyDispTutorialSaveKey, v7, 0);
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

  if ( (byte_59389A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v10);
  }
  EventTutorialMaster__showTutorialWithoutCheck(
    (EventTutorialMaster_o *)Instance,
    eventId,
    openKind,
    callback,
    conditionNone,
    v11);
}


void EventTutorialMaster__ShowTutorialWithoutCheck_49214220(
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

  if ( (byte_59389A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v16);
  }
  EventTutorialMaster__showTutorialWithoutCheck_49214420(
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

  if ( (byte_59389BE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
    byte_59389BE = 1;
  }
  PK = (Il2CppObject *)EventTutorialEntity__CreatePK(eventId, flagType, num, *(const MethodInfo **)&flagType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventTutorialMaster__EventTutorialEntity__string__TryGetEntity__);
}


bool EventTutorialMaster__TryGetEventTimes(
        EventTutorialMaster_o *this,
        EventTutorialEntity_o *entity,
        int64_t *startedTime,
        int64_t *endedTime,
        const MethodInfo *method)
{
  DataManager_c *v8; // x0
  int v9; // w8
  CommonReleaseEntity_array *Master_object; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x8
  bool result; // w0
  __int64 v14; // x1
  struct System_Int32_array *condIds; // x8
  int max_length; // w9
  unsigned int v17; // w8
  CommonReleaseEntity_o *v18; // x9
  int32_t condType; // w11
  int64_t *v20; // x10
  Il2CppObject *entitya; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59389B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_59389B7 = 1;
  }
  v8 = DataManager_TypeInfo;
  entitya = 0;
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *startedTime = 0;
  *endedTime = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(v8, entity);
  Master_object = (CommonReleaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !entity || !Master_object )
    goto LABEL_30;
  Master_object = (CommonReleaseEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                 &entitya,
                                                 entity->fields.eventId,
                                                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v12 = entitya;
    if ( entitya )
    {
      result = 1;
      *startedTime = (int64_t)entitya[5].monitor;
      *endedTime = (int64_t)v12[6].klass;
      return result;
    }
LABEL_30:
    sub_21FFECC(Master_object, v11);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.condIds, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = (CommonReleaseEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  condIds = entity->fields.condIds;
  if ( !condIds )
    goto LABEL_30;
  if ( !LODWORD(condIds->max_length) )
LABEL_31:
    sub_21FFED4(Master_object);
  if ( !Master_object )
    goto LABEL_30;
  Master_object = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, condIds->m_Items[0], 0);
  if ( !Master_object )
    goto LABEL_30;
  max_length = Master_object->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        goto LABEL_31;
      v18 = Master_object->m_Items[v17];
      if ( !v18 )
        goto LABEL_30;
      condType = v18->fields.condType;
      v20 = startedTime;
      if ( condType == 12 )
        goto LABEL_24;
      if ( condType == 228 )
        break;
LABEL_25:
      max_length = Master_object->max_length;
      if ( (int)++v17 >= max_length )
        return *startedTime >= 1 && *endedTime > 0;
    }
    v20 = endedTime;
LABEL_24:
    *v20 = v18->fields.condNum;
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
  __int64 v8; // x1
  System_String_o *NowSceneName; // x21
  System_String_o *SceneName; // x0
  __int64 v11; // x1
  AvalonSceneManager_o *v12; // x25
  System_Collections_Generic_HashSet_int__o *v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *dicRootComponent; // x22
  System_Func_object__bool__o *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  System_Func_object__bool__o *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  EventTutorialMaster___c_c *v27; // x0
  struct EventTutorialMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__42_2; // x24
  Il2CppObject *v30; // x25
  struct EventTutorialMaster___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x22
  __int64 v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t current; // w1
  System_Func_object__bool__o *v50; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v52; // x1
  const MethodInfo *v53; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x21
  System_Func_object__bool__o *v55; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_Func_object__bool__o *v57; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *v59; // x0
  const MethodInfo *v60; // x2
  AvalonSceneManager_o *v61; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59389B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestReleaseMaster__QuestReleaseEntity__string__getEntityList__);
    sub_21FFC50(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_21FFC50(&System_Func_QuestReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__42_2__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__0__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__1__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__3__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__4__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass42_0_TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass42_1__TutorialAfterUpdateQuestTree_b__5__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass42_1_TypeInfo);
    sub_21FFC50(&EventTutorialMaster___c_TypeInfo);
    byte_59389B3 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v5 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_DWORD *)(v5 + 24) = eventId;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  NowSceneName = AvalonSceneManager__getNowSceneName(Instance, 0);
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v8);
  SceneName = SceneList__getSceneName(34, 0);
  if ( !System_String__op_Inequality(NowSceneName, SceneName, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
    if ( this->fields.refreshedWarIds )
    {
      v12 = Instance;
      System_Collections_Generic_HashSet_int___Clear(
        this->fields.refreshedWarIds,
        (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
      v13 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v13,
        (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v13 )
      {
        System_Collections_Generic_HashSet_int___Add(
          v13,
          119,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v13,
          170,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v13,
          63,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        System_Collections_Generic_HashSet_int___Add(
          v13,
          238,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        *(_QWORD *)(v5 + 16) = v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( Instance )
        {
          dicRootComponent = (System_Collections_Generic_IEnumerable_TSource__o *)Instance->fields.dicRootComponent;
          v21 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v21,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__0__,
            0);
          v22 = System_Linq_Enumerable__Where_object_(
                  dicRootComponent,
                  (System_Func_TSource__bool__o *)v21,
                  (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          v23 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v23,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__1__,
            0);
          v24 = System_Linq_Enumerable__Where_object_(
                  v22,
                  (System_Func_TSource__bool__o *)v23,
                  (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CommonReleaseEntity___);
          Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                               v24,
                                               (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_CommonReleaseEntity___);
          if ( v12 )
          {
            v25 = (System_Collections_Generic_List_object__o *)Instance;
            v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v12->fields.dicRootComponent;
            v61 = v12;
            v27 = EventTutorialMaster___c_TypeInfo;
            if ( !*(&EventTutorialMaster___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v7);
              v27 = EventTutorialMaster___c_TypeInfo;
            }
            static_fields = v27->static_fields;
            _9__42_2 = (System_Func_object__bool__o *)static_fields->__9__42_2;
            if ( !_9__42_2 )
            {
              if ( !*(&v27->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v27, v7);
                static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
              }
              v30 = (Il2CppObject *)static_fields->__9;
              _9__42_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__42_2,
                v30,
                Method_EventTutorialMaster___c__TutorialAfterUpdateQuestTree_b__42_2__,
                0);
              v31 = EventTutorialMaster___c_TypeInfo->static_fields;
              v31->__9__42_2 = (struct System_Func_QuestReleaseEntity__bool__o *)_9__42_2;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v31->__9__42_2,
                (int32_t)_9__42_2,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
            }
            v38 = System_Linq_Enumerable__Where_object_(
                    v26,
                    (System_Func_TSource__bool__o *)_9__42_2,
                    (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
            Instance = (AvalonSceneManager_o *)System_Linq_Enumerable__ToList_object_(
                                                 v38,
                                                 (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
            if ( v25 )
            {
              v39 = (System_Collections_Generic_IEnumerable_TSource__o *)Instance;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v62,
                v25,
                (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
              v63 = v62;
              v62.fields._list = 0;
              *(_QWORD *)&v62.fields._index = &v63;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v63,
                        (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__) )
              {
                v40 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass42_1_TypeInfo);
                System_Object___ctor((Il2CppObject *)v40, 0);
                if ( !v40 )
                  sub_21FFECC(v41, v42);
                current = (int32_t)v63.fields._current;
                *(_QWORD *)(v40 + 16) = v63.fields._current;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 16), current, v43, v44, v45, v46, v47, v48);
                v50 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestReleaseEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v50,
                  (Il2CppObject *)v40,
                  Method_EventTutorialMaster___c__DisplayClass42_1__TutorialAfterUpdateQuestTree_b__5__,
                  0);
                v51 = System_Linq_Enumerable__Where_object_(
                        v39,
                        (System_Func_TSource__bool__o *)v50,
                        (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
                v52 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                                 v51,
                                                                                 (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
                EventTutorialMaster__RefreshQuestTree(this, v52, v53);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v63,
                (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
              v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v61->fields.dicRootComponent;
              v55 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v55,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__3__,
                0);
              v56 = System_Linq_Enumerable__Where_object_(
                      v54,
                      (System_Func_TSource__bool__o *)v55,
                      (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v57 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestReleaseEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v57,
                (Il2CppObject *)v5,
                Method_EventTutorialMaster___c__DisplayClass42_0__TutorialAfterUpdateQuestTree_b__4__,
                0);
              v58 = System_Linq_Enumerable__Where_object_(
                      v56,
                      (System_Func_TSource__bool__o *)v57,
                      (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestReleaseEntity___);
              v59 = (System_Collections_Generic_List_QuestReleaseEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                               v58,
                                                                               (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_QuestReleaseEntity___);
              EventTutorialMaster__RefreshQuestTree(this, v59, v60);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_21FFECC(Instance, v7);
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

  if ( (byte_59389AB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTutorialMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59389AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTutorialMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
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
  __int64 v17; // x20
  System_Collections_Generic_HashSet_int__o *openedEventIds; // x0
  const MethodInfo *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  EventTutorialMaster_c **v26; // x29
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x6
  EventTutorialMaster_c *v34; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  il2cpp_array_size_t max_length; // x8
  const MethodInfo_4450604 **v37; // x24
  const MethodInfo_40C7F48 **v38; // x21
  _BOOL4 v39; // w28
  unsigned __int64 v40; // x26
  EventTutorialEntity_o *v41; // x22
  __int128 v42; // q0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int32_t flag; // w23
  EventTutorialMaster_o *Targets; // x0
  const MethodInfo *v47; // x3
  int32_t v48; // w8
  MethodInfo *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w7
  _BOOL4 v54; // w19
  const MethodInfo_40C7F48 **v55; // x28
  EventTutorialMaster_c **v56; // x21
  const MethodInfo_4450604 **v57; // x29
  int32_t flagType; // w23
  int32_t v59; // w24
  const MethodInfo *v60; // x2
  System_Action_o *v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct System_Int32_array *buckets; // x8
  _QWORD *v69; // x9
  __int64 slots_low; // x10
  __int64 v71; // x8
  const MethodInfo *v72; // x2
  System_Action_o *v73; // x21
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v82; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5938994 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__0__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__1__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
    byte_5938994 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  memset(&v82, 0, sizeof(v82));
  v17 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_64;
  v26 = &EventTutorialMaster_TypeInfo;
  *(_QWORD *)(v17 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)callbackAfter, v27, v28, v29, v30, v31, v32);
  v34 = EventTutorialMaster_TypeInfo;
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = v34->static_fields->sortedEntityArray;
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
        &v82,
        openedEventIds,
        (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
      v81.fields._list = 0;
      *(_QWORD *)&v81.fields._index = &v82;
      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                &v82,
                (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)v82.fields._current, v60);
      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
        &v82,
        (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      openedEventIds = this->fields.openedEventIds;
      if ( openedEventIds )
      {
        System_Collections_Generic_HashSet_int___Clear(
          openedEventIds,
          (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
        ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0);
        return;
      }
    }
    goto LABEL_64;
  }
  v37 = (const MethodInfo_4450604 **)&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__;
  v38 = (const MethodInfo_40C7F48 **)&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__;
  v39 = notSave;
  v40 = 0;
  while ( 1 )
  {
    if ( v40 >= (unsigned int)max_length )
      sub_21FFED4(openedEventIds);
    v41 = sortedEntityArray->m_Items[v40];
    if ( v39 )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)(*v26)->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_64;
      System_Collections_Generic_List_object___GetEnumerator(
        &v81,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        *v37);
      v42 = *(_OWORD *)&v81.fields._list;
      v81.fields._list = 0;
      *(_QWORD *)&v81.fields._index = &v83;
      *(_OWORD *)&v83.fields._list = v42;
      v83.fields._current = v81.fields._current;
      while ( 1 )
      {
        v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v43 )
          break;
        if ( !v41 )
          sub_21FFECC(v43, v44);
        if ( !v83.fields._current )
          sub_21FFECC(v43, v44);
        if ( v41->fields.eventId == LODWORD(v83.fields._current[1].klass)
          && v41->fields.flagType == HIDWORD(v83.fields._current[1].klass)
          && v41->fields.num == LODWORD(v83.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(&v83, *v38);
          goto LABEL_40;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(&v83, *v38);
    }
    if ( !v41 )
      goto LABEL_64;
    flag = v41->fields.flag;
    if ( v41->fields.openType != 84
      || (Targets = (EventTutorialMaster_o *)EventTutorialEntity__getTargets(v41, v19),
          openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                          Targets,
                                                                          (System_Int32_array_array *)Targets,
                                                                          *(_DWORD *)(v17 + 40),
                                                                          v47),
          ((unsigned __int8)openedEventIds & 1) != 0) )
    {
      if ( (flag & 2) == 0 )
        break;
      if ( v41->fields.openType != 45 )
        break;
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isEnableCondition(
                                                                      v41,
                                                                      *(_DWORD *)(v17 + 40),
                                                                      *(_DWORD *)(v17 + 44),
                                                                      *(_DWORD *)(v17 + 48),
                                                                      *(_DWORD *)(v17 + 52),
                                                                      -1,
                                                                      v33);
      if ( ((unsigned __int8)openedEventIds & 1) != 0 )
        break;
    }
LABEL_40:
    LODWORD(max_length) = sortedEntityArray->max_length;
    if ( (__int64)++v40 >= (int)max_length )
      goto LABEL_44;
  }
  v48 = v41->fields.eventId;
  if ( (v48 & 0x80000000) == 0 && v48 != *(_DWORD *)(v17 + 24)
    || v41->fields.openType != *(_DWORD *)(v17 + 28)
    || (openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                        v41,
                                                                        *(_DWORD *)(v17 + 40),
                                                                        *(_DWORD *)(v17 + 44),
                                                                        *(_DWORD *)(v17 + 48),
                                                                        *(_DWORD *)(v17 + 52),
                                                                        -1,
                                                                        v33),
        (flag & 2) == 0)
    && ((unsigned __int8)openedEventIds & 1) == 0 )
  {
    if ( (v41->fields.flag & 1) != 0 )
    {
      v54 = v39;
      v55 = v38;
      v56 = v26;
      v57 = v37;
      flagType = v41->fields.flagType;
      v59 = *(_DWORD *)(v17 + 24);
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v19);
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)TutorialFlag__Get_47394140(flagType, v59, 0);
      v37 = v57;
      v26 = v56;
      v38 = v55;
      v39 = v54;
      if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
        openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                        0,
                                                                        (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !openedEventIds )
          goto LABEL_64;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)openedEventIds,
          v41->fields.flagType,
          *(_DWORD *)(v17 + 24),
          0);
      }
    }
    goto LABEL_40;
  }
  if ( (v41->fields.flag & 4) != 0 )
  {
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__IsOpenOnceDailyDispTutorial(
                                                                    this,
                                                                    v41,
                                                                    v49);
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      goto LABEL_40;
  }
  if ( (flag & 2) == 0 && !v39 )
  {
    v61 = *(System_Action_o **)(v17 + 64);
    if ( !v61 )
    {
      v61 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v61,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__1__,
        0);
      *(_QWORD *)(v17 + 64) = v61;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 64), (int32_t)v61, v62, v63, v64, v65, v66, v67);
    }
    EventTutorialEntity__OpenTutorial(v41, v61, v49);
    return;
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)(*v26)->static_fields->checkedEntityList;
  if ( !openedEventIds
    || (buckets = openedEventIds->fields._buckets,
        v69 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
        ++HIDWORD(openedEventIds->fields._slots),
        !buckets) )
  {
LABEL_64:
    sub_21FFECC(openedEventIds, v19);
  }
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v41,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v71 + 32) = v41;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v71 + 32),
      (int32_t)v41,
      (System_String_o *)v49,
      v50,
      v51,
      v52,
      (bool)v33,
      v53);
  }
  v73 = *(System_Action_o **)(v17 + 56);
  if ( !v73 )
  {
    v73 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v73,
      (Il2CppObject *)v17,
      Method_EventTutorialMaster___c__DisplayClass11_0__checkTutorial_b__0__,
      0);
    *(_QWORD *)(v17 + 56) = v73;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 56), (int32_t)v73, v74, v75, v76, v77, v78, v79);
  }
  EventTutorialEntity__OpenTutorialWithoutFlag(v41, v73, v72);
}


void EventTutorialMaster__checkTutorial_49206860(
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
  EventTutorialEntity_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  EventTutorialMaster_c *v40; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x26
  unsigned __int64 v42; // x27
  __int64 v43; // x22
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x24
  __int64 v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  EventTutorialEntity_o *v58; // x1
  EventTutorialEntity_o **v59; // x23
  const MethodInfo *v60; // x6
  _BOOL8 v61; // x0
  __int64 v62; // x1
  EventTutorialEntity_o *v63; // x8
  int slots; // w29
  const MethodInfo *v65; // x3
  EventTutorialEntity_o *v66; // x8
  _DWORD *v67; // x9
  MethodInfo *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  int32_t flagType; // w22
  int32_t eventId; // w24
  const MethodInfo *v76; // x2
  EventTutorialEntity_o *v77; // x19
  System_Action_o *v78; // x20
  const MethodInfo *v79; // x2
  struct System_Int32_array *buckets; // x8
  _QWORD *v81; // x9
  __int64 slots_low; // x10
  __int64 v83; // x8
  EventTutorialEntity_o *v84; // x19
  System_Action_o *v85; // x20
  const MethodInfo *v86; // x2
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v88; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5938995 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__0__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__1__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    byte_5938995 = 1;
  }
  memset(&v89, 0, sizeof(v89));
  memset(&v88, 0, sizeof(v88));
  v19 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    goto LABEL_76;
  *(_QWORD *)(v19 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 16), (int32_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = checkEventIds;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 24), (int32_t)checkEventIds, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v19 + 40) = callbackAfter;
  *(_DWORD *)(v19 + 32) = openKind;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 40), (int32_t)callbackAfter, v34, v35, v36, v37, v38, v39);
  v40 = EventTutorialMaster_TypeInfo;
  *(_DWORD *)(v19 + 48) = qId;
  *(_DWORD *)(v19 + 52) = bPhase;
  *(_DWORD *)(v19 + 56) = bWave;
  *(_DWORD *)(v19 + 60) = bTurn;
  sortedEntityArray = v40->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_76;
  if ( SLODWORD(sortedEntityArray->max_length) < 1 )
  {
LABEL_58:
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_76;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v88,
      openedEventIds,
      (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v87.fields._list = 0;
    *(_QWORD *)&v87.fields._index = &v88;
    while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v88,
              (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
      EventTutorialMaster__TutorialAfterUpdateQuestTree(this, (int32_t)v88.fields._current, v76);
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v88,
      (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    openedEventIds = this->fields.openedEventIds;
    if ( !openedEventIds )
      goto LABEL_76;
    System_Collections_Generic_HashSet_int___Clear(
      openedEventIds,
      (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
    ActionExtensions__Call(*(System_Action_o **)(v19 + 40), 0);
    return;
  }
  v42 = 0;
  while ( 1 )
  {
    v43 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v43, 0);
    if ( !v43 )
      goto LABEL_76;
    *(_QWORD *)(v43 + 24) = v19;
    v50 = v43 + 24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 24), v19, v44, v45, v46, v47, v48, v49);
    if ( v42 >= LODWORD(sortedEntityArray->max_length) )
      sub_21FFED4(v51);
    v58 = sortedEntityArray->m_Items[v42];
    *(_QWORD *)(v43 + 16) = v58;
    v59 = (EventTutorialEntity_o **)(v43 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 16), (int32_t)v58, v52, v53, v54, v55, v56, v57);
    if ( notSave )
    {
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
      if ( !openedEventIds )
        goto LABEL_76;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v87,
        (System_Collections_Generic_List_object__o *)openedEventIds,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
      v89 = v87;
      v87.fields._list = 0;
      *(_QWORD *)&v87.fields._index = &v89;
      while ( 1 )
      {
        v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v89,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
        if ( !v61 )
          break;
        v63 = *v59;
        if ( !*v59 )
          sub_21FFECC(v61, v62);
        if ( !v89.fields._current )
          sub_21FFECC(v61, v62);
        if ( v63->fields.eventId == LODWORD(v89.fields._current[1].klass)
          && v63->fields.flagType == HIDWORD(v89.fields._current[1].klass)
          && v63->fields.num == LODWORD(v89.fields._current[1].monitor) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v89,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
          goto LABEL_54;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v89,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    }
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v59;
    if ( !*v59 )
      goto LABEL_76;
    slots = (int)openedEventIds[1].fields._slots;
    if ( openedEventIds->fields._count != 84 )
      goto LABEL_80;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__getTargets(
                                                                    (EventTutorialEntity_o *)openedEventIds,
                                                                    (const MethodInfo *)v21);
    if ( !*(_QWORD *)v50 )
      goto LABEL_76;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster__isTargetIdExistFromArray(
                                                                    (EventTutorialMaster_o *)openedEventIds,
                                                                    (System_Int32_array_array *)openedEventIds,
                                                                    *(_DWORD *)(*(_QWORD *)v50 + 48LL),
                                                                    v65);
    if ( ((unsigned __int8)openedEventIds & 1) != 0 )
    {
LABEL_80:
      if ( (slots & 2) == 0 )
        break;
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)*v59;
      if ( !*v59 )
        goto LABEL_76;
      if ( openedEventIds->fields._count != 45 )
        break;
      if ( !*(_QWORD *)v50 )
        goto LABEL_76;
      openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isEnableCondition(
                                                                      (EventTutorialEntity_o *)openedEventIds,
                                                                      *(_DWORD *)(*(_QWORD *)v50 + 48LL),
                                                                      *(_DWORD *)(*(_QWORD *)v50 + 52LL),
                                                                      *(_DWORD *)(*(_QWORD *)v50 + 56LL),
                                                                      *(_DWORD *)(*(_QWORD *)v50 + 60LL),
                                                                      -1,
                                                                      v60);
      if ( ((unsigned __int8)openedEventIds & 1) != 0 )
        break;
    }
LABEL_54:
    if ( (__int64)++v42 >= SLODWORD(sortedEntityArray->max_length) )
      goto LABEL_58;
  }
  if ( isEventIdOneOrMore )
    goto LABEL_81;
  v66 = *v59;
  if ( !*v59 )
    goto LABEL_76;
  if ( (v66->fields.eventId & 0x80000000) == 0 )
  {
LABEL_81:
    if ( !*(_QWORD *)v50 )
      goto LABEL_76;
    if ( !*v59 )
      goto LABEL_76;
    openedEventIds = *(System_Collections_Generic_HashSet_int__o **)(*(_QWORD *)v50 + 24LL);
    if ( !openedEventIds )
      goto LABEL_76;
    openedEventIds = (System_Collections_Generic_HashSet_int__o *)System_Collections_Generic_List_int___Contains(
                                                                    (System_Collections_Generic_List_int__o *)openedEventIds,
                                                                    (*v59)->fields.eventId,
                                                                    (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
    v66 = *v59;
    if ( ((unsigned __int8)openedEventIds & 1) == 0 )
      goto LABEL_41;
    if ( !v66 )
      goto LABEL_76;
  }
  v67 = *(_DWORD **)v50;
  if ( !*(_QWORD *)v50 )
    goto LABEL_76;
  if ( v66->fields.openType != v67[8] )
    goto LABEL_42;
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialEntity__isOpenCondition(
                                                                  v66,
                                                                  v67[12],
                                                                  v67[13],
                                                                  v67[14],
                                                                  v67[15],
                                                                  -1,
                                                                  v60);
  v66 = *v59;
  if ( (slots & 2) == 0 && ((unsigned __int8)openedEventIds & 1) == 0 )
  {
LABEL_41:
    if ( !v66 )
      goto LABEL_76;
LABEL_42:
    if ( (v66->fields.flag & 1) != 0 )
    {
      eventId = v66->fields.eventId;
      flagType = v66->fields.flagType;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v21);
      if ( !TutorialFlag__Get_47394140(flagType, eventId, 0) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
        openedEventIds = (System_Collections_Generic_HashSet_int__o *)NetworkManager__getRequest_object_(
                                                                        0,
                                                                        (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*v59 || !openedEventIds )
          goto LABEL_76;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)openedEventIds,
          (*v59)->fields.flagType,
          (*v59)->fields.eventId,
          0);
      }
    }
    goto LABEL_54;
  }
  if ( !v66 )
    goto LABEL_76;
  if ( (v66->fields.flag & 4) != 0 && !EventTutorialMaster__IsOpenOnceDailyDispTutorial(this, *v59, v68) )
    goto LABEL_54;
  if ( (slots & 2) == 0 && !notSave )
  {
    v77 = *(EventTutorialEntity_o **)(v43 + 16);
    v78 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v78,
      (Il2CppObject *)v43,
      Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__1__,
      0);
    if ( v77 )
    {
      EventTutorialEntity__OpenTutorial(v77, v78, v79);
      return;
    }
LABEL_76:
    sub_21FFECC(openedEventIds, v21);
  }
  openedEventIds = (System_Collections_Generic_HashSet_int__o *)EventTutorialMaster_TypeInfo->static_fields->checkedEntityList;
  if ( !openedEventIds )
    goto LABEL_76;
  buckets = openedEventIds->fields._buckets;
  v21 = *v59;
  v81 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++HIDWORD(openedEventIds->fields._slots);
  if ( !buckets )
    goto LABEL_76;
  slots_low = SLODWORD(openedEventIds->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)openedEventIds,
      (Il2CppObject *)v21,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
  }
  else
  {
    v83 = (__int64)buckets + 8 * slots_low;
    LODWORD(openedEventIds->fields._slots) = slots_low + 1;
    *(_QWORD *)(v83 + 32) = v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v83 + 32),
      (int32_t)v21,
      (System_String_o *)v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  v84 = *(EventTutorialEntity_o **)(v43 + 16);
  v85 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v43,
    Method_EventTutorialMaster___c__DisplayClass12_1__checkTutorial_b__0__,
    0);
  if ( !v84 )
    goto LABEL_76;
  EventTutorialEntity__OpenTutorialWithoutFlag(v84, v85, v86);
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
        int32_t targetId,
        const MethodInfo *method)
{
  EventTutorialMaster_o *v12; // x26
  __int64 MasterName_k__BackingField_low; // x8
  __int64 max_length; // x9
  int32_t *p_revision; // x10
  System_Collections_Generic_List_object__o *v16; // x27
  struct EventTutorialEntity_array *sortedEntityArray; // x19
  int v18; // w8
  unsigned int v19; // w20
  EventTutorialEntity_o *v20; // x28
  int32_t v21; // w8
  const MethodInfo *v22; // x6
  unsigned int v23; // w29
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v25; // x10

  if ( (byte_59389B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    this = (EventTutorialMaster_o *)sub_21FFC50(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_59389B1 = 1;
  }
  if ( !openKinds )
    goto LABEL_28;
  this = (EventTutorialMaster_o *)sub_21FFD10(int___TypeInfo, LODWORD(openKinds->max_length));
  v12 = this;
  if ( (int)openKinds->max_length >= 1 )
  {
    if ( this )
    {
      MasterName_k__BackingField_low = LODWORD(this->fields._MasterName_k__BackingField);
      max_length = (unsigned int)openKinds->max_length;
      p_revision = &this->fields.revision;
      while ( MasterName_k__BackingField_low )
      {
        --max_length;
        --MasterName_k__BackingField_low;
        *p_revision++ = 0;
        if ( !max_length )
          goto LABEL_9;
      }
LABEL_27:
      sub_21FFED4(this);
    }
LABEL_28:
    sub_21FFECC(this, *(_QWORD *)&eventId);
  }
LABEL_9:
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
    goto LABEL_28;
  v18 = sortedEntityArray->max_length;
  if ( v18 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= v18 )
        goto LABEL_27;
      v20 = sortedEntityArray->m_Items[v19];
      if ( !v20 )
        goto LABEL_28;
      v21 = v20->fields.eventId;
      if ( v21 < 0 || v21 == eventId )
      {
        this = (EventTutorialMaster_o *)System_Array__IndexOf_Int32Enum_(
                                          (System_Int32Enum_array *)openKinds,
                                          v20->fields.openType,
                                          (const MethodInfo_39FB04C *)Method_System_Array_IndexOf_EventTutorialMaster_OpenType___);
        if ( ((unsigned int)this & 0x80000000) == 0 )
        {
          v23 = (unsigned int)this;
          this = (EventTutorialMaster_o *)EventTutorialEntity__isOpenCondition(
                                            v20,
                                            qId,
                                            bPhase,
                                            bWave,
                                            bTurn,
                                            targetId,
                                            v22);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_28;
            if ( v23 >= LODWORD(v12->fields._MasterName_k__BackingField) )
              goto LABEL_27;
            if ( !v16 )
              goto LABEL_28;
            System_Collections_Generic_List_object___Insert(
              v16,
              *(&v12->fields.revision + v23),
              (Il2CppObject *)v20,
              (const MethodInfo_44508C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Insert__);
            MasterName_k__BackingField = v12->fields._MasterName_k__BackingField;
            if ( (int)v23 < (int)MasterName_k__BackingField )
              break;
          }
        }
      }
LABEL_25:
      v18 = sortedEntityArray->max_length;
      if ( (int)++v19 >= v18 )
        return (System_Collections_Generic_List_EventTutorialEntity__o *)v16;
    }
    v25 = v23;
    while ( (unsigned int)v25 < (unsigned int)MasterName_k__BackingField )
    {
      ++*(&v12->fields.revision + v25++);
      if ( (int)MasterName_k__BackingField == v25 )
        goto LABEL_25;
    }
    goto LABEL_27;
  }
  return (System_Collections_Generic_List_EventTutorialEntity__o *)v16;
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
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

  if ( (byte_59389AF & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&StringLiteral_16556/*"[]"*/);
    sub_21FFC50(&StringLiteral_16616/*"[{0}]"*/);
    byte_59389AF = 1;
  }
  if ( !System_String__IsNullOrEmpty(targetIds, 0) )
    targetIds = System_String__Format((System_String_o *)StringLiteral_16616/*"[{0}]"*/, (Il2CppObject *)targetIds, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
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
        sub_21FFED4(IsNullOrEmpty);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v21;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v21, v11, v12, v13, v14, v15, v16);
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
                                                                  (System_String_o *)StringLiteral_16556/*"[]"*/,
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
            sub_21FFECC(IsNullOrEmpty, v10);
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
  if ( !v8->fields._size && v20 )
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
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)IsNullOrEmpty->m_Items,
        (int32_t)v20,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    else
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v20,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
  System_Int32_array **m_Items; // x10
  System_Int32_array *v7; // x11
  il2cpp_array_size_t max_length; // x12

  if ( targets && (v4 = targets->max_length) != 0 && (int)v4 >= 1 )
  {
    v5 = 0;
    m_Items = targets->m_Items;
    do
    {
      v7 = *m_Items;
      if ( !*m_Items )
        sub_21FFECC(this, targets);
      max_length = v7->max_length;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
          sub_21FFED4(this);
        v5 |= v7->m_Items[0] == targetId;
      }
      LODWORD(v4) = v4 - 1;
      ++m_Items;
    }
    while ( (_DWORD)v4 );
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
  const MethodInfo *v21; // x6
  int32_t v22; // w8

  if ( (byte_5938998 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_5938998 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v22 = Item->fields.eventId, (v22 & 0x80000000) == 0) && v22 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isOpenCondition(Item, qId, bPhase, bWave, bTurn, -1, v21) )
      {
        v19 = ++v18 < v17;
        if ( v17 != v18 )
          continue;
      }
      return v19;
    }
LABEL_16:
    sub_21FFECC(list, *(_QWORD *)&eventId);
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
  const MethodInfo *v22; // x6
  int32_t v23; // w8

  if ( (byte_5938997 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
    byte_5938997 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Count__);
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
                                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventTutorialEntity__get_Item__);
      if ( !Item
        || (v23 = Item->fields.eventId, isChkEventId) && v23 < 0
        || (v23 & 0x80000000) == 0 && v23 != eventId
        || Item->fields.openType != openKind
        || !EventTutorialEntity__isEnableCondition(Item, qId, bPhase, bWave, bTurn, -1, v22) )
      {
        v20 = ++v19 < v18;
        if ( v18 != v19 )
          continue;
      }
      return v20;
    }
LABEL_18:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool EventTutorialMaster__preProcess(EventTutorialMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TResult__o *v3; // x0
  __int64 v4; // x1
  EventTutorialMaster___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  struct EventTutorialMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__8_0; // x20
  Il2CppObject *v9; // x21
  struct EventTutorialMaster___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  EventTutorialMaster___c_c *v19; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x19
  struct EventTutorialMaster___c_StaticFields *v21; // x9
  System_Func_object__int__o *_9__8_1; // x20
  Il2CppObject *v23; // x21
  struct EventTutorialMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_object__o *v39; // x19
  struct EventTutorialMaster_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_5938992 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&System_Func_EventTutorialEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__preProcess_b__8_0__);
    sub_21FFC50(&Method_EventTutorialMaster___c__preProcess_b__8_1__);
    sub_21FFC50(&EventTutorialMaster___c_TypeInfo);
    byte_5938992 = 1;
  }
  v3 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_EventTutorialEntity___);
  v5 = EventTutorialMaster___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !*(&EventTutorialMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v4);
    v5 = EventTutorialMaster___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__8_0 = (System_Func_object__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_0, v9, Method_EventTutorialMaster___c__preProcess_b__8_0__, 0);
    v10 = EventTutorialMaster___c_TypeInfo->static_fields;
    v10->__9__8_0 = (struct System_Func_EventTutorialEntity__int__o *)_9__8_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__8_0, (int32_t)_9__8_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderBy_object__int_(
          v6,
          (System_Func_TSource__TKey__o *)_9__8_0,
          (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_EventTutorialEntity__int___);
  v19 = EventTutorialMaster___c_TypeInfo;
  v20 = v17;
  if ( !*(&EventTutorialMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTutorialMaster___c_TypeInfo, v18);
    v19 = EventTutorialMaster___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__8_1 = (System_Func_object__int__o *)v21->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v18);
      v21 = EventTutorialMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__8_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventTutorialEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__8_1, v23, Method_EventTutorialMaster___c__preProcess_b__8_1__, 0);
    v24 = EventTutorialMaster___c_TypeInfo->static_fields;
    v24->__9__8_1 = (struct System_Func_EventTutorialEntity__int__o *)_9__8_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__8_1, (int32_t)_9__8_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v20,
                                                               (System_Func_TSource__TKey__o *)_9__8_1,
                                                               (const MethodInfo_3867630 *)Method_System_Linq_Enumerable_ThenBy_EventTutorialEntity__int___);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventTutorialEntity___);
  EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray = (struct EventTutorialEntity_array *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventTutorialMaster_TypeInfo->static_fields,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  v40 = EventTutorialMaster_TypeInfo->static_fields;
  v40->checkedEntityList = (struct System_Collections_Generic_List_EventTutorialEntity__o *)v39;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->checkedEntityList, (int32_t)v39, v41, v42, v43, v44, v45, v46);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  const MethodInfo *v16; // x4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct EventTutorialEntity_array *sortedEntityArray; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int32_t v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_59389A7 & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    byte_59389A7 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  sortedEntityArray = EventTutorialMaster_TypeInfo->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_22:
    sub_21FFECC(v12, v13);
  max_length = sortedEntityArray->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_21FFED4(v12);
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
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v13;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v27 + 4),
            (int32_t)v13,
            v14,
            v15,
            (int32_t)v16,
            v17,
            v18,
            v19);
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


void EventTutorialMaster__showTutorialWithoutCheck_49214420(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x6
  EventTutorialMaster_c *v33; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x23
  int max_length; // w8
  unsigned int v36; // w22
  EventTutorialEntity_o *v37; // x21
  int32_t v38; // w8
  const MethodInfo *v39; // x2
  System_Action_o *v40; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_59389AA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass33_0__showTutorialWithoutCheck_b__0__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass33_0_TypeInfo);
    byte_59389AA = 1;
  }
  v17 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = callbackAfter;
  *(_DWORD *)(v17 + 24) = eventId;
  *(_DWORD *)(v17 + 28) = openKind;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)callbackAfter, v26, v27, v28, v29, v30, v31);
  v33 = EventTutorialMaster_TypeInfo;
  *(_DWORD *)(v17 + 40) = qId;
  *(_DWORD *)(v17 + 44) = bPhase;
  *(_DWORD *)(v17 + 48) = bWave;
  *(_DWORD *)(v17 + 52) = bTurn;
  sortedEntityArray = v33->static_fields->sortedEntityArray;
  if ( !sortedEntityArray )
LABEL_18:
    sub_21FFECC(isEnableCondition, v19);
  max_length = sortedEntityArray->max_length;
  if ( max_length < 1 )
  {
LABEL_14:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0);
  }
  else
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
        sub_21FFED4(isEnableCondition);
      v37 = sortedEntityArray->m_Items[v36];
      if ( !v37 )
        goto LABEL_18;
      v38 = v37->fields.eventId;
      if ( (v38 < 0 || v38 == *(_DWORD *)(v17 + 24)) && v37->fields.openType == *(_DWORD *)(v17 + 28) )
      {
        isEnableCondition = EventTutorialEntity__isEnableCondition(
                              v37,
                              *(_DWORD *)(v17 + 40),
                              *(_DWORD *)(v17 + 44),
                              *(_DWORD *)(v17 + 48),
                              *(_DWORD *)(v17 + 52),
                              -1,
                              v32);
        if ( isEnableCondition )
          break;
      }
      max_length = sortedEntityArray->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_14;
    }
    v40 = *(System_Action_o **)(v17 + 56);
    if ( !v40 )
    {
      v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v17,
        Method_EventTutorialMaster___c__DisplayClass33_0__showTutorialWithoutCheck_b__0__,
        0);
      *(_QWORD *)(v17 + 56) = v40;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 56), (int32_t)v40, v41, v42, v43, v44, v45, v46);
    }
    EventTutorialEntity__OpenTutorial(v37, v40, v39);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  Il2CppObject *Item; // x19
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x2

  if ( (byte_59389AC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass35_0__tutorialChainWithoutCheck_b__0__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass35_0_TypeInfo);
    byte_59389AC = 1;
  }
  v9 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = tutoList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)tutoList, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = callback;
  *(_DWORD *)(v9 + 32) = index;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)callback, v24, v25, v26, v27, v28, v29);
  v10 = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !v10 )
    goto LABEL_9;
  v30 = *(_DWORD *)(v9 + 32);
  if ( v30 < v10->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v10,
             v30,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v9,
      Method_EventTutorialMaster___c__DisplayClass35_0__tutorialChainWithoutCheck_b__0__,
      0);
    if ( Item )
    {
      EventTutorialEntity__OpenTutorialWithoutFlag((EventTutorialEntity_o *)Item, v32, v33);
      return;
    }
LABEL_9:
    sub_21FFECC(v10, v11);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_59389BF & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    this = (EventTutorialMaster_EventTutorialArgs_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_59389BF = 1;
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
                     (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
        v2->fields.eventIds = eventIds;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v2->fields.eventIds,
          (int32_t)eventIds,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        return eventIds;
      }
    }
    else
    {
      OpenEventIds = (System_Collections_Generic_List_int__o *)sub_21FFD10(int___TypeInfo, 1);
      if ( OpenEventIds )
      {
        eventIds = (System_Int32_array *)OpenEventIds;
        if ( !OpenEventIds->fields._size )
          sub_21FFED4(OpenEventIds);
        LODWORD(OpenEventIds->fields._syncRoot) = v2->fields.eventId;
        goto LABEL_10;
      }
    }
    sub_21FFECC(OpenEventIds, v5);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct EventTutorialMaster_o *_4__this; // x20
  void *_8__1; // x0
  Il2CppObject *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct EventTutorialMaster_o *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct EventTutorialMaster___c__DisplayClass13_0_o *v39; // x8
  struct EventTutorialMaster_StaticFields *static_fields; // x8
  struct EventTutorialEntity_array *sortedEntityArray; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v49; // x21
  struct EventTutorialMaster___c__DisplayClass13_1_o *_8__2; // x22
  System_Action_c *v51; // x0
  EventTutorialEntity_o *data; // x21
  System_Action_o *v53; // x23
  const MethodInfo *v54; // x2
  struct EventTutorialMaster___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v56; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o *v57; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v58; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v59; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v60; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v61; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v62; // x8
  struct TutorialCommunicateAdapter_o *afterActionAdapter; // x8
  System_Func_bool__o *_9__3; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  UnityEngine_WaitWhile_o *v71; // x21
  Il2CppObject **p__2__current; // x19
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int v79; // w8
  System_Func_bool__o *v80; // x20
  UnityEngine_WaitWhile_o *v81; // x21
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct EventTutorialMaster___c__DisplayClass13_1_o *v88; // x8
  struct EventTutorialMaster___c__DisplayClass13_1_o **p__8__2; // x21
  struct EventTutorialEntity_o *v90; // x8
  int32_t flagType; // w22
  int32_t eventId; // w23
  __int64 v93; // x1
  struct EventTutorialEntity_o *v94; // x8
  struct EventTutorialEntity_array *_7__wrap1; // x9
  Il2CppObject *v96; // x22
  struct EventTutorialMaster___c__DisplayClass13_1_o **v97; // x21
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct EventTutorialMaster___c__DisplayClass13_0_o *v110; // x1
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  struct EventTutorialEntity_array *v117; // x8
  __int64 _7__wrap2; // x9
  EventTutorialEntity_o *v119; // x1
  const MethodInfo *v120; // x2
  struct EventTutorialMaster___c__DisplayClass13_1_o *v121; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v122; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v123; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v124; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v125; // x9
  struct EventTutorialMaster___c__DisplayClass13_1_o *v126; // x8
  struct EventTutorialMaster___c__DisplayClass13_0_o *v127; // x9
  struct EventTutorialMaster_EventTutorialArgs_o *v128; // x9
  struct EventTutorialMaster___c__DisplayClass13_0_o *v129; // x21
  struct EventTutorialMaster_EventTutorialArgs_o *v130; // x8
  struct TutorialCommunicateAdapter_o *adapter; // x8
  System_Func_bool__o *_9__0; // x20
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  UnityEngine_WaitWhile_o *v139; // x21
  Il2CppObject **v140; // x19
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  const MethodInfo *v147; // x2
  struct EventTutorialMaster___c__DisplayClass13_0_o *v148; // x8
  struct EventTutorialMaster_EventTutorialArgs_o *v149; // x8
  System_Collections_Generic_HashSet_Enumerator_T__o v151; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_59389C9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__0__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__3__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass13_0_TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__1__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__2__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass13_1_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_59389C9 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  _8__1 = 0;
  memset(&v151, 0, sizeof(v151));
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)_8__1;
      this->fields.__1__state = -1;
LABEL_17:
      _8__2 = this->fields.__8__2;
      if ( !_8__2 )
        goto LABEL_91;
      v51 = System_Action_TypeInfo;
      data = _8__2->fields.data;
      _8__2->fields.isBusy = 1;
      v53 = (System_Action_o *)sub_21FFEBC(v51);
      System_Action___ctor(
        v53,
        (Il2CppObject *)_8__2,
        Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__1__,
        0);
      if ( !data )
        goto LABEL_91;
      EventTutorialEntity__OpenTutorial(data, v53, v54);
      v49 = this->fields.__8__2;
      if ( !v49 )
        goto LABEL_91;
      if ( v49->fields.isBusy )
      {
        v80 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v80,
          (Il2CppObject *)v49,
          Method_EventTutorialMaster___c__DisplayClass13_1__CoCheckTutorialLocal_b__2__,
          0);
        v81 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v81, v80, 0);
        this->fields.__2__current = (Il2CppObject *)v81;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v81, v82, v83, v84, v85, v86, v87);
        v79 = 2;
LABEL_39:
        *((_DWORD *)p__2__current - 2) = v79;
        LOBYTE(_8__1) = 1;
        return (char)_8__1;
      }
      goto LABEL_21;
    }
    this->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_21FFEBC(EventTutorialMaster___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor(v12, 0);
    this->fields.__8__1 = (struct EventTutorialMaster___c__DisplayClass13_0_o *)v12;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v12, v13, v14, v15, v16, v17, v18);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_91;
    args = this->fields.args;
    *((_QWORD *)_8__1 + 2) = args;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)_8__1 + 16), (int32_t)args, v19, v20, v21, v22, v23, v24);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_91;
    v32 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 3) = v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)_8__1 + 24), (int32_t)v32, v26, v27, v28, v29, v30, v31);
    v39 = this->fields.__8__1;
    if ( !v39 )
      goto LABEL_91;
    if ( v39->fields.args )
    {
      static_fields = EventTutorialMaster_TypeInfo->static_fields;
      sortedEntityArray = static_fields->sortedEntityArray;
      this->fields.__7__wrap1 = static_fields->sortedEntityArray;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap1,
        (int32_t)sortedEntityArray,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v48 = 0;
      this->fields.__7__wrap2 = 0;
      goto LABEL_53;
    }
LABEL_89:
    LOBYTE(_8__1) = 0;
    return (char)_8__1;
  }
  if ( _1__state == 2 )
  {
    v49 = this->fields.__8__2;
    this->fields.__1__state = -1;
    if ( !v49 )
      goto LABEL_91;
LABEL_21:
    CS___8__locals1 = v49->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      v56 = CS___8__locals1->fields.args;
      if ( v56 )
      {
        if ( !v56->fields.afterActionAdapter )
          goto LABEL_40;
        _8__1 = v49->fields.data;
        if ( _8__1 )
        {
          _8__1 = (void *)EventTutorialEntity__HasAfterAction((EventTutorialEntity_o *)_8__1, method);
          if ( ((unsigned __int8)_8__1 & 1) == 0 )
            goto LABEL_40;
          v57 = this->fields.__8__2;
          if ( v57 )
          {
            v58 = v57->fields.CS___8__locals1;
            if ( v58 )
            {
              v59 = v58->fields.args;
              if ( v59 )
              {
                _8__1 = v59->fields.afterActionAdapter;
                if ( _8__1 )
                {
                  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)_8__1, v57->fields.data, 0);
                  v60 = this->fields.__8__2;
                  if ( v60 )
                  {
                    v61 = v60->fields.CS___8__locals1;
                    if ( v61 )
                    {
                      v62 = v61->fields.args;
                      if ( v62 )
                      {
                        afterActionAdapter = v62->fields.afterActionAdapter;
                        if ( afterActionAdapter )
                        {
                          if ( !afterActionAdapter->fields._IsPerformanceBusy_k__BackingField )
                            goto LABEL_40;
                          _9__3 = v61->fields.__9__3;
                          if ( !_9__3 )
                          {
                            _9__3 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
                            System_Func_bool____ctor(
                              _9__3,
                              (Il2CppObject *)v61,
                              Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__3__,
                              0);
                            v61->fields.__9__3 = _9__3;
                            sub_21FFBF4(
                              (MissionNaviTransitionBoardItem_o *)&v61->fields.__9__3,
                              (int32_t)_9__3,
                              v65,
                              v66,
                              v67,
                              v68,
                              v69,
                              v70);
                          }
                          v71 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
                          UnityEngine_WaitWhile___ctor(v71, _9__3, 0);
                          this->fields.__2__current = (Il2CppObject *)v71;
                          p__2__current = &this->fields.__2__current;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)p__2__current,
                            (int32_t)v71,
                            v73,
                            v74,
                            v75,
                            v76,
                            v77,
                            v78);
                          v79 = 3;
                          goto LABEL_39;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_91:
    sub_21FFECC(_8__1, method);
  }
  if ( _1__state != 3 )
    return (char)_8__1;
  this->fields.__1__state = -1;
  do
  {
LABEL_40:
    p__8__2 = &this->fields.__8__2;
    v88 = this->fields.__8__2;
    if ( !v88 )
      goto LABEL_91;
    v90 = v88->fields.data;
    if ( !v90 )
      goto LABEL_91;
    if ( (v90->fields.flag & 1) != 0 )
    {
      eventId = v90->fields.eventId;
      flagType = v90->fields.flagType;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      if ( !TutorialFlag__Get_47394140(flagType, eventId, 0) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
        _8__1 = NetworkManager__getRequest_object_(
                  0,
                  (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
        if ( !*p__8__2 )
          goto LABEL_91;
        v94 = (*p__8__2)->fields.data;
        if ( !v94 || !_8__1 )
          goto LABEL_91;
        TutorialEventSetRequest__beginRequest(
          (TutorialEventSetRequest_o *)_8__1,
          v94->fields.flagType,
          v94->fields.eventId,
          0);
      }
    }
    this->fields.__8__2 = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__2, 0, v2, v3, v4, v5, v6, v7);
    v48 = this->fields.__7__wrap2 + 1;
    this->fields.__7__wrap2 = v48;
LABEL_53:
    _8__1 = &this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_91;
    if ( v48 >= SLODWORD(_7__wrap1->max_length) )
    {
      *(_QWORD *)_8__1 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)_8__1, 0, v42, v43, v44, v45, v46, v47);
      if ( !_4__this )
        goto LABEL_91;
      _8__1 = _4__this->fields.openedEventIds;
      if ( !_8__1 )
        goto LABEL_91;
      System_Collections_Generic_HashSet_int___GetEnumerator(
        &v151,
        (System_Collections_Generic_HashSet_int__o *)_8__1,
        (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                &v151,
                (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        EventTutorialMaster__TutorialAfterUpdateQuestTree(_4__this, (int32_t)v151.fields._current, v147);
      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
        &v151,
        (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      _8__1 = _4__this->fields.openedEventIds;
      if ( !_8__1 )
        goto LABEL_91;
      System_Collections_Generic_HashSet_int___Clear(
        (System_Collections_Generic_HashSet_int__o *)_8__1,
        (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
      v148 = this->fields.__8__1;
      if ( !v148 )
        goto LABEL_91;
      v149 = v148->fields.args;
      if ( !v149 )
        goto LABEL_91;
      ActionExtensions__Call(v149->fields.callbackAfter, 0);
      goto LABEL_89;
    }
    v96 = (Il2CppObject *)sub_21FFEBC(EventTutorialMaster___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v96, 0);
    this->fields.__8__2 = (struct EventTutorialMaster___c__DisplayClass13_1_o *)v96;
    v97 = &this->fields.__8__2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__8__2,
      (int32_t)v96,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
    _8__1 = this->fields.__8__2;
    if ( !_8__1 )
      goto LABEL_91;
    v110 = this->fields.__8__1;
    *((_QWORD *)_8__1 + 4) = v110;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)((char *)_8__1 + 32),
      (int32_t)v110,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    v117 = this->fields.__7__wrap1;
    if ( !v117 )
      goto LABEL_91;
    _7__wrap2 = this->fields.__7__wrap2;
    if ( (unsigned int)_7__wrap2 >= LODWORD(v117->max_length) )
      sub_21FFED4(_8__1);
    _8__1 = this->fields.__8__2;
    if ( !_8__1 )
      goto LABEL_91;
    v119 = v117->m_Items[_7__wrap2];
    *((_QWORD *)_8__1 + 2) = v119;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)((char *)_8__1 + 16),
      (int32_t)v119,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
    v121 = *v97;
    if ( !*v97 )
      goto LABEL_91;
    v122 = v121->fields.CS___8__locals1;
    if ( !v122 )
      goto LABEL_91;
    _8__1 = (void *)EventTutorialMaster__IsOpenCondition(v121->fields.data, v122->fields.args, v120);
  }
  while ( ((unsigned __int8)_8__1 & 1) == 0 );
  v123 = *v97;
  if ( !*v97 )
    goto LABEL_91;
  v124 = v123->fields.CS___8__locals1;
  if ( !v124 )
    goto LABEL_91;
  v125 = v124->fields.args;
  if ( !v125 )
    goto LABEL_91;
  if ( !v125->fields.adapter )
    goto LABEL_17;
  _8__1 = v123->fields.data;
  if ( !_8__1 )
    goto LABEL_91;
  _8__1 = (void *)EventTutorialEntity__HasBeforeAction((EventTutorialEntity_o *)_8__1, method);
  if ( ((unsigned __int8)_8__1 & 1) == 0 )
    goto LABEL_17;
  v126 = *v97;
  if ( !*v97 )
    goto LABEL_91;
  v127 = v126->fields.CS___8__locals1;
  if ( !v127 )
    goto LABEL_91;
  v128 = v127->fields.args;
  if ( !v128 )
    goto LABEL_91;
  _8__1 = v128->fields.adapter;
  if ( !_8__1 )
    goto LABEL_91;
  TutorialCommunicateAdapter__SendRequest((TutorialCommunicateAdapter_o *)_8__1, v126->fields.data, 0);
  if ( !*v97 )
    goto LABEL_91;
  v129 = (*v97)->fields.CS___8__locals1;
  if ( !v129 )
    goto LABEL_91;
  v130 = v129->fields.args;
  if ( !v130 )
    goto LABEL_91;
  adapter = v130->fields.adapter;
  if ( !adapter )
    goto LABEL_91;
  if ( !adapter->fields._IsPerformanceBusy_k__BackingField )
    goto LABEL_17;
  _9__0 = v129->fields.__9__0;
  if ( !_9__0 )
  {
    _9__0 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__0,
      (Il2CppObject *)v129,
      Method_EventTutorialMaster___c__DisplayClass13_0__CoCheckTutorialLocal_b__0__,
      0);
    v129->fields.__9__0 = _9__0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v129->fields.__9__0,
      (int32_t)_9__0,
      v133,
      v134,
      v135,
      v136,
      v137,
      v138);
  }
  v139 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v139, _9__0, 0);
  this->fields.__2__current = (Il2CppObject *)v139;
  v140 = &this->fields.__2__current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v140, (int32_t)v139, v141, v142, v143, v144, v145, v146);
  LOBYTE(_8__1) = 1;
  *((_DWORD *)v140 - 2) = 1;
  return (char)_8__1;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventTutorialMaster__CoCheckTutorialLocal_d__13_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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


void EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21___ctor(
        EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21__MoveNext(
        EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct EventTutorialMaster_EventTutorialArgs_o *args; // x8
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w8
  const MethodInfo *v11; // x1
  Il2CppObject *VoiceIfNeeded; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_59389CA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_59389CA = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v10 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    args = this->fields.args;
    this->fields.__1__state = -1;
    if ( !args )
      return 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
    if ( v8 )
      return 0;
    if ( !Instance )
      sub_21FFECC(v8, v9);
    QuestAfterAction__SetupTutorialCommandPreprocess((QuestAfterAction_o *)Instance, this->fields.args, 0);
    VoiceIfNeeded = (Il2CppObject *)EventTutorialMaster__CoWaitLoadVoiceIfNeeded((QuestAfterAction_o *)Instance, v11);
    this->fields.__2__current = VoiceIfNeeded;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)VoiceIfNeeded,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
  return result;
}


Il2CppObject *EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21__System_IDisposable_Dispose(
        EventTutorialMaster__CoRunTutorialPreloadPipeline_d__21_o *this,
        const MethodInfo *method)
{
  ;
}


void EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22___ctor(
        EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22__MoveNext(
        EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  QuestAfterAction_o *questAfterAction; // x21
  System_Action_o *v9; // x22
  int32_t v10; // w8
  System_Func_bool__o *v11; // x21
  UnityEngine_WaitWhile_o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_59389CB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass22_0__CoWaitLoadVoiceIfNeeded_b__0__);
    sub_21FFC50(&Method_EventTutorialMaster___c__DisplayClass22_0__CoWaitLoadVoiceIfNeeded_b__1__);
    sub_21FFC50(&EventTutorialMaster___c__DisplayClass22_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_59389CB = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v10 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    v5 = sub_21FFEBC(EventTutorialMaster___c__DisplayClass22_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5
      || (questAfterAction = this->fields.questAfterAction,
          *(_BYTE *)(v5 + 16) = 0,
          v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(
            v9,
            (Il2CppObject *)v5,
            Method_EventTutorialMaster___c__DisplayClass22_0__CoWaitLoadVoiceIfNeeded_b__0__,
            0),
          !questAfterAction) )
    {
      sub_21FFECC(v6, v7);
    }
    QuestAfterAction__LoadVoiceIfNeeded(questAfterAction, v9, 0);
    if ( *(_BYTE *)(v5 + 16) )
      return 0;
    v11 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v11,
      (Il2CppObject *)v5,
      Method_EventTutorialMaster___c__DisplayClass22_0__CoWaitLoadVoiceIfNeeded_b__1__,
      0);
    v12 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v12, v11, 0);
    this->fields.__2__current = (Il2CppObject *)v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
  return result;
}


Il2CppObject *EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22__System_Collections_IEnumerator_Reset(
        EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22__System_Collections_IEnumerator_get_Current(
        EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22__System_IDisposable_Dispose(
        EventTutorialMaster__CoWaitLoadVoiceIfNeeded_d__22_o *this,
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
  EventTutorialMaster_EventTutorialArgs_o *args; // x0
  Il2CppObject *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w8
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_59389CC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59389CC = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 2 )
  {
    v13 = -1;
  }
  else if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
    if ( !Master_object )
      sub_21FFECC(0, v15);
    v17 = (Il2CppObject *)EventTutorialMaster__CoCheckTutorialLocal(
                            (EventTutorialMaster_o *)Master_object,
                            this->fields.args,
                            v16);
    this->fields.__2__current = v17;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    result = 1;
    v13 = 2;
  }
  else
  {
    if ( _1__state )
      return result;
    args = this->fields.args;
    this->fields.__1__state = -1;
    v6 = (Il2CppObject *)EventTutorialMaster__CoRunTutorialPreloadPipeline(args, method);
    this->fields.__2__current = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    v13 = 1;
    result = 1;
  }
  this->fields.__1__state = v13;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventTutorialMaster__CoroutineCheckTutorial_d__20_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59389C0 & 1) == 0 )
  {
    sub_21FFC50(&EventTutorialMaster___c_TypeInfo);
    byte_59389C0 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventTutorialMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialMaster___c_TypeInfo->static_fields->__9 = (struct EventTutorialMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventTutorialMaster___c_TypeInfo->static_fields,
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


void EventTutorialMaster___c___OpenTutorialImages_b__31_0(EventTutorialMaster___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59389C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59389C1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


System_Collections_Generic_IEnumerable_string__o *EventTutorialMaster___c___PlayTutorialSetUpAction_b__41_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(
                                                               x,
                                                               (const MethodInfo *)x);
}


bool EventTutorialMaster___c___TutorialAfterUpdateQuestTree_b__42_2(
        EventTutorialMaster___c_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.type == 113;
}


int32_t EventTutorialMaster___c___preProcess_b__8_0(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return -x->fields.priority;
}


int32_t EventTutorialMaster___c___preProcess_b__8_1(
        EventTutorialMaster___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
  if ( (byte_59389C2 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_0_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59389C2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass11_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, method);
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
  if ( (byte_59389C3 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass11_0_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59389C3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (EventTutorialMaster___c__DisplayClass11_0_o *)_4__this->fields.openedEventIds) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.eventId,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (EventTutorialMaster___c__DisplayClass11_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, method);
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
  if ( (byte_59389C4 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass12_1_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59389C4 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_21FFECC(this, method);
  }
  EventTutorialMaster__checkTutorial_49206860(
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
  if ( (byte_59389C5 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass12_1_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59389C5 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)_4__this->fields.openedEventIds) == 0
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)System_Collections_Generic_HashSet_int___Add(
                                                                (System_Collections_Generic_HashSet_int__o *)this,
                                                                data->fields.eventId,
                                                                (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (v6 = v2->fields.CS___8__locals1) == 0)
    || (this = (EventTutorialMaster___c__DisplayClass12_1_o *)v6->fields.__4__this) == 0 )
  {
    sub_21FFECC(this, method);
  }
  EventTutorialMaster__checkTutorial_49206860(
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  if ( (byte_59389C6 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass13_1_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_59389C6 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (data = v2->fields.data) == 0
    || (this = (EventTutorialMaster___c__DisplayClass13_1_o *)_4__this->fields.openedEventIds) == 0 )
  {
    sub_21FFECC(this, method);
  }
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    data->fields.eventId,
    (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
  v2->fields.isBusy = 0;
}


bool EventTutorialMaster___c__DisplayClass13_1___CoCheckTutorialLocal_b__2(
        EventTutorialMaster___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


void EventTutorialMaster___c__DisplayClass22_0___ctor(
        EventTutorialMaster___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass22_0___CoWaitLoadVoiceIfNeeded_b__0(
        EventTutorialMaster___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  this->fields.isVoiceLoadFinished = 1;
}


bool EventTutorialMaster___c__DisplayClass22_0___CoWaitLoadVoiceIfNeeded_b__1(
        EventTutorialMaster___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  return !this->fields.isVoiceLoadFinished;
}


void EventTutorialMaster___c__DisplayClass27_0___ctor(
        EventTutorialMaster___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass27_0___GetAvailableTutorialArray_b__0(
        EventTutorialMaster___c__DisplayClass27_0_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  return EventTutorialMaster__IsOpenCondition(x, this->fields.args, method);
}


void EventTutorialMaster___c__DisplayClass33_0___ctor(
        EventTutorialMaster___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass33_0___showTutorialWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster_o *_4__this; // x0
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
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


void EventTutorialMaster___c__DisplayClass35_0___ctor(
        EventTutorialMaster___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialMaster___c__DisplayClass35_0___tutorialChainWithoutCheck_b__0(
        EventTutorialMaster___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialMaster_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  EventTutorialMaster__tutorialChainWithoutCheck(
    _4__this,
    this->fields.tutoList,
    this->fields.index + 1,
    this->fields.callback,
    v2);
}


void EventTutorialMaster___c__DisplayClass42_0___ctor(
        EventTutorialMaster___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass42_0___TutorialAfterUpdateQuestTree_b__0(
        EventTutorialMaster___c__DisplayClass42_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass42_0_o *v4; // x20

  v4 = this;
  if ( (byte_59389C7 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass42_0_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_59389C7 = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass42_0_o *)v4->fields.contTypeArray) == 0 )
    sub_21FFECC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.condType,
           (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass42_0___TutorialAfterUpdateQuestTree_b__1(
        EventTutorialMaster___c__DisplayClass42_0_o *this,
        CommonReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.condId == this->fields.eventId;
}


bool EventTutorialMaster___c__DisplayClass42_0___TutorialAfterUpdateQuestTree_b__3(
        EventTutorialMaster___c__DisplayClass42_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  EventTutorialMaster___c__DisplayClass42_0_o *v4; // x20

  v4 = this;
  if ( (byte_59389C8 & 1) == 0 )
  {
    this = (EventTutorialMaster___c__DisplayClass42_0_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_59389C8 = 1;
  }
  if ( !x || (this = (EventTutorialMaster___c__DisplayClass42_0_o *)v4->fields.contTypeArray) == 0 )
    sub_21FFECC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.type,
           (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


bool EventTutorialMaster___c__DisplayClass42_0___TutorialAfterUpdateQuestTree_b__4(
        EventTutorialMaster___c__DisplayClass42_0_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.targetId == this->fields.eventId;
}


void EventTutorialMaster___c__DisplayClass42_1___ctor(
        EventTutorialMaster___c__DisplayClass42_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass42_1___TutorialAfterUpdateQuestTree_b__5(
        EventTutorialMaster___c__DisplayClass42_1_o *this,
        QuestReleaseEntity_o *x,
        const MethodInfo *method)
{
  struct CommonReleaseEntity_o *targetCommonEnt; // x8

  if ( !x || (targetCommonEnt = this->fields.targetCommonEnt) == 0 )
    sub_21FFECC(this, x);
  return x->fields.targetId == targetCommonEnt->fields.id;
}


void EventTutorialMaster___c__DisplayClass49_0___ctor(
        EventTutorialMaster___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTutorialMaster___c__DisplayClass49_0___GetTutorialEntityList_b__0(
        EventTutorialMaster___c__DisplayClass49_0_o *this,
        EventTutorialEntity_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_21FFECC(this, 0);
  return data->fields.eventId == this->fields.eventId && data->fields.flagType == this->fields.flagType;
}