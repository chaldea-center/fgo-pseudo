void EventInfoDiggingEventPointControl___ctor(EventInfoDiggingEventPointControl_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


QuestReleaseEntity_o *EventInfoDiggingEventPointControl__GetNextQuestReleaseEntity(
        EventInfoDiggingEventPointControl_o *this,
        EventUiEntity_o *eventUiEnt,
        int64_t userEventPoint,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x22
  QuestReleaseEntity_o *v9; // x20
  System_Comparison_T__o *v10; // x20
  Il2CppObject *v11; // x21
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  Il2CppObject *current; // x26
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4CB77E1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_1C6BA08(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__);
    sub_1C6BA08(&EventInfoDiggingEventPointControl___c_TypeInfo);
    byte_4CB77E1 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_object )
    goto LABEL_34;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Master_object,
                              eventUiEnt->fields.eventId,
                              85,
                              0);
  v9 = 0;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v9;
  Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  if ( !EventInfoDiggingEventPointControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDiggingEventPointControl___c_TypeInfo);
    Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  }
  v10 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v10 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v10,
      v11,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      0);
    static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)v10, v13, v14);
  }
  if ( !ListByTargetAndCondType )
LABEL_34:
    sub_1C6BC60(Master_object, v7);
  System_Collections_Generic_List_object___Sort_58729528(
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    v10,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v23 = v22;
  current = 0;
LABEL_18:
  v9 = (QuestReleaseEntity_o *)current;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C6BC60(v17, v18);
    if ( !v15 )
      sub_1C6BC60(v17, v18);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
           &entity,
           (int32_t)v23.fields._current[1].klass,
           (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_1C6BC60(0, v19);
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0) == 2 )
      {
        if ( (__int64)current[2].klass > userEventPoint )
          goto LABEL_18;
        klass = (int32_t)current[1].klass;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpen(1, klass, 0, 0, 0, 0) )
          goto LABEL_18;
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v9;
}


int64_t EventInfoDiggingEventPointControl__GetUserEventPoint(
        EventInfoDiggingEventPointControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  return UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
}


void EventInfoDiggingEventPointControl__Initialization(
        EventInfoDiggingEventPointControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x1
  struct UISprite_o *userPointBgSprite; // x0

  if ( (byte_4CB77DD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__);
    sub_1C6BA08(&StringLiteral_19276/*"event_point_bg_8036701"*/);
    sub_1C6BA08(&StringLiteral_19277/*"event_point_bg_8036702"*/);
    byte_4CB77DD = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  eventUiEntity = this->fields.eventUiEntity;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v7, 0);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_19276/*"event_point_bg_8036701"*/,
    0);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))userPointBgSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._33_MakePixelPerfect.method),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_19277/*"event_point_bg_8036702"*/,
          0),
        (userPointBgSprite = this->fields.nextPointBgSprite) == 0) )
  {
    sub_1C6BC60(userPointBgSprite, v8);
  }
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))userPointBgSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    userPointBgSprite,
    userPointBgSprite->klass->vtable._33_MakePixelPerfect.method);
}


