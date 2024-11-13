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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  void *Master_object; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  QuestReleaseEntity_o *v37; // x20
  System_Comparison_T__o *v38; // x20
  Il2CppObject *v39; // x21
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  Il2CppObject *current; // x26
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  int32_t klass; // w22
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4B16A51 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_QuestReleaseEntity__TypeInfo, eventUiEnt, userEventPoint);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v26, v27);
    sub_1BCA7E0(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__, v28, v29);
    sub_1BCA7E0(&EventInfoDiggingEventPointControl___c_TypeInfo, v30, v31);
    byte_4B16A51 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUiEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_object )
    goto LABEL_34;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Master_object,
                              eventUiEnt->fields.eventId,
                              85,
                              0LL);
  v37 = 0LL;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v37;
  Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  if ( !EventInfoDiggingEventPointControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDiggingEventPointControl___c_TypeInfo, v33);
    Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
  }
  v38 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v38 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v33);
      Master_object = EventInfoDiggingEventPointControl___c_TypeInfo;
    }
    v39 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v38 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestReleaseEntity__TypeInfo, v33, v35, v36);
    System_Comparison_object____ctor(
      v38,
      v39,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      0LL);
    static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)v38;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__14_0, (int64_t)v38, v41, v42, v43, v44, v45, v46);
  }
  if ( !ListByTargetAndCondType )
LABEL_34:
    sub_1BCAA3C(Master_object, v33);
  System_Collections_Generic_List_object___Sort_56244000(
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    v38,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  v48 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)ListByTargetAndCondType,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v57 = v56;
  current = 0LL;
LABEL_18:
  v37 = (QuestReleaseEntity_o *)current;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v50 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1BCAA3C(v50, v51);
    if ( !v48 )
      sub_1BCAA3C(v50, v51);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v48,
           &entity,
           (int32_t)v57.fields._current[1].klass,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_1BCAA3C(0LL, v52);
      if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0LL) == 2 )
      {
        if ( (__int64)current[2].klass > userEventPoint )
          goto LABEL_18;
        klass = (int32_t)current[1].klass;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v53);
        if ( !CondType__IsOpen(1, klass, 0LL, 0, 0LL, 0LL) )
          goto LABEL_18;
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v37;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x21
  __int64 v21; // x1
  struct UISprite_o *userPointBgSprite; // x0

  if ( (byte_4B16A4D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, v10, v11);
    sub_1BCA7E0(&StringLiteral_19407/*"event_point_bg_8036701"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19408/*"event_point_bg_8036702"*/, v14, v15);
    byte_4B16A4D = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v20, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_19407/*"event_point_bg_8036701"*/,
    0LL);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))userPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_19408/*"event_point_bg_8036702"*/,
          0LL),
        (userPointBgSprite = this->fields.nextPointBgSprite) == 0LL) )
  {
    sub_1BCAA3C(userPointBgSprite, v21);
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
    sub_1BCAA3C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl__Redisplay(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoDiggingEventPointControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointNoGroup; // x20
  const MethodInfo *v8; // x2
  EventInfoDiggingEventPointControl_o *v9; // x0
  const MethodInfo *v10; // x3
  QuestReleaseEntity_o *NextQuestReleaseEntity; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  UILabel_o *nextPointLabel; // x19

  v3 = this;
  if ( (byte_4B16A4E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    this = (EventInfoDiggingEventPointControl_o *)sub_1BCA7E0(&StringLiteral_5729/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, v4, v5);
    byte_4B16A4E = 1;
  }
  if ( v3->fields.eventUiValueEntityList )
  {
    eventUiEntity = v3->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_12;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
    EventInfoDiggingEventPointControl__SetUserEventPointLabel(v3, EventPointNoGroup, v8);
    NextQuestReleaseEntity = EventInfoDiggingEventPointControl__GetNextQuestReleaseEntity(
                               v9,
                               v3->fields.eventUiEntity,
                               EventPointNoGroup,
                               v10);
    if ( NextQuestReleaseEntity )
    {
      EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        v3,
        (NextQuestReleaseEntity->fields.value - EventPointNoGroup) & ~((NextQuestReleaseEntity->fields.value
                                                                      - EventPointNoGroup) >> 63),
        v13);
      return;
    }
    nextPointLabel = v3->fields.nextPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    this = (EventInfoDiggingEventPointControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, 0LL);
    if ( !nextPointLabel )
LABEL_12:
      sub_1BCAA3C(this, method);
    UILabel__set_text(nextPointLabel, (System_String_o *)this, 0LL);
  }
}


void __fastcall EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *nextPointLabel; // x21
  __int64 v12; // x1
  UILabel_o *v13; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16A50 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, point, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v9, v10);
    byte_4B16A50 = 1;
  }
  nextPointLabel = (UnityEngine_Object_o *)this->fields.nextPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(nextPointLabel, 0LL, 0LL) )
  {
    v13 = this->fields.nextPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v18 = point;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v16 = System_String__Format(v14, v15, 0LL);
    if ( !v13 )
      sub_1BCAA3C(v16, v17);
    UILabel__set_text(v13, v16, 0LL);
  }
}


void __fastcall EventInfoDiggingEventPointControl__SetUserEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *userPointLabel; // x21
  __int64 v12; // x1
  UILabel_o *v13; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16A4F & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, point, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v9, v10);
    byte_4B16A4F = 1;
  }
  userPointLabel = (UnityEngine_Object_o *)this->fields.userPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(userPointLabel, 0LL, 0LL) )
  {
    v13 = this->fields.userPointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v18 = point;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
    v16 = System_String__Format(v14, v15, 0LL);
    if ( !v13 )
      sub_1BCAA3C(v16, v17);
    UILabel__set_text(v13, v16, 0LL);
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
      sub_1BCAA3C(HasMatchedType, v10);
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
    sub_1BCA784(
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
    sub_1BCAA3C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16A52 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoDiggingEventPointControl___c_TypeInfo, v1, v2);
    byte_4B16A52 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoDiggingEventPointControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoDiggingEventPointControl___c_TypeInfo->static_fields->__9 = (struct EventInfoDiggingEventPointControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoDiggingEventPointControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  if ( b->fields.value - a->fields.value < 0 )
    return -1;
  else
    return b->fields.value != a->fields.value;
}