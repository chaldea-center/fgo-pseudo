void __fastcall EventInfoDiggingEventPointControl___ctor(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


QuestReleaseEntity_o *__fastcall EventInfoDiggingEventPointControl__GetNextQuestReleaseEntity(
        EventInfoDiggingEventPointControl_o *this,
        EventUiEntity_o *eventUiEnt,
        int64_t userEventPoint,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  void *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  QuestReleaseEntity_o *v24; // x20
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x20
  Il2CppObject *v27; // x22
  struct EventInfoDiggingEventPointControl___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x22
  Il2CppObject *current; // x26
  _BOOL8 v37; // x0
  int32_t klass; // w21
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42155AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_QuestReleaseEntity___ctor__, eventUiEnt);
    sub_B0D8A4(&System_Comparison_QuestReleaseEntity__TypeInfo, v6);
    sub_B0D8A4(&CondType_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v17);
    sub_B0D8A4(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__, v18);
    sub_B0D8A4(&EventInfoDiggingEventPointControl___c_TypeInfo, v19);
    byte_42155AC = 1;
  }
  entity = 0LL;
  memset(&v42, 0, sizeof(v42));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Master_WarQuestSelectionMaster,
                              eventUiEnt->fields.eventId,
                              85,
                              0LL);
  v24 = 0LL;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v24;
  Master_WarQuestSelectionMaster = EventInfoDiggingEventPointControl___c_TypeInfo;
  if ( (BYTE3(EventInfoDiggingEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoDiggingEventPointControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDiggingEventPointControl___c_TypeInfo);
    Master_WarQuestSelectionMaster = EventInfoDiggingEventPointControl___c_TypeInfo;
  }
  static_fields = (struct EventInfoDiggingEventPointControl___c_StaticFields *)*((_QWORD *)Master_WarQuestSelectionMaster
                                                                               + 23);
  _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (*((_BYTE *)Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*((_DWORD *)Master_WarQuestSelectionMaster + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_QuestReleaseEntity__TypeInfo,
                                                                           v22,
                                                                           v23);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v27,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v28 = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    v28->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__14_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !ListByTargetAndCondType )
LABEL_39:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)ListByTargetAndCondType,
    (System_Comparison_T__o *)_9__14_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByTargetAndCondType,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v42 = v40;
  current = 0LL;
LABEL_22:
  v24 = (QuestReleaseEntity_o *)current;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v42.fields.current;
    if ( !v42.fields.current )
      sub_B0D97C(v37);
    if ( !v35 )
      sub_B0D97C(v37);
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v35,
           &entity,
           (int32_t)v42.fields.current[1].klass,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_B0D97C(0LL);
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0LL) == 2 )
      {
        if ( (__int64)current[2].klass > userEventPoint )
          goto LABEL_22;
        klass = (int32_t)current[1].klass;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpen(1, klass, 0LL, 0, 0LL) )
          goto LABEL_22;
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v24;
}


