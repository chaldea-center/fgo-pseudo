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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_QuestReleaseEntity__o *ListByTargetAndCondType; // x21
  QuestReleaseEntity_o *v51; // x20
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x20
  Il2CppObject *v54; // x22
  struct EventInfoDiggingEventPointControl___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x22
  Il2CppObject *current; // x26
  _BOOL8 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x1
  int32_t klass; // w21
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+0h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E94C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_QuestReleaseEntity___ctor__, (_DWORD)eventUiEnt, userEventPoint, method);
    sub_B5D5C4(&System_Comparison_QuestReleaseEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestReleaseEntity___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v39, v40, v41);
    sub_B5D5C4(&Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__, v42, v43, v44);
    sub_B5D5C4(&EventInfoDiggingEventPointControl___c_TypeInfo, v45, v46, v47);
    byte_42E94C8 = 1;
  }
  entity = 0LL;
  memset(&v71, 0, sizeof(v71));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !eventUiEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  ListByTargetAndCondType = QuestReleaseMaster__getListByTargetAndCondType(
                              (QuestReleaseMaster_o *)Master_WarQuestSelectionMaster,
                              eventUiEnt->fields.eventId,
                              85,
                              0LL);
  v51 = 0LL;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ListByTargetAndCondType,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestReleaseEntity___) )
    return v51;
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
    v54 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v54,
      Method_EventInfoDiggingEventPointControl___c__GetNextQuestReleaseEntity_b__14_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestReleaseEntity___ctor__);
    v55 = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
    v55->__9__14_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__14_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !ListByTargetAndCondType )
LABEL_39:
    sub_B5D69C(Master_WarQuestSelectionMaster, v49);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)ListByTargetAndCondType,
    (System_Comparison_T__o *)_9__14_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ListByTargetAndCondType,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v71 = v69;
  current = 0LL;
LABEL_22:
  v51 = (QuestReleaseEntity_o *)current;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v71,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v64 )
      break;
    current = v71.fields.current;
    if ( !v71.fields.current )
      sub_B5D69C(v64, v65);
    if ( !v62 )
      sub_B5D69C(v64, v65);
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v62,
           &entity,
           (int32_t)v71.fields.current[1].klass,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_B5D69C(0LL, v66);
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
    &v71,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v51;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v20; // x21
  __int64 v21; // x1
  struct UISprite_o *userPointBgSprite; // x0

  if ( (byte_42E94C4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18769/*"event_point_bg_8036701"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18770/*"event_point_bg_8036702"*/, v16, v17, v18);
    byte_42E94C4 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_EventInfoDiggingEventPointControl__Initialization_b__7_0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v20, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.userPointBgSprite,
    (System_String_o *)StringLiteral_18769/*"event_point_bg_8036701"*/,
    0LL);
  userPointBgSprite = this->fields.userPointBgSprite;
  if ( !userPointBgSprite
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))userPointBgSprite->klass->vtable._33_MakePixelPerfect.method)(
          userPointBgSprite,
          userPointBgSprite->klass->vtable._34_get_minWidth.methodPtr),
        EventInfoUIBase__SetSpriteByLocalAtlas(
          (EventInfoUIBase_o *)this,
          this->fields.nextPointBgSprite,
          (System_String_o *)StringLiteral_18770/*"event_point_bg_8036702"*/,
          0LL),
        (userPointBgSprite = this->fields.nextPointBgSprite) == 0LL) )
  {
    sub_B5D69C(userPointBgSprite, v21);
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
    sub_B5D69C(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl__Redisplay(
        EventInfoDiggingEventPointControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoDiggingEventPointControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointNoGroup; // x20
  const MethodInfo *v10; // x2
  EventInfoDiggingEventPointControl_o *v11; // x0
  const MethodInfo *v12; // x3
  QuestReleaseEntity_o *NextQuestReleaseEntity; // x0
  const MethodInfo *v14; // x2
  UILabel_o *nextPointLabel; // x19

  v4 = this;
  if ( (byte_42E94C5 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventInfoDiggingEventPointControl_o *)sub_B5D5C4(&StringLiteral_5729/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, v5, v6, v7);
    byte_42E94C5 = 1;
  }
  if ( v4->fields.eventUiValueEntityList )
  {
    eventUiEntity = v4->fields.eventUiEntity;
    if ( !eventUiEntity )
      goto LABEL_13;
    EventPointNoGroup = UserEventPointMaster__GetEventPointNoGroup(eventUiEntity->fields.eventId, 0LL);
    EventInfoDiggingEventPointControl__SetUserEventPointLabel(v4, EventPointNoGroup, v10);
    NextQuestReleaseEntity = EventInfoDiggingEventPointControl__GetNextQuestReleaseEntity(
                               v11,
                               v4->fields.eventUiEntity,
                               EventPointNoGroup,
                               v12);
    if ( NextQuestReleaseEntity )
    {
      EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        v4,
        (NextQuestReleaseEntity->fields.value - EventPointNoGroup) & ~((NextQuestReleaseEntity->fields.value
                                                                      - EventPointNoGroup) >> 63),
        v14);
      return;
    }
    nextPointLabel = v4->fields.nextPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventInfoDiggingEventPointControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_POINT_COMMON_FORMAT_COUNT_STOP"*/, 0LL);
    if ( !nextPointLabel )
LABEL_13:
      sub_B5D69C(this, method);
    UILabel__set_text(nextPointLabel, (System_String_o *)this, 0LL);
  }
}


void __fastcall EventInfoDiggingEventPointControl__SetNextEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
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
  UnityEngine_Object_o *nextPointLabel; // x21
  UILabel_o *v16; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E94C7 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, point, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v12, v13, v14);
    byte_42E94C7 = 1;
  }
  nextPointLabel = (UnityEngine_Object_o *)this->fields.nextPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nextPointLabel, 0LL, 0LL) )
  {
    v16 = this->fields.nextPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v21 = point;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
    v19 = System_String__Format(v17, v18, 0LL);
    if ( !v16 )
      sub_B5D69C(v19, v20);
    UILabel__set_text(v16, v19, 0LL);
  }
}


void __fastcall EventInfoDiggingEventPointControl__SetUserEventPointLabel(
        EventInfoDiggingEventPointControl_o *this,
        int64_t point,
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
  UnityEngine_Object_o *userPointLabel; // x21
  UILabel_o *v16; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E94C6 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, point, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, v12, v13, v14);
    byte_42E94C6 = 1;
  }
  userPointLabel = (UnityEngine_Object_o *)this->fields.userPointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(userPointLabel, 0LL, 0LL) )
  {
    v16 = this->fields.userPointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
    v21 = point;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
    v19 = System_String__Format(v17, v18, 0LL);
    if ( !v16 )
      sub_B5D69C(v19, v20);
    UILabel__set_text(v16, v19, 0LL);
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
      sub_B5D69C(HasMatchedType, v10);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_B5D560(
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
    sub_B5D69C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoDiggingEventPointControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoDiggingEventPointControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6535 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoDiggingEventPointControl___c_TypeInfo, v1, v2, v3);
    byte_42E6535 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoDiggingEventPointControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoDiggingEventPointControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoDiggingEventPointControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  if ( b->fields.value - a->fields.value < 0 )
    return -1;
  else
    return b->fields.value != a->fields.value;
}