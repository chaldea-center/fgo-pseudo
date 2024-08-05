void __fastcall EventInfoUIProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A0069E & 1) == 0 )
  {
    sub_1B64870(&EventInfoUIProgressControl_TypeInfo, v1);
    sub_1B64870(&StringLiteral_5641/*"EVENT_PROGRESS_VALUE"*/, v4);
    byte_4A0069E = 1;
  }
  EventInfoUIProgressControl_TypeInfo->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE = (struct System_String_o *)StringLiteral_5641/*"EVENT_PROGRESS_VALUE"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)EventInfoUIProgressControl_TypeInfo->static_fields,
    StringLiteral_5641/*"EVENT_PROGRESS_VALUE"*/,
    v2,
    v3);
}


bool __fastcall EventInfoUIProgressControl__CheckEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(this, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventProgressValueEntity_o *__fastcall EventInfoUIProgressControl__GetEntityByProgressValue(
        EventInfoUIProgressControl_o *this,
        int32_t progressValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4A00699 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_EventProgressValueEntity__Find__, *(_QWORD *)&progressValue);
    sub_1B64870(&System_Predicate_EventProgressValueEntity__TypeInfo, v5);
    sub_1B64870(&Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__, v6);
    sub_1B64870(&EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo, v7);
    byte_4A00699 = 1;
  }
  v8 = sub_1B64ABC(EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64ACC(v9, v10);
  *(_DWORD *)(v8 + 16) = progressValue;
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_EventProgressValueEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__,
    0LL);
  return (EventProgressValueEntity_o *)System_Collections_Generic_List_object___Find(
                                         (System_Collections_Generic_List_object__o *)eventProgressValueEntityList,
                                         (System_Predicate_T__o *)v12,
                                         (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoUIProgressControl__GetEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                this,
                                *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoUIProgressControl__GetEventProgressValueSaveData_41978980(
        int32_t eventId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey_41978836; // x0

  if ( (byte_4A0069D & 1) == 0 )
  {
    sub_1B64870(&EventInfoUIProgressControl_TypeInfo, *(_QWORD *)&defaultValue);
    byte_4A0069D = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventProgressValueSaveKey_41978836 = EventInfoUIProgressControl__GetEventProgressValueSaveKey_41978836(
                                         eventId,
                                         *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey_41978836, defaultValue, 0LL);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_4A0069B & 1) == 0 )
  {
    this = (EventInfoUIProgressControl_o *)sub_1B64870(&EventInfoUIProgressControl_TypeInfo, method);
    byte_4A0069B = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B64ACC(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  return EventInfoUIProgressControl__GetEventProgressValueSaveKey_41978836(eventId, method);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey_41978836(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x1
  EventInfoUIProgressControl_c *v3; // x0
  System_String_o *SAVEKEY_EVENT_PROGRESS_VALUE; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_4A0069C & 1) == 0 )
  {
    sub_1B64870(&EventInfoUIProgressControl_TypeInfo, method);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v2);
    byte_4A0069C = 1;
  }
  v3 = EventInfoUIProgressControl_TypeInfo;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    v3 = EventInfoUIProgressControl_TypeInfo;
  }
  SAVEKEY_EVENT_PROGRESS_VALUE = v3->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE;
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61394836(SAVEKEY_EVENT_PROGRESS_VALUE, (System_String_o *)StringLiteral_16056/*"_"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIProgressControl__InitEventProgressParams(
        EventInfoUIProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
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
  void *Master_object; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0
  struct System_Collections_Generic_List_EventProgressValueEntity__o **p_eventProgressValueEntityList; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x0
  System_Collections_Generic_List_object__o *v23; // x21
  System_Comparison_T__o *v24; // x22
  Il2CppObject *v25; // x23
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w22
  int32_t monitor; // w24
  int64_t klass_low; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A00698 & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_EventProgressValueEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B64870(&CondType_TypeInfo, v5);
    sub_1B64870(&Method_DataManager_GetMaster_EventProgressValueMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__get_Current__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__, v13);
    sub_1B64870(&Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__, v14);
    sub_1B64870(&EventInfoUIProgressControl___c_TypeInfo, v15);
    byte_4A00698 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    goto LABEL_27;
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0LL);
  this->fields.eventProgressValueEntityList = EntityListByEventId;
  p_eventProgressValueEntityList = &this->fields.eventProgressValueEntityList;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventProgressValueEntityList,
    (int32_t)EntityListByEventId,
    v20,
    v21);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventProgressValueEntityList,
          (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___) )
  {
    return;
  }
  v23 = (System_Collections_Generic_List_object__o *)*p_eventProgressValueEntityList;
  Master_object = EventInfoUIProgressControl___c_TypeInfo;
  if ( !EventInfoUIProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl___c_TypeInfo);
    Master_object = EventInfoUIProgressControl___c_TypeInfo;
  }
  v24 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = EventInfoUIProgressControl___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v24 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_EventProgressValueEntity__TypeInfo);
    System_Comparison_object____ctor(
      v24,
      v25,
      Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__,
      0LL);
    static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventProgressValueEntity__o *)v24;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v24, v27, v28);
  }
  if ( !v23
    || (System_Collections_Generic_List_object___Sort_55252244(
          v23,
          v24,
          (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__),
        (Master_object = *p_eventProgressValueEntityList) == 0LL) )
  {
LABEL_27:
    sub_1B64ACC(Master_object, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_1B64ACC(v29, v30);
    monitor = (int32_t)v37.fields._current[1].monitor;
    monitor_high = HIDWORD(v37.fields._current[1].monitor);
    klass_low = SLODWORD(v37.fields._current[2].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      this->fields.currentEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.currentEventProgressValueEntity,
        (int32_t)current,
        v35,
        v36);
      break;
    }
    this->fields.nextEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.nextEventProgressValueEntity,
      (int32_t)current,
      v35,
      v36);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
}


void __fastcall EventInfoUIProgressControl__Initialization(
        EventInfoUIProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  if ( !*p_eventUiEntity )
    sub_1B64ACC(v6, v7);
  EventInfoUIProgressControl__InitEventProgressParams(this, (*p_eventUiEntity)->fields.eventId, v8);
}


bool __fastcall EventInfoUIProgressControl__IsDispEventProgress(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0

  if ( (byte_4A0069A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventProgressValueMaster___, method);
    sub_1B64870(&DataManager_TypeInfo, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v4);
    byte_4A0069A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    sub_1B64ACC(0LL, v6);
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0LL);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
           (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
}


void __fastcall EventInfoUIProgressControl__Redisplay(EventInfoUIProgressControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIProgressControl__InitEventProgressParams(this, eventUiEntity->fields.eventId, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoUIProgressControl__SaveEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                this,
                                *(const MethodInfo **)&value);
  UnityEngine_PlayerPrefs__SetInt(EventProgressValueSaveKey, value, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventInfoUIProgressControl__Setup(
        EventInfoUIProgressControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoUIProgressControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0069F & 1) == 0 )
  {
    sub_1B64870(&EventInfoUIProgressControl___c_TypeInfo, v1);
    byte_4A0069F = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(EventInfoUIProgressControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoUIProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUIProgressControl___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)EventInfoUIProgressControl___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventInfoUIProgressControl___c___ctor(EventInfoUIProgressControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoUIProgressControl___c___InitEventProgressParams_b__6_0(
        EventInfoUIProgressControl___c_o *this,
        EventProgressValueEntity_o *a,
        EventProgressValueEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64ACC(this, a);
  return b->fields.progressValue - a->fields.progressValue;
}


void __fastcall EventInfoUIProgressControl___c__DisplayClass9_0___ctor(
        EventInfoUIProgressControl___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUIProgressControl___c__DisplayClass9_0___GetEntityByProgressValue_b__0(
        EventInfoUIProgressControl___c__DisplayClass9_0_o *this,
        EventProgressValueEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64ACC(this, 0LL);
  return n->fields.progressValue == this->fields.progressValue;
}