int64_t __fastcall EventInfoDiggingEventPointControl__GetUserEventPoint(
        EventInfoDiggingEventPointControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl__Initialization(
        EventInfoDiggingEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21
  struct UISprite_o *userPointBgSprite; // x0

  if ( (byte_42155A8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, v10);
    sub_B0D8A4(&StringLiteral_18596/*"event_point_bg_8036701"*/, v11);
    sub_B0D8A4(&StringLiteral_18597/*"event_point_bg_8036702"*/, v12);
    byte_42155A8 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v16, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_18596/*"event_point_bg_8036701"*/,
    0LL);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))userPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_18597/*"event_point_bg_8036702"*/,
          0LL),
        (userPointBgSprite = this->fields.nextPointBgSprite) == 0LL) )
  {
    sub_B0D97C(userPointBgSprite);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))userPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
    userPointBgSprite,
    userPointBgSprite->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall EventInfoDiggingEventPointControl__OnDestroy(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl__Redisplay(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  EventInfoDiggingEventPointControl_o *v2; // x19
  __int64 v3; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointNoGroup; // x20
  const MethodInfo *v6; // x2
  EventInfoDiggingEventPointControl_o *v7; // x0
  const MethodInfo *v8; // x3
  QuestReleaseEntity_o *NextQuestReleaseEntity; // x0
  const MethodInfo *v10; // x2
  UILabel_o *nextPointLabel; // x19

  v2 = this;
  if ( (byte_42155A9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    this = (EventInfoDiggingEventPointControl_o *)sub_B0D8A4(&StringLiteral_5668/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, v3);
    byte_42155A9 = 1;
  }
  if ( v2->fields.eventUiValueEntityList )
  {
    eventUiEntity = v2->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_13;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
    EventInfoDiggingEventPointControl__SetUserEventPointLabel(v2, EventPointNoGroup, v6);
    NextQuestReleaseEntity = EventInfoDiggingEventPointControl__GetNextQuestReleaseEntity(
                               v7,
                               v2->fields.eventUiEntity,
                               EventPointNoGroup,
                               v8);
    if ( NextQuestReleaseEntity )
    {
      EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        v2,
        (NextQuestReleaseEntity->fields.value - EventPointNoGroup) & ~((NextQuestReleaseEntity->fields.value
                                                                      - EventPointNoGroup) >> 63),
        v10);
      return;
    }
    nextPointLabel = v2->fields.nextPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventInfoDiggingEventPointControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, 0LL);
    if ( !nextPointLabel )
LABEL_13:
      sub_B0D97C(this);
    UILabel__set_text(nextPointLabel, (System_String_o *)this, 0LL);
  }
}


void __fastcall EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *nextPointLabel; // x21
  UILabel_o *v9; // x20
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int64_t v13; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42155AB & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, point);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    byte_42155AB = 1;
  }
  nextPointLabel = (UnityEngine_Object_o *)this->fields.nextPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nextPointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.nextPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = point;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v12 = System_String__Format(v10, v11, 0LL);
    if ( !v9 )
      sub_B0D97C(v12);
    UILabel__set_text(v9, v12, 0LL);
  }
}


void __fastcall EventInfoDiggingEventPointControl__SetUserEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *userPointLabel; // x21
  UILabel_o *v9; // x20
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int64_t v13; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42155AA & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, point);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    byte_42155AA = 1;
  }
  userPointLabel = (UnityEngine_Object_o *)this->fields.userPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(userPointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.userPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = point;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v12 = System_String__Format(v10, v11, 0LL);
    if ( !v9 )
      sub_B0D97C(v12);
    UILabel__set_text(v9, v12, 0LL);
  }
}


void __fastcall EventInfoDiggingEventPointControl__SetValue(
        EventInfoDiggingEventPointControl_o *this,
        int32_t valType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  _BOOL8 HasMatchedType; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  result = 0LL;
  EventInfoUIBase__SetValue((EventInfoUIBase_o *)this, valType, val, setType, 0LL);
  HasMatchedType = EventInfoUIBase__HasMatchedType((EventInfoUIBase_o *)this, valType, setType, 0LL);
  if ( valType == 4 && HasMatchedType )
  {
    if ( !val )
      sub_B0D97C(HasMatchedType);
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))val->klass->vtable[3].method)(
                               val,
                               val->klass->vtable[4].methodPtr);
    if ( System_Int64__TryParse(v10, &result, 0LL) )
      EventInfoDiggingEventPointControl__SetUserEventPointLabel(this, result, v11);
  }
}


void __fastcall EventInfoDiggingEventPointControl__Setup(
        EventInfoDiggingEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)entitys,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(EventInfoDiggingEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SwitchSpotState.methodPtr);
  }
}


void __fastcall EventInfoDiggingEventPointControl___Initialization_b__7_0(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B61 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoDiggingEventPointControl___c_TypeInfo, v1);
    byte_4211B61 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoDiggingEventPointControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoDiggingEventPointControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventInfoDiggingEventPointControl___c___ctor(
        EventInfoDiggingEventPointControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoDiggingEventPointControl___c___GetNextQuestReleaseEntity_b__14_0(
        EventInfoDiggingEventPointControl___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  if ( b->fields.value - a->fields.value < 0 )
    return -1;
  else
    return b->fields.value != a->fields.value;
}