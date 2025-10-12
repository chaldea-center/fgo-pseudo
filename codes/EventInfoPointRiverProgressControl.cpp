void EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C38F1F & 1) == 0 )
  {
    sub_1C32C20(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C32C20(&StringLiteral_8441/*"LineProgressData_"*/);
    byte_4C38F1F = 1;
  }
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_8441/*"LineProgressData_"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields,
    StringLiteral_8441/*"LineProgressData_"*/,
    v1,
    v2);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void EventInfoPointRiverProgressControl___ctor(EventInfoPointRiverProgressControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C38F1E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4C38F1E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseQuestReleaseEntList, (int32_t)v3, v4, v5);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)ProgressData, v12, v13);
}


void EventInfoPointRiverProgressControl__ApplyProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C32E7C(this);
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
  if ( (byte_4C38F0C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventPointMaster___);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C32C20(&DataManager_TypeInfo);
    byte_4C38F0C = 1;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    sub_1C32E7C(this);
  v4 = -1;
  do
    ++v4;
  while ( v4 < SLODWORD(progressRiver->max_length) );
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.userEventPointMaster, (int32_t)Master_object, v6, v7);
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

  if ( (byte_4C38F1D & 1) == 0 )
  {
    sub_1C32C20(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
    byte_4C38F1D = 1;
  }
  v17 = sub_1C32E6C(EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_1C32E7C(v18);
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
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v3; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  int32_t v14; // w2
  EventInfoPointRiverProgressControl_c *v15; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v17; // x1
  System_String_o *v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C38F1A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C32C20(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C38F1A = 1;
  }
  v24 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C32E7C(Master_object);
  }
  v3 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_12;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v8 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_19;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_19:
      v12 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 16);
      v24 = v14;
      if ( !v3 )
        sub_1C32E7C(v13);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v3,
             &entity,
             v14,
             (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C32E7C(0);
        if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
        {
          v15 = EventInfoPointRiverProgressControl_TypeInfo;
          if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
            v15 = EventInfoPointRiverProgressControl_TypeInfo;
          }
          SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v15->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
          v17 = System_Int32__ToString((int32_t)&v24, 0);
          v18 = System_String__Concat_63518544(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v17, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v18, 0);
        }
      }
    }
  }
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_33;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_33:
    v22 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
}


