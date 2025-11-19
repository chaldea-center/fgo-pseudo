void EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB784F & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C6BA08(&StringLiteral_8439/*"LineProgressData_"*/);
    byte_4CB784F = 1;
  }
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_8439/*"LineProgressData_"*/;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields,
    StringLiteral_8439/*"LineProgressData_"*/,
    v1,
    v2);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void EventInfoPointRiverProgressControl___ctor(EventInfoPointRiverProgressControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB784E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4CB784E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseQuestReleaseEntList, (int32_t)v3, v4, v5);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoPointRiverProgressControl__AddProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t id,
        int32_t releaseScenarioIndex,
        int64_t point,
        int64_t oldPoint,
        int64_t nextPoint,
        bool isScenarioRelease,
        bool isOpenFirstRiver,
        bool isFreeQuestClear,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // [xsp+8h] [xbp-18h]

  ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                   this,
                   id,
                   releaseScenarioIndex,
                   point,
                   oldPoint,
                   nextPoint,
                   isScenarioRelease,
                   isOpenFirstRiver,
                   isFreeQuestClear,
                   v14);
  this->fields.progressData = ProgressData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)ProgressData, v12, v13);
}


void EventInfoPointRiverProgressControl__ApplyProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C6BC60(this, method);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void EventInfoPointRiverProgressControl__Awake(EventInfoPointRiverProgressControl_o *this, const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  int v4; // w10
  Il2CppObject *Master_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_4CB783C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventPointMaster___);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB783C = 1;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    sub_1C6BC60(this, method);
  v4 = -1;
  do
    ++v4;
  while ( v4 < SLODWORD(progressRiver->max_length) );
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.userEventPointMaster, (int32_t)Master_object, v6, v7);
}


EventInfoPointRiverProgressControl_ProgressData_o *EventInfoPointRiverProgressControl__CreateProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t id,
        int32_t releaseScenarioIndex,
        int64_t point,
        int64_t oldPoint,
        int64_t nextPoint,
        bool isScenarioRelease,
        bool isOpenFirstRiver,
        bool isFreeQuestClear,
        const MethodInfo *method)
{
  __int64 v17; // x26
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4CB784D & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
    byte_4CB784D = 1;
  }
  v17 = sub_1C6BC54(EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_1C6BC60(v18, v19);
  *(_DWORD *)(v17 + 16) = id;
  *(_DWORD *)(v17 + 20) = releaseScenarioIndex;
  *(_QWORD *)(v17 + 24) = point;
  *(_QWORD *)(v17 + 32) = oldPoint;
  *(_QWORD *)(v17 + 40) = nextPoint;
  *(_BYTE *)(v17 + 48) = isScenarioRelease;
  *(_BYTE *)(v17 + 49) = isOpenFirstRiver;
  *(_BYTE *)(v17 + 50) = isFreeQuestClear;
  return (EventInfoPointRiverProgressControl_ProgressData_o *)v17;
}


void EventInfoPointRiverProgressControl__DeleteContinueData(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  __int64 v18; // x1
  EventInfoPointRiverProgressControl_c *v19; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CB784A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C6BA08(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CB784A = 1;
  }
  v28 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C6BC60(Master_object, v2);
  }
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v10 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_19:
      v14 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 + 16);
      v28 = v17;
      if ( !v4 )
        sub_1C6BC60(v15, v16);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v4,
             &entity,
             v17,
             (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C6BC60(0, v18);
        if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
        {
          v19 = EventInfoPointRiverProgressControl_TypeInfo;
          if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
            v19 = EventInfoPointRiverProgressControl_TypeInfo;
          }
          SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v19->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
          v21 = System_Int32__ToString((int32_t)&v28, 0);
          v22 = System_String__Concat_63966792(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v21, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v22, 0);
        }
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_33:
    v26 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


int64_t EventInfoPointRiverProgressControl__GetUserEventPoint(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4CB7849 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB7849 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


bool EventInfoPointRiverProgressControl__HasSaveData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoPointRiverProgressControl_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4CB784B & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1C6BA08(&EventInfoPointRiverProgressControl_TypeInfo);
    byte_4CB784B = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C6BC60(this, method);
  v4 = EventInfoPointRiverProgressControl_TypeInfo;
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v4 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v4->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v6 = System_Int32__ToString((int32_t)&eventId, 0);
  v7 = System_String__Concat_63966792(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0);
  return UnityEngine_PlayerPrefs__HasKey(v7, 0);
}


