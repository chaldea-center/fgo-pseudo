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
  QuestReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  QuestReleaseEntity_o *v26; // x20
  EventInfoDiggingEventPointControl___c_c *v27; // x0
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x20
  Il2CppObject *v30; // x22
  struct EventInfoDiggingEventPointControl___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x22
  Il2CppObject *current; // x26
  int32_t klass; // w21
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FA117 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_QuestReleaseEntity___ctor__, eventUiEnt);
    sub_B16FFC(&System_Comparison_QuestReleaseEntity__TypeInfo, v6);
    sub_B16FFC(&CondType_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v17);
    sub_B16FFC(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__, v18);
    sub_B16FFC(&EventInfoDiggingEventPointControl___c_TypeInfo, v19);
    byte_40FA117 = 1;
  }
  entity = 0LL;
  memset(&v44, 0, sizeof(v44));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              Master_WarQuestSelectionMaster,
                              eventUiEnt->fields.eventId,
                              85,
                              0LL);
  v26 = 0LL;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v26;
  v27 = EventInfoDiggingEventPointControl___c_TypeInfo;
  if ( (BYTE3(EventInfoDiggingEventPointControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoDiggingEventPointControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDiggingEventPointControl___c_TypeInfo);
    v27 = EventInfoDiggingEventPointControl___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_QuestReleaseEntity__TypeInfo,
                                                                           v22,
                                                                           v23,
                                                                           v24,
                                                                           v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v30,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v31 = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    v31->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__14_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !ListByTargetAndCondType )
LABEL_39:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)ListByTargetAndCondType,
    (System_Comparison_T__o *)_9__14_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByTargetAndCondType,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v44 = v42;
  current = 0LL;
LABEL_22:
  v26 = (QuestReleaseEntity_o *)current;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    current = v44.fields.current;
    if ( !v44.fields.current )
      sub_B170D4();
    if ( !v38 )
      sub_B170D4();
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v38,
           &entity,
           (int32_t)v44.fields.current[1].klass,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_B170D4();
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
    &v44,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v26;
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x21
  struct UISprite_o *userPointBgSprite; // x0
  struct UISprite_o *nextPointBgSprite; // x0

  if ( (byte_40FA113 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, v10);
    sub_B16FFC(&StringLiteral_18469/*"event_point_bg_8036701"*/, v11);
    sub_B16FFC(&StringLiteral_18470/*"event_point_bg_8036702"*/, v12);
    byte_40FA113 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v18, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_18469/*"event_point_bg_8036701"*/,
    0LL);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))userPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_18470/*"event_point_bg_8036702"*/,
          0LL),
        (nextPointBgSprite = this->fields.nextPointBgSprite) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))nextPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
    nextPointBgSprite,
    nextPointBgSprite->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall EventInfoDiggingEventPointControl__OnDestroy(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl__Redisplay(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointNoGroup; // x20
  const MethodInfo *v6; // x2
  EventInfoDiggingEventPointControl_o *v7; // x0
  const MethodInfo *v8; // x3
  QuestReleaseEntity_o *NextQuestReleaseEntity; // x0
  const MethodInfo *v10; // x2
  UILabel_o *nextPointLabel; // x19
  System_String_o *v12; // x0

  if ( (byte_40FA114 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5636/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, v3);
    byte_40FA114 = 1;
  }
  if ( this->fields.eventUiValueEntityList )
  {
    eventUiEntity = this->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_13;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
    EventInfoDiggingEventPointControl__SetUserEventPointLabel(this, EventPointNoGroup, v6);
    NextQuestReleaseEntity = EventInfoDiggingEventPointControl__GetNextQuestReleaseEntity(
                               v7,
                               this->fields.eventUiEntity,
                               EventPointNoGroup,
                               v8);
    if ( NextQuestReleaseEntity )
    {
      EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        this,
        (NextQuestReleaseEntity->fields.value - EventPointNoGroup) & ~((NextQuestReleaseEntity->fields.value
                                                                      - EventPointNoGroup) >> 63),
        v10);
      return;
    }
    nextPointLabel = this->fields.nextPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5636/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, 0LL);
    if ( !nextPointLabel )
LABEL_13:
      sub_B170D4();
    UILabel__set_text(nextPointLabel, v12, 0LL);
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

  if ( (byte_40FA116 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, point);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5635/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    byte_40FA116 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5635/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = point;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v12 = System_String__Format(v10, v11, 0LL);
    if ( !v9 )
      sub_B170D4();
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

  if ( (byte_40FA115 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, point);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5635/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    byte_40FA115 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5635/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = point;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v12 = System_String__Format(v10, v11, 0LL);
    if ( !v9 )
      sub_B170D4();
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
  bool HasMatchedType; // w0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  result = 0LL;
  EventInfoUIBase__SetValue((EventInfoUIBase_o *)this, valType, val, setType, 0LL);
  HasMatchedType = EventInfoUIBase__HasMatchedType((EventInfoUIBase_o *)this, valType, setType, 0LL);
  if ( valType == 4 && HasMatchedType )
  {
    if ( !val )
      sub_B170D4();
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
    sub_B16F98(
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
    sub_B170D4();
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FCF & 1) == 0 )
  {
    sub_B16FFC(&EventInfoDiggingEventPointControl___c_TypeInfo, v1);
    byte_40F6FCF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoDiggingEventPointControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  if ( b->fields.value - a->fields.value < 0 )
    return -1;
  else
    return b->fields.value != a->fields.value;
}