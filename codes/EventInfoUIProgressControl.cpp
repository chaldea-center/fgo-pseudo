void __fastcall EventInfoUIProgressControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5D16E & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIProgressControl_TypeInfo);
    sub_1B885B0(&StringLiteral_5667/*"EVENT_PROGRESS_VALUE"*/);
    byte_4A5D16E = 1;
  }
  EventInfoUIProgressControl_TypeInfo->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE = (struct System_String_o *)StringLiteral_5667/*"EVENT_PROGRESS_VALUE"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoUIProgressControl_TypeInfo->static_fields,
    StringLiteral_5667/*"EVENT_PROGRESS_VALUE"*/,
    v1,
    v2);
}


bool __fastcall EventInfoUIProgressControl__CheckEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(this, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
}


EventProgressValueEntity_o *__fastcall EventInfoUIProgressControl__GetEntityByProgressValue(
        EventInfoUIProgressControl_o *this,
        int32_t progressValue,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5D169 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
    sub_1B885B0(&System_Predicate_EventProgressValueEntity__TypeInfo);
    sub_1B885B0(&Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__);
    sub_1B885B0(&EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
    byte_4A5D169 = 1;
  }
  v5 = sub_1B887FC(EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = progressValue;
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList )
    return 0LL;
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventProgressValueEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__,
    0LL);
  return (EventProgressValueEntity_o *)System_Collections_Generic_List_object___Find(
                                         (System_Collections_Generic_List_object__o *)eventProgressValueEntityList,
                                         (System_Predicate_T__o *)v9,
                                         (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
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
int32_t __fastcall EventInfoUIProgressControl__GetEventProgressValueSaveData_42147484(
        int32_t eventId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey_42147340; // x0

  if ( (byte_4A5D16D & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIProgressControl_TypeInfo);
    byte_4A5D16D = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventProgressValueSaveKey_42147340 = EventInfoUIProgressControl__GetEventProgressValueSaveKey_42147340(
                                         eventId,
                                         *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey_42147340, defaultValue, 0LL);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_4A5D16B & 1) == 0 )
  {
    this = (EventInfoUIProgressControl_o *)sub_1B885B0(&EventInfoUIProgressControl_TypeInfo);
    byte_4A5D16B = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B8880C(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  return EventInfoUIProgressControl__GetEventProgressValueSaveKey_42147340(eventId, method);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey_42147340(
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_c *v2; // x0
  System_String_o *SAVEKEY_EVENT_PROGRESS_VALUE; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = eventId;
  if ( (byte_4A5D16C & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIProgressControl_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5D16C = 1;
  }
  v2 = EventInfoUIProgressControl_TypeInfo;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    v2 = EventInfoUIProgressControl_TypeInfo;
  }
  SAVEKEY_EVENT_PROGRESS_VALUE = v2->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_61718292(SAVEKEY_EVENT_PROGRESS_VALUE, (System_String_o *)StringLiteral_16123/*"_"*/, v4, 0LL);
}


void __fastcall EventInfoUIProgressControl__InitEventProgressParams(
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
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x0
  System_Collections_Generic_List_object__o *v12; // x21
  System_Comparison_T__o *v13; // x22
  Il2CppObject *v14; // x23
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w22
  int32_t monitor; // w24
  int64_t klass_low; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5D168 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventProgressValueEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__);
    sub_1B885B0(&Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__);
    sub_1B885B0(&EventInfoUIProgressControl___c_TypeInfo);
    byte_4A5D168 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    goto LABEL_27;
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0LL);
  this->fields.eventProgressValueEntityList = EntityListByEventId;
  p_eventProgressValueEntityList = &this->fields.eventProgressValueEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventProgressValueEntityList,
    (int32_t)EntityListByEventId,
    v9,
    v10);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventProgressValueEntityList,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___) )
  {
    return;
  }
  v12 = (System_Collections_Generic_List_object__o *)*p_eventProgressValueEntityList;
  Master_object = EventInfoUIProgressControl___c_TypeInfo;
  if ( !EventInfoUIProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl___c_TypeInfo);
    Master_object = EventInfoUIProgressControl___c_TypeInfo;
  }
  v13 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v13 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = EventInfoUIProgressControl___c_TypeInfo;
    }
    v14 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v13 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventProgressValueEntity__TypeInfo);
    System_Comparison_object____ctor(
      v13,
      v14,
      Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__,
      0LL);
    static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventProgressValueEntity__o *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v13, v16, v17);
  }
  if ( !v12
    || (System_Collections_Generic_List_object___Sort_55571192(
          v12,
          v13,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__),
        (Master_object = *p_eventProgressValueEntityList) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(Master_object, v6);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B8880C(v18, v19);
    monitor = (int32_t)v26.fields._current[1].monitor;
    monitor_high = HIDWORD(v26.fields._current[1].monitor);
    klass_low = SLODWORD(v26.fields._current[2].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
    {
      this->fields.currentEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.currentEventProgressValueEntity,
        (int32_t)current,
        v24,
        v25);
      break;
    }
    this->fields.nextEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.nextEventProgressValueEntity,
      (int32_t)current,
      v24,
      v25);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  if ( !*p_eventUiEntity )
    sub_1B8880C(v6, v7);
  EventInfoUIProgressControl__InitEventProgressParams(this, (*p_eventUiEntity)->fields.eventId, v8);
}


bool __fastcall EventInfoUIProgressControl__IsDispEventProgress(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0

  if ( (byte_4A5D16A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
    byte_4A5D16A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0LL);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D16F & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIProgressControl___c_TypeInfo);
    byte_4A5D16F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventInfoUIProgressControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventInfoUIProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUIProgressControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventInfoUIProgressControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, 0LL);
  return n->fields.progressValue == this->fields.progressValue;
}