void EventInfoPointRiverProgressControl__Initialization(
        EventInfoPointRiverProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *totalPointLabel; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t size; // w8
  int32_t v14; // w20
  int32_t v15; // w21
  Il2CppObject *syncRoot; // x24

  if ( (byte_4CB783D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4CB783D = 1;
  }
  if ( entity )
  {
    totalPointLabel = (System_Collections_Generic_List_object__o *)this->fields.totalPointLabel;
    if ( !totalPointLabel )
      goto LABEL_18;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, EventUiEntity_o *, const MethodInfo *))totalPointLabel->klass->vtable._4_unknown.methodPtr)(
      totalPointLabel,
      entity,
      totalPointLabel->klass->vtable._4_unknown.method);
    this->fields.eventUiEntity = entity;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v6, v7);
    eventId = entity->fields.eventId;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_baseQuestReleaseEntList, (int32_t)QuestReleaseList, v11, v12);
    totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_18;
    size = totalPointLabel->fields._size;
    if ( size - 1 >= 1 )
    {
      v14 = size - 2;
      do
      {
        v15 = v14 + 1;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         totalPointLabel,
                                                                         v14 + 1,
                                                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( !*p_baseQuestReleaseEntList )
          break;
        syncRoot = totalPointLabel->fields._syncRoot;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList,
                                                                         v14,
                                                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( syncRoot == totalPointLabel->fields._syncRoot )
        {
          totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
          if ( !*p_baseQuestReleaseEntList )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            totalPointLabel,
            v15,
            (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        if ( v15 < 2 )
          return;
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        --v14;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_18:
      sub_1C6BC60(totalPointLabel, entity);
    }
  }
}


bool EventInfoPointRiverProgressControl__IsChangeRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CachedPtr; // w19

  v2 = this;
  if ( (byte_4CB7844 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4CB7844 = 1;
  }
  progressData = v2->fields.progressData;
  if ( !progressData )
    goto LABEL_13;
  if ( !progressData->fields.IsReleaseScenarioAnimEnd )
    return 0;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.baseQuestReleaseEntList;
  if ( !this )
    goto LABEL_13;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( ReleaseScenarioIndex >= LODWORD(this->fields.m_CancellationTokenSource) - 1 )
    return 0;
  this = (EventInfoPointRiverProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   ReleaseScenarioIndex,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
LABEL_13:
    sub_1C6BC60(this, method);
  m_CachedPtr = this->fields.m_CachedPtr;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40554260(m_CachedPtr, -1, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_4CB7846 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    byte_4CB7846 = 1;
  }
  pointRiverProgressCommonNo = this->fields.pointRiverProgressCommonNo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(212, pointRiverProgressCommonNo, 1, 0, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsEndScenarioQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t endScenarioQuestId; // w19

  if ( (byte_4CB7845 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    byte_4CB7845 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40554260(endScenarioQuestId, -1, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_4CB7843 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    byte_4CB7843 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40554260(firstRiverReleaseQuestId, -1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoPointRiverProgressControl__IsPlayAnim(
        EventInfoPointRiverProgressControl_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  EventInfoPointRiverProgressControl_o *v4; // x19
  int64_t TotalPoint; // x21
  int64_t OldTotalPoint; // x22
  struct EventInfoPointRiverProgressControl_ProgressData_o *v7; // x8
  int v8; // w23

  if ( type != 1 )
    return 0;
  progressData = this->fields.progressData;
  v4 = this;
  if ( !progressData
    || (TotalPoint = progressData->fields.TotalPoint,
        OldTotalPoint = progressData->fields.OldTotalPoint,
        this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsFirstRiver(
                                                         this,
                                                         *(const MethodInfo **)&type),
        (v7 = v4->fields.progressData) == 0) )
  {
    sub_1C6BC60(this, *(_QWORD *)&type);
  }
  v8 = v7->fields.TotalPoint >= v7->fields.NextPoint && !v7->fields.IsReleaseScenarioAnimEnd;
  return (v8
        | (TotalPoint > OldTotalPoint)
        | (unsigned __int8)this & 1
        | EventInfoPointRiverProgressControl__IsChangeRiver(v4, *(const MethodInfo **)&type)) != 0;
}


bool EventInfoPointRiverProgressControl__IsProgressShipAnim(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C6BC60(this, method);
  return progressData->fields.TotalPoint > progressData->fields.OldTotalPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


bool EventInfoPointRiverProgressControl__IsScenarioReleaseAnim(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C6BC60(this, method);
  return progressData->fields.TotalPoint >= progressData->fields.NextPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


void EventInfoPointRiverProgressControl__LoadProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_progressData; // x19
  EventInfoPointRiverProgressControl_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *String; // x21
  int64_t IsNullOrEmpty; // x0
  __int64 v12; // x1
  struct EventUiValueEntity_array *eventUiValueEntityList; // x27
  int max_length; // w8
  unsigned int v15; // w29
  EventUiValueEntity_o *v16; // x8
  int32_t v17; // w21
  const MethodInfo *v18; // x3
  int64_t v19; // x22
  const MethodInfo *v20; // x1
  char v21; // w23
  int32_t v22; // w24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t klass; // w25
  _BOOL8 IsQuestClear_40554260; // x0
  __int64 v27; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  EventInfoPointRiverProgressControl_ProgressData_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  int v34; // w8
  int64_t v35; // x25
  int v36; // w26
  int32_t v37; // w21
  int32_t v38; // w22
  const MethodInfo *v39; // x3
  int64_t UserEventPoint; // x20
  int64_t v41; // x23
  int64_t v42; // x24
  int32_t v43; // w27
  bool v44; // cc
  int32_t v45; // w26
  int32_t v46; // w25
  bool v47; // w27
  bool v48; // w26
  _BOOL8 v49; // x0
  EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4CB7848 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C6BA08(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7848 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  this->fields.progressData = 0;
  p_progressData = (CGThumbnailListItem_o *)&this->fields.progressData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.progressData, 0, (int32_t)method, v3);
  v6 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v6 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v6->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v8 = System_Int32__ToString((int32_t)&eventIda, 0);
  v9 = System_String__Concat_63966792(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v8, 0);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x3Au, 0, 0)) == 0 )
LABEL_58:
      sub_1C6BC60(IsNullOrEmpty, v12);
    v34 = *(_DWORD *)(IsNullOrEmpty + 24);
    v35 = IsNullOrEmpty;
    if ( v34 < 1 )
    {
      v37 = 0;
    }
    else
    {
      v36 = v34 & ~(v34 >> 31);
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0);
      v37 = IsNullOrEmpty;
      if ( v36 >= 2 )
      {
        if ( *(_DWORD *)(v35 + 24) <= 1u )
          goto LABEL_59;
        v38 = System_Int32__Parse(*(System_String_o **)(v35 + 40), 0);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v37, v39);
        UserEventPoint = IsNullOrEmpty;
        if ( v36 >= 3 )
        {
          if ( *(_DWORD *)(v35 + 24) <= 2u )
            goto LABEL_59;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v35 + 48), 0);
          v41 = IsNullOrEmpty;
          if ( v36 < 4 )
          {
            v45 = 0;
            v42 = 0;
          }
          else
          {
            if ( *(_DWORD *)(v35 + 24) <= 3u )
              goto LABEL_59;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v35 + 56), 0);
            v42 = IsNullOrEmpty;
            if ( v36 >= 5 )
            {
              if ( *(_DWORD *)(v35 + 24) <= 4u )
                goto LABEL_59;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v35 + 64), 0);
              v43 = IsNullOrEmpty;
              if ( v36 < 6 )
              {
                v45 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v35 + 24) <= 5u )
                  goto LABEL_59;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v35 + 72), 0);
                v44 = v36 < 7;
                v45 = IsNullOrEmpty;
                if ( !v44 )
                {
                  if ( *(_DWORD *)(v35 + 24) <= 6u )
                    goto LABEL_59;
                  v46 = System_Int32__Parse(*(System_String_o **)(v35 + 80), 0);
                  goto LABEL_50;
                }
              }
