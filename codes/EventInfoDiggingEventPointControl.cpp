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
  int v6; // w8
  void *Master_object; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x22
  QuestReleaseEntity_o *v10; // x20
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__14_0; // x20
  Il2CppObject *v13; // x21
  struct EventInfoDiggingEventPointControl___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  Il2CppObject *v22; // x21
  Il2CppObject *current; // x26
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_5971CA7 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_2213A60(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__);
    sub_2213A60(&EventInfoDiggingEventPointControl___c_TypeInfo);
    byte_5971CA7 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUiEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_object )
    goto LABEL_34;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Master_object,
                              eventUiEnt->fields.eventId,
                              85,
                              0);
  v10 = 0;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v10;
  Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  if ( !*(&EventInfoDiggingEventPointControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDiggingEventPointControl___c_TypeInfo, v8);
    Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  }
  static_fields = (struct EventInfoDiggingEventPointControl___c_StaticFields *)*((_QWORD *)Master_object + 23);
  _9__14_0 = (System_Comparison_T__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*((_DWORD *)Master_object + 57) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v8);
      static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__14_0,
      v13,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      0);
    v14 = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    v14->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__14_0, (int32_t)_9__14_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !ListByTargetAndCondType )
LABEL_34:
    sub_2213CDC(Master_object, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    _9__14_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  v22 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v31 = v30;
  current = 0;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
LABEL_18:
  v10 = (QuestReleaseEntity_o *)current;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_2213CDC(v24, v25);
    if ( !v22 )
      sub_2213CDC(v24, v25);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
           &entity,
           (int32_t)v31.fields._current[1].klass,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_2213CDC(0, v26);
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0) == 2 )
      {
        if ( (__int64)current[2].klass > userEventPoint )
          goto LABEL_18;
        klass = (int32_t)current[1].klass;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v27);
        if ( !CondType__IsOpen(1, klass, 0, 0, 0, 0) )
          goto LABEL_18;
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v10;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v11; // x21
  __int64 v12; // x1
  struct UISprite_o *userPointBgSprite; // x0

  if ( (byte_5971CA3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__);
    sub_2213A60(&StringLiteral_20119/*"event_point_bg_8036701"*/);
    sub_2213A60(&StringLiteral_20120/*"event_point_bg_8036702"*/);
    byte_5971CA3 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v11, 0);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_20119/*"event_point_bg_8036701"*/,
    0);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))userPointBgSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._33_MakePixelPerfect.method),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_20120/*"event_point_bg_8036702"*/,
          0),
        (userPointBgSprite = this->fields.nextPointBgSprite) == 0) )
  {
    sub_2213CDC(userPointBgSprite, v12);
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
    sub_2213CDC(this, method);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UILabel_o *nextPointLabel; // x19

  v2 = this;
  if ( (byte_5971CA4 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (EventInfoDiggingEventPointControl_o *)sub_2213A60(&StringLiteral_5871/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/);
    byte_5971CA4 = 1;
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
        v10);
      return;
    }
    nextPointLabel = v2->fields.nextPointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    this = (EventInfoDiggingEventPointControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5871/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, 0);
    if ( !nextPointLabel )
LABEL_12:
      sub_2213CDC(this, method);
    UILabel__set_text(nextPointLabel, (System_String_o *)this, 0);
  }
}


void EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextPointLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971CA6 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_5971CA6 = 1;
  }
  nextPointLabel = (UnityEngine_Object_o *)this->fields.nextPointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(nextPointLabel, 0, 0) )
  {
    v7 = this->fields.nextPointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v12 = point;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v12);
    v10 = System_String__Format(v8, v9, 0);
    if ( !v7 )
      sub_2213CDC(v10, v11);
    UILabel__set_text(v7, v10, 0);
  }
}


void EventInfoDiggingEventPointControl__SetUserEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *userPointLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971CA5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_5971CA5 = 1;
  }
  userPointLabel = (UnityEngine_Object_o *)this->fields.userPointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(userPointLabel, 0, 0) )
  {
    v7 = this->fields.userPointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v12 = point;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v12);
    v10 = System_String__Format(v8, v9, 0);
    if ( !v7 )
      sub_2213CDC(v10, v11);
    UILabel__set_text(v7, v10, 0);
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
      sub_2213CDC(HasMatchedType, v10);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
    sub_2213CDC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971CA8 & 1) == 0 )
  {
    sub_2213A60(&EventInfoDiggingEventPointControl___c_TypeInfo);
    byte_5971CA8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoDiggingEventPointControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoDiggingEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoDiggingEventPointControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoDiggingEventPointControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int64_t value; // x9

  if ( !b || !a )
    sub_2213CDC(this, a);
  value = a->fields.value;
  if ( b->fields.value - value < 0 )
    return -1;
  else
    return b->fields.value - value > 0;
}