int64_t EventInfoPointRiverProgressControl__GetUserEventPoint(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4C38F19 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C38F19 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  if ( (byte_4C38F1B & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1C32C20(&EventInfoPointRiverProgressControl_TypeInfo);
    byte_4C38F1B = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C32E7C(this);
  v4 = EventInfoPointRiverProgressControl_TypeInfo;
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v4 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v4->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v6 = System_Int32__ToString((int32_t)&eventId, 0);
  v7 = System_String__Concat_63518544(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0);
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

  if ( (byte_4C38F0D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C32C20(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4C38F0D = 1;
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v6, v7);
    eventId = entity->fields.eventId;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_1C32BC4((CGThumbnailListItem_o *)p_baseQuestReleaseEntList, (int32_t)QuestReleaseList, v11, v12);
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
                                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( !*p_baseQuestReleaseEntList )
          break;
        syncRoot = totalPointLabel->fields._syncRoot;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList,
                                                                         v14,
                                                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
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
            (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        if ( v15 < 2 )
          return;
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        --v14;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_18:
      sub_1C32E7C(totalPointLabel);
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
  if ( (byte_4C38F14 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4C38F14 = 1;
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
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
LABEL_13:
    sub_1C32E7C(this);
  m_CachedPtr = this->fields.m_CachedPtr;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(m_CachedPtr, -1, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_4C38F16 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C38F16 = 1;
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

  if ( (byte_4C38F15 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C38F15 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(endScenarioQuestId, -1, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_4C38F13 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C38F13 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_40225464(firstRiverReleaseQuestId, -1, 0, 0);
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
  const MethodInfo *v7; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v8; // x8
  int v9; // w23

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
        (v8 = v4->fields.progressData) == 0) )
  {
    sub_1C32E7C(this);
  }
  v9 = v8->fields.TotalPoint >= v8->fields.NextPoint && !v8->fields.IsReleaseScenarioAnimEnd;
  return (v9
        | (TotalPoint > OldTotalPoint)
        | (unsigned __int8)this & 1
        | EventInfoPointRiverProgressControl__IsChangeRiver(v4, v7)) != 0;
}


bool EventInfoPointRiverProgressControl__IsProgressShipAnim(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  struct EventUiValueEntity_array *eventUiValueEntityList; // x27
  int max_length; // w8
  unsigned int v14; // w29
  EventUiValueEntity_o *v15; // x8
  int32_t v16; // w21
  const MethodInfo *v17; // x3
  int64_t v18; // x22
  const MethodInfo *v19; // x1
  char v20; // w23
  int32_t v21; // w24
  _BOOL8 v22; // x0
  int32_t klass; // w25
  _BOOL8 IsQuestClear_40225464; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  EventInfoPointRiverProgressControl_ProgressData_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int v31; // w8
  int64_t v32; // x25
  int v33; // w26
  int32_t v34; // w21
  int32_t v35; // w22
  const MethodInfo *v36; // x3
  int64_t UserEventPoint; // x20
  int64_t v38; // x23
  int64_t v39; // x24
  int32_t v40; // w27
  bool v41; // cc
  int32_t v42; // w26
  int32_t v43; // w25
  bool v44; // w27
  bool v45; // w26
  _BOOL8 v46; // x0
  EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4C38F18 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C32C20(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38F18 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  this->fields.progressData = 0;
  p_progressData = (CGThumbnailListItem_o *)&this->fields.progressData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.progressData, 0, (int32_t)method, v3);
  v6 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v6 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v6->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v8 = System_Int32__ToString((int32_t)&eventIda, 0);
  v9 = System_String__Concat_63518544(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v8, 0);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x3Au, 0, 0)) == 0 )
LABEL_58:
      sub_1C32E7C(IsNullOrEmpty);
    v31 = *(_DWORD *)(IsNullOrEmpty + 24);
    v32 = IsNullOrEmpty;
    if ( v31 < 1 )
    {
      v34 = 0;
    }
    else
    {
      v33 = v31 & ~(v31 >> 31);
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0);
      v34 = IsNullOrEmpty;
      if ( v33 >= 2 )
      {
        if ( *(_DWORD *)(v32 + 24) <= 1u )
          goto LABEL_59;
        v35 = System_Int32__Parse(*(System_String_o **)(v32 + 40), 0);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v34, v36);
        UserEventPoint = IsNullOrEmpty;
        if ( v33 >= 3 )
        {
          if ( *(_DWORD *)(v32 + 24) <= 2u )
            goto LABEL_59;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v32 + 48), 0);
          v38 = IsNullOrEmpty;
          if ( v33 < 4 )
          {
            v42 = 0;
            v39 = 0;
          }
          else
          {
            if ( *(_DWORD *)(v32 + 24) <= 3u )
              goto LABEL_59;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v32 + 56), 0);
            v39 = IsNullOrEmpty;
            if ( v33 >= 5 )
            {
              if ( *(_DWORD *)(v32 + 24) <= 4u )
                goto LABEL_59;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v32 + 64), 0);
              v40 = IsNullOrEmpty;
              if ( v33 < 6 )
              {
                v42 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v32 + 24) <= 5u )
                  goto LABEL_59;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v32 + 72), 0);
                v41 = v33 < 7;
                v42 = IsNullOrEmpty;
                if ( !v41 )
                {
                  if ( *(_DWORD *)(v32 + 24) <= 6u )
                    goto LABEL_59;
                  v43 = System_Int32__Parse(*(System_String_o **)(v32 + 80), 0);
                  goto LABEL_50;
                }
              }
LABEL_49:
              v43 = 0;
LABEL_50:
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v44 = System_Convert__ToBoolean_64598984(v40, 0);
              v45 = System_Convert__ToBoolean_64598984(v42, 0);
              v46 = System_Convert__ToBoolean_64598984(v43, 0);
              ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                               (EventInfoPointRiverProgressControl_o *)v46,
                               v34,
                               v35,
                               UserEventPoint,
                               v38,
                               v39,
                               v44,
                               v45,
                               v46,
                               v50);
              p_progressData->klass = (CGThumbnailListItem_c *)ProgressData;
              sub_1C32BC4(p_progressData, (int32_t)ProgressData, v48, v49);
              return;
            }
            v42 = 0;
          }
LABEL_48:
          v40 = 0;
          goto LABEL_49;
        }
        v42 = 0;
        v39 = 0;