LABEL_49:
              v46 = 0;
LABEL_50:
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v47 = System_Convert__ToBoolean_65045288(v43, 0);
              v48 = System_Convert__ToBoolean_65045288(v45, 0);
              v49 = System_Convert__ToBoolean_65045288(v46, 0);
              ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                               (EventInfoPointRiverProgressControl_o *)v49,
                               v37,
                               v38,
                               UserEventPoint,
                               v41,
                               v42,
                               v47,
                               v48,
                               v49,
                               v53);
              p_progressData->klass = (CGThumbnailListItem_c *)ProgressData;
              sub_1C6B9AC(p_progressData, (int32_t)ProgressData, v51, v52);
              return;
            }
            v45 = 0;
          }
LABEL_48:
          v43 = 0;
          goto LABEL_49;
        }
        v45 = 0;
        v42 = 0;
LABEL_47:
        v41 = 0;
        goto LABEL_48;
      }
    }
    UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v37, v33);
    v45 = 0;
    v42 = 0;
    v38 = 0;
    goto LABEL_47;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_58;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( v15 < max_length )
    {
      v16 = eventUiValueEntityList->m_Items[v15];
      if ( !v16 )
        goto LABEL_58;
      if ( v16->fields.type == 2 )
      {
        v17 = System_Int32__Parse(v16->fields.value, 0);
        v19 = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v17, v18);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v20);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_58;
        v21 = IsNullOrEmpty;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v54,
          (System_Collections_Generic_List_object__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v22 = 0;
        v55 = v54;
        while ( 1 )
        {
          v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v23 )
            break;
          if ( !v55.fields._current )
            sub_1C6BC60(v23, v24);
          klass = (int32_t)v55.fields._current[1].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_40554260 = CondType__IsQuestClear_40554260(klass, -1, 0, 0);
          if ( !IsQuestClear_40554260 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v22;
          if ( !baseQuestReleaseEntList )
            sub_1C6BC60(IsQuestClear_40554260, v27);
          size = baseQuestReleaseEntList->fields._size;
          if ( v22 >= size )
            v22 = size - 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        IsNullOrEmpty = (int64_t)this->fields.baseQuestReleaseEntList;
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v22,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v30 = EventInfoPointRiverProgressControl__CreateProgressData(
                (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                v17,
                v22,
                v19,
                v19,
                *(_QWORD *)(IsNullOrEmpty + 32),
                v21 & (v19 >= *(_QWORD *)(IsNullOrEmpty + 32)),
                0,
                v21 & 1,
                v53);
        p_progressData->klass = (CGThumbnailListItem_c *)v30;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)v30, v31, v32);
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v15 >= max_length )
        return;
    }
LABEL_59:
    sub_1C6BC68(IsNullOrEmpty);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointRiverProgressControl__PlayAnim(
        EventInfoPointRiverProgressControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v6; // x20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  System_Collections_IEnumerator_o *v8; // x1

  v6 = this;
  if ( (byte_4CB7840 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    byte_4CB7840 = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_1C6BC60(this, *(_QWORD *)&type);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_43876844(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)v6, v8, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0);
  }
}


System_Collections_IEnumerator_o *EventInfoPointRiverProgressControl__PlayAnim_43876844(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB7841 & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
    byte_4CB7841 = 1;
  }
  v5 = sub_1C6BC54(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void EventInfoPointRiverProgressControl__PlayMoveShip(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4CB7842 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__);
    sub_1C6BA08(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
    byte_4CB7842 = 1;
  }
  v5 = sub_1C6BC54(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        *(_QWORD *)(v5 + 24) = callback,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11),
        progressShip = this->fields.progressShip,
        v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0),
        !progressShip) )
  {
    sub_1C6BC60(v6, v7);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v13, v14);
}


