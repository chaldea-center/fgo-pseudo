void __fastcall EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDDB94 & 1) == 0 )
  {
    sub_1C21E38(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C21E38(&StringLiteral_8593/*"LineProgressData_"*/);
    byte_4BDDB94 = 1;
  }
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_8593/*"LineProgressData_"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields,
    StringLiteral_8593/*"LineProgressData_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void __fastcall EventInfoPointRiverProgressControl___ctor(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDDB93 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4BDDB93 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseQuestReleaseEntList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__AddProgressData(
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.progressData,
    (int64_t)ProgressData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall EventInfoPointRiverProgressControl__ApplyProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C22094(this, method);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void __fastcall EventInfoPointRiverProgressControl__Awake(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  int v4; // w10
  Il2CppObject *Master_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v2 = this;
  if ( (byte_4BDDB81 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventPointMaster___);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDDB81 = 1;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    sub_1C22094(this, method);
  v4 = -1;
  do
    ++v4;
  while ( v4 < (signed int)progressRiver->max_length );
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.userEventPointMaster,
    (int64_t)Master_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


EventInfoPointRiverProgressControl_ProgressData_o *__fastcall EventInfoPointRiverProgressControl__CreateProgressData(
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

  if ( (byte_4BDDB92 & 1) == 0 )
  {
    sub_1C21E38(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
    byte_4BDDB92 = 1;
  }
  v17 = sub_1C22084(EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1C22094(v18, v19);
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


void __fastcall EventInfoPointRiverProgressControl__DeleteContinueData(const MethodInfo *method)
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
  __int64 p_method; // x0
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

  if ( (byte_4BDDB8F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C21E38(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BDDB8F = 1;
  }
  v28 = 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C22094(Master_object, v2);
  }
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_19:
      v14 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 + 16);
      v28 = v17;
      if ( !v4 )
        sub_1C22094(v15, v16);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v4,
             &entity,
             v17,
             (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C22094(0LL, v18);
        if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
        {
          v19 = EventInfoPointRiverProgressControl_TypeInfo;
          if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
            v19 = EventInfoPointRiverProgressControl_TypeInfo;
          }
          SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v19->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
          v21 = System_Int32__ToString((int32_t)&v28, 0LL);
          v22 = System_String__Concat_63115476(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v21, 0LL);
          UnityEngine_PlayerPrefs__DeleteKey(v22, 0LL);
        }
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_33:
    v26 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


int64_t __fastcall EventInfoPointRiverProgressControl__GetUserEventPoint(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4BDDB8E & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDDB8E = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__HasSaveData(
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
  if ( (byte_4BDDB90 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1C21E38(&EventInfoPointRiverProgressControl_TypeInfo);
    byte_4BDDB90 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C22094(this, method);
  v4 = EventInfoPointRiverProgressControl_TypeInfo;
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v4 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v4->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_63115476(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v7, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__Initialization(
        EventInfoPointRiverProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *totalPointLabel; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int32_t size; // w8
  int32_t v22; // w20
  int32_t v23; // w21
  Il2CppObject *syncRoot; // x24

  if ( (byte_4BDDB82 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4BDDB82 = 1;
  }
  if ( entity )
  {
    totalPointLabel = (System_Collections_Generic_List_object__o *)this->fields.totalPointLabel;
    if ( !totalPointLabel )
      goto LABEL_18;
    ((void (__fastcall *)(System_Collections_Generic_List_object__o *, EventUiEntity_o *, Il2CppMethodPointer))totalPointLabel->klass->vtable._4_unknown.method)(
      totalPointLabel,
      entity,
      totalPointLabel->klass->vtable._5_set_Item.methodPtr);
    this->fields.eventUiEntity = entity;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventUiEntity, (int64_t)entity, v6, v7, v8, v9, v10, v11);
    eventId = entity->fields.eventId;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0LL);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)p_baseQuestReleaseEntList,
      (int64_t)QuestReleaseList,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_18;
    size = totalPointLabel->fields._size;
    if ( size - 1 >= 1 )
    {
      v22 = size - 2;
      do
      {
        v23 = v22 + 1;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         totalPointLabel,
                                                                         v22 + 1,
                                                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( !*p_baseQuestReleaseEntList )
          break;
        syncRoot = totalPointLabel->fields._syncRoot;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList,
                                                                         v22,
                                                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
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
            (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        if ( v23 < 2 )
          return;
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        --v22;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_18:
      sub_1C22094(totalPointLabel, entity);
    }
  }
}


bool __fastcall EventInfoPointRiverProgressControl__IsChangeRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CachedPtr; // w19

  v2 = this;
  if ( (byte_4BDDB89 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4BDDB89 = 1;
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
                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
LABEL_13:
    sub_1C22094(this, method);
  m_CachedPtr = this->fields.m_CachedPtr;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(m_CachedPtr, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_4BDDB8B & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDDB8B = 1;
  }
  pointRiverProgressCommonNo = this->fields.pointRiverProgressCommonNo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(212, pointRiverProgressCommonNo, 1LL, 0, 0LL, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsEndScenarioQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t endScenarioQuestId; // w19

  if ( (byte_4BDDB8A & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDDB8A = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(endScenarioQuestId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_4BDDB88 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDDB88 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(firstRiverReleaseQuestId, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoPointRiverProgressControl__IsPlayAnim(
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
        (v7 = v4->fields.progressData) == 0LL) )
  {
    sub_1C22094(this, *(_QWORD *)&type);
  }
  v8 = v7->fields.TotalPoint >= v7->fields.NextPoint && !v7->fields.IsReleaseScenarioAnimEnd;
  return (v8 | (TotalPoint > OldTotalPoint) | (unsigned __int8)this & 1 | EventInfoPointRiverProgressControl__IsChangeRiver(
                                                                            v4,
                                                                            *(const MethodInfo **)&type)) != 0;
}


bool __fastcall EventInfoPointRiverProgressControl__IsProgressShipAnim(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C22094(this, method);
  return progressData->fields.TotalPoint > progressData->fields.OldTotalPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


bool __fastcall EventInfoPointRiverProgressControl__IsScenarioReleaseAnim(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1C22094(this, method);
  return progressData->fields.TotalPoint >= progressData->fields.NextPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


void __fastcall EventInfoPointRiverProgressControl__LoadProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_progressData; // x19
  EventInfoPointRiverProgressControl_c *v10; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *String; // x21
  int64_t IsNullOrEmpty; // x0
  __int64 v16; // x1
  struct EventUiValueEntity_array *eventUiValueEntityList; // x27
  int max_length; // w8
  unsigned int v19; // w29
  EventUiValueEntity_o *v20; // x8
  int32_t v21; // w21
  const MethodInfo *v22; // x3
  int64_t v23; // x22
  const MethodInfo *v24; // x1
  char v25; // w23
  int32_t v26; // w24
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t klass; // w25
  _BOOL8 IsQuestClear_38834244; // x0
  __int64 v31; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  EventInfoPointRiverProgressControl_ProgressData_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x3
  int v42; // w8
  int64_t v43; // x25
  int v44; // w26
  int32_t v45; // w21
  int32_t v46; // w22
  const MethodInfo *v47; // x3
  int64_t UserEventPoint; // x20
  int64_t v49; // x23
  int64_t v50; // x24
  int32_t v51; // w27
  bool v52; // cc
  int32_t v53; // w26
  int32_t v54; // w25
  bool v55; // w27
  bool v56; // w26
  _BOOL8 v57; // x0
  EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4BDDB8D & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_1C21E38(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDB8D = 1;
  }
  memset(&v67, 0, sizeof(v67));
  this->fields.progressData = 0LL;
  p_progressData = (PartyOrganizationUtility_o *)&this->fields.progressData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.progressData, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  v10 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v10 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v10->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v12 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v13 = System_String__Concat_63115476(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v12, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x3Au, 0, 0LL)) == 0 )
LABEL_58:
      sub_1C22094(IsNullOrEmpty, v16);
    v42 = *(_DWORD *)(IsNullOrEmpty + 24);
    v43 = IsNullOrEmpty;
    if ( v42 < 1 )
    {
      v45 = 0;
    }
    else
    {
      v44 = v42 & ~(v42 >> 31);
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
      v45 = IsNullOrEmpty;
      if ( v44 >= 2 )
      {
        if ( *(_DWORD *)(v43 + 24) <= 1u )
          goto LABEL_59;
        v46 = System_Int32__Parse(*(System_String_o **)(v43 + 40), 0LL);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v45, v47);
        UserEventPoint = IsNullOrEmpty;
        if ( v44 >= 3 )
        {
          if ( *(_DWORD *)(v43 + 24) <= 2u )
            goto LABEL_59;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v43 + 48), 0LL);
          v49 = IsNullOrEmpty;
          if ( v44 < 4 )
          {
            v53 = 0;
            v50 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v43 + 24) <= 3u )
              goto LABEL_59;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v43 + 56), 0LL);
            v50 = IsNullOrEmpty;
            if ( v44 >= 5 )
            {
              if ( *(_DWORD *)(v43 + 24) <= 4u )
                goto LABEL_59;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v43 + 64), 0LL);
              v51 = IsNullOrEmpty;
              if ( v44 < 6 )
              {
                v53 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v43 + 24) <= 5u )
                  goto LABEL_59;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v43 + 72), 0LL);
                v52 = v44 < 7;
                v53 = IsNullOrEmpty;
                if ( !v52 )
                {
                  if ( *(_DWORD *)(v43 + 24) <= 6u )
                    goto LABEL_59;
                  v54 = System_Int32__Parse(*(System_String_o **)(v43 + 80), 0LL);
                  goto LABEL_50;
                }
              }
LABEL_49:
              v54 = 0;
LABEL_50:
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v55 = System_Convert__ToBoolean_63764036(v51, 0LL);
              v56 = System_Convert__ToBoolean_63764036(v53, 0LL);
              v57 = System_Convert__ToBoolean_63764036(v54, 0LL);
              ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                               (EventInfoPointRiverProgressControl_o *)v57,
                               v45,
                               v46,
                               UserEventPoint,
                               v49,
                               v50,
                               v55,
                               v56,
                               v57,
                               v65);
              p_progressData->klass = (PartyOrganizationUtility_c *)ProgressData;
              sub_1C21DDC(p_progressData, (int64_t)ProgressData, v59, v60, v61, v62, v63, v64);
              return;
            }
            v53 = 0;
          }
LABEL_48:
          v51 = 0;
          goto LABEL_49;
        }
        v53 = 0;
        v50 = 0LL;
LABEL_47:
        v49 = 0LL;
        goto LABEL_48;
      }
    }
    UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v45, v41);
    v53 = 0;
    v50 = 0LL;
    v46 = 0;
    goto LABEL_47;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_58;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( v19 < max_length )
    {
      v20 = eventUiValueEntityList->m_Items[v19];
      if ( !v20 )
        goto LABEL_58;
      if ( v20->fields.type == 2 )
      {
        v21 = System_Int32__Parse(v20->fields.value, 0LL);
        v23 = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v21, v22);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v24);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_58;
        v25 = IsNullOrEmpty;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v66,
          (System_Collections_Generic_List_object__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v26 = 0;
        v67 = v66;
        while ( 1 )
        {
          v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v67,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v27 )
            break;
          if ( !v67.fields._current )
            sub_1C22094(v27, v28);
          klass = (int32_t)v67.fields._current[1].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_38834244 = CondType__IsQuestClear_38834244(klass, -1, 0, 0LL);
          if ( !IsQuestClear_38834244 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v26;
          if ( !baseQuestReleaseEntList )
            sub_1C22094(IsQuestClear_38834244, v31);
          size = baseQuestReleaseEntList->fields._size;
          if ( v26 >= size )
            v26 = size - 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v67,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        IsNullOrEmpty = (int64_t)this->fields.baseQuestReleaseEntList;
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v26,
                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v34 = EventInfoPointRiverProgressControl__CreateProgressData(
                (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                v21,
                v26,
                v23,
                v23,
                *(_QWORD *)(IsNullOrEmpty + 32),
                v25 & (v23 >= *(_QWORD *)(IsNullOrEmpty + 32)),
                0,
                v25 & 1,
                v65);
        p_progressData->klass = (PartyOrganizationUtility_c *)v34;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.progressData,
          (int64_t)v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
LABEL_59:
    sub_1C2209C(IsNullOrEmpty, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointRiverProgressControl__PlayAnim(
        EventInfoPointRiverProgressControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v6; // x20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  System_Collections_IEnumerator_o *v8; // x1

  v6 = this;
  if ( (byte_4BDDB85 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    byte_4BDDB85 = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_1C22094(this, *(_QWORD *)&type);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_42191380(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v6, v8, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoPointRiverProgressControl__PlayAnim_42191380(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDDB86 & 1) == 0 )
  {
    sub_1C21E38(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
    byte_4BDDB86 = 1;
  }
  v5 = sub_1C22084(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventInfoPointRiverProgressControl__PlayMoveShip(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x2

  if ( (byte_4BDDB87 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__);
    sub_1C21E38(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
    byte_4BDDB87 = 1;
  }
  v5 = sub_1C22084(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = callback,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v14, v15, v16, v17, v18, v19),
        progressShip = this->fields.progressShip,
        v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0LL),
        !progressShip) )
  {
    sub_1C22094(v6, v7);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v21, v22);
}


void __fastcall EventInfoPointRiverProgressControl__Redisplay(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  if ( this->fields.eventUiEntity )
    EventInfoPointRiverProgressControl__SetupDisp(this, method);
}


void __fastcall EventInfoPointRiverProgressControl__SaveAllData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C22094(this, method);
  EventInfoPointRiverProgressControl__SaveProgressData(this, eventUiEntity->fields.eventId, v2);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SaveProgressData(
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
  if ( (byte_4BDDB91 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDDB91 = 1;
  }
  ReleaseScenarioIndex = 0;
  NextPoint = 0LL;
  OldTotalPoint = 0LL;
  v27 = 0LL;
  v26 = 0;
  v4 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v4 )
    goto LABEL_16;
  System_Text_StringBuilder__Append_62276628(v4, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62276628(
                                  v4,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v8 = this->fields.progressData;
  if ( !v8 )
    goto LABEL_16;
  ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
  v9 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0LL);
  System_Text_StringBuilder__Append_62276628(v4, v9, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62276628(
                                  v4,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v10 = this->fields.progressData;
  if ( !v10 )
    goto LABEL_16;
  OldTotalPoint = v10->fields.OldTotalPoint;
  v11 = System_Int64__ToString((int64_t)&OldTotalPoint, 0LL);
  System_Text_StringBuilder__Append_62276628(v4, v11, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62276628(
                                  v4,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v12 = this->fields.progressData;
  if ( !v12 )
    goto LABEL_16;
  NextPoint = v12->fields.NextPoint;
  v13 = System_Int64__ToString((int64_t)&NextPoint, 0LL);
  System_Text_StringBuilder__Append_62276628(v4, v13, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62276628(
                                  v4,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v14 = this->fields.progressData;
  if ( !v14 )
    goto LABEL_16;
  IsReleaseScenarioAnimEnd = v14->fields.IsReleaseScenarioAnimEnd;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  HIDWORD(v27) = System_Convert__ToInt32_63738140(IsReleaseScenarioAnimEnd, 0LL);
  v16 = System_Int32__ToString((int32_t)&v27 + 4, 0LL);
  System_Text_StringBuilder__Append_62276628(v4, v16, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62276628(
                                  v4,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v17 = this->fields.progressData;
  if ( !v17
    || (LODWORD(v27) = System_Convert__ToInt32_63738140(v17->fields.IsOpenFirstRiver, 0LL),
        v18 = System_Int32__ToString((int32_t)&v27, 0LL),
        System_Text_StringBuilder__Append_62276628(v4, v18, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_62276628(
                                        v4,
                                        (System_String_o *)StringLiteral_1546/*":"*/,
                                        0LL),
        (v19 = this->fields.progressData) == 0LL) )
  {
LABEL_16:
    sub_1C22094(appended, v6);
  }
  v26 = System_Convert__ToInt32_63738140(v19->fields.IsFreeQuestClear, 0LL);
  v20 = System_Int32__ToString((int32_t)&v26, 0LL);
  System_Text_StringBuilder__Append_62276628(v4, v20, 0LL);
  v21 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v21 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v21->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v23 = System_Int32__ToString((int32_t)&v32, 0LL);
  v24 = System_String__Concat_63115476(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v23, 0LL);
  v25 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v4->klass->vtable._3_ToString.method)(
                             v4,
                             v4->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v24, v25, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1C22094(0LL, isActive);
  UnityEngine_GameObject__SetActive(maskPanel, isActive, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetNextRiverProgressData(
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
  if ( (byte_4BDDB8C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4BDDB8C = 1;
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
  if ( (unsigned int)ReleaseScenarioIndex >= progressRiver->max_length )
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
  if ( v9 >= v12->max_length )
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
  if ( (unsigned int)v17 >= v16->max_length )
LABEL_35:
    sub_1C2209C(this, method);
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
                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
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
        (v22 = v2->fields.progressData) == 0LL) )
  {
LABEL_34:
    sub_1C22094(this, method);
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


void __fastcall EventInfoPointRiverProgressControl__SetTexture(
        EventInfoPointRiverProgressControl_o *this,
        UITexture_o *texture,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetUITexture((EventInfoUIBase_o *)this, texture, spriteName, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__Setup(
        EventInfoPointRiverProgressControl_o *this,
        EventUiValueEntity_array *entities,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v6; // w22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4BDDB83 & 1) == 0 )
  {
    sub_1C21E38(&NGUITools_TypeInfo);
    sub_1C21E38(&StringLiteral_1470/*"2DUI"*/);
    byte_4BDDB83 = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v6 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1470/*"2DUI"*/, 0LL);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v6, 0LL);
    this->fields.eventUiValueEntityList = entities;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntityList,
      (int64_t)entities,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    EventInfoPointRiverProgressControl__SetupDisp(this, v13);
    if ( !EventInfoPointRiverProgressControl__HasSaveData(this, v14) )
      EventInfoPointRiverProgressControl__SaveAllData(this, v15);
  }
}


void __fastcall EventInfoPointRiverProgressControl__SetupDisp(
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
  if ( (byte_4BDDB84 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventInfoPointRiverProgressControl_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDDB84 = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_114;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDB0EF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDB0EF = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(this[1].klass->vtable._10_Redisplay.method) )
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
                                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
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
  if ( (unsigned int)invoker_method_high >= progressRiver->max_length )
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
  ((void (__fastcall *)(struct EventInfoUserEventPointControl_o *, struct EventUiValueEntity_array *, Il2CppMethodPointer))v16->klass->vtable._5_Setup.method)(
    v16,
    v3->fields.eventUiValueEntityList,
    v16->klass->vtable._6_SetValue.methodPtr);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v18) )
  {
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_114;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v19) )
    goto LABEL_118;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BDB0EF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDB0EF = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(this[1].klass->vtable._10_Redisplay.method) )
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
      if ( !byte_4BDB0EF )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BDB0EF = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !BYTE2(this[1].klass->vtable._10_Redisplay.method) )
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
    if ( !byte_4BDB0EF )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BDB0EF = 1;
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
              if ( (unsigned int)v29 < v28->max_length )
              {
                this = (EventInfoPointRiverProgressControl_o *)v28->m_Items[v29];
                if ( !this )
                  goto LABEL_114;
                EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v26);
                goto LABEL_88;
              }
