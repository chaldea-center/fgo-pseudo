void EventInfoUIProgressControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2E655 & 1) == 0 )
  {
    sub_1C94098(&EventInfoUIProgressControl_TypeInfo);
    sub_1C94098(&StringLiteral_5666/*"EVENT_PROGRESS_VALUE"*/);
    byte_4D2E655 = 1;
  }
  EventInfoUIProgressControl_TypeInfo->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE = (struct System_String_o *)StringLiteral_5666/*"EVENT_PROGRESS_VALUE"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventInfoUIProgressControl_TypeInfo->static_fields,
    StringLiteral_5666/*"EVENT_PROGRESS_VALUE"*/,
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
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4D2E650 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
    sub_1C94098(&System_Predicate_EventProgressValueEntity__TypeInfo);
    sub_1C94098(&Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__);
    sub_1C94098(&EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
    byte_4D2E650 = 1;
  }
  v5 = sub_1C942E4(EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = progressValue;
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList )
    return 0;
  v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_EventProgressValueEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__,
    0);
  return (EventProgressValueEntity_o *)System_Collections_Generic_List_object___Find(
                                         (System_Collections_Generic_List_object__o *)eventProgressValueEntityList,
                                         (System_Predicate_T__o *)v9,
                                         (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
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
int32_t EventInfoUIProgressControl__GetEventProgressValueSaveData_45317284(
        int32_t eventId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey_45317140; // x0

  if ( (byte_4D2E654 & 1) == 0 )
  {
    sub_1C94098(&EventInfoUIProgressControl_TypeInfo);
    byte_4D2E654 = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventProgressValueSaveKey_45317140 = EventInfoUIProgressControl__GetEventProgressValueSaveKey_45317140(
                                         eventId,
                                         *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey_45317140, defaultValue, 0);
}


System_String_o *EventInfoUIProgressControl__GetEventProgressValueSaveKey(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_4D2E652 & 1) == 0 )
  {
    this = (EventInfoUIProgressControl_o *)sub_1C94098(&EventInfoUIProgressControl_TypeInfo);
    byte_4D2E652 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C942F0(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  return EventInfoUIProgressControl__GetEventProgressValueSaveKey_45317140(eventId, method);
}


System_String_o *EventInfoUIProgressControl__GetEventProgressValueSaveKey_45317140(
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_c *v2; // x0
  System_String_o *SAVEKEY_EVENT_PROGRESS_VALUE; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4D2E653 & 1) == 0 )
  {
    sub_1C94098(&EventInfoUIProgressControl_TypeInfo);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    byte_4D2E653 = 1;
  }
  v2 = EventInfoUIProgressControl_TypeInfo;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    v2 = EventInfoUIProgressControl_TypeInfo;
  }
  SAVEKEY_EVENT_PROGRESS_VALUE = v2->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE;
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_64456008(SAVEKEY_EVENT_PROGRESS_VALUE, (System_String_o *)StringLiteral_16163/*"_"*/, v4, 0);
}


void EventInfoUIProgressControl__InitEventProgressParams(
        EventInfoUIProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0
  struct System_Collections_Generic_List_EventProgressValueEntity__o **p_eventProgressValueEntityList; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x0
  System_Collections_Generic_List_object__o *v16; // x21
  System_Comparison_T__o *v17; // x22
  Il2CppObject *v18; // x23
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x21
  int32_t v29; // w22
  int32_t v30; // w24
  int64_t v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2E64F & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_EventProgressValueEntity__TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__);
    sub_1C94098(&Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__);
    sub_1C94098(&EventInfoUIProgressControl___c_TypeInfo);
    byte_4D2E64F = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    goto LABEL_27;
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0);
  this->fields.eventProgressValueEntityList = EntityListByEventId;
  p_eventProgressValueEntityList = &this->fields.eventProgressValueEntityList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventProgressValueEntityList,
    (int32_t)EntityListByEventId,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventProgressValueEntityList,
          (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___) )
  {
    return;
  }
  v16 = (System_Collections_Generic_List_object__o *)*p_eventProgressValueEntityList;
  Master_object = EventInfoUIProgressControl___c_TypeInfo;
  if ( !EventInfoUIProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl___c_TypeInfo);
    Master_object = EventInfoUIProgressControl___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = EventInfoUIProgressControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v17 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventProgressValueEntity__TypeInfo);
    System_Comparison_object____ctor(
      v17,
      v18,
      Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__,
      0);
    static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventProgressValueEntity__o *)v17;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)v17, v20, v21, v22, v23, v24, v25);
  }
  if ( !v16
    || (System_Collections_Generic_List_object___Sort_59164920(
          v16,
          v17,
          (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__),
        (Master_object = *p_eventProgressValueEntityList) == 0) )
  {
LABEL_27:
    sub_1C942F0(Master_object, v6);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    if ( !v26 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1C942F0(v26, v27);
    v30 = *(_DWORD *)((char *)&v38.fields._current->klass + (unsigned __int64)&off_18);
    v29 = *(_DWORD *)((char *)&v38.fields._current->klass + (unsigned __int64)&off_18 + 4);
    v31 = *(int *)((char *)&v38.fields._current->klass + (unsigned __int64)&qword_20);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v30, v29, v31, 0, 0, 0) )
    {
      this->fields.currentEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.currentEventProgressValueEntity,
        (int32_t)current,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      break;
    }
    this->fields.nextEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.nextEventProgressValueEntity,
      (int32_t)current,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
}


void EventInfoUIProgressControl__Initialization(
        EventInfoUIProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_eventUiEntity )
    sub_1C942F0(v10, v11);
  EventInfoUIProgressControl__InitEventProgressParams(this, (*p_eventUiEntity)->fields.eventId, v12);
}


bool EventInfoUIProgressControl__IsDispEventProgress(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0

  if ( (byte_4D2E651 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
    byte_4D2E651 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v4);
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
           (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E656 & 1) == 0 )
  {
    sub_1C94098(&EventInfoUIProgressControl___c_TypeInfo);
    byte_4D2E656 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventInfoUIProgressControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoUIProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUIProgressControl___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventInfoUIProgressControl___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, a);
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
    sub_1C942F0(this, 0);
  return n->fields.progressValue == this->fields.progressValue;
}