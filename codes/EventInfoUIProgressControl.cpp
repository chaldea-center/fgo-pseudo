void __fastcall EventInfoUIProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_42159B0 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoUIProgressControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_5690/*"EVENT_PROGRESS_VALUE"*/, v8);
    byte_42159B0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoUIProgressControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_5690/*"EVENT_PROGRESS_VALUE"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5690/*"EVENT_PROGRESS_VALUE"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
EventProgressValueEntity_o *__fastcall EventInfoUIProgressControl__GetEntityByProgresValue(
        EventInfoUIProgressControl_o *this,
        int32_t progresValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventInfoUIProgressControl___c__DisplayClass9_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_42159AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventProgressValueEntity__Find__, *(_QWORD *)&progresValue);
    sub_B0D8A4(&Method_System_Predicate_EventProgressValueEntity___ctor__, v5);
    sub_B0D8A4(&System_Predicate_EventProgressValueEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgresValue_b__0__, v7);
    sub_B0D8A4(&EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo, v8);
    byte_42159AB = 1;
  }
  v9 = (EventInfoUIProgressControl___c__DisplayClass9_0_o *)sub_B0D974(
                                                              EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo,
                                                              *(_QWORD *)&progresValue,
                                                              method);
  EventInfoUIProgressControl___c__DisplayClass9_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.progresValue = progresValue;
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList )
    return 0LL;
  v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_EventProgressValueEntity__TypeInfo,
                                                                   v11,
                                                                   v12);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgresValue_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventProgressValueEntity___ctor__);
  return (EventProgressValueEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)eventProgressValueEntityList,
                                         (System_Predicate_T__o *)v14,
                                         (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
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
int32_t __fastcall EventInfoUIProgressControl__GetEventProgressValueSaveData_26584640(
        int32_t eventId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey_26584420; // x0

  if ( (byte_42159AF & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoUIProgressControl_TypeInfo, *(_QWORD *)&defaultValue);
    byte_42159AF = 1;
  }
  if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  }
  EventProgressValueSaveKey_26584420 = EventInfoUIProgressControl__GetEventProgressValueSaveKey_26584420(
                                         eventId,
                                         *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey_26584420, defaultValue, 0LL);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v2 = this;
  if ( (byte_42159AD & 1) == 0 )
  {
    this = (EventInfoUIProgressControl_o *)sub_B0D8A4(&EventInfoUIProgressControl_TypeInfo, method);
    byte_42159AD = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
  eventId = eventUiEntity->fields.eventId;
  if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  }
  return EventInfoUIProgressControl__GetEventProgressValueSaveKey_26584420(eventId, method);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey_26584420(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x1
  EventInfoUIProgressControl_c *v3; // x0
  System_String_o *SAVEKEY_EVENT_PROGRESS_VALUE; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = eventId;
  if ( (byte_42159AE & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoUIProgressControl_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v2);
    byte_42159AE = 1;
  }
  v3 = EventInfoUIProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    v3 = EventInfoUIProgressControl_TypeInfo;
  }
  SAVEKEY_EVENT_PROGRESS_VALUE = v3->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE;
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43852188(SAVEKEY_EVENT_PROGRESS_VALUE, (System_String_o *)StringLiteral_15952/*"_"*/, v5, 0LL);
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
  __int64 v16; // x1
  void *Master_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0
  struct System_Collections_Generic_List_EventProgressValueEntity__o **p_eventProgressValueEntityList; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v29; // x21
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x22
  Il2CppObject *v32; // x23
  struct EventInfoUIProgressControl___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  _BOOL8 v40; // x0
  Il2CppObject *current; // x21
  int32_t monitor_high; // w22
  int32_t monitor; // w24
  int64_t klass_low; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42159AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventProgressValueEntity___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventProgressValueEntity__TypeInfo, v5);
    sub_B0D8A4(&CondType_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventProgressValueMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__, v14);
    sub_B0D8A4(&Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__, v15);
    sub_B0D8A4(&EventInfoUIProgressControl___c_TypeInfo, v16);
    byte_42159AA = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_31;
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_WarQuestSelectionMaster,
                          eventId,
                          0LL);
  this->fields.eventProgressValueEntityList = EntityListByEventId;
  p_eventProgressValueEntityList = &this->fields.eventProgressValueEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventProgressValueEntityList,
    (System_Int32_array **)EntityListByEventId,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventProgressValueEntityList,
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___) )
  {
    return;
  }
  v29 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_eventProgressValueEntityList;
  Master_WarQuestSelectionMaster = EventInfoUIProgressControl___c_TypeInfo;
  if ( (BYTE3(EventInfoUIProgressControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl___c_TypeInfo);
    Master_WarQuestSelectionMaster = EventInfoUIProgressControl___c_TypeInfo;
  }
  static_fields = (struct EventInfoUIProgressControl___c_StaticFields *)*((_QWORD *)Master_WarQuestSelectionMaster + 23);
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventProgressValueEntity__TypeInfo,
                                                                          v27,
                                                                          v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v32,
      Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventProgressValueEntity___ctor__);
    v33 = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    v33->__9__6_0 = (struct System_Comparison_EventProgressValueEntity__o *)_9__6_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v33->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v29
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          v29,
          (System_Comparison_T__o *)_9__6_0,
          (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__),
        (Master_WarQuestSelectionMaster = *p_eventProgressValueEntityList) == 0LL) )
  {
LABEL_31:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    if ( !v40 )
      break;
    current = v51.fields.current;
    if ( !v51.fields.current )
      sub_B0D97C(v40);
    monitor = (int32_t)v51.fields.current[1].monitor;
    monitor_high = HIDWORD(v51.fields.current[1].monitor);
    klass_low = SLODWORD(v51.fields.current[2].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      this->fields.currentEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.currentEventProgressValueEntity,
        (System_Int32_array **)current,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      break;
    }
    this->fields.nextEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.nextEventProgressValueEntity,
      (System_Int32_array **)current,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
}


void __fastcall EventInfoUIProgressControl__Initialization(
        EventInfoUIProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventUiEntity_o **p_eventUiEntity; // x20
  __int64 v10; // x0
  const MethodInfo *v11; // x2

  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_eventUiEntity )
    sub_B0D97C(v10);
  EventInfoUIProgressControl__InitEventProgressParams(this, (*p_eventUiEntity)->fields.eventId, v11);
}


bool __fastcall EventInfoUIProgressControl__IsDispEventProgress(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  EventProgressValueMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0

  if ( (byte_42159AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventProgressValueMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v4);
    byte_42159AC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventProgressValueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B7F & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoUIProgressControl___c_TypeInfo, v1);
    byte_4211B7F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoUIProgressControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoUIProgressControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.progressValue - a->fields.progressValue;
}


void __fastcall EventInfoUIProgressControl___c__DisplayClass9_0___ctor(
        EventInfoUIProgressControl___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoUIProgressControl___c__DisplayClass9_0___GetEntityByProgresValue_b__0(
        EventInfoUIProgressControl___c__DisplayClass9_0_o *this,
        EventProgressValueEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B0D97C(this);
  return n->fields.progressValue == this->fields.progresValue;
}