LABEL_115:
              sub_1C2209C(this, method);
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
                if ( (unsigned int)v37 >= v36->max_length )
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
                    if ( !byte_4BD9AEF )
                    {
                      sub_1C21E38(&TerminalPramsManager_TypeInfo);
                      byte_4BD9AEF = 1;
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
    sub_1C22094(this, method);
  }
  if ( !this[1].fields.playType )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4BD9AEF )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AEF = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[1].klass->vtable._10_Redisplay.method) = 0;
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
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v3,
                                                   0LL);
  if ( !this )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_114;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v3,
                                                   0LL);
  if ( !this )
    goto LABEL_114;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_114;
    v49.fields.x = x;
    v49.fields.y = y;
    v49.fields.z = z;
    EventInfoUISlideAnimation__SetAfterActionAndInPosition(
      (EventInfoUISlideAnimation_o *)Component_object,
      0LL,
      v49,
      0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, *(UnityEngine_Vector3_o *)&Component_object[3].monitor, 0LL);
  }
}


EventInfoPointRiverProgressControl_ProgressData_o *__fastcall EventInfoPointRiverProgressControl__get_GetProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  return this->fields.progressData;
}


void __fastcall EventInfoPointRiverProgressControl_ProgressData___ctor(
        EventInfoPointRiverProgressControl_ProgressData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__PlayAnim_d__26___ctor(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoPointRiverProgressControl__PlayAnim_d__26__MoveNext(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl__PlayAnim_d__26_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *callback; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  const MethodInfo *v34; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  System_Collections_IEnumerator_o *v39; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v40; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v44; // x19
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x3
  bool v47; // w2
  EventInfoRiverProgressDrawComponent_o *v48; // x0
  System_Action_o *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x3
  System_Collections_IEnumerator_o *v52; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v53; // x9
  struct EventInfoRiverProgressDrawComponent_array *v54; // x8
  __int64 v55; // x9
  Il2CppObject *v56; // x22
  EventInfoRiverProgressDrawComponent_o *v57; // x19
  System_Action_o *v58; // x21
  System_Collections_IEnumerator_o *v59; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v60; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v61; // x8
  const MethodInfo *v62; // x2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v63; // x8

  v2 = this;
  if ( (byte_4BDDB98 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_1C21E38(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_1C21E38(&EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    byte_4BDDB98 = 1;
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
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v34);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v36);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, v37);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
        if ( !this )
          goto LABEL_42;
        v39 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
                (EventInfoShipProgressDrawComponent_o *)this,
                1,
                0,
                v38);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                         v39,
                                                                         0LL);
        v40 = _4__this->fields.progressData;
        if ( !v40 )
          goto LABEL_42;
        progressRiver = _4__this->fields.progressRiver;
        if ( !progressRiver )
          goto LABEL_42;
        ReleaseScenarioIndex = v40->fields.ReleaseScenarioIndex;
        if ( (unsigned int)ReleaseScenarioIndex < progressRiver->max_length )
        {
          _8__1 = (Il2CppObject *)v2->fields.__8__1;
          v44 = progressRiver->m_Items[ReleaseScenarioIndex];
          v45 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v45,
            _8__1,
            Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
            0LL);
          if ( !v44 )
            goto LABEL_42;
          v47 = 1;
          v48 = v44;
          v49 = v45;
LABEL_33:
          v59 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v48, v49, v47, v46);
          UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v59, 0LL);
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
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
      v63 = v2->fields.__8__1;
      if ( !v63 )
        goto LABEL_42;
      EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v63->fields.callback, v62);
      return 0;
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, method) )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
      if ( !this )
        goto LABEL_42;
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
      v60 = _4__this->fields.progressData;
      if ( !v60 )
        goto LABEL_42;
      v60->fields.OldTotalPoint = v60->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
      v61 = v2->fields.__8__1;
      if ( !v61 )
        goto LABEL_42;
      ActionExtensions__Call(v61->fields.callback, 0LL);
      return 0;
    }
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_42;
    EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, v50);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
    if ( !this )
      goto LABEL_42;
    v52 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
            (EventInfoShipProgressDrawComponent_o *)this,
            0,
            0,
            v51);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                     v52,
                                                                     0LL);
    v53 = _4__this->fields.progressData;
    if ( !v53 )
      goto LABEL_42;
    v54 = _4__this->fields.progressRiver;
    if ( !v54 )
      goto LABEL_42;
    v55 = v53->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v55 < v54->max_length )
    {
      v56 = (Il2CppObject *)v2->fields.__8__1;
      v57 = v54->m_Items[v55];
      v58 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v58,
        v56,
        Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
        0LL);
      if ( !v57 )
        goto LABEL_42;
      v48 = v57;
      v49 = v58;
      v47 = 0;
      goto LABEL_33;
    }