void EventInfoPointRiverProgressControl__Redisplay(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  if ( this->fields.eventUiEntity )
    EventInfoPointRiverProgressControl__SetupDisp(this, method);
}


void EventInfoPointRiverProgressControl__SaveAllData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C6BC60(this, method);
  EventInfoPointRiverProgressControl__SaveProgressData(this, eventUiEntity->fields.eventId, v2);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventInfoPointRiverProgressControl__SaveProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v4; // x19
  System_String_o *appended; // x0
  __int64 v6; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v8; // x8
  System_String_o *v9; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x8
  System_String_o *v11; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x8
  System_String_o *v13; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v14; // x8
  _BOOL4 IsReleaseScenarioAnimEnd; // w22
  System_String_o *v16; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8
  System_String_o *v18; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x8
  System_String_o *v20; // x0
  EventInfoPointRiverProgressControl_c *v21; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v27; // [xsp+10h] [xbp-50h] BYREF
  int64_t NextPoint; // [xsp+18h] [xbp-48h] BYREF
  int64_t OldTotalPoint; // [xsp+20h] [xbp-40h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t Id; // [xsp+38h] [xbp-28h] BYREF
  int32_t v32; // [xsp+3Ch] [xbp-24h] BYREF

  v32 = eventId;
  if ( (byte_4CB784C & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_1449/*":"*/);
    byte_4CB784C = 1;
  }
  ReleaseScenarioIndex = 0;
  NextPoint = 0;
  OldTotalPoint = 0;
  v27 = 0;
  v26 = 0;
  v4 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0);
  if ( !v4 )
    goto LABEL_16;
  System_Text_StringBuilder__Append_64050752(v4, appended, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(v4, (System_String_o *)StringLiteral_1449/*":"*/, 0);
  v8 = this->fields.progressData;
  if ( !v8 )
    goto LABEL_16;
  ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
  v9 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0);
  System_Text_StringBuilder__Append_64050752(v4, v9, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(v4, (System_String_o *)StringLiteral_1449/*":"*/, 0);
  v10 = this->fields.progressData;
  if ( !v10 )
    goto LABEL_16;
  OldTotalPoint = v10->fields.OldTotalPoint;
  v11 = System_Int64__ToString((int64_t)&OldTotalPoint, 0);
  System_Text_StringBuilder__Append_64050752(v4, v11, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(v4, (System_String_o *)StringLiteral_1449/*":"*/, 0);
  v12 = this->fields.progressData;
  if ( !v12 )
    goto LABEL_16;
  NextPoint = v12->fields.NextPoint;
  v13 = System_Int64__ToString((int64_t)&NextPoint, 0);
  System_Text_StringBuilder__Append_64050752(v4, v13, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(v4, (System_String_o *)StringLiteral_1449/*":"*/, 0);
  v14 = this->fields.progressData;
  if ( !v14 )
    goto LABEL_16;
  IsReleaseScenarioAnimEnd = v14->fields.IsReleaseScenarioAnimEnd;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  HIDWORD(v27) = System_Convert__ToInt32_65020108(IsReleaseScenarioAnimEnd, 0);
  v16 = System_Int32__ToString((int32_t)&v27 + 4, 0);
  System_Text_StringBuilder__Append_64050752(v4, v16, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(v4, (System_String_o *)StringLiteral_1449/*":"*/, 0);
  v17 = this->fields.progressData;
  if ( !v17
    || (LODWORD(v27) = System_Convert__ToInt32_65020108(v17->fields.IsOpenFirstRiver, 0),
        v18 = System_Int32__ToString((int32_t)&v27, 0),
        System_Text_StringBuilder__Append_64050752(v4, v18, 0),
        appended = (System_String_o *)System_Text_StringBuilder__Append_64050752(
                                        v4,
                                        (System_String_o *)StringLiteral_1449/*":"*/,
                                        0),
        (v19 = this->fields.progressData) == 0) )
  {
LABEL_16:
    sub_1C6BC60(appended, v6);
  }
  v26 = System_Convert__ToInt32_65020108(v19->fields.IsFreeQuestClear, 0);
  v20 = System_Int32__ToString((int32_t)&v26, 0);
  System_Text_StringBuilder__Append_64050752(v4, v20, 0);
  v21 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v21 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v21->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v23 = System_Int32__ToString((int32_t)&v32, 0);
  v24 = System_String__Concat_63966792(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v23, 0);
  v25 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                             v4,
                             v4->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v24, v25, 0);
}


void EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1C6BC60(0, isActive);
  UnityEngine_GameObject__SetActive(maskPanel, isActive, 0);
}


void EventInfoPointRiverProgressControl__SetNextRiverProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v4; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v5; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x9
  __int64 ReleaseScenarioIndex; // x8
  const MethodInfo *v8; // x3
  int v9; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x9
  int size; // w9
  struct EventInfoRiverProgressDrawComponent_array *v12; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v14; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x9
  struct EventInfoRiverProgressDrawComponent_array *v16; // x8
  __int64 v17; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8

  v2 = this;
  if ( (byte_4CB7847 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4CB7847 = 1;
  }
  progressData = v2->fields.progressData;
  v2->fields.isChangeRiver = 1;
  if ( !progressData )
    goto LABEL_34;
  progressData->fields.IsReleaseScenarioAnimEnd = 0;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v2, method);
  v5 = v2->fields.progressData;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_34;
  }
  else
  {
    if ( !v5 )
      goto LABEL_34;
    v5->fields.IsFreeQuestClear = 0;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_34;
  ReleaseScenarioIndex = v5->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= LODWORD(progressRiver->max_length) )
    goto LABEL_35;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[ReleaseScenarioIndex];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v4);
  method = (const MethodInfo *)v2->fields.progressData;
  if ( !method )
    goto LABEL_34;
  v9 = HIDWORD(method->invoker_method) + 1;
  HIDWORD(method->invoker_method) = v9;
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_34;
  size = baseQuestReleaseEntList->fields._size;
  if ( v9 >= size )
  {
    v9 = size - 1;
    HIDWORD(method->invoker_method) = size - 1;
  }
  v12 = v2->fields.progressRiver;
  if ( !v12 )
    goto LABEL_34;
  if ( (unsigned int)v9 >= LODWORD(v12->max_length) )
    goto LABEL_35;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v12->m_Items[v9];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    eventUiEntity->fields.eventId,
    v8);
  v15 = v2->fields.progressData;
  if ( !v15 )
    goto LABEL_34;
  v16 = v2->fields.progressRiver;
  if ( !v16 )
    goto LABEL_34;
  v17 = v15->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v17 >= LODWORD(v16->max_length) )
