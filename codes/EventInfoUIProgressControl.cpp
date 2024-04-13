void __fastcall EventInfoUIProgressControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E9ABD & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIProgressControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_5751/*"EVENT_PROGRESS_VALUE"*/, v8, v9, v10);
    byte_42E9ABD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoUIProgressControl_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_5751/*"EVENT_PROGRESS_VALUE"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5751/*"EVENT_PROGRESS_VALUE"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


bool __fastcall EventInfoUIProgressControl__CheckEventProgressValueSaveData(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  System_String_o *EventProgressValueSaveKey; // x0

  EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(this, method);
  return UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0LL);
}


EventProgressValueEntity_o *__fastcall EventInfoUIProgressControl__GetEntityByProgresValue(
        EventInfoUIProgressControl_o *this,
        int32_t progresValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventInfoUIProgressControl___c__DisplayClass9_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E9AB8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventProgressValueEntity__Find__,
      progresValue,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_EventProgressValueEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_EventProgressValueEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgresValue_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo, v15, v16, v17);
    byte_42E9AB8 = 1;
  }
  v18 = (EventInfoUIProgressControl___c__DisplayClass9_0_o *)sub_B5D694(EventInfoUIProgressControl___c__DisplayClass9_0_TypeInfo);
  EventInfoUIProgressControl___c__DisplayClass9_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.progresValue = progresValue;
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList )
    return 0LL;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventProgressValueEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_EventInfoUIProgressControl___c__DisplayClass9_0__GetEntityByProgresValue_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_EventProgressValueEntity___ctor__);
  return (EventProgressValueEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)eventProgressValueEntityList,
                                         (System_Predicate_T__o *)v22,
                                         (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventProgressValueEntity__Find__);
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
int32_t __fastcall EventInfoUIProgressControl__GetEventProgressValueSaveData_27093960(
        int32_t eventId,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *EventProgressValueSaveKey_27093740; // x0

  if ( (byte_42E9ABC & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIProgressControl_TypeInfo, defaultValue, (_DWORD)method, v3);
    byte_42E9ABC = 1;
  }
  if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  }
  EventProgressValueSaveKey_27093740 = EventInfoUIProgressControl__GetEventProgressValueSaveKey_27093740(
                                         eventId,
                                         *(const MethodInfo **)&defaultValue);
  return UnityEngine_PlayerPrefs__GetInt(EventProgressValueSaveKey_27093740, defaultValue, 0LL);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey(
        EventInfoUIProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoUIProgressControl_o *v4; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w19

  v4 = this;
  if ( (byte_42E9ABA & 1) == 0 )
  {
    this = (EventInfoUIProgressControl_o *)sub_B5D5C4(&EventInfoUIProgressControl_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9ABA = 1;
  }
  eventUiEntity = v4->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(this, method);
  eventId = eventUiEntity->fields.eventId;
  if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  }
  return EventInfoUIProgressControl__GetEventProgressValueSaveKey_27093740(eventId, method);
}


System_String_o *__fastcall EventInfoUIProgressControl__GetEventProgressValueSaveKey_27093740(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  EventInfoUIProgressControl_c *v7; // x0
  System_String_o *SAVEKEY_EVENT_PROGRESS_VALUE; // x19
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-4h] BYREF

  v11 = eventId;
  if ( (byte_42E9ABB & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIProgressControl_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v4, v5, v6);
    byte_42E9ABB = 1;
  }
  v7 = EventInfoUIProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
    v7 = EventInfoUIProgressControl_TypeInfo;
  }
  SAVEKEY_EVENT_PROGRESS_VALUE = v7->static_fields->SAVEKEY_EVENT_PROGRESS_VALUE;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  return System_String__Concat_44580072(SAVEKEY_EVENT_PROGRESS_VALUE, (System_String_o *)StringLiteral_16096/*"_"*/, v9, 0LL);
}