LABEL_47:
        v38 = 0;
        goto LABEL_48;
      }
    }
    UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v34, v30);
    v42 = 0;
    v39 = 0;
    v35 = 0;
    goto LABEL_47;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_58;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < max_length )
    {
      v15 = eventUiValueEntityList->m_Items[v14];
      if ( !v15 )
        goto LABEL_58;
      if ( v15->fields.type == 2 )
      {
        v16 = System_Int32__Parse(v15->fields.value, 0);
        v18 = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v16, v17);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v19);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_58;
        v20 = IsNullOrEmpty;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v51,
          (System_Collections_Generic_List_object__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v21 = 0;
        v52 = v51;
        while ( 1 )
        {
          v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v52,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v22 )
            break;
          if ( !v52.fields._current )
            sub_1C32E7C(v22);
          klass = (int32_t)v52.fields._current[1].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_40225464 = CondType__IsQuestClear_40225464(klass, -1, 0, 0);
          if ( !IsQuestClear_40225464 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v21;
          if ( !baseQuestReleaseEntList )
            sub_1C32E7C(IsQuestClear_40225464);
          size = baseQuestReleaseEntList->fields._size;
          if ( v21 >= size )
            v21 = size - 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v52,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        IsNullOrEmpty = (int64_t)this->fields.baseQuestReleaseEntList;
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v21,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v27 = EventInfoPointRiverProgressControl__CreateProgressData(
                (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                v16,
                v21,
                v18,
                v18,
                *(_QWORD *)(IsNullOrEmpty + 32),
                v20 & (v18 >= *(_QWORD *)(IsNullOrEmpty + 32)),
                0,
                v20 & 1,
                v50);
        p_progressData->klass = (CGThumbnailListItem_c *)v27;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)v27, v28, v29);
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_59:
    sub_1C32E84(IsNullOrEmpty);
  }
}


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
  if ( (byte_4C38F10 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    byte_4C38F10 = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_1C32E7C(this);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_43529544(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v6, v8, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0);
  }
}