LABEL_35:
    sub_1C6BC68(this);
  this = (EventInfoPointRiverProgressControl_o *)v16->m_Items[v17];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v14);
  v18 = v2->fields.progressData;
  if ( !v18 )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.baseQuestReleaseEntList;
  if ( !this )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18->fields.ReleaseScenarioIndex,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
    goto LABEL_34;
  v18->fields.NextPoint = (int64_t)this->fields.datas;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_34;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v2->fields.progressData, v19);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v2, v20) )
    goto LABEL_32;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v21),
        (v22 = v2->fields.progressData) == 0) )
  {
LABEL_34:
    sub_1C6BC60(this, method);
  }
  v22->fields.IsReleaseScenarioAnimEnd = 1;
LABEL_32:
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.progressShip;
  if ( !this )
    goto LABEL_34;
  EventInfoShipProgressDrawComponent__ResetShip(
    (EventInfoShipProgressDrawComponent_o *)this,
    v2->fields.progressData,
    v21);
}


void EventInfoPointRiverProgressControl__SetTexture(
        EventInfoPointRiverProgressControl_o *this,
        UITexture_o *texture,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, texture, spriteName, 0);
}


void EventInfoPointRiverProgressControl__Setup(
        EventInfoPointRiverProgressControl_o *this,
        EventUiValueEntity_array *entities,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v6; // w22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4CB783E & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&StringLiteral_1367/*"2DUI"*/);
    byte_4CB783E = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v6 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1367/*"2DUI"*/, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v6, 0);
    this->fields.eventUiValueEntityList = entities;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entities, v7, v8);
    EventInfoPointRiverProgressControl__SetupDisp(this, v9);
    if ( !EventInfoPointRiverProgressControl__HasSaveData(this, v10) )
      EventInfoPointRiverProgressControl__SaveAllData(this, v11);
  }
}