LABEL_43:
    sub_1C2209C(this, method);
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C22084(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor(v4, 0LL);
    v2->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
    if ( this )
    {
      v17 = (int64_t)v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v17;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v17, v11, v12, v13, v14, v15, v16);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
      if ( this )
      {
        callback = (Il2CppObject *)v2->fields.callback;
        this->fields.__2__current = callback;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.__2__current,
          (int64_t)callback,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        v2->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
    }
LABEL_42:
    sub_1C22094(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall EventInfoPointRiverProgressControl__PlayAnim_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoPointRiverProgressControl__PlayAnim_d__26__System_Collections_IEnumerator_Reset(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall EventInfoPointRiverProgressControl__PlayAnim_d__26__System_Collections_IEnumerator_get_Current(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoPointRiverProgressControl__PlayAnim_d__26__System_IDisposable_Dispose(
        EventInfoPointRiverProgressControl__PlayAnim_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___ctor(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__0(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (progressData = _4__this->fields.progressData) == 0LL )
    sub_1C22094(_4__this, method);
  progressData->fields.IsOpenFirstRiver = 1;
  EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct EventInfoPointRiverProgressControl_o *v5; // x8
  const MethodInfo *v6; // x3
  struct EventInfoPointRiverProgressControl_o *v7; // x20
  System_Collections_IEnumerator_o *v8; // x0
  const MethodInfo *v9; // x3
  UnityEngine_MonoBehaviour_o *v10; // x20
  UnityEngine_MonoBehaviour_c *klass; // x9
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 name_high; // x9
  EventInfoRiverProgressDrawComponent_o *v14; // x21
  System_Action_o *_9__2; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_IEnumerator_o *v22; // x0

  if ( (byte_4BDDB95 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__);
    byte_4BDDB95 = 1;
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
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v7->fields.progressShip;
  if ( !_4__this )
    goto LABEL_16;
  v8 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
         (EventInfoShipProgressDrawComponent_o *)_4__this,
         1,
         1,
         v6);
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                       (UnityEngine_MonoBehaviour_o *)v7,
                                                       v8,
                                                       0LL);
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
    sub_1C2209C(_4__this, method);
  v14 = (EventInfoRiverProgressDrawComponent_o *)*((_QWORD *)&m_CancellationTokenSource->fields._state + name_high);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v16, v17, v18, v19, v20, v21);
  }
  if ( !v14 )
LABEL_16:
    sub_1C22094(_4__this, method);
  v22 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v14, _9__2, 1, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884(v10, v22, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_o *v4; // x8
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_c *klass; // x8

  v2 = this;
  if ( (byte_4BDDB96 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDDB96 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)_4__this->fields.totalPointLabel;
  if ( !this )
    goto LABEL_11;
  EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4->fields.maskPanel) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v2->fields.__4__this) == 0LL)
    || (klass = this[4].klass) == 0LL
    || (klass->_1.byval_arg.data = (void *)klass->_1.namespaze,
        EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, method),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, method);
  }
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass27_0___ctor(
        EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass27_0___PlayMoveShip_b__0(
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct EventInfoReleaseEventPointControl_o *releaseTermsObject; // x8
  const MethodInfo *v22; // x2
  struct EventInfoPointRiverProgressControl_o *v23; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x9
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_c *klass; // x8
  struct EventInfoPointRiverProgressControl_o *v26; // x8

  v3 = this;
  if ( (byte_4BDDB97 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&EventInfoPointRiverProgressControl_TypeInfo);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)sub_1C21E38(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__);
    byte_4BDDB97 = 1;
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
      if ( (unsigned int)v12 >= progressRiver->max_length )
        sub_1C2209C(this, method);
      v13 = progressRiver->m_Items[v12];
      _9__1 = v3->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0LL);
        v3->fields.__9__1 = _9__1;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
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
  v23 = v3->fields.__4__this;
  if ( !v23 || (v24 = v23->fields.progressData) == 0LL )
LABEL_33:
    sub_1C22094(this, method);
  if ( !v24->fields.IsFreeQuestClear )
  {
    v24->fields.IsFreeQuestClear = 1;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v23->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_33;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 1, v22);
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
  v26 = v3->fields.__4__this;
  if ( !v26 )
    goto LABEL_33;
  v26->fields.isChangeRiver = 0;
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass27_0___PlayMoveShip_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (progressData = _4__this->fields.progressData) == 0LL
    || (progressData->fields.IsReleaseScenarioAnimEnd = 1,
        EventInfoPointRiverProgressControl__SaveAllData(_4__this, method),
        (v5 = this->fields.__4__this) == 0LL)
    || (_4__this = (struct EventInfoPointRiverProgressControl_o *)v5->fields.maskPanel) == 0LL )
  {
    sub_1C22094(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}