void EventInfoDiggingEventPointControl__OnDestroy(EventInfoDiggingEventPointControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C6BC60(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoDiggingEventPointControl__Redisplay(EventInfoDiggingEventPointControl_o *this, const MethodInfo *method)
{
  EventInfoDiggingEventPointControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointNoGroup; // x20
  const MethodInfo *v5; // x2
  EventInfoDiggingEventPointControl_o *v6; // x0
  const MethodInfo *v7; // x3
  QuestReleaseEntity_o *NextQuestReleaseEntity; // x0
  const MethodInfo *v9; // x2
  UILabel_o *nextPointLabel; // x19

  v2 = this;
  if ( (byte_4CB77DE & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    this = (EventInfoDiggingEventPointControl_o *)sub_1C6BA08(&StringLiteral_5630/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/);
    byte_4CB77DE = 1;
  }
  if ( v2->fields.eventUiValueEntityList )
  {
    eventUiEntity = v2->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_12;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0);
    EventInfoDiggingEventPointControl__SetUserEventPointLabel(v2, EventPointNoGroup, v5);
    NextQuestReleaseEntity = EventInfoDiggingEventPointControl__GetNextQuestReleaseEntity(
                               v6,
                               v2->fields.eventUiEntity,
                               EventPointNoGroup,
                               v7);
    if ( NextQuestReleaseEntity )
    {
      EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        v2,
        (NextQuestReleaseEntity->fields.value - EventPointNoGroup)
      & ~((NextQuestReleaseEntity->fields.value - EventPointNoGroup) >> 63),
        v9);
      return;
    }
    nextPointLabel = v2->fields.nextPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventInfoDiggingEventPointControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5630/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, 0);
    if ( !nextPointLabel )
LABEL_12:
      sub_1C6BC60(this, method);
    UILabel__set_text(nextPointLabel, (System_String_o *)this, 0);
  }
}


void EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextPointLabel; // x21
  UILabel_o *v6; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB77E0 & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5629/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4CB77E0 = 1;
  }
  nextPointLabel = (UnityEngine_Object_o *)this->fields.nextPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextPointLabel, 0, 0) )
  {
    v6 = this->fields.nextPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5629/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v11 = point;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
    v9 = System_String__Format(v7, v8, 0);
    if ( !v6 )
      sub_1C6BC60(v9, v10);
    UILabel__set_text(v6, v9, 0);
  }
}


void EventInfoDiggingEventPointControl__SetUserEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *userPointLabel; // x21
  UILabel_o *v6; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB77DF & 1) == 0 )
  {
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5629/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4CB77DF = 1;
  }
  userPointLabel = (UnityEngine_Object_o *)this->fields.userPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(userPointLabel, 0, 0) )
  {
    v6 = this->fields.userPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5629/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v11 = point;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
    v9 = System_String__Format(v7, v8, 0);
    if ( !v6 )
      sub_1C6BC60(v9, v10);
    UILabel__set_text(v6, v9, 0);
  }
}


void EventInfoDiggingEventPointControl__SetValue(
        EventInfoDiggingEventPointControl_o *this,
        int32_t valType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  _BOOL8 HasMatchedType; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  result = 0;
  EventInfoUIBase__SetValue((EventInfoUIBase_o *)this, valType, val, setType, 0);
  HasMatchedType = EventInfoUIBase__HasMatchedType((EventInfoUIBase_o *)this, valType, setType, 0);
  if ( valType == 4 && HasMatchedType )
  {
    if ( !val )
      sub_1C6BC60(HasMatchedType, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))val->klass->vtable[3].methodPtr)(
                               val,
                               val->klass->vtable[3].method);
    if ( System_Int64__TryParse(v11, &result, 0) )
      EventInfoDiggingEventPointControl__SetUserEventPointLabel(this, result, v12);
  }
}


void EventInfoDiggingEventPointControl__Setup(
        EventInfoDiggingEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entitys, (int32_t)method, v3);
    ((void (__fastcall *)(EventInfoDiggingEventPointControl_o *, const MethodInfo *))this->klass->vtable._10_Redisplay.methodPtr)(
      this,
      this->klass->vtable._10_Redisplay.method);
  }
}


void EventInfoDiggingEventPointControl___Initialization_b__7_0(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C6BC60(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB77E2 & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoDiggingEventPointControl___c_TypeInfo);
    byte_4CB77E2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventInfoDiggingEventPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoDiggingEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoDiggingEventPointControl___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)EventInfoDiggingEventPointControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void EventInfoDiggingEventPointControl___c___ctor(
        EventInfoDiggingEventPointControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoDiggingEventPointControl___c___GetNextQuestReleaseEntity_b__14_0(
        EventInfoDiggingEventPointControl___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C6BC60(this, a);
  if ( b->fields.value - a->fields.value < 0 )
    return -1;
  else
    return b->fields.value != a->fields.value;
}