void EventInfoPointRiverProgressControl__SetupDisp(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoPointRiverProgressControl_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x22
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CancellationTokenSource; // w8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v9; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 invoker_method_high; // x9
  struct EventUiEntity_o *v13; // x10
  struct EventInfoPointRiverProgressControl_ProgressData_o *v14; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoUserEventPointControl_o *v16; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x9
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  const MethodInfo *v23; // x1
  TerminalPramsManager_c *v24; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x9
  struct EventInfoRiverProgressDrawComponent_array *v28; // x8
  __int64 v29; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v30; // x8
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  struct EventUiEntity_o *v33; // x8
  const MethodInfo *v34; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v35; // x9
  struct EventInfoRiverProgressDrawComponent_array *v36; // x8
  __int64 v37; // x9
  const MethodInfo *v38; // x2
  TerminalPramsManager_c *v39; // x0
  struct EventUiEntity_o *v40; // x8
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4CB783F & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB783F = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_114;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB4D39 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB4D39 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) )
  {
    progressData = v3->fields.progressData;
    if ( !progressData )
      goto LABEL_114;
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.baseQuestReleaseEntList;
    if ( !this )
      goto LABEL_114;
    ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    if ( ReleaseScenarioIndex >= m_CancellationTokenSource )
    {
      ReleaseScenarioIndex = m_CancellationTokenSource - 1;
      progressData->fields.ReleaseScenarioIndex = m_CancellationTokenSource - 1;
    }
    this = (EventInfoPointRiverProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)this,
                                                     ReleaseScenarioIndex,
                                                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    if ( !this )
      goto LABEL_114;
    progressData->fields.NextPoint = (int64_t)this->fields.datas;
    v9 = v3->fields.progressData;
    if ( !v9 )
      goto LABEL_114;
    v9->fields.OldTotalPoint = v9->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
    v10 = v3->fields.progressData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_114;
      v10->fields.IsFreeQuestClear = 1;
    }
    else if ( !v10 )
    {
      goto LABEL_114;
    }
    if ( v10->fields.OldTotalPoint >= v10->fields.NextPoint && v10->fields.IsFreeQuestClear )
      v10->fields.IsReleaseScenarioAnimEnd = 1;
    EventInfoPointRiverProgressControl__SaveAllData(v3, method);
  }
  method = (const MethodInfo *)v3->fields.progressData;
  if ( !method )
    goto LABEL_114;
  progressRiver = v3->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_114;
  invoker_method_high = SHIDWORD(method->invoker_method);
  if ( (unsigned int)invoker_method_high >= LODWORD(progressRiver->max_length) )
    goto LABEL_115;
  v13 = v3->fields.eventUiEntity;
  if ( !v13 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[invoker_method_high];
  if ( !this )
    goto LABEL_114;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    v13->fields.eventId,
    v5);
  v14 = v3->fields.progressData;
  if ( !v14 )
    goto LABEL_114;
  totalPointLabel = v3->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_114;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v14->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
  v16 = v3->fields.totalPointLabel;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_114;
  }
  else
  {
    v17 = v3->fields.progressData;
    if ( !v17 || !v16 )
      goto LABEL_114;
    v16->fields._oldTotalPoint_k__BackingField = v17->fields.TotalPoint;
  }
  ((void (__fastcall *)(struct EventInfoUserEventPointControl_o *__return_ptr, struct EventInfoUserEventPointControl_o *, struct EventUiValueEntity_array *, const MethodInfo *))v16->klass->vtable._5_Setup.methodPtr)(
    v16,
    v16,
    v3->fields.eventUiValueEntityList,
    v16->klass->vtable._5_Setup.method);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v18) )
  {
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_114;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v19) )
    goto LABEL_118;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB4D39 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB4D39 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) )
    goto LABEL_118;
  v21 = v3->fields.progressData;
  if ( !v21 )
    goto LABEL_114;
  if ( v21->fields.IsOpenFirstRiver )
  {
LABEL_118:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, method) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CB4D39 )
      {
        sub_1C6BA08(&TerminalPramsManager_TypeInfo);
        byte_4CB4D39 = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) )
      {
        v22 = v3->fields.progressData;
        if ( !v22 )
          goto LABEL_114;
        v22->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v3, method);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, method) )
      goto LABEL_69;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB4D39 )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB4D39 = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v24 = TerminalPramsManager_TypeInfo;
    }
    if ( !v24->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v23);
      v30 = v3->fields.progressData;
      if ( !v30 )
        goto LABEL_114;
      v30->fields.OldTotalPoint = v30->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v3, method);
    }
    else
    {
LABEL_69:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v23) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
        if ( this )
        {
          EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v25);
          v27 = v3->fields.progressData;
          if ( v27 )
          {
            v28 = v3->fields.progressRiver;
            if ( v28 )
            {
              v29 = v27->fields.ReleaseScenarioIndex;
              if ( (unsigned int)v29 < LODWORD(v28->max_length) )
              {
                this = (EventInfoPointRiverProgressControl_o *)v28->m_Items[v29];
                if ( !this )
                  goto LABEL_114;
                EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v26);
                goto LABEL_88;
              }
LABEL_115:
              sub_1C6BC68(this);
            }
          }
        }
        goto LABEL_114;
      }
    }
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
    if ( this )
    {
      EventInfoReleaseEventPointControl__Setup(
        (EventInfoReleaseEventPointControl_o *)this,
        v3->fields.progressData,
        v25);
      this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
      if ( this )
      {
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v31);
        v33 = v3->fields.eventUiEntity;
        if ( v33 )
        {
          this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
          if ( this )
          {
            EventInfoShipProgressDrawComponent__Setup(
              (EventInfoShipProgressDrawComponent_o *)this,
              v3,
              v33->fields.eventId,
              v3->fields.isChangeRiver,
              v32);
            v35 = v3->fields.progressData;
            if ( v35 )
            {
              v36 = v3->fields.progressRiver;
              if ( v36 )
              {
                v37 = v35->fields.ReleaseScenarioIndex;
                if ( (unsigned int)v37 >= LODWORD(v36->max_length) )
                  goto LABEL_115;
                this = (EventInfoPointRiverProgressControl_o *)v36->m_Items[v37];
                if ( this )
                {
                  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v34);
                  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
                  if ( this )
                  {
                    EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v38);
LABEL_88:
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4CB36D9 )
                    {
                      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
                      byte_4CB36D9 = 1;
                    }
                    v39 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v39 = TerminalPramsManager_TypeInfo;
                    }
                    v39->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_114:
    sub_1C6BC60(this, method);
  }
  if ( !this[1].fields.playType )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4CB36D9 )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB36D9 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) = 0;
  v40 = v3->fields.eventUiEntity;
  if ( !v40 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_114;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3,
    v40->fields.eventId,
    1,
    v20);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v41);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v42);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_114;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_114;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_114;
    v49.fields.x = x;
    v49.fields.y = y;
    v49.fields.z = z;
    EventInfoUISlideAnimation__SetAfterActionAndInPosition((EventInfoUISlideAnimation_o *)Component_object, 0, v49, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
    GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)&Component_object[3].monitor, 0);
  }
}


EventInfoPointRiverProgressControl_ProgressData_o *EventInfoPointRiverProgressControl__get_GetProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  return this->fields.progressData;
}