System_Collections_IEnumerator_o *EventInfoPointRiverProgressControl__PlayAnim_43529544(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C38F11 & 1) == 0 )
  {
    sub_1C32C20(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
    byte_4C38F11 = 1;
  }
  v5 = sub_1C32E6C(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void EventInfoPointRiverProgressControl__PlayMoveShip(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4C38F12 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__);
    sub_1C32C20(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
    byte_4C38F12 = 1;
  }
  v5 = sub_1C32E6C(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8),
        *(_QWORD *)(v5 + 24) = callback,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10),
        progressShip = this->fields.progressShip,
        v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v5,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0),
        !progressShip) )
  {
    sub_1C32E7C(v6);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v12, v13);
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
    sub_1C32E7C(this);
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
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v7; // x8
  System_String_o *v8; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v9; // x8
  System_String_o *v10; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x8
  System_String_o *v12; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v13; // x8
  _BOOL4 IsReleaseScenarioAnimEnd; // w22
  System_String_o *v15; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v16; // x8
  System_String_o *v17; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  System_String_o *v19; // x0
  EventInfoPointRiverProgressControl_c *v20; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  int32_t v25; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v26; // [xsp+10h] [xbp-50h] BYREF
  int64_t NextPoint; // [xsp+18h] [xbp-48h] BYREF
  int64_t OldTotalPoint; // [xsp+20h] [xbp-40h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t Id; // [xsp+38h] [xbp-28h] BYREF
  int32_t v31; // [xsp+3Ch] [xbp-24h] BYREF

  v31 = eventId;
  if ( (byte_4C38F1C & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C38F1C = 1;
  }
  ReleaseScenarioIndex = 0;
  NextPoint = 0;
  OldTotalPoint = 0;
  v26 = 0;
  v25 = 0;
  v4 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0);
  if ( !v4 )
    goto LABEL_16;
  System_Text_StringBuilder__Append_63603608(v4, appended, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(v4, (System_String_o *)StringLiteral_1457/*":"*/, 0);
  v7 = this->fields.progressData;
  if ( !v7 )
    goto LABEL_16;
  ReleaseScenarioIndex = v7->fields.ReleaseScenarioIndex;
  v8 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0);
  System_Text_StringBuilder__Append_63603608(v4, v8, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(v4, (System_String_o *)StringLiteral_1457/*":"*/, 0);
  v9 = this->fields.progressData;
  if ( !v9 )
    goto LABEL_16;
  OldTotalPoint = v9->fields.OldTotalPoint;
  v10 = System_Int64__ToString((int64_t)&OldTotalPoint, 0);
  System_Text_StringBuilder__Append_63603608(v4, v10, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(v4, (System_String_o *)StringLiteral_1457/*":"*/, 0);
  v11 = this->fields.progressData;
  if ( !v11 )
    goto LABEL_16;
  NextPoint = v11->fields.NextPoint;
  v12 = System_Int64__ToString((int64_t)&NextPoint, 0);
  System_Text_StringBuilder__Append_63603608(v4, v12, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(v4, (System_String_o *)StringLiteral_1457/*":"*/, 0);
  v13 = this->fields.progressData;
  if ( !v13 )
    goto LABEL_16;
  IsReleaseScenarioAnimEnd = v13->fields.IsReleaseScenarioAnimEnd;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  HIDWORD(v26) = System_Convert__ToInt32_64573804(IsReleaseScenarioAnimEnd, 0);
  v15 = System_Int32__ToString((int32_t)&v26 + 4, 0);
  System_Text_StringBuilder__Append_63603608(v4, v15, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(v4, (System_String_o *)StringLiteral_1457/*":"*/, 0);
  v16 = this->fields.progressData;
  if ( !v16
    || (LODWORD(v26) = System_Convert__ToInt32_64573804(v16->fields.IsOpenFirstRiver, 0),
        v17 = System_Int32__ToString((int32_t)&v26, 0),
        System_Text_StringBuilder__Append_63603608(v4, v17, 0),
        appended = (System_String_o *)System_Text_StringBuilder__Append_63603608(
                                        v4,
                                        (System_String_o *)StringLiteral_1457/*":"*/,
                                        0),
        (v18 = this->fields.progressData) == 0) )
  {
LABEL_16:
    sub_1C32E7C(appended);
  }
  v25 = System_Convert__ToInt32_64573804(v18->fields.IsFreeQuestClear, 0);
  v19 = System_Int32__ToString((int32_t)&v25, 0);
  System_Text_StringBuilder__Append_63603608(v4, v19, 0);
  v20 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v20 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v20->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v22 = System_Int32__ToString((int32_t)&v31, 0);
  v23 = System_String__Concat_63518544(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v22, 0);
  v24 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                             v4,
                             v4->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v23, v24, 0);
}


void EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1C32E7C(0);
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
  EventInfoPointRiverProgressControl_ProgressData_o *v9; // x1
  int v10; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x9
  int size; // w9
  struct EventInfoRiverProgressDrawComponent_array *v13; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v15; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v16; // x9
  struct EventInfoRiverProgressDrawComponent_array *v17; // x8
  __int64 v18; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v23; // x8

  v2 = this;
  if ( (byte_4C38F17 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4C38F17 = 1;
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
  v9 = v2->fields.progressData;
  if ( !v9 )
    goto LABEL_34;
  v10 = v9->fields.ReleaseScenarioIndex + 1;
  v9->fields.ReleaseScenarioIndex = v10;
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_34;
  size = baseQuestReleaseEntList->fields._size;
  if ( v10 >= size )
  {
    v10 = size - 1;
    v9->fields.ReleaseScenarioIndex = size - 1;
  }
  v13 = v2->fields.progressRiver;
  if ( !v13 )
    goto LABEL_34;
  if ( (unsigned int)v10 >= LODWORD(v13->max_length) )
    goto LABEL_35;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v13->m_Items[v10];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    v9,
    eventUiEntity->fields.eventId,
    v8);
  v16 = v2->fields.progressData;
  if ( !v16 )
    goto LABEL_34;
  v17 = v2->fields.progressRiver;
  if ( !v17 )
    goto LABEL_34;
  v18 = v16->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v18 >= LODWORD(v17->max_length) )
LABEL_35:
    sub_1C32E84(this);
  this = (EventInfoPointRiverProgressControl_o *)v17->m_Items[v18];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v15);
  v19 = v2->fields.progressData;
  if ( !v19 )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.baseQuestReleaseEntList;
  if ( !this )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v19->fields.ReleaseScenarioIndex,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
    goto LABEL_34;
  v19->fields.NextPoint = (int64_t)this->fields.datas;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_34;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v2->fields.progressData, v20);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v2, v21) )
    goto LABEL_32;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v22),
        (v23 = v2->fields.progressData) == 0) )
  {
LABEL_34:
    sub_1C32E7C(this);
  }
  v23->fields.IsReleaseScenarioAnimEnd = 1;
