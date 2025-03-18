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
  __int64 v20; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x22
  QuestReleaseEntity_o *v22; // x20
  System_Comparison_T__o *v23; // x20
  Il2CppObject *v24; // x21
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x21
  Il2CppObject *current; // x26
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C227BB & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_QuestReleaseEntity__TypeInfo, eventUiEnt);
    sub_1C3B764(&CondType_TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v16);
    sub_1C3B764(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__, v17);
    sub_1C3B764(&EventInfoDiggingEventPointControl___c_TypeInfo, v18);
    byte_4C227BB = 1;
  }
  memset(&v40, 0, sizeof(v40));
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_object )
    goto LABEL_34;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Master_object,
                              eventUiEnt->fields.eventId,
                              85,
                              0LL);
  v22 = 0LL;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v22;
  Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  if ( !EventInfoDiggingEventPointControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDiggingEventPointControl___c_TypeInfo);
    Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v23 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_object____ctor(
      v23,
      v24,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      0LL);
    static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)v23;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__14_0, (int64_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !ListByTargetAndCondType )
LABEL_34:
    sub_1C3B9C0(Master_object, v20);
  System_Collections_Generic_List_object___Sort_57202480(
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    v23,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v40 = v39;
  current = 0LL;
LABEL_18:
  v22 = (QuestReleaseEntity_o *)current;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v34 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1C3B9C0(v34, v35);
    if ( !v32 )
      sub_1C3B9C0(v34, v35);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v32,
           &entity,
           (int32_t)v40.fields._current[1].klass,
           (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_1C3B9C0(0LL, v36);
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0LL) == 2 )
      {
        if ( (__int64)current[2].klass > userEventPoint )
          goto LABEL_18;
        klass = (int32_t)current[1].klass;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpen(1, klass, 0LL, 0, 0LL, 0LL) )
          goto LABEL_18;
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v22;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x1
  struct UISprite_o *userPointBgSprite; // x0

  if ( (byte_4C227B7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, entity);
    sub_1C3B764(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, v10);
    sub_1C3B764(&StringLiteral_19585/*"highValue"*/, v11);
    sub_1C3B764(&StringLiteral_19586/*"highlightColor"*/, v12);
    byte_4C227B7 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v14, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_19585/*"highValue"*/,
    0LL);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))userPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_19586/*"highlightColor"*/,
          0LL),
        (userPointBgSprite = this->fields.nextPointBgSprite) == 0LL) )
  {
    sub_1C3B9C0(userPointBgSprite, v15);
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
    sub_1C3B9C0(this, method);
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
  if ( (byte_4C227B8 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    this = (EventInfoDiggingEventPointControl_o *)sub_1C3B764(&StringLiteral_5764/*"Effect/Dice"*/, v3);
    byte_4C227B8 = 1;
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
    this = (EventInfoDiggingEventPointControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"Effect/Dice"*/, 0LL);
    if ( !nextPointLabel )
LABEL_12:
      sub_1C3B9C0(this, method);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C227BA & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, point);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_5763/*"Effect/Dedicate"*/, v7);
    byte_4C227BA = 1;
  }
  nextPointLabel = (UnityEngine_Object_o *)this->fields.nextPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextPointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.nextPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"Effect/Dedicate"*/, 0LL);
    v17 = point;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v11, v12, v13);
    v15 = System_String__Format(v10, v14, 0LL);
    if ( !v9 )
      sub_1C3B9C0(v15, v16);
    UILabel__set_text(v9, v15, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C227B9 & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, point);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_5763/*"Effect/Dedicate"*/, v7);
    byte_4C227B9 = 1;
  }
  userPointLabel = (UnityEngine_Object_o *)this->fields.userPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(userPointLabel, 0LL, 0LL) )
  {
    v9 = this->fields.userPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5763/*"Effect/Dedicate"*/, 0LL);
    v17 = point;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v11, v12, v13);
    v15 = System_String__Format(v10, v14, 0LL);
    if ( !v9 )
      sub_1C3B9C0(v15, v16);
    UILabel__set_text(v9, v15, 0LL);
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
  __int64 v10; // x1
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  result = 0LL;
  EventInfoUIBase__SetValue((EventInfoUIBase_o *)this, valType, val, setType, 0LL);
  HasMatchedType = EventInfoUIBase__HasMatchedType((EventInfoUIBase_o *)this, valType, setType, 0LL);
  if ( valType == 4 && HasMatchedType )
  {
    if ( !val )
      sub_1C3B9C0(HasMatchedType, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))val->klass->vtable[3].method)(
                               val,
                               val->klass->vtable[4].methodPtr);
    if ( System_Int64__TryParse(v11, &result, 0LL) )
      EventInfoDiggingEventPointControl__SetUserEventPointLabel(this, result, v12);
  }
}


void __fastcall EventInfoDiggingEventPointControl__Setup(
        EventInfoDiggingEventPointControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntityList,
      (int64_t)entitys,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(EventInfoDiggingEventPointControl_o *, Il2CppMethodPointer))this->klass->vtable._10_Redisplay.method)(
      this,
      this->klass->vtable._11_AfterRedisplay.methodPtr);
  }
}


void __fastcall EventInfoDiggingEventPointControl___Initialization_b__7_0(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C3B9C0(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C227BC & 1) == 0 )
  {
    sub_1C3B764(&EventInfoDiggingEventPointControl___c_TypeInfo, v1);
    byte_4C227BC = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventInfoDiggingEventPointControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoDiggingEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoDiggingEventPointControl___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoDiggingEventPointControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
  if ( b->fields.value - a->fields.value < 0 )
    return -1;
  else
    return b->fields.value != a->fields.value;
}