void EventInfoPointRiverProgressControl_ProgressData___ctor(
        EventInfoPointRiverProgressControl_ProgressData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointRiverProgressControl__PlayAnim_d__26___ctor(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoPointRiverProgressControl__PlayAnim_d__26__MoveNext(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl__PlayAnim_d__26_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct EventInfoPointRiverProgressControl_o *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *callback; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  const MethodInfo *v18; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  System_Collections_IEnumerator_o *v23; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v28; // x19
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3
  bool v31; // w2
  EventInfoRiverProgressDrawComponent_o *v32; // x0
  System_Action_o *v33; // x1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  System_Collections_IEnumerator_o *v36; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v37; // x9
  struct EventInfoRiverProgressDrawComponent_array *v38; // x8
  __int64 v39; // x9
  Il2CppObject *v40; // x22
  EventInfoRiverProgressDrawComponent_o *v41; // x19
  System_Action_o *v42; // x21
  System_Collections_IEnumerator_o *v43; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v44; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v45; // x8
  const MethodInfo *v46; // x2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v47; // x8

  v2 = this;
  if ( (byte_4CB7853 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_1C6BA08(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_1C6BA08(&EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    byte_4CB7853 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_42;
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)EventInfoPointRiverProgressControl__IsFirstRiver(
                                                                     _4__this,
                                                                     method);
    progressData = _4__this->fields.progressData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !progressData )
        goto LABEL_42;
      if ( !progressData->fields.IsOpenFirstRiver )
      {
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
        if ( !this )
          goto LABEL_42;
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v18);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v20);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, v21);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
        if ( !this )
          goto LABEL_42;
        v23 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
                (EventInfoShipProgressDrawComponent_o *)this,
                1,
                0,
                v22);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                                                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                         v23,
                                                                         0);
        v24 = _4__this->fields.progressData;
        if ( !v24 )
          goto LABEL_42;
        progressRiver = _4__this->fields.progressRiver;
        if ( !progressRiver )
          goto LABEL_42;
        ReleaseScenarioIndex = v24->fields.ReleaseScenarioIndex;
        if ( (unsigned int)ReleaseScenarioIndex < LODWORD(progressRiver->max_length) )
        {
          _8__1 = (Il2CppObject *)v2->fields.__8__1;
          v28 = progressRiver->m_Items[ReleaseScenarioIndex];
          v29 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(
            v29,
            _8__1,
            Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
            0);
          if ( !v28 )
            goto LABEL_42;
          v31 = 1;
          v32 = v28;
          v33 = v29;
LABEL_33:
          v43 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v32, v33, v31, v30);
          UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v43, 0);
          return 0;
        }
        goto LABEL_43;
      }
    }
    else if ( !progressData )
    {
      goto LABEL_42;
    }
    if ( progressData->fields.TotalPoint > progressData->fields.OldTotalPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
      if ( !this )
        goto LABEL_42;
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0);
      v47 = v2->fields.__8__1;
      if ( !v47 )
        goto LABEL_42;
      EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v47->fields.callback, v46);
      return 0;
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, method) )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
      if ( !this )
        goto LABEL_42;
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0);
      v44 = _4__this->fields.progressData;
      if ( !v44 )
        goto LABEL_42;
      v44->fields.OldTotalPoint = v44->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
      v45 = v2->fields.__8__1;
      if ( !v45 )
        goto LABEL_42;
      ActionExtensions__Call(v45->fields.callback, 0);
      return 0;
    }
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_42;
    EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, v34);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
    if ( !this )
      goto LABEL_42;
    v36 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
            (EventInfoShipProgressDrawComponent_o *)this,
            0,
            0,
            v35);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                                                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                     v36,
                                                                     0);
    v37 = _4__this->fields.progressData;
    if ( !v37 )
      goto LABEL_42;
    v38 = _4__this->fields.progressRiver;
    if ( !v38 )
      goto LABEL_42;
    v39 = v37->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v39 < LODWORD(v38->max_length) )
    {
      v40 = (Il2CppObject *)v2->fields.__8__1;
      v41 = v38->m_Items[v39];
      v42 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v42,
        v40,
        Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
        0);
      if ( !v41 )
        goto LABEL_42;
      v32 = v41;
      v33 = v42;
      v31 = 0;
      goto LABEL_33;
    }
LABEL_43:
    sub_1C6BC68(this);
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C6BC54(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor(v4, 0);
    v2->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v4, v5, v6);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
    if ( this )
    {
      v9 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v9;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v7, v8);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
      if ( this )
      {
        callback = (Il2CppObject *)v2->fields.callback;
        this->fields.__2__current = callback;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)callback, v10, v11);
        v2->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C6B9AC(p__2__current, 0, v14, v15);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
LABEL_42:
    sub_1C6BC60(this, method);
  }
  return 0;
}