LABEL_32:
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.progressShip;
  if ( !this )
    goto LABEL_34;
  EventInfoShipProgressDrawComponent__ResetShip(
    (EventInfoShipProgressDrawComponent_o *)this,
    v2->fields.progressData,
    v22);
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

  if ( (byte_4C38F0E & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&StringLiteral_1375/*"2DUI"*/);
    byte_4C38F0E = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v6 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1375/*"2DUI"*/, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v6, 0);
    this->fields.eventUiValueEntityList = entities;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entities, v7, v8);
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
  const MethodInfo *v9; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x8
  const MethodInfo *v11; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x8
  EventInfoPointRiverProgressControl_ProgressData_o *v13; // x1
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v15; // x9
  struct EventUiEntity_o *v16; // x10
  const MethodInfo *v17; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoUserEventPointControl_o *v20; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x9
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v26; // x8
  const MethodInfo *v27; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v28; // x8
  const MethodInfo *v29; // x1
  TerminalPramsManager_c *v30; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v33; // x9
  struct EventInfoRiverProgressDrawComponent_array *v34; // x8
  __int64 v35; // x9
  const MethodInfo *v36; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v37; // x8
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x4
  struct EventUiEntity_o *v40; // x8
  const MethodInfo *v41; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v42; // x9
  struct EventInfoRiverProgressDrawComponent_array *v43; // x8
  __int64 v44; // x9
  const MethodInfo *v45; // x2
  TerminalPramsManager_c *v46; // x0
  struct EventUiEntity_o *v47; // x8
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4C38F0F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C38F0F = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_114;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3644C )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3644C = 1;
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
                                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    if ( !this )
      goto LABEL_114;
    progressData->fields.NextPoint = (int64_t)this->fields.datas;
    v10 = v3->fields.progressData;
    if ( !v10 )
      goto LABEL_114;
    v10->fields.OldTotalPoint = v10->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, v9);
    v12 = v3->fields.progressData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_114;
      v12->fields.IsFreeQuestClear = 1;
    }
    else if ( !v12 )
    {
      goto LABEL_114;
    }
    if ( v12->fields.OldTotalPoint >= v12->fields.NextPoint && v12->fields.IsFreeQuestClear )
      v12->fields.IsReleaseScenarioAnimEnd = 1;
    EventInfoPointRiverProgressControl__SaveAllData(v3, v11);
  }
  v13 = v3->fields.progressData;
  if ( !v13 )
    goto LABEL_114;
  progressRiver = v3->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_114;
  v15 = v13->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v15 >= LODWORD(progressRiver->max_length) )
    goto LABEL_115;
  v16 = v3->fields.eventUiEntity;
  if ( !v16 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[v15];
  if ( !this )
    goto LABEL_114;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    v13,
    v16->fields.eventId,
    v5);
  v18 = v3->fields.progressData;
  if ( !v18 )
    goto LABEL_114;
  totalPointLabel = v3->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_114;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v18->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, v17);
  v20 = v3->fields.totalPointLabel;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_114;
  }
  else
  {
    v21 = v3->fields.progressData;
    if ( !v21 || !v20 )
      goto LABEL_114;
    v20->fields._oldTotalPoint_k__BackingField = v21->fields.TotalPoint;
  }
  ((void (__fastcall *)(struct EventInfoUserEventPointControl_o *__return_ptr, struct EventInfoUserEventPointControl_o *, struct EventUiValueEntity_array *, const MethodInfo *))v20->klass->vtable._5_Setup.methodPtr)(
    v20,
    v20,
    v3->fields.eventUiValueEntityList,
    v20->klass->vtable._5_Setup.method);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v22) )
  {
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_114;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v23) )
    goto LABEL_118;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3644C )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3644C = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) )
    goto LABEL_118;
  v26 = v3->fields.progressData;
  if ( !v26 )
    goto LABEL_114;
  if ( v26->fields.IsOpenFirstRiver )
  {
LABEL_118:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, v24) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3644C )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C3644C = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) )
      {
        v28 = v3->fields.progressData;
        if ( !v28 )
          goto LABEL_114;
        v28->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v3, v27);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v27) )
      goto LABEL_69;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3644C )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C3644C = 1;
    }
    v30 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v30 = TerminalPramsManager_TypeInfo;
    }
    if ( !v30->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v29);
      v37 = v3->fields.progressData;
      if ( !v37 )
        goto LABEL_114;
      v37->fields.OldTotalPoint = v37->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v3, v36);
    }
    else
    {
LABEL_69:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v29) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
        if ( this )
        {
          EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v31);
          v33 = v3->fields.progressData;
          if ( v33 )
          {
            v34 = v3->fields.progressRiver;
            if ( v34 )
            {
              v35 = v33->fields.ReleaseScenarioIndex;
              if ( (unsigned int)v35 < LODWORD(v34->max_length) )
              {
                this = (EventInfoPointRiverProgressControl_o *)v34->m_Items[v35];
                if ( !this )
                  goto LABEL_114;
                EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v32);
                goto LABEL_88;
              }
LABEL_115:
              sub_1C32E84(this);
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
        v31);
      this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
      if ( this )
      {
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v38);
        v40 = v3->fields.eventUiEntity;
        if ( v40 )
        {
          this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
          if ( this )
          {
            EventInfoShipProgressDrawComponent__Setup(
              (EventInfoShipProgressDrawComponent_o *)this,
              v3,
              v40->fields.eventId,
              v3->fields.isChangeRiver,
              v39);
            v42 = v3->fields.progressData;
            if ( v42 )
            {
              v43 = v3->fields.progressRiver;
              if ( v43 )
              {
                v44 = v42->fields.ReleaseScenarioIndex;
                if ( (unsigned int)v44 >= LODWORD(v43->max_length) )
                  goto LABEL_115;
                this = (EventInfoPointRiverProgressControl_o *)v43->m_Items[v44];
                if ( this )
                {
                  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v41);
                  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
                  if ( this )
                  {
                    EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v45);
LABEL_88:
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4C34E00 )
                    {
                      sub_1C32C20(&TerminalPramsManager_TypeInfo);
                      byte_4C34E00 = 1;
                    }
                    v46 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v46 = TerminalPramsManager_TypeInfo;
                    }
                    v46->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
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
    sub_1C32E7C(this);
  }
  if ( !this[1].fields.playType )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4C34E00 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34E00 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) = 0;
  v47 = v3->fields.eventUiEntity;
  if ( !v47 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_114;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3,
    v47->fields.eventId,
    1,
    v25);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v48);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v49);
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
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
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
    v56.fields.x = x;
    v56.fields.y = y;
    v56.fields.z = z;
    EventInfoUISlideAnimation__SetAfterActionAndInPosition((EventInfoUISlideAnimation_o *)Component_object, 0, v56, 0);
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
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  System_Collections_IEnumerator_o *v24; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v29; // x19
  System_Action_o *v30; // x21
  const MethodInfo *v31; // x3
  bool v32; // w2
  EventInfoRiverProgressDrawComponent_o *v33; // x0
  System_Action_o *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  System_Collections_IEnumerator_o *v37; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v38; // x9
  struct EventInfoRiverProgressDrawComponent_array *v39; // x8
  __int64 v40; // x9
  Il2CppObject *v41; // x22
  EventInfoRiverProgressDrawComponent_o *v42; // x19
  System_Action_o *v43; // x21
  System_Collections_IEnumerator_o *v44; // x0
  const MethodInfo *v45; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v46; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v47; // x8
  const MethodInfo *v48; // x2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v49; // x8

  v2 = this;
  if ( (byte_4C38F23 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_1C32C20(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_1C32C20(&EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    byte_4C38F23 = 1;
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
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v19);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v21);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, v22);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
        if ( !this )
          goto LABEL_42;
        v24 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
                (EventInfoShipProgressDrawComponent_o *)this,
                1,
                0,
                v23);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_71209212(
                                                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                         v24,
                                                                         0);
        v25 = _4__this->fields.progressData;
        if ( !v25 )
          goto LABEL_42;
        progressRiver = _4__this->fields.progressRiver;
        if ( !progressRiver )
          goto LABEL_42;
        ReleaseScenarioIndex = v25->fields.ReleaseScenarioIndex;
        if ( (unsigned int)ReleaseScenarioIndex < LODWORD(progressRiver->max_length) )
        {
          _8__1 = (Il2CppObject *)v2->fields.__8__1;
          v29 = progressRiver->m_Items[ReleaseScenarioIndex];
          v30 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v30,
            _8__1,
            Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
            0);
          if ( !v29 )
            goto LABEL_42;
          v32 = 1;
          v33 = v29;
          v34 = v30;
