void EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_59725DC & 1) == 0 )
  {
    sub_2213A60(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_2213A60(&StringLiteral_8804/*"LineProgressData_"*/);
    byte_59725DC = 1;
  }
  v7 = StringLiteral_8804/*"LineProgressData_"*/;
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_8804/*"LineProgressData_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void EventInfoPointRiverProgressControl___ctor(EventInfoPointRiverProgressControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59725DB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_59725DB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseQuestReleaseEntList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // [xsp+8h] [xbp-18h]

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
                   v18);
  this->fields.progressData = ProgressData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
    (int32_t)ProgressData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void EventInfoPointRiverProgressControl__ApplyProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_2213CDC(this, method);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void EventInfoPointRiverProgressControl__Awake(EventInfoPointRiverProgressControl_o *this, const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  Il2CppObject *Master_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  v2 = this;
  if ( (byte_59725C9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventPointMaster___);
    this = (EventInfoPointRiverProgressControl_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_59725C9 = 1;
  }
  if ( !v2->fields.progressRiver )
    sub_2213CDC(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.userEventPointMaster,
    (int32_t)Master_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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

  if ( (byte_59725DA & 1) == 0 )
  {
    sub_2213A60(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
    byte_59725DA = 1;
  }
  v17 = sub_2213CCC(EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    sub_2213CDC(v18, v19);
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
  __int64 v1; // x1
  int v2; // w8
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *v9; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *v16; // x20
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  int32_t v21; // w2
  EventInfoPointRiverProgressControl_c *v22; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v26; // x20
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-44h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v33; // [xsp+28h] [xbp-38h]

  if ( (byte_59725D7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_2213A60(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_59725D7 = 1;
  }
  v33 = 0;
  v2 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v32 = 0;
  entity = 0;
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_2213CDC(Master_object, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  v33 = Enumerator;
  if ( !Enumerator )
LABEL_32:
    sub_2213CDC(Enumerator, v8);
  v9 = Enumerator;
  while ( 1 )
  {
    klass = v9->klass;
    v11 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_13;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v13 = sub_224BC3C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v9,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v16 = v33;
    if ( !v33 )
      sub_2213CDC(v14, v15);
    v17 = v33->klass;
    v18 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_21:
      v20 = sub_224BC3C(v33, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v16,
                                                                  *(_QWORD *)(v20 + 8));
    if ( Enumerator )
    {
      v21 = (int32_t)Enumerator[1].klass;
      v32 = v21;
      if ( !v6 )
        sub_2213CDC(Enumerator, v8);
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    v6,
                                                                    &entity,
                                                                    v21,
                                                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !entity )
          sub_2213CDC(0, v8);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)EventDetailEntity__IsEventRiverProgress(
                                                                      (EventDetailEntity_o *)entity,
                                                                      0);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          v22 = EventInfoPointRiverProgressControl_TypeInfo;
          if ( !*(&EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v8);
            v22 = EventInfoPointRiverProgressControl_TypeInfo;
          }
          SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v22->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
          v24 = System_Int32__ToString((int32_t)&v32, 0);
          v25 = System_String__Concat_75651716(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v24, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v25, 0);
        }
      }
    }
    v9 = v33;
    if ( !v33 )
      goto LABEL_32;
  }
  v26 = v33;
  if ( v33 )
  {
    v27 = v33->klass;
    v28 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_38;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_38:
      v30 = sub_224BC3C(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t EventInfoPointRiverProgressControl__GetUserEventPoint(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_59725D6 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59725D6 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
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
  if ( (byte_59725D8 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_2213A60(&EventInfoPointRiverProgressControl_TypeInfo);
    byte_59725D8 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  eventId = 0;
  if ( !eventUiEntity )
    sub_2213CDC(this, method);
  v4 = EventInfoPointRiverProgressControl_TypeInfo;
  eventId = eventUiEntity->fields.eventId;
  if ( !*(&EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, method);
    v4 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v4->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v6 = System_Int32__ToString((int32_t)&eventId, 0);
  v7 = System_String__Concat_75651716(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0);
  return UnityEngine_PlayerPrefs__HasKey(v7, 0);
}


void EventInfoPointRiverProgressControl__Initialization(
        EventInfoPointRiverProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *totalPointLabel; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t size; // w23
  unsigned int v23; // w20
  System_Collections_Generic_List_object__o *v24; // x8
  Il2CppObject *syncRoot; // x24

  if ( (byte_59725CA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_59725CA = 1;
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
      (int32_t)entity,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    eventId = entity->fields.eventId;
    if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v12);
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_baseQuestReleaseEntList,
      (int32_t)QuestReleaseList,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_18;
    size = (*p_baseQuestReleaseEntList)->fields._size;
    if ( size - 1 >= 1 )
    {
      while ( 1 )
      {
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        if ( !*p_baseQuestReleaseEntList )
          break;
        v23 = size - 1;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         totalPointLabel,
                                                                         size - 1,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        v24 = totalPointLabel;
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        if ( !*p_baseQuestReleaseEntList )
          break;
        syncRoot = v24->fields._syncRoot;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         totalPointLabel,
                                                                         size - 2,
                                                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( syncRoot == totalPointLabel->fields._syncRoot )
        {
          totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
          if ( !*p_baseQuestReleaseEntList )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            totalPointLabel,
            v23,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        --size;
        if ( v23 <= 1 )
          return;
      }
LABEL_18:
      sub_2213CDC(totalPointLabel, entity);
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
  if ( (byte_59725D1 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_59725D1 = 1;
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
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
LABEL_13:
    sub_2213CDC(this, method);
  m_CachedPtr = this->fields.m_CachedPtr;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_47284152(m_CachedPtr, -1, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_59725D3 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_59725D3 = 1;
  }
  pointRiverProgressCommonNo = this->fields.pointRiverProgressCommonNo;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(212, pointRiverProgressCommonNo, 1, 0, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsEndScenarioQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t endScenarioQuestId; // w19

  if ( (byte_59725D2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_59725D2 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_47284152(endScenarioQuestId, -1, 0, 0);
}


bool EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_59725D0 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_59725D0 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_47284152(firstRiverReleaseQuestId, -1, 0, 0);
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
    sub_2213CDC(this, *(_QWORD *)&type);
  }
  v8 = v7->fields.TotalPoint >= v7->fields.NextPoint && !v7->fields.IsReleaseScenarioAnimEnd;
  return (v8
        | EventInfoPointRiverProgressControl__IsChangeRiver(v4, *(const MethodInfo **)&type)
        | (TotalPoint > OldTotalPoint)
        | (unsigned __int8)this & 1) != 0;
}


bool EventInfoPointRiverProgressControl__IsProgressShipAnim(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return progressData->fields.TotalPoint >= progressData->fields.NextPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


void EventInfoPointRiverProgressControl__LoadProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_progressData; // x19
  __int64 v10; // x1
  EventInfoPointRiverProgressControl_c *v11; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *String; // x21
  int64_t IsNullOrEmpty; // x0
  __int64 v17; // x1
  struct EventUiValueEntity_array *eventUiValueEntityList; // x26
  int max_length; // w8
  unsigned int v20; // w27
  EventUiValueEntity_o *v21; // x8
  int32_t v22; // w21
  const MethodInfo *v23; // x3
  int64_t v24; // x22
  const MethodInfo *v25; // x1
  char v26; // w23
  int32_t v27; // w24
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t klass; // w25
  _BOOL8 IsQuestClear_47284152; // x0
  __int64 v32; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  int64_t v35; // x5
  bool v36; // w6
  EventInfoPointRiverProgressControl_ProgressData_o *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  const MethodInfo *v44; // x3
  int v45; // w27
  int64_t v46; // x25
  int32_t v47; // w21
  int32_t v48; // w22
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  int64_t UserEventPoint; // x20
  int64_t v52; // x23
  int32_t v53; // w27
  int64_t v54; // x24
  int32_t v55; // w26
  int32_t v56; // w25
  bool v57; // w26
  bool v58; // w27
  _BOOL8 v59; // x0
  EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  bool v67; // zf
  const MethodInfo *v68; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_59725D5 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_2213A60(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59725D5 = 1;
  }
  *(_QWORD *)&v70.fields._index = 0;
  this->fields.progressData = 0;
  p_progressData = (MissionNaviTransitionBoardItem_o *)&this->fields.progressData;
  v70.fields._list = 0;
  v70.fields._current = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !*(&EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v10);
    v11 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v11->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v13 = System_Int32__ToString((int32_t)&eventIda, 0);
  v14 = System_String__Concat_75651716(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v13, 0);
  String = UnityEngine_PlayerPrefs__GetString(v14, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x3Au, 0, 0)) == 0 )
LABEL_60:
      sub_2213CDC(IsNullOrEmpty, v17);
    v45 = *(_DWORD *)(IsNullOrEmpty + 24);
    v46 = IsNullOrEmpty;
    if ( v45 < 1 )
    {
      v47 = 0;
    }
    else
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0);
      v47 = IsNullOrEmpty;
      if ( v45 != 1 )
      {
        if ( (*(_DWORD *)(v46 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_61;
        v48 = System_Int32__Parse(*(System_String_o **)(v46 + 40), 0);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v47, v49);
        UserEventPoint = IsNullOrEmpty;
        if ( (unsigned int)v45 >= 3 )
        {
          if ( *(_DWORD *)(v46 + 24) <= 2u )
            goto LABEL_61;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v46 + 48), 0);
          v52 = IsNullOrEmpty;
          if ( v45 == 3 )
          {
            v53 = 0;
            v54 = 0;
          }
          else
          {
            if ( (*(_DWORD *)(v46 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_61;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v46 + 56), 0);
            v54 = IsNullOrEmpty;
            if ( (unsigned int)v45 >= 5 )
            {
              if ( *(_DWORD *)(v46 + 24) <= 4u )
                goto LABEL_61;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v46 + 64), 0);
              v55 = IsNullOrEmpty;
              if ( v45 == 5 )
              {
                v53 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v46 + 24) <= 5u )
                  goto LABEL_61;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v46 + 72), 0);
                v67 = v45 == 6;
                v53 = IsNullOrEmpty;
                if ( !v67 )
                {
                  if ( *(_DWORD *)(v46 + 24) <= 6u )
                    goto LABEL_61;
                  v56 = System_Int32__Parse(*(System_String_o **)(v46 + 80), 0);
                  goto LABEL_46;
                }
              }
LABEL_45:
              v56 = 0;
LABEL_46:
              if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v50);
              v57 = System_Convert__ToBoolean_76679516(v55, 0);
              v58 = System_Convert__ToBoolean_76679516(v53, 0);
              v59 = System_Convert__ToBoolean_76679516(v56, 0);
              ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                               (EventInfoPointRiverProgressControl_o *)v59,
                               v47,
                               v48,
                               UserEventPoint,
                               v52,
                               v54,
                               v57,
                               v58,
                               v59,
                               v68);
              p_progressData->klass = (MissionNaviTransitionBoardItem_c *)ProgressData;
              sub_2213A04(p_progressData, (int32_t)ProgressData, v61, v62, v63, v64, v65, v66);
              return;
            }
            v53 = 0;
          }
LABEL_44:
          v55 = 0;
          goto LABEL_45;
        }
LABEL_43:
        v53 = 0;
        v54 = 0;
        v52 = 0;
        goto LABEL_44;
      }
    }
    UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v47, v44);
    v48 = 0;
    goto LABEL_43;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_60;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( v20 < max_length )
    {
      v21 = eventUiValueEntityList->m_Items[v20];
      if ( !v21 )
        goto LABEL_60;
      if ( v21->fields.type == 2 )
      {
        v22 = System_Int32__Parse(v21->fields.value, 0);
        v24 = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v22, v23);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v25);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_60;
        v26 = IsNullOrEmpty;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v69,
          (System_Collections_Generic_List_object__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v27 = 0;
        v70 = v69;
        v69.fields._list = 0;
        *(_QWORD *)&v69.fields._index = &v70;
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v70,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v28 )
            break;
          if ( !v70.fields._current )
            sub_2213CDC(v28, v29);
          klass = (int32_t)v70.fields._current[1].klass;
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
          IsQuestClear_47284152 = CondType__IsQuestClear_47284152(klass, -1, 0, 0);
          if ( !IsQuestClear_47284152 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v27;
          if ( !baseQuestReleaseEntList )
            sub_2213CDC(IsQuestClear_47284152, v32);
          size = baseQuestReleaseEntList->fields._size;
          if ( v27 >= size )
            v27 = size - 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v70,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        IsNullOrEmpty = (int64_t)this->fields.baseQuestReleaseEntList;
        if ( !IsNullOrEmpty )
          goto LABEL_60;
        IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v27,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_60;
        v35 = *(_QWORD *)(IsNullOrEmpty + 32);
        if ( v24 >= v35 )
          v36 = v26 & 1;
        else
          v36 = 0;
        v37 = EventInfoPointRiverProgressControl__CreateProgressData(
                (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                v22,
                v27,
                v24,
                v24,
                v35,
                v36,
                0,
                v26 & 1,
                v68);
        p_progressData->klass = (MissionNaviTransitionBoardItem_c *)v37;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
          (int32_t)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v20 >= max_length )
        return;
    }
LABEL_61:
    sub_2213CE4(IsNullOrEmpty);
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
  if ( (byte_59725CD & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    byte_59725CD = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_2213CDC(this, *(_QWORD *)&type);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_51494368(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v6, v8, 0);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0);
  }
}


System_Collections_IEnumerator_o *EventInfoPointRiverProgressControl__PlayAnim_51494368(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59725CE & 1) == 0 )
  {
    sub_2213A60(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
    byte_59725CE = 1;
  }
  v5 = sub_2213CCC(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x2

  if ( (byte_59725CF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__);
    sub_2213A60(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
    byte_59725CF = 1;
  }
  v5 = sub_2213CCC(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = callback,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19),
        progressShip = this->fields.progressShip,
        v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0),
        !progressShip) )
  {
    sub_2213CDC(v6, v7);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v21, v22);
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
    sub_2213CDC(this, method);
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
  __int64 v21; // x1
  EventInfoPointRiverProgressControl_c *v22; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  System_String_o *v26; // x0
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v28; // [xsp+10h] [xbp-50h] BYREF
  int64_t NextPoint; // [xsp+18h] [xbp-48h] BYREF
  int64_t OldTotalPoint; // [xsp+20h] [xbp-40h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t Id; // [xsp+38h] [xbp-28h] BYREF
  int32_t v33; // [xsp+3Ch] [xbp-24h] BYREF

  v33 = eventId;
  if ( (byte_59725D9 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_59725D9 = 1;
  }
  Id = 0;
  ReleaseScenarioIndex = 0;
  NextPoint = 0;
  OldTotalPoint = 0;
  v28 = 0;
  v27 = 0;
  v4 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0);
  if ( !v4 )
    goto LABEL_16;
  System_Text_StringBuilder__Append_75735064(v4, appended, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v8 = this->fields.progressData;
  if ( !v8 )
    goto LABEL_16;
  ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
  v9 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0);
  System_Text_StringBuilder__Append_75735064(v4, v9, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v10 = this->fields.progressData;
  if ( !v10 )
    goto LABEL_16;
  OldTotalPoint = v10->fields.OldTotalPoint;
  v11 = System_Int64__ToString((int64_t)&OldTotalPoint, 0);
  System_Text_StringBuilder__Append_75735064(v4, v11, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v12 = this->fields.progressData;
  if ( !v12 )
    goto LABEL_16;
  NextPoint = v12->fields.NextPoint;
  v13 = System_Int64__ToString((int64_t)&NextPoint, 0);
  System_Text_StringBuilder__Append_75735064(v4, v13, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v14 = this->fields.progressData;
  if ( !v14 )
    goto LABEL_16;
  IsReleaseScenarioAnimEnd = v14->fields.IsReleaseScenarioAnimEnd;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6);
  HIDWORD(v28) = System_Convert__ToInt32_76657380(IsReleaseScenarioAnimEnd, 0);
  v16 = System_Int32__ToString((int32_t)&v28 + 4, 0);
  System_Text_StringBuilder__Append_75735064(v4, v16, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v17 = this->fields.progressData;
  if ( !v17
    || (LODWORD(v28) = System_Convert__ToInt32_76657380(v17->fields.IsOpenFirstRiver, 0),
        v18 = System_Int32__ToString((int32_t)&v28, 0),
        System_Text_StringBuilder__Append_75735064(v4, v18, 0),
        appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(
                                        v4,
                                        (System_String_o *)StringLiteral_1533/*":"*/,
                                        0),
        (v19 = this->fields.progressData) == 0) )
  {
LABEL_16:
    sub_2213CDC(appended, v6);
  }
  v27 = System_Convert__ToInt32_76657380(v19->fields.IsFreeQuestClear, 0);
  v20 = System_Int32__ToString((int32_t)&v27, 0);
  System_Text_StringBuilder__Append_75735064(v4, v20, 0);
  v22 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !*(&EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v21);
    v22 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v22->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v24 = System_Int32__ToString((int32_t)&v33, 0);
  v25 = System_String__Concat_75651716(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v24, 0);
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                             v4,
                             v4->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v25, v26, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_2213CDC(0, isActive);
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
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x9
  int v10; // w8
  int size; // w9
  struct EventInfoRiverProgressDrawComponent_array *v12; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v14; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x9
  struct EventInfoRiverProgressDrawComponent_array *v16; // x8
  __int64 v17; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x20
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_EventInfoUIBase_Data__o *datas; // x8
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v23; // x8

  v2 = this;
  if ( (byte_59725D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_59725D4 = 1;
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
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  v10 = HIDWORD(method->invoker_method) + 1;
  HIDWORD(method->invoker_method) = v10;
  if ( !baseQuestReleaseEntList )
    goto LABEL_34;
  size = baseQuestReleaseEntList->fields._size;
  if ( v10 >= size )
  {
    v10 = size - 1;
    HIDWORD(method->invoker_method) = size - 1;
  }
  v12 = v2->fields.progressRiver;
  if ( !v12 )
    goto LABEL_34;
  if ( (unsigned int)v10 >= LODWORD(v12->max_length) )
    goto LABEL_35;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v12->m_Items[v10];
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
    sub_2213CE4(this);
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
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
    goto LABEL_34;
  datas = this->fields.datas;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  v18->fields.NextPoint = (int64_t)datas;
  if ( !this )
    goto LABEL_34;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v2->fields.progressData, v19);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v2, v21) )
    goto LABEL_32;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v22),
        (v23 = v2->fields.progressData) == 0) )
  {
LABEL_34:
    sub_2213CDC(this, method);
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
  __int64 v6; // x1
  int32_t v7; // w22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_59725CB & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&StringLiteral_1450/*"2DUI"*/);
    byte_59725CB = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v7 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1450/*"2DUI"*/, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
    NGUITools__SetLayer(gameObject, v7, 0);
    this->fields.eventUiValueEntityList = entities;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entities,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    EventInfoPointRiverProgressControl__SetupDisp(this, v14);
    if ( !EventInfoPointRiverProgressControl__HasSaveData(this, v15) )
      EventInfoPointRiverProgressControl__SaveAllData(this, v16);
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
  bool IsClearFreeQuest; // w8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8
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
  __int64 v30; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v31; // x8
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  struct EventUiEntity_o *v34; // x8
  const MethodInfo *v35; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v36; // x9
  struct EventInfoRiverProgressDrawComponent_array *v37; // x8
  __int64 v38; // x9
  const MethodInfo *v39; // x2
  TerminalPramsManager_c *v40; // x0
  struct EventUiEntity_o *v41; // x8
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12

  v3 = this;
  if ( (byte_59725CC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventInfoPointRiverProgressControl_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59725CC = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_114;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596F301 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F301 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 23) + 498LL) )
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
                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    if ( !this )
      goto LABEL_114;
    v9 = v3->fields.progressData;
    progressData->fields.NextPoint = (int64_t)this->fields.datas;
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
  IsClearFreeQuest = EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.totalPointLabel;
  if ( IsClearFreeQuest )
  {
    if ( !this )
      goto LABEL_114;
  }
  else
  {
    v17 = v3->fields.progressData;
    if ( !v17 || !this )
      goto LABEL_114;
    this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v17->fields.TotalPoint;
  }
  ((void (__fastcall *)(EventInfoPointRiverProgressControl_o *, struct EventUiValueEntity_array *, const MethodInfo *))this->klass->vtable._5_Setup.methodPtr)(
    this,
    v3->fields.eventUiValueEntityList,
    this->klass->vtable._5_Setup.method);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v18) )
  {
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_114;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v19) )
    goto LABEL_118;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596F301 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F301 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 23) + 498LL) )
    goto LABEL_118;
  v21 = v3->fields.progressData;
  if ( !v21 )
    goto LABEL_114;
  if ( v21->fields.IsOpenFirstRiver )
  {
LABEL_118:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, method) )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_596F301 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596F301 = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 23) + 498LL) )
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
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
    if ( !byte_596F301 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596F301 = 1;
    }
    v24 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v23);
      v24 = TerminalPramsManager_TypeInfo;
    }
    if ( !v24->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v23);
      v31 = v3->fields.progressData;
      if ( !v31 )
        goto LABEL_114;
      v31->fields.OldTotalPoint = v31->fields.TotalPoint;
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
              sub_2213CE4(this);
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
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v32);
        v34 = v3->fields.eventUiEntity;
        if ( v34 )
        {
          this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
          if ( this )
          {
            EventInfoShipProgressDrawComponent__Setup(
              (EventInfoShipProgressDrawComponent_o *)this,
              v3,
              v34->fields.eventId,
              v3->fields.isChangeRiver,
              v33);
            v36 = v3->fields.progressData;
            if ( v36 )
            {
              v37 = v3->fields.progressRiver;
              if ( v37 )
              {
                v38 = v36->fields.ReleaseScenarioIndex;
                if ( (unsigned int)v38 >= LODWORD(v37->max_length) )
                  goto LABEL_115;
                this = (EventInfoPointRiverProgressControl_o *)v37->m_Items[v38];
                if ( this )
                {
                  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v35);
                  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
                  if ( this )
                  {
                    EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v39);
LABEL_88:
                    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v30);
                    if ( !byte_596DB46 )
                    {
                      sub_2213A60(&TerminalPramsManager_TypeInfo);
                      byte_596DB46 = 1;
                    }
                    v40 = TerminalPramsManager_TypeInfo;
                    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v30);
                      v40 = TerminalPramsManager_TypeInfo;
                    }
                    v40->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
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
    sub_2213CDC(this, method);
  }
  if ( !*((_DWORD *)this + 57) )
    j_il2cpp_runtime_class_init_0(this, method);
  if ( !byte_596DB46 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596DB46 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  v41 = v3->fields.eventUiEntity;
  *(_BYTE *)(*((_QWORD *)this + 23) + 498LL) = 0;
  if ( !v41 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_114;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3,
    v41->fields.eventId,
    1,
    v20);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v42);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v43);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_114;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_114;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_114;
    EventInfoUISlideAnimation__SetAfterActionAndInPosition(
      (EventInfoUISlideAnimation_o *)Component_object,
      0,
      localPosition,
      0);
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
  int32_t _1__state; // w23
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  const MethodInfo *v5; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v15; // x21
  System_Action_o *v16; // x19
  const MethodInfo *v17; // x3
  EventInfoRiverProgressDrawComponent_o *v18; // x0
  System_Action_o *v19; // x1
  bool v20; // w2
  Il2CppObject *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct EventInfoPointRiverProgressControl_o *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *callback; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  System_Collections_IEnumerator_o *v51; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v52; // x9
  struct EventInfoRiverProgressDrawComponent_array *v53; // x8
  __int64 v54; // x9
  Il2CppObject *v55; // x22
  EventInfoRiverProgressDrawComponent_o *v56; // x21
  System_Action_o *v57; // x19
  System_Collections_IEnumerator_o *v58; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v59; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v60; // x8
  const MethodInfo *v61; // x2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v62; // x8

  v2 = this;
  if ( (byte_59725E0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_2213A60(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_2213A60(&EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    byte_59725E0 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
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
          EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v5);
          this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
          if ( !this )
            goto LABEL_42;
          EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v7);
          this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
          if ( !this )
            goto LABEL_42;
          EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, v8);
          this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
          if ( !this )
            goto LABEL_42;
          v10 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
                  (EventInfoShipProgressDrawComponent_o *)this,
                  1,
                  0,
                  v9);
          this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                                                           (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                           v10,
                                                                           0);
          v11 = _4__this->fields.progressData;
          if ( !v11 )
            goto LABEL_42;
          progressRiver = _4__this->fields.progressRiver;
          if ( !progressRiver )
            goto LABEL_42;
          ReleaseScenarioIndex = v11->fields.ReleaseScenarioIndex;
          if ( (unsigned int)ReleaseScenarioIndex < LODWORD(progressRiver->max_length) )
          {
            _8__1 = (Il2CppObject *)v2->fields.__8__1;
            v15 = progressRiver->m_Items[ReleaseScenarioIndex];
            v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v16,
              _8__1,
              Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0);
            if ( v15 )
            {
              v18 = v15;
              v19 = v16;
              v20 = 1;
LABEL_33:
              v58 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v18, v19, v20, v17);
              UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v58, 0);
              return _1__state == 0;
            }
            goto LABEL_42;
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
        if ( this )
        {
          EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0);
          v62 = v2->fields.__8__1;
          if ( v62 )
          {
            EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v62->fields.callback, v61);
            return _1__state == 0;
          }
        }
        goto LABEL_42;
      }
      if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, method) )
      {
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
        if ( this )
        {
          EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0);
          v59 = _4__this->fields.progressData;
          if ( v59 )
          {
            v59->fields.OldTotalPoint = v59->fields.TotalPoint;
            EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
            v60 = v2->fields.__8__1;
            if ( v60 )
            {
              ActionExtensions__Call(v60->fields.callback, 0);
              return _1__state == 0;
            }
          }
        }
        goto LABEL_42;
      }
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.maskPanel;
      if ( !this )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
      if ( !this )
        goto LABEL_42;
      EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, v49);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
      if ( !this )
        goto LABEL_42;
      v51 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
              (EventInfoShipProgressDrawComponent_o *)this,
              0,
              0,
              v50);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                       v51,
                                                                       0);
      v52 = _4__this->fields.progressData;
      if ( !v52 )
        goto LABEL_42;
      v53 = _4__this->fields.progressRiver;
      if ( !v53 )
        goto LABEL_42;
      v54 = v52->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v54 < LODWORD(v53->max_length) )
      {
        v55 = (Il2CppObject *)v2->fields.__8__1;
        v56 = v53->m_Items[v54];
        v57 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v57,
          v55,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
          0);
        if ( v56 )
        {
          v18 = v56;
          v19 = v57;
          v20 = 0;
          goto LABEL_33;
        }
