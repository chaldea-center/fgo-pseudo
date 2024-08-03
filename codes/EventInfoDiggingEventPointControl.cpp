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
  void *Master_object; // x0
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  QuestReleaseEntity_o *v23; // x20
  System_Comparison_T__o *v24; // x20
  Il2CppObject *v25; // x21
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x21
  Il2CppObject *current; // x26
  _BOOL8 v31; // x0
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_49FCFB3 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_QuestReleaseEntity__TypeInfo, eventUiEnt);
    sub_1B640C8(&CondType_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v16);
    sub_1B640C8(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__, v17);
    sub_1B640C8(&EventInfoDiggingEventPointControl___c_TypeInfo, v18);
    byte_49FCFB3 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_object )
    goto LABEL_34;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Master_object,
                              eventUiEnt->fields.eventId,
                              85,
                              0LL);
  v23 = 0LL;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v23;
  Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  if ( !EventInfoDiggingEventPointControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDiggingEventPointControl___c_TypeInfo);
    Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  }
  v24 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v24 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_QuestReleaseEntity__TypeInfo, v21, v22);
    System_Comparison_object____ctor(
      v24,
      v25,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      0LL);
    static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)v24, v27, v28);
  }
  if ( !ListByTargetAndCondType )
LABEL_34:
    sub_1B64324(Master_object);
  System_Collections_Generic_List_object___Sort_55243320(
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    v24,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v35 = v34;
  current = 0LL;
LABEL_18:
  v23 = (QuestReleaseEntity_o *)current;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B64324(v31);
    if ( !v29 )
      sub_1B64324(v31);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v29,
           &entity,
           (int32_t)v35.fields._current[1].klass,
           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_1B64324(0LL);
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0LL) == 2 )
      {
        if ( (__int64)current[2].klass > userEventPoint )
          goto LABEL_18;
        klass = (int32_t)current[1].klass;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpen(1, klass, 0LL, 0, 0LL) )
          goto LABEL_18;
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v23;
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  struct UISprite_o *userPointBgSprite; // x0

  if ( (byte_49FCFAF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, v6);
    sub_1B640C8(&StringLiteral_19129/*"event_point_bg_8036701"*/, v7);
    sub_1B640C8(&StringLiteral_19130/*"event_point_bg_8036702"*/, v8);
    byte_49FCFAF = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  eventUiEntity = this->fields.eventUiEntity;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v12, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_19129/*"event_point_bg_8036701"*/,
    0LL);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))userPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_19130/*"event_point_bg_8036702"*/,
          0LL),
        (userPointBgSprite = this->fields.nextPointBgSprite) == 0LL) )
  {
    sub_1B64324(userPointBgSprite);
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
    sub_1B64324(this);
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
  if ( (byte_49FCFB0 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    this = (EventInfoDiggingEventPointControl_o *)sub_1B640C8(&StringLiteral_5619/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, v3);
    byte_49FCFB0 = 1;
  }
  if ( v2->fields.eventUiValueEntityList )
  {
    eventUiEntity = v2->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_12;
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventInfoDiggingEventPointControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, 0LL);
    if ( !nextPointLabel )
LABEL_12:
      sub_1B64324(this);
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
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCFB2 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, point);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    byte_49FCFB2 = 1;
  }
  nextPointLabel = (UnityEngine_Object_o *)this->fields.nextPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextPointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.nextPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = point;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v12 = System_String__Format(v10, v11, 0LL);
    if ( !v9 )
      sub_1B64324(v12);
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
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCFB1 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, point);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, v7);
    byte_49FCFB1 = 1;
  }
  userPointLabel = (UnityEngine_Object_o *)this->fields.userPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(userPointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.userPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v13 = point;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v12 = System_String__Format(v10, v11, 0LL);
    if ( !v9 )
      sub_1B64324(v12);
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
      sub_1B64324(HasMatchedType);
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
  int32_t v3; // w3

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (int32_t)method,
      v3);
    ((void (__fastcall *)(EventInfoDiggingEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_SetUIDisp.methodPtr);
  }
}


void __fastcall EventInfoDiggingEventPointControl___Initialization_b__7_0(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B64324(this);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCFB4 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoDiggingEventPointControl___c_TypeInfo, v1);
    byte_49FCFB4 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoDiggingEventPointControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoDiggingEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoDiggingEventPointControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoDiggingEventPointControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  if ( b->fields.value - a->fields.value < 0 )
    return -1;
  else
    return b->fields.value != a->fields.value;
}