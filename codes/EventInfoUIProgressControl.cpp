void __fastcall EventInfoUIProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BB66FA & 1) == 0 )
  {
    sub_1C13D24(&EventInfoUIProgressControl_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_5780/*"EVENT_POSSESSION_ITEM_VALUE"*/, v8);
    byte_4BB66FA = 1;
  }
  EventInfoUIProgressControl_TypeInfo->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE = (struct System_String_o *)StringLiteral_5780/*"EVENT_POSSESSION_ITEM_VALUE"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventInfoUIProgressControl_TypeInfo->static_fields,
    StringLiteral_5780/*"EVENT_POSSESSION_ITEM_VALUE"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BB66F5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventProgressValueEntity__Find__, *(_QWORD *)&progressValue);
    sub_1C13D24(&System_Predicate_EventProgressValueEntity__TypeInfo, v5);
    sub_1C13D24(&Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__, v6);
    sub_1C13D24(&EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo, v7);
    byte_4BB66F5 = 1;
  }
  v8 = sub_1C13F70(EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_DWORD *)(v8 + 16) = progressValue;
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_EventProgressValueEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgressValue_b__0__,
    0LL);
  return (EventProgressValueEntity_o *)System_Collections_Generic_List_object___Find(
                                         (System_Collections_Generic_List_object__o *)eventProgressValueEntityList,
                                         (System_Predicate_T__o *)v12,
                                         (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
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
int32_t __fastcall EventInfoUIProgressControl__GetEventProgressValueSaveData_43244220(
        int32_t eventId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey_43244076; // x0

  if ( (byte_4BB66F9 & 1) == 0 )
  {
    sub_1C13D24(&EventInfoUIProgressControl_TypeInfo, *(_QWORD *)&defaultValue);
    byte_4BB66F9 = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventProgressValueSaveKey_43244076 = EventInfoUIProgressControl__GetEventProgressValueSaveKey_43244076(
                                         eventId,
                                         *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey_43244076, defaultValue, 0LL);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_4BB66F7 & 1) == 0 )
  {
    this = (EventInfoUIProgressControl_o *)sub_1C13D24(&EventInfoUIProgressControl_TypeInfo, method);
    byte_4BB66F7 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C13F80(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  return EventInfoUIProgressControl__GetEventProgressValueSaveKey_43244076(eventId, method);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey_43244076(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x1
  EventInfoUIProgressControl_c *v3; // x0
  System_String_o *SAVEKEY_EVENT_PROGRESS_VALUE; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_4BB66F8 & 1) == 0 )
  {
    sub_1C13D24(&EventInfoUIProgressControl_TypeInfo, method);
    sub_1C13D24(&StringLiteral_16374/*"^c"*/, v2);
    byte_4BB66F8 = 1;
  }
  v3 = EventInfoUIProgressControl_TypeInfo;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    v3 = EventInfoUIProgressControl_TypeInfo;
  }
  SAVEKEY_EVENT_PROGRESS_VALUE = v3->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE;
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62979204(SAVEKEY_EVENT_PROGRESS_VALUE, (System_String_o *)StringLiteral_16374/*"^c"*/, v5, 0LL);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x0
  System_Collections_Generic_List_object__o *v27; // x21
  System_Comparison_T__o *v28; // x22
  Il2CppObject *v29; // x23
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w22
  int32_t monitor; // w24
  int64_t klass_low; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BB66F4 & 1) == 0 )
  {
    sub_1C13D24(&System_Comparison_EventProgressValueEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&CondType_TypeInfo, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_EventProgressValueMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__get_Current__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__, v13);
    sub_1C13D24(&Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__, v14);
    sub_1C13D24(&EventInfoUIProgressControl___c_TypeInfo, v15);
    byte_4BB66F4 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    goto LABEL_27;
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0LL);
  this->fields.eventProgressValueEntityList = EntityListByEventId;
  p_eventProgressValueEntityList = &this->fields.eventProgressValueEntityList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.eventProgressValueEntityList,
    (int64_t)EntityListByEventId,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList
    || !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventProgressValueEntityList,
          (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___) )
  {
    return;
  }
  v27 = (System_Collections_Generic_List_object__o *)*p_eventProgressValueEntityList;
  Master_object = EventInfoUIProgressControl___c_TypeInfo;
  if ( !EventInfoUIProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl___c_TypeInfo);
    Master_object = EventInfoUIProgressControl___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = EventInfoUIProgressControl___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v28 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventProgressValueEntity__TypeInfo);
    System_Comparison_object____ctor(
      v28,
      v29,
      Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__,
      0LL);
    static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventProgressValueEntity__o *)v28;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v28, v31, v32, v33, v34, v35, v36);
  }
  if ( !v27
    || (System_Collections_Generic_List_object___Sort_56814736(
          v27,
          v28,
          (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__),
        (Master_object = *p_eventProgressValueEntityList) == 0LL) )
  {
LABEL_27:
    sub_1C13F80(Master_object, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v49.fields._current;
    if ( !v49.fields._current )
      sub_1C13F80(v37, v38);
    monitor = (int32_t)v49.fields._current[1].monitor;
    monitor_high = HIDWORD(v49.fields._current[1].monitor);
    klass_low = SLODWORD(v49.fields._current[2].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
    {
      this->fields.currentEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.currentEventProgressValueEntity,
        (int64_t)current,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      break;
    }
    this->fields.nextEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.nextEventProgressValueEntity,
      (int64_t)current,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
}


void __fastcall EventInfoUIProgressControl__Initialization(
        EventInfoUIProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_eventUiEntity )
    sub_1C13F80(v10, v11);
  EventInfoUIProgressControl__InitEventProgressParams(this, (*p_eventUiEntity)->fields.eventId, v12);
}


bool __fastcall EventInfoUIProgressControl__IsDispEventProgress(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0

  if ( (byte_4BB66F6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventProgressValueMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v4);
    byte_4BB66F6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_object )
    sub_1C13F80(0LL, v6);
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_object,
                          eventId,
                          0LL);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
           (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB66FB & 1) == 0 )
  {
    sub_1C13D24(&EventInfoUIProgressControl___c_TypeInfo, v1);
    byte_4BB66FB = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventInfoUIProgressControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoUIProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoUIProgressControl___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventInfoUIProgressControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
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
    sub_1C13F80(this, 0LL);
  return n->fields.progressValue == this->fields.progressValue;
}