LABEL_42:
        sub_2213CDC(this, method);
      }
LABEL_43:
      sub_2213CE4(this);
    }
  }
  else
  {
    v2->fields.__1__state = -1;
    v21 = (Il2CppObject *)sub_2213CCC(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor(v21, 0);
    v2->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, (int32_t)v21, v22, v23, v24, v25, v26, v27);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_42;
    v34 = v2->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v34, v28, v29, v30, v31, v32, v33);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_42;
    callback = (Il2CppObject *)v2->fields.callback;
    this->fields.__2__current = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)callback,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    v2->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_2213A04(p__2__current, 0, v43, v44, v45, v46, v47, v48);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
    sub_2213CDC(_4__this, method);
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
  System_Action_o *_9__2; // x23
  EventInfoRiverProgressDrawComponent_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_IEnumerator_o *v22; // x0

  if ( (byte_59725DD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__);
    byte_59725DD = 1;
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
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(v7, v8, 0);
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
    sub_2213CE4(_4__this);
  _9__2 = this->fields.__9__2;
  v15 = (EventInfoRiverProgressDrawComponent_o *)*((_QWORD *)&m_CancellationTokenSource->fields._state + name_high);
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v16, v17, v18, v19, v20, v21);
  }
  if ( !v15 )
LABEL_16:
    sub_2213CDC(_4__this, method);
  v22 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v15, _9__2, 1, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(v10, v22, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_o *v4; // x8
  __int64 v5; // x8

  v2 = this;
  if ( (byte_59725DE & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_59725DE = 1;
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
    || (v5 = *((_QWORD *)this + 20)) == 0
    || (*(_QWORD *)(v5 + 32) = *(_QWORD *)(v5 + 24),
        EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, method),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_2213CDC(this, method);
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
  struct EventInfoPointRiverProgressControl_ProgressData_o *v8; // x8
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_o *v10; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v13; // x9
  System_Action_o *_9__1; // x22
  EventInfoRiverProgressDrawComponent_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct EventInfoReleaseEventPointControl_o *releaseTermsObject; // x8
  const MethodInfo *v23; // x2
  bool IsClearFreeQuest; // w8
  __int64 v25; // x8
  __int64 v26; // x8
  struct EventInfoPointRiverProgressControl_o *v27; // x8

  v3 = this;
  if ( (byte_59725DF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&EventInfoPointRiverProgressControl_TypeInfo);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)sub_2213A60(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__);
    byte_59725DF = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  progressData = _4__this->fields.progressData;
  if ( !progressData )
    goto LABEL_35;
  if ( progressData->fields.TotalPoint >= progressData->fields.NextPoint
    && !progressData->fields.IsReleaseScenarioAnimEnd )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_35;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 0, v2);
    v7 = v3->fields.__4__this;
    if ( !v7 )
      goto LABEL_35;
    v8 = v7->fields.progressData;
    if ( !v8 )
      goto LABEL_35;
    ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( !*(&EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, method);
      this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)EventInfoPointRiverProgressControl_TypeInfo;
    }
    v10 = v3->fields.__4__this;
    if ( ReleaseScenarioIndex >= *(_DWORD *)(*((_QWORD *)this + 23) + 8LL) )
    {
      if ( !v10 )
        goto LABEL_35;
      releaseTermsObject = v10->fields.releaseTermsObject;
      if ( !releaseTermsObject )
        goto LABEL_35;
      EventInfoReleaseEventPointControl__PlaySe(
        (EventInfoReleaseEventPointControl_o *)this,
        releaseTermsObject->fields.releaseScenarioCheckSE,
        v6);
    }
    else
    {
      if ( !v10 )
        goto LABEL_35;
      v11 = v10->fields.progressData;
      if ( !v11 )
        goto LABEL_35;
      progressRiver = v10->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_35;
      v13 = v11->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v13 >= LODWORD(progressRiver->max_length) )
        sub_2213CE4(this);
      _9__1 = v3->fields.__9__1;
      v15 = progressRiver->m_Items[v13];
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0);
        v3->fields.__9__1 = _9__1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1,
          (int32_t)_9__1,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      if ( !v15 )
        goto LABEL_35;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v15, _9__1, v6);
    }
  }
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_35;
  IsClearFreeQuest = EventInfoPointRiverProgressControl__IsClearFreeQuest(
                       (EventInfoPointRiverProgressControl_o *)this,
                       method);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v3->fields.__4__this;
  if ( !IsClearFreeQuest )
    goto LABEL_31;
  if ( !this || (v25 = *((_QWORD *)this + 20)) == 0 )
LABEL_35:
    sub_2213CDC(this, method);
  if ( *(_BYTE *)(v25 + 50) )
    goto LABEL_32;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)*((_QWORD *)this + 13);
  *(_BYTE *)(v25 + 50) = 1;
  if ( !this )
    goto LABEL_35;
  EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 1, v23);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v3->fields.__4__this;
LABEL_31:
  if ( !this )
    goto LABEL_35;
LABEL_32:
  v26 = *((_QWORD *)this + 20);
  if ( !v26 )
    goto LABEL_35;
  *(_QWORD *)(v26 + 32) = *(_QWORD *)(v26 + 24);
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, method);
  v27 = v3->fields.__4__this;
  if ( !v27 )
    goto LABEL_35;
  v27->fields.isChangeRiver = 0;
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
    sub_2213CDC(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}