LABEL_33:
          v44 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v33, v34, v32, v31);
          UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)_4__this, v44, 0);
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
      v49 = v2->fields.__8__1;
      if ( !v49 )
        goto LABEL_42;
      EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v49->fields.callback, v48);
      return 0;
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, v18) )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
      if ( !this )
        goto LABEL_42;
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0);
      v46 = _4__this->fields.progressData;
      if ( !v46 )
        goto LABEL_42;
      v46->fields.OldTotalPoint = v46->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(_4__this, v45);
      v47 = v2->fields.__8__1;
      if ( !v47 )
        goto LABEL_42;
      ActionExtensions__Call(v47->fields.callback, 0);
      return 0;
    }
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_42;
    EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, v35);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
    if ( !this )
      goto LABEL_42;
    v37 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
            (EventInfoShipProgressDrawComponent_o *)this,
            0,
            0,
            v36);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_71209212(
                                                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                     v37,
                                                                     0);
    v38 = _4__this->fields.progressData;
    if ( !v38 )
      goto LABEL_42;
    v39 = _4__this->fields.progressRiver;
    if ( !v39 )
      goto LABEL_42;
    v40 = v38->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v40 < LODWORD(v39->max_length) )
    {
      v41 = (Il2CppObject *)v2->fields.__8__1;
      v42 = v39->m_Items[v40];
      v43 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        v41,
        Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
        0);
      if ( !v42 )
        goto LABEL_42;
      v33 = v42;
      v34 = v43;
      v32 = 0;
      goto LABEL_33;
    }