void __fastcall EventInfoUIProgressControl__InitEventProgressParams(
        EventInfoUIProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v43; // x1
  struct System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0
  struct System_Collections_Generic_List_EventProgressValueEntity__o **p_eventProgressValueEntityList; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct System_Collections_Generic_List_EventProgressValueEntity__o *eventProgressValueEntityList; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v53; // x21
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x22
  Il2CppObject *v56; // x23
  struct EventInfoUIProgressControl___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  _BOOL8 v64; // x0
  __int64 v65; // x1
  Il2CppObject *current; // x21
  int32_t monitor_high; // w22
  int32_t monitor; // w24
  int64_t klass_low; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E9AB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventProgressValueEntity___ctor__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_EventProgressValueEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventProgressValueMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__, v33, v34, v35);
    sub_B5D5C4(&Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__, v36, v37, v38);
    sub_B5D5C4(&EventInfoUIProgressControl___c_TypeInfo, v39, v40, v41);
    byte_42E9AB7 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_31;
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(
                          (EventProgressValueMaster_o *)Master_WarQuestSelectionMaster,
                          eventId,
                          0LL);
  this->fields.eventProgressValueEntityList = EntityListByEventId;
  p_eventProgressValueEntityList = &this->fields.eventProgressValueEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventProgressValueEntityList,
    (System_Int32_array **)EntityListByEventId,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  eventProgressValueEntityList = this->fields.eventProgressValueEntityList;
  if ( !eventProgressValueEntityList
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)eventProgressValueEntityList,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___) )
  {
    return;
  }
  v53 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_eventProgressValueEntityList;
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
    v56 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventProgressValueEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v56,
      Method_EventInfoUIProgressControl___c__InitEventProgressParams_b__6_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventProgressValueEntity___ctor__);
    v57 = EventInfoUIProgressControl___c_TypeInfo->static_fields;
    v57->__9__6_0 = (struct System_Comparison_EventProgressValueEntity__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !v53
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          v53,
          (System_Comparison_T__o *)_9__6_0,
          (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventProgressValueEntity__Sort__),
        (Master_WarQuestSelectionMaster = *p_eventProgressValueEntityList) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(Master_WarQuestSelectionMaster, v43);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v76,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventProgressValueEntity__GetEnumerator__);
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v76,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__MoveNext__);
    if ( !v64 )
      break;
    current = v76.fields.current;
    if ( !v76.fields.current )
      sub_B5D69C(v64, v65);
    monitor = (int32_t)v76.fields.current[1].monitor;
    monitor_high = HIDWORD(v76.fields.current[1].monitor);
    klass_low = SLODWORD(v76.fields.current[2].klass);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL) )
    {
      this->fields.currentEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.currentEventProgressValueEntity,
        (System_Int32_array **)current,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      break;
    }
    this->fields.nextEventProgressValueEntity = (struct EventProgressValueEntity_o *)current;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.nextEventProgressValueEntity,
      (System_Int32_array **)current,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v76,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventProgressValueEntity__Dispose__);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  this->fields.eventUiEntity = entity;
  p_eventUiEntity = &this->fields.eventUiEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_eventUiEntity )
    sub_B5D69C(v10, v11);
  EventInfoUIProgressControl__InitEventProgressParams(this, (*p_eventUiEntity)->fields.eventId, v12);
}


bool __fastcall EventInfoUIProgressControl__IsDispEventProgress(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventProgressValueMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_EventProgressValueEntity__o *EntityListByEventId; // x0

  if ( (byte_42E9AB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventProgressValueMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_EventProgressValueEntity___, v8, v9, v10);
    byte_42E9AB9 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventProgressValueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventProgressValueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v12);
  EntityListByEventId = EventProgressValueMaster__GetEntityListByEventId(Master_WarQuestSelectionMaster, eventId, 0LL);
  return System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListByEventId,
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_EventProgressValueEntity___);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoUIProgressControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6554 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoUIProgressControl___c_TypeInfo, v1, v2, v3);
    byte_42E6554 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoUIProgressControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoUIProgressControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoUIProgressControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
  return n->fields.progressValue == this->fields.progresValue;
}