Il2CppObject *EventInfoPointRiverProgressControl__PlayAnim_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoPointRiverProgressControl__PlayAnim_d__26__System_Collections_IEnumerator_Reset(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *EventInfoPointRiverProgressControl__PlayAnim_d__26__System_Collections_IEnumerator_get_Current(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoPointRiverProgressControl__PlayAnim_d__26__System_IDisposable_Dispose(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoPointRiverProgressControl___c__DisplayClass26_0___ctor(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__0(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (progressData = _4__this->fields.progressData) == 0 )
    sub_1C6BC60(_4__this, method);
  progressData->fields.IsOpenFirstRiver = 1;
  EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct EventInfoPointRiverProgressControl_o *v5; // x8
  const MethodInfo *v6; // x3
  UnityEngine_MonoBehaviour_o *v7; // x20
  System_Collections_IEnumerator_o *v8; // x0
  const MethodInfo *v9; // x3
  UnityEngine_MonoBehaviour_o *v10; // x20
  UnityEngine_MonoBehaviour_c *klass; // x9
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 name_high; // x9
  EventInfoRiverProgressDrawComponent_o *v14; // x21
  System_Action_o *_9__2; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *v18; // x0

  if ( (byte_4CB7850 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__);
    byte_4CB7850 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoPointRiverProgressControl__SetNextRiverProgressData(_4__this, method);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v5->fields.releaseTermsObject;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, v4);
  v7 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v7[2].fields.m_CachedPtr;
  if ( !_4__this )
    goto LABEL_16;
  v8 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
         (EventInfoShipProgressDrawComponent_o *)_4__this,
         1,
         1,
         v6);
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(v7, v8, 0);
  v10 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  klass = v10[5].klass;
  if ( !klass )
    goto LABEL_16;
  m_CancellationTokenSource = v10[2].fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_16;
  name_high = SHIDWORD(klass->_1.name);
  if ( (unsigned int)name_high >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
    sub_1C6BC68(_4__this);
  v14 = (EventInfoRiverProgressDrawComponent_o *)*((_QWORD *)&m_CancellationTokenSource->fields._state + name_high);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v16, v17);
  }
  if ( !v14 )
LABEL_16:
    sub_1C6BC60(_4__this, method);
  v18 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v14, _9__2, 1, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868(v10, v18, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_o *v4; // x8
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_c *klass; // x8

  v2 = this;
  if ( (byte_4CB7851 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CB7851 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)_4__this->fields.totalPointLabel;
  if ( !this )
    goto LABEL_11;
  EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4->fields.maskPanel) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v2->fields.__4__this) == 0)
    || (klass = this[4].klass) == 0
    || (klass->_1.byval_arg.data = (void *)klass->_1.namespaze,
        EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, method),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C6BC60(this, method);
  }
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0);
}


void EventInfoPointRiverProgressControl___c__DisplayClass27_0___ctor(
        EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoPointRiverProgressControl___c__DisplayClass27_0___PlayMoveShip_b__0(
        EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *v3; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  const MethodInfo *v6; // x2
  struct EventInfoPointRiverProgressControl_o *v7; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v8; // x9
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v12; // x9
  EventInfoRiverProgressDrawComponent_o *v13; // x20
  System_Action_o *_9__1; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct EventInfoReleaseEventPointControl_o *releaseTermsObject; // x8
  const MethodInfo *v18; // x2
  struct EventInfoPointRiverProgressControl_o *v19; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v20; // x9
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_c *klass; // x8
  struct EventInfoPointRiverProgressControl_o *v22; // x8

  v3 = this;
  if ( (byte_4CB7852 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&EventInfoPointRiverProgressControl_TypeInfo);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)sub_1C6BA08(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__);
    byte_4CB7852 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_33;
  progressData = _4__this->fields.progressData;
  if ( !progressData )
    goto LABEL_33;
  if ( progressData->fields.TotalPoint >= progressData->fields.NextPoint
    && !progressData->fields.IsReleaseScenarioAnimEnd )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_33;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 0, v2);
    v7 = v3->fields.__4__this;
    if ( !v7 )
      goto LABEL_33;
    v8 = v7->fields.progressData;
    if ( !v8 )
      goto LABEL_33;
    ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v7 = v3->fields.__4__this;
      if ( !v7 )
        goto LABEL_33;
    }
    if ( ReleaseScenarioIndex >= EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      releaseTermsObject = v7->fields.releaseTermsObject;
      if ( !releaseTermsObject )
        goto LABEL_33;
      EventInfoReleaseEventPointControl__PlaySe(
        (EventInfoReleaseEventPointControl_o *)this,
        releaseTermsObject->fields.releaseScenarioCheckSE,
        v6);
    }
    else
    {
      v10 = v7->fields.progressData;
      if ( !v10 )
        goto LABEL_33;
      progressRiver = v7->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_33;
      v12 = v10->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v12 >= LODWORD(progressRiver->max_length) )
        sub_1C6BC68(this);
      v13 = progressRiver->m_Items[v12];
      _9__1 = v3->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0);
        v3->fields.__9__1 = _9__1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v15, v16);
      }
      if ( !v13 )
        goto LABEL_33;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v13, _9__1, v6);
    }
  }
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_33;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(
                                                                         (EventInfoPointRiverProgressControl_o *)this,
                                                                         method);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_29;
  v19 = v3->fields.__4__this;
  if ( !v19 || (v20 = v19->fields.progressData) == 0 )
LABEL_33:
    sub_1C6BC60(this, method);
  if ( !v20->fields.IsFreeQuestClear )
  {
    v20->fields.IsFreeQuestClear = 1;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v19->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_33;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 1, v18);
  }
LABEL_29:
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_33;
  klass = this[4].klass;
  if ( !klass )
    goto LABEL_33;
  klass->_1.byval_arg.data = (void *)klass->_1.namespaze;
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, method);
  v22 = v3->fields.__4__this;
  if ( !v22 )
    goto LABEL_33;
  v22->fields.isChangeRiver = 0;
}


void EventInfoPointRiverProgressControl___c__DisplayClass27_0___PlayMoveShip_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (progressData = _4__this->fields.progressData) == 0
    || (progressData->fields.IsReleaseScenarioAnimEnd = 1,
        EventInfoPointRiverProgressControl__SaveAllData(_4__this, method),
        (v5 = this->fields.__4__this) == 0)
    || (_4__this = (struct EventInfoPointRiverProgressControl_o *)v5->fields.maskPanel) == 0 )
  {
    sub_1C6BC60(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}