LABEL_43:
    sub_1C32E84(this);
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C32E6C(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor(v4, 0);
    v2->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v4, v5, v6);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
    if ( this )
    {
      v9 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v9;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v7, v8);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
      if ( this )
      {
        callback = (Il2CppObject *)v2->fields.callback;
        this->fields.__2__current = callback;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)callback, v10, v11);
        v2->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C32BC4(p__2__current, 0, v14, v15);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
LABEL_42:
    sub_1C32E7C(this);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
    sub_1C32E7C(_4__this);
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

  if ( (byte_4C38F20 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__);
    byte_4C38F20 = 1;
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
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_71209212(v7, v8, 0);
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
    sub_1C32E84(_4__this);
  v14 = (EventInfoRiverProgressDrawComponent_o *)*((_QWORD *)&m_CancellationTokenSource->fields._state + name_high);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v16, v17);
  }
  if ( !v14 )
LABEL_16:
    sub_1C32E7C(_4__this);
  v18 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v14, _9__2, 1, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212(v10, v18, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_o *v4; // x8
  const MethodInfo *v5; // x1
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_c *klass; // x8

  v2 = this;
  if ( (byte_4C38F21 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C38F21 = 1;
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
        EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, v5),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C32E7C(this);
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
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct EventInfoPointRiverProgressControl_o *v20; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x9
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_c *klass; // x8
  struct EventInfoPointRiverProgressControl_o *v23; // x8

  v3 = this;
  if ( (byte_4C38F22 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&EventInfoPointRiverProgressControl_TypeInfo);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)sub_1C32C20(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__);
    byte_4C38F22 = 1;
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
        sub_1C32E84(this);
      v13 = progressRiver->m_Items[v12];
      _9__1 = v3->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0);
        v3->fields.__9__1 = _9__1;
        sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v15, v16);
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
  v20 = v3->fields.__4__this;
  if ( !v20 || (v21 = v20->fields.progressData) == 0 )
LABEL_33:
    sub_1C32E7C(this);
  if ( !v21->fields.IsFreeQuestClear )
  {
    v21->fields.IsFreeQuestClear = 1;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v20->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_33;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 1, v19);
  }
LABEL_29:
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_33;
  klass = this[4].klass;
  if ( !klass )
    goto LABEL_33;
  klass->_1.byval_arg.data = (void *)klass->_1.namespaze;
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, v18);
  v23 = v3->fields.__4__this;
  if ( !v23 )
    goto LABEL_33;
  v23->fields.isChangeRiver = 0;
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
    sub_1C32E7C(_4__this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}