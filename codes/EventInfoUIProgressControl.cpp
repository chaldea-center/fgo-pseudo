void EventInfoUIProgressControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593AD80 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIProgressControl_TypeInfo);
    sub_21FFC50(&StringLiteral_5881/*"EVENT_PROGRESS_VALUE"*/);
    byte_593AD80 = 1;
  }
  v7 = StringLiteral_5881/*"EVENT_PROGRESS_VALUE"*/;
  EventInfoUIProgressControl_TypeInfo->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE = (struct System_String_o *)StringLiteral_5881/*"EVENT_PROGRESS_VALUE"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoUIProgressControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


bool EventInfoUIProgressControl__CheckEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(this, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0);
}


EventProgressValueEntity_o *EventInfoUIProgressControl__GetEntityByProgressValue(
        EventInfoUIProgressControl_o *this,
        int32_t progressValue,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_593AD7B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
    sub_21FFC50(&System_Predicate_EventProgressValueEntity__TypeInfo);
    sub_21FFC50(&Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__);
    sub_21FFC50(&EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
    byte_593AD7B = 1;
  }
  v5 = sub_21FFEBC(EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  *(_DWORD *)(v5 + 16) = progressValue;
  if ( !eventProgressValueEntityList )
    return 0;
  v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventProgressValueEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__,
    0);
  return (EventProgressValueEntity_o *)System_Collections_Generic_List_object___Find(
                                         (System_Collections_Generic_List_object__o *)eventProgressValueEntityList,
                                         (System_Predicate_T__o *)v9,
                                         (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventInfoUIProgressControl__GetEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                this,
                                *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey, defaultValue, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventInfoUIProgressControl__GetEventProgressValueSaveData_52551696(
        int32_t eventId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey_52551552; // x0

  if ( (byte_593AD7F & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIProgressControl_TypeInfo);
    byte_593AD7F = 1;
  }
  if ( !*(&EventInfoUIProgressControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, *(_QWORD *)&defaultValue);
  EventProgressValueSaveKey_52551552 = EventInfoUIProgressControl__GetEventProgressValueSaveKey_52551552(
                                         eventId,
                                         *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey_52551552, defaultValue, 0);
}


System_String_o *EventInfoUIProgressControl__GetEventProgressValueSaveKey(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_593AD7D & 1) == 0 )
  {
    this = (EventInfoUIProgressControl_o *)sub_21FFC50(&EventInfoUIProgressControl_TypeInfo);
    byte_593AD7D = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_21FFECC(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( !*(&EventInfoUIProgressControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, method);
  return EventInfoUIProgressControl__GetEventProgressValueSaveKey_52551552(eventId, method);
}


System_String_o *EventInfoUIProgressControl__GetEventProgressValueSaveKey_52551552(
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_c *v2; // x0
  System_String_o *SAVEKEY_EVENT_PROGRESS_VALUE; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_593AD7E & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIProgressControl_TypeInfo);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_593AD7E = 1;
  }
  v2 = EventInfoUIProgressControl_TypeInfo;
  if ( !*(&EventInfoUIProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, method);
    v2 = EventInfoUIProgressControl_TypeInfo;
  }
  SAVEKEY_EVENT_PROGRESS_VALUE = v2->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE;
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_75481624(SAVEKEY_EVENT_PROGRESS_VALUE, (System_String_o *)StringLiteral_16714/*"_"*/, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIProgressControl__InitEventProgressParams(
        EventInfoUIProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int v5; // w8
  void *Master_object; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0
  struct System_Collections_Generic_List_EventProgressValueEntity__o **p_eventProgressValueEntityList; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x0
  System_Collections_Generic_List_object__o *v17; // x21
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__6_0; // x22
  Il2CppObject *v20; // x23
  struct EventInfoUIProgressControl___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x20
  int64_t v31; // x23
  int32_t v32; // w21
  int32_t v33; // w22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593AD7A & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventProgressValueEntity__TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__);
    sub_21FFC50(&Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__);
    sub_21FFC50(&EventInfoUIProgressControl___c_TypeInfo);
    byte_593AD7A = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v40, 0, sizeof(v40));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    goto LABEL_27;
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0);
  this->fields.eventProgressValueEntityList = EntityListByEventId;
  p_eventProgressValueEntityList = &this->fields.eventProgressValueEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventProgressValueEntityList,
    (int32_t)EntityListByEventId,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventProgressValueEntityList,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___) )
  {
    return;
  }
  v17 = (System_Collections_Generic_List_object__o *)*p_eventProgressValueEntityList;
  Master_object = EventInfoUIProgressControl___c_TypeInfo;
  if ( !*(&EventInfoUIProgressControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl___c_TypeInfo, v7);
    Master_object = EventInfoUIProgressControl___c_TypeInfo;
  }
  static_fields = (struct EventInfoUIProgressControl___c_StaticFields *)*((_QWORD *)Master_object + 23);
  _9__6_0 = (System_Comparison_T__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*((_DWORD *)Master_object + 57) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v7);
      static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventProgressValueEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__6_0,
      v20,
      Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__,
      0);
    v21 = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    v21->__9__6_0 = (struct System_Comparison_EventProgressValueEntity__o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__6_0, (int32_t)_9__6_0, v22, v23, v24, v25, v26, v27);
  }
  if ( !v17
    || (System_Collections_Generic_List_object___Sort_71636404(
          v17,
          _9__6_0,
          (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__),
        (Master_object = *p_eventProgressValueEntityList) == 0) )
  {
LABEL_27:
    sub_21FFECC(Master_object, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    if ( !v28 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_21FFECC(v28, v29);
    v31 = *(int *)((char *)&v40.fields._current->klass + (unsigned __int64)&qword_20);
    v32 = *(_DWORD *)((char *)&v40.fields._current->klass + (unsigned __int64)off_18);
    v33 = *(_DWORD *)((char *)&v40.fields._current->klass + (unsigned __int64)off_18 + 4);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
    if ( CondType__IsOpen(v32, v33, v31, 0, 0, 0) )
    {
      this->fields.currentEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.currentEventProgressValueEntity,
        (int32_t)current,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      break;
    }
    this->fields.nextEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.nextEventProgressValueEntity,
      (int32_t)current,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
}


void EventInfoUIProgressControl__Initialization(
        EventInfoUIProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_eventUiEntity )
    sub_21FFECC(v10, v11);
  EventInfoUIProgressControl__InitEventProgressParams(this, (*p_eventUiEntity)->fields.eventId, v12);
}


bool EventInfoUIProgressControl__IsDispEventProgress(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0

  if ( (byte_593AD7C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
    byte_593AD7C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
}


void EventInfoUIProgressControl__Redisplay(EventInfoUIProgressControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIProgressControl__InitEventProgressParams(this, eventUiEntity->fields.eventId, v2);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoUIProgressControl__SaveEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                this,
                                *(const MethodInfo **)&value);
  UnityEngine_PlayerPrefs__SetInt(EventProgressValueSaveKey, value, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventInfoUIProgressControl__Setup(
        EventInfoUIProgressControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  ;
}


void EventInfoUIProgressControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AD81 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIProgressControl___c_TypeInfo);
    byte_593AD81 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoUIProgressControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoUIProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUIProgressControl___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoUIProgressControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoUIProgressControl___c___ctor(EventInfoUIProgressControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoUIProgressControl___c___InitEventProgressParams_b__6_0(
        EventInfoUIProgressControl___c_o *this,
        EventProgressValueEntity_o *a,
        EventProgressValueEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
  return b->fields.progressValue - a->fields.progressValue;
}


void EventInfoUIProgressControl___c__DisplayClass9_0___ctor(
        EventInfoUIProgressControl___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoUIProgressControl___c__DisplayClass9_0___GetEntityByProgressValue_b__0(
        EventInfoUIProgressControl___c__DisplayClass9_0_o *this,
        EventProgressValueEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.progressValue == this->fields.progressValue;
}