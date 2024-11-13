void __fastcall EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B177C3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_8540/*"LineProgressData_"*/, v8, v9);
    byte_4B177C3 = 1;
  }
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_8540/*"LineProgressData_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields,
    StringLiteral_8540/*"LineProgressData_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void __fastcall EventInfoPointRiverProgressControl___ctor(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B177C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v5, v6);
    byte_4B177C2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseQuestReleaseEntList,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, method);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void __fastcall EventInfoPointRiverProgressControl__Awake(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoPointRiverProgressControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  int v7; // w10
  Il2CppObject *Master_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v3 = this;
  if ( (byte_4B177B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventPointMaster___, method, v2);
    this = (EventInfoPointRiverProgressControl_o *)sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B177B0 = 1;
  }
  progressRiver = v3->fields.progressRiver;
  if ( !progressRiver )
    sub_1BCAA3C(this, method);
  v7 = -1;
  do
    ++v7;
  while ( v7 < (signed int)progressRiver->max_length );
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v3->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.userEventPointMaster,
    (int64_t)Master_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B177C1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &EventInfoPointRiverProgressControl_ProgressData_TypeInfo,
      *(_QWORD *)&id,
      *(_QWORD *)&releaseScenarioIndex);
    byte_4B177C1 = 1;
  }
  v17 = sub_1BCAA2C(
          EventInfoPointRiverProgressControl_ProgressData_TypeInfo,
          *(_QWORD *)&id,
          *(_QWORD *)&releaseScenarioIndex,
          point);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x20
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  _DWORD *v35; // x0
  __int64 v36; // x1
  __int64 methodPtr_low; // x10
  int32_t v38; // w2
  __int64 v39; // x1
  __int64 v40; // x1
  EventInfoPointRiverProgressControl_c *v41; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v43; // x1
  System_String_o *v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  EventDetailEntity_o *v49; // [xsp+0h] [xbp-60h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B177BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&EventEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    byte_4B177BE = 1;
  }
  v50 = 0;
  v49 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___),
        !klass) )
  {
    sub_1BCAA3C(Master_object, v22);
  }
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_12;
      }
      p_method = (__int64)&v27->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                      Enumerator,
                      *(_QWORD *)(v34 + 8));
    if ( v35 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
      {
        v38 = v35[4];
        v50 = v38;
        if ( !v24 )
          sub_1BCAA3C(v35, v36);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v24,
               (Il2CppObject **)&v49,
               v38,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !v49 )
            sub_1BCAA3C(0LL, v39);
          if ( EventDetailEntity__IsEventRiverProgress(v49, 0LL) )
          {
            v41 = EventInfoPointRiverProgressControl_TypeInfo;
            if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v40);
              v41 = EventInfoPointRiverProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v41->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
            v43 = System_Int32__ToString((int32_t)&v50, 0LL);
            v44 = System_String__Concat_62401220(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v43, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v44, 0LL);
          }
        }
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_35;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_35:
    v48 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoPointRiverProgressControl__GetUserEventPoint(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x1

  if ( (byte_4B177BD & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    byte_4B177BD = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__HasSaveData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoPointRiverProgressControl_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoPointRiverProgressControl_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4B177BF & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, method, v2);
    byte_4B177BF = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(this, method);
  v5 = EventInfoPointRiverProgressControl_TypeInfo;
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, method);
    v5 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v5->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v7 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v8 = System_String__Concat_62401220(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v7, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v8, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__Initialization(
        EventInfoPointRiverProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *totalPointLabel; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t size; // w8
  int32_t v29; // w20
  int32_t v30; // w21
  Il2CppObject *syncRoot; // x24

  if ( (byte_4B177B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__, entity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v7, v8);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v9, v10);
    byte_4B177B1 = 1;
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
      (int64_t)entity,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    eventId = entity->fields.eventId;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v18);
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0LL);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_baseQuestReleaseEntList,
      (int64_t)QuestReleaseList,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_18;
    size = totalPointLabel->fields._size;
    if ( size - 1 >= 1 )
    {
      v29 = size - 2;
      do
      {
        v30 = v29 + 1;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         totalPointLabel,
                                                                         v29 + 1,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( !*p_baseQuestReleaseEntList )
          break;
        syncRoot = totalPointLabel->fields._syncRoot;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList,
                                                                         v29,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( syncRoot == totalPointLabel->fields._syncRoot )
        {
          totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
          if ( !*p_baseQuestReleaseEntList )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            totalPointLabel,
            v30,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        if ( v30 < 2 )
          return;
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        --v29;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_18:
      sub_1BCAA3C(totalPointLabel, entity);
    }
  }
}


bool __fastcall EventInfoPointRiverProgressControl__IsChangeRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoPointRiverProgressControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CachedPtr; // w19

  v3 = this;
  if ( (byte_4B177B8 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v4, v5);
    this = (EventInfoPointRiverProgressControl_o *)sub_1BCA7E0(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v6,
                                                     v7);
    byte_4B177B8 = 1;
  }
  progressData = v3->fields.progressData;
  if ( !progressData )
    goto LABEL_13;
  if ( !progressData->fields.IsReleaseScenarioAnimEnd )
    return 0;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.baseQuestReleaseEntList;
  if ( !this )
    goto LABEL_13;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( ReleaseScenarioIndex >= LODWORD(this->fields.m_CancellationTokenSource) - 1 )
    return 0;
  this = (EventInfoPointRiverProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   ReleaseScenarioIndex,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
LABEL_13:
    sub_1BCAA3C(this, method);
  m_CachedPtr = this->fields.m_CachedPtr;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_38310172(m_CachedPtr, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_4B177BA & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B177BA = 1;
  }
  pointRiverProgressCommonNo = this->fields.pointRiverProgressCommonNo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(212, pointRiverProgressCommonNo, 1LL, 0, 0LL, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsEndScenarioQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t endScenarioQuestId; // w19

  if ( (byte_4B177B9 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B177B9 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_38310172(endScenarioQuestId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_4B177B7 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B177B7 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsQuestClear_38310172(firstRiverReleaseQuestId, -1, 0, 0LL);
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
    sub_1BCAA3C(this, *(_QWORD *)&type);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return progressData->fields.TotalPoint >= progressData->fields.NextPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  PartyOrganizationUtility_o *p_progressData; // x19
  __int64 v28; // x1
  EventInfoPointRiverProgressControl_c *v29; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *String; // x21
  int64_t IsNullOrEmpty; // x0
  __int64 v35; // x1
  struct EventUiValueEntity_array *eventUiValueEntityList; // x27
  int max_length; // w8
  unsigned int v38; // w29
  EventUiValueEntity_o *v39; // x8
  int32_t v40; // w21
  const MethodInfo *v41; // x3
  int64_t v42; // x22
  const MethodInfo *v43; // x1
  char v44; // w23
  int32_t v45; // w24
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int32_t klass; // w25
  _BOOL8 IsQuestClear_38310172; // x0
  __int64 v50; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  EventInfoPointRiverProgressControl_ProgressData_o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  const MethodInfo *v60; // x3
  int v61; // w8
  int64_t v62; // x25
  int v63; // w26
  int32_t v64; // w21
  int32_t v65; // w22
  const MethodInfo *v66; // x3
  int64_t UserEventPoint; // x20
  int64_t v68; // x23
  int64_t v69; // x24
  int32_t v70; // w27
  bool v71; // cc
  int32_t v72; // w26
  int32_t v73; // w25
  bool v74; // w27
  bool v75; // w26
  _BOOL8 v76; // x0
  EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  const MethodInfo *v84; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4B177BC & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v15, v16);
    sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B177BC = 1;
  }
  memset(&v86, 0, sizeof(v86));
  this->fields.progressData = 0LL;
  p_progressData = (PartyOrganizationUtility_o *)&this->fields.progressData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.progressData, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  v29 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v28);
    v29 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v29->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v31 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v32 = System_String__Concat_62401220(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v31, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v32, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x3Au, 0, 0LL)) == 0 )
LABEL_58:
      sub_1BCAA3C(IsNullOrEmpty, v35);
    v61 = *(_DWORD *)(IsNullOrEmpty + 24);
    v62 = IsNullOrEmpty;
    if ( v61 < 1 )
    {
      v64 = 0;
    }
    else
    {
      v63 = v61 & ~(v61 >> 31);
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
      v64 = IsNullOrEmpty;
      if ( v63 >= 2 )
      {
        if ( *(_DWORD *)(v62 + 24) <= 1u )
          goto LABEL_59;
        v65 = System_Int32__Parse(*(System_String_o **)(v62 + 40), 0LL);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v64, v66);
        UserEventPoint = IsNullOrEmpty;
        if ( v63 >= 3 )
        {
          if ( *(_DWORD *)(v62 + 24) <= 2u )
            goto LABEL_59;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v62 + 48), 0LL);
          v68 = IsNullOrEmpty;
          if ( v63 < 4 )
          {
            v72 = 0;
            v69 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v62 + 24) <= 3u )
              goto LABEL_59;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v62 + 56), 0LL);
            v69 = IsNullOrEmpty;
            if ( v63 >= 5 )
            {
              if ( *(_DWORD *)(v62 + 24) <= 4u )
                goto LABEL_59;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v62 + 64), 0LL);
              v70 = IsNullOrEmpty;
              if ( v63 < 6 )
              {
                v72 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v62 + 24) <= 5u )
                  goto LABEL_59;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v62 + 72), 0LL);
                v71 = v63 < 7;
                v72 = IsNullOrEmpty;
                if ( !v71 )
                {
                  if ( *(_DWORD *)(v62 + 24) <= 6u )
                    goto LABEL_59;
                  v73 = System_Int32__Parse(*(System_String_o **)(v62 + 80), 0LL);
                  goto LABEL_50;
                }
              }
LABEL_49:
              v73 = 0;
LABEL_50:
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v35);
              v74 = System_Convert__ToBoolean_63049780(v70, 0LL);
              v75 = System_Convert__ToBoolean_63049780(v72, 0LL);
              v76 = System_Convert__ToBoolean_63049780(v73, 0LL);
              ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                               (EventInfoPointRiverProgressControl_o *)v76,
                               v64,
                               v65,
                               UserEventPoint,
                               v68,
                               v69,
                               v74,
                               v75,
                               v76,
                               v84);
              p_progressData->klass = (PartyOrganizationUtility_c *)ProgressData;
              sub_1BCA784(p_progressData, (int64_t)ProgressData, v78, v79, v80, v81, v82, v83);
              return;
            }
            v72 = 0;
          }
LABEL_48:
          v70 = 0;
          goto LABEL_49;
        }
        v72 = 0;
        v69 = 0LL;
LABEL_47:
        v68 = 0LL;
        goto LABEL_48;
      }
    }
    UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v64, v60);
    v72 = 0;
    v69 = 0LL;
    v65 = 0;
    goto LABEL_47;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_58;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v38 = 0;
    while ( v38 < max_length )
    {
      v39 = eventUiValueEntityList->m_Items[v38];
      if ( !v39 )
        goto LABEL_58;
      if ( v39->fields.type == 2 )
      {
        v40 = System_Int32__Parse(v39->fields.value, 0LL);
        v42 = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v40, v41);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v43);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_58;
        v44 = IsNullOrEmpty;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v85,
          (System_Collections_Generic_List_object__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v45 = 0;
        v86 = v85;
        while ( 1 )
        {
          v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v86,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v46 )
            break;
          if ( !v86.fields._current )
            sub_1BCAA3C(v46, v47);
          klass = (int32_t)v86.fields._current[1].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v47);
          IsQuestClear_38310172 = CondType__IsQuestClear_38310172(klass, -1, 0, 0LL);
          if ( !IsQuestClear_38310172 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v45;
          if ( !baseQuestReleaseEntList )
            sub_1BCAA3C(IsQuestClear_38310172, v50);
          size = baseQuestReleaseEntList->fields._size;
          if ( v45 >= size )
            v45 = size - 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v86,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        IsNullOrEmpty = (int64_t)this->fields.baseQuestReleaseEntList;
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v45,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v53 = EventInfoPointRiverProgressControl__CreateProgressData(
                (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                v40,
                v45,
                v42,
                v42,
                *(_QWORD *)(IsNullOrEmpty + 32),
                v44 & (v42 >= *(_QWORD *)(IsNullOrEmpty + 32)),
                0,
                v44 & 1,
                v84);
        p_progressData->klass = (PartyOrganizationUtility_c *)v53;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.progressData,
          (int64_t)v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v38 >= max_length )
        return;
    }
LABEL_59:
    sub_1BCAA44(IsNullOrEmpty, v35);
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
  if ( (byte_4B177B4 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1BCA7E0(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__,
                                                     *(_QWORD *)&type,
                                                     callback);
    byte_4B177B4 = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_1BCAA3C(this, *(_QWORD *)&type);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_41641384(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v6, v8, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoPointRiverProgressControl__PlayAnim_41641384(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B177B5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, callback, method);
    byte_4B177B5 = 1;
  }
  v6 = sub_1BCAA2C(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EventInfoPointRiverProgressControl__PlayMoveShip(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2

  if ( (byte_4B177B6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__, v6, v7);
    sub_1BCA7E0(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, v8, v9);
    byte_4B177B6 = 1;
  }
  v10 = sub_1BCAA2C(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_QWORD *)(v10 + 24) = callback,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v19, v20, v21, v22, v23, v24),
        progressShip = this->fields.progressShip,
        v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28),
        System_Action___ctor(
          v29,
          (Il2CppObject *)v10,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0LL),
        !progressShip) )
  {
    sub_1BCAA3C(v11, v12);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v29, v30);
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
    sub_1BCAA3C(this, method);
  EventInfoPointRiverProgressControl__SaveProgressData(this, eventUiEntity->fields.eventId, v2);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointRiverProgressControl__SaveProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Text_StringBuilder_o *v11; // x19
  System_String_o *appended; // x0
  __int64 v13; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x8
  System_String_o *v16; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8
  System_String_o *v18; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x8
  System_String_o *v20; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x8
  _BOOL4 IsReleaseScenarioAnimEnd; // w22
  System_String_o *v23; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x8
  System_String_o *v25; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v26; // x8
  System_String_o *v27; // x0
  __int64 v28; // x1
  EventInfoPointRiverProgressControl_c *v29; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v31; // x0
  System_String_o *v32; // x20
  System_String_o *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v35; // [xsp+10h] [xbp-50h] BYREF
  int64_t NextPoint; // [xsp+18h] [xbp-48h] BYREF
  int64_t OldTotalPoint; // [xsp+20h] [xbp-40h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t Id; // [xsp+38h] [xbp-28h] BYREF
  int32_t v40; // [xsp+3Ch] [xbp-24h] BYREF

  v40 = eventId;
  if ( (byte_4B177C0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v9, v10);
    byte_4B177C0 = 1;
  }
  ReleaseScenarioIndex = 0;
  NextPoint = 0LL;
  OldTotalPoint = 0LL;
  v35 = 0LL;
  v34 = 0;
  v11 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Text_StringBuilder___ctor(v11, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v11 )
    goto LABEL_16;
  System_Text_StringBuilder__Append_61563116(v11, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v11,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v15 = this->fields.progressData;
  if ( !v15 )
    goto LABEL_16;
  ReleaseScenarioIndex = v15->fields.ReleaseScenarioIndex;
  v16 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, v16, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v11,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v17 = this->fields.progressData;
  if ( !v17 )
    goto LABEL_16;
  OldTotalPoint = v17->fields.OldTotalPoint;
  v18 = System_Int64__ToString((int64_t)&OldTotalPoint, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, v18, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v11,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v19 = this->fields.progressData;
  if ( !v19 )
    goto LABEL_16;
  NextPoint = v19->fields.NextPoint;
  v20 = System_Int64__ToString((int64_t)&NextPoint, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, v20, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v11,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v21 = this->fields.progressData;
  if ( !v21 )
    goto LABEL_16;
  IsReleaseScenarioAnimEnd = v21->fields.IsReleaseScenarioAnimEnd;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
  HIDWORD(v35) = System_Convert__ToInt32_63023884(IsReleaseScenarioAnimEnd, 0LL);
  v23 = System_Int32__ToString((int32_t)&v35 + 4, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, v23, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v11,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v24 = this->fields.progressData;
  if ( !v24
    || (LODWORD(v35) = System_Convert__ToInt32_63023884(v24->fields.IsOpenFirstRiver, 0LL),
        v25 = System_Int32__ToString((int32_t)&v35, 0LL),
        System_Text_StringBuilder__Append_61563116(v11, v25, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                        v11,
                                        (System_String_o *)StringLiteral_1541/*":"*/,
                                        0LL),
        (v26 = this->fields.progressData) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(appended, v13);
  }
  v34 = System_Convert__ToInt32_63023884(v26->fields.IsFreeQuestClear, 0LL);
  v27 = System_Int32__ToString((int32_t)&v34, 0LL);
  System_Text_StringBuilder__Append_61563116(v11, v27, 0LL);
  v29 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, v28);
    v29 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v29->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v31 = System_Int32__ToString((int32_t)&v40, 0LL);
  v32 = System_String__Concat_62401220(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v31, 0LL);
  v33 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                             v11,
                             v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v32, v33, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1BCAA3C(0LL, isActive);
  UnityEngine_GameObject__SetActive(maskPanel, isActive, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetNextRiverProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoPointRiverProgressControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v7; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v8; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x9
  __int64 ReleaseScenarioIndex; // x8
  const MethodInfo *v11; // x3
  int v12; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x9
  int size; // w9
  struct EventInfoRiverProgressDrawComponent_array *v15; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v17; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x9
  struct EventInfoRiverProgressDrawComponent_array *v19; // x8
  __int64 v20; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x20
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x8

  v3 = this;
  if ( (byte_4B177BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, method, v2);
    this = (EventInfoPointRiverProgressControl_o *)sub_1BCA7E0(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v4,
                                                     v5);
    byte_4B177BB = 1;
  }
  progressData = v3->fields.progressData;
  v3->fields.isChangeRiver = 1;
  if ( !progressData )
    goto LABEL_34;
  progressData->fields.IsReleaseScenarioAnimEnd = 0;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
  v8 = v3->fields.progressData;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_34;
  }
  else
  {
    if ( !v8 )
      goto LABEL_34;
    v8->fields.IsFreeQuestClear = 0;
  }
  progressRiver = v3->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_34;
  ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressRiver->max_length )
    goto LABEL_35;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[ReleaseScenarioIndex];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v7);
  method = (const MethodInfo *)v3->fields.progressData;
  if ( !method )
    goto LABEL_34;
  v12 = HIDWORD(method->invoker_method) + 1;
  HIDWORD(method->invoker_method) = v12;
  baseQuestReleaseEntList = v3->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_34;
  size = baseQuestReleaseEntList->fields._size;
  if ( v12 >= size )
  {
    v12 = size - 1;
    HIDWORD(method->invoker_method) = size - 1;
  }
  v15 = v3->fields.progressRiver;
  if ( !v15 )
    goto LABEL_34;
  if ( v12 >= v15->max_length )
    goto LABEL_35;
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v15->m_Items[v12];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    eventUiEntity->fields.eventId,
    v11);
  v18 = v3->fields.progressData;
  if ( !v18 )
    goto LABEL_34;
  v19 = v3->fields.progressRiver;
  if ( !v19 )
    goto LABEL_34;
  v20 = v18->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v20 >= v19->max_length )
LABEL_35:
    sub_1BCAA44(this, method);
  this = (EventInfoPointRiverProgressControl_o *)v19->m_Items[v20];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v17);
  v21 = v3->fields.progressData;
  if ( !v21 )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.baseQuestReleaseEntList;
  if ( !this )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v21->fields.ReleaseScenarioIndex,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
    goto LABEL_34;
  v21->fields.NextPoint = (int64_t)this->fields.datas;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_34;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v22);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v23) )
    goto LABEL_32;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v24),
        (v25 = v3->fields.progressData) == 0LL) )
  {
LABEL_34:
    sub_1BCAA3C(this, method);
  }
  v25->fields.IsReleaseScenarioAnimEnd = 1;
LABEL_32:
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_34;
  EventInfoShipProgressDrawComponent__ResetShip(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3->fields.progressData,
    v24);
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
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v8; // x1
  int32_t v9; // w22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_4B177B2 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, entities, method);
    sub_1BCA7E0(&StringLiteral_1467/*"2DUI"*/, v5, v6);
    byte_4B177B2 = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v9 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1467/*"2DUI"*/, 0LL);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v8);
    NGUITools__SetLayer(gameObject, v9, 0LL);
    this->fields.eventUiValueEntityList = entities;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntityList,
      (int64_t)entities,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    EventInfoPointRiverProgressControl__SetupDisp(this, v16);
    if ( !EventInfoPointRiverProgressControl__HasSaveData(this, v17) )
      EventInfoPointRiverProgressControl__SaveAllData(this, v18);
  }
}


void __fastcall EventInfoPointRiverProgressControl__SetupDisp(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoPointRiverProgressControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x22
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CancellationTokenSource; // w8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v20; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 invoker_method_high; // x9
  struct EventUiEntity_o *v24; // x10
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoUserEventPointControl_o *v27; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v28; // x9
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v33; // x8
  __int64 v34; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v35; // x8
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  TerminalPramsManager_c *v38; // x0
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v41; // x9
  struct EventInfoRiverProgressDrawComponent_array *v42; // x8
  __int64 v43; // x9
  __int64 v44; // x1
  __int64 v45; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v46; // x8
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x4
  struct EventUiEntity_o *v49; // x8
  const MethodInfo *v50; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v51; // x9
  struct EventInfoRiverProgressDrawComponent_array *v52; // x8
  __int64 v53; // x9
  const MethodInfo *v54; // x2
  TerminalPramsManager_c *v55; // x0
  struct EventUiEntity_o *v56; // x8
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v62; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B177B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10, v11);
    this = (EventInfoPointRiverProgressControl_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B177B3 = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_114;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B14DF6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v15);
    byte_4B14DF6 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
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
                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    if ( !this )
      goto LABEL_114;
    progressData->fields.NextPoint = (int64_t)this->fields.datas;
    v20 = v3->fields.progressData;
    if ( !v20 )
      goto LABEL_114;
    v20->fields.OldTotalPoint = v20->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
    v21 = v3->fields.progressData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_114;
      v21->fields.IsFreeQuestClear = 1;
    }
    else if ( !v21 )
    {
      goto LABEL_114;
    }
    if ( v21->fields.OldTotalPoint >= v21->fields.NextPoint && v21->fields.IsFreeQuestClear )
      v21->fields.IsReleaseScenarioAnimEnd = 1;
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
  v24 = v3->fields.eventUiEntity;
  if ( !v24 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[invoker_method_high];
  if ( !this )
    goto LABEL_114;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    v24->fields.eventId,
    v16);
  v25 = v3->fields.progressData;
  if ( !v25 )
    goto LABEL_114;
  totalPointLabel = v3->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_114;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v25->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
  v27 = v3->fields.totalPointLabel;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_114;
  }
  else
  {
    v28 = v3->fields.progressData;
    if ( !v28 || !v27 )
      goto LABEL_114;
    v27->fields._oldTotalPoint_k__BackingField = v28->fields.TotalPoint;
  }
  ((void (__fastcall *)(struct EventInfoUserEventPointControl_o *, struct EventUiValueEntity_array *, Il2CppMethodPointer))v27->klass->vtable._5_Setup.method)(
    v27,
    v3->fields.eventUiValueEntityList,
    v27->klass->vtable._6_SetValue.methodPtr);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v29) )
  {
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_114;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v30) )
    goto LABEL_118;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B14DF6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v31);
    byte_4B14DF6 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(this[1].klass->vtable._10_Redisplay.method) )
    goto LABEL_118;
  v33 = v3->fields.progressData;
  if ( !v33 )
    goto LABEL_114;
  if ( v33->fields.IsOpenFirstRiver )
  {
LABEL_118:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, method) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_4B14DF6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v34);
        byte_4B14DF6 = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !BYTE2(this[1].klass->vtable._10_Redisplay.method) )
      {
        v35 = v3->fields.progressData;
        if ( !v35 )
          goto LABEL_114;
        v35->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v3, method);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, method) )
      goto LABEL_69;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36);
    if ( !byte_4B14DF6 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v36, v37);
      byte_4B14DF6 = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36);
      v38 = TerminalPramsManager_TypeInfo;
    }
    if ( !v38->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v36);
      v46 = v3->fields.progressData;
      if ( !v46 )
        goto LABEL_114;
      v46->fields.OldTotalPoint = v46->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v3, method);
    }
    else
    {
LABEL_69:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v36) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
        if ( this )
        {
          EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v39);
          v41 = v3->fields.progressData;
          if ( v41 )
          {
            v42 = v3->fields.progressRiver;
            if ( v42 )
            {
              v43 = v41->fields.ReleaseScenarioIndex;
              if ( (unsigned int)v43 < v42->max_length )
              {
                this = (EventInfoPointRiverProgressControl_o *)v42->m_Items[v43];
                if ( !this )
                  goto LABEL_114;
                EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v40);
                goto LABEL_88;
              }
LABEL_115:
              sub_1BCAA44(this, method);
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
        v39);
      this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
      if ( this )
      {
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v47);
        v49 = v3->fields.eventUiEntity;
        if ( v49 )
        {
          this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
          if ( this )
          {
            EventInfoShipProgressDrawComponent__Setup(
              (EventInfoShipProgressDrawComponent_o *)this,
              v3,
              v49->fields.eventId,
              v3->fields.isChangeRiver,
              v48);
            v51 = v3->fields.progressData;
            if ( v51 )
            {
              v52 = v3->fields.progressRiver;
              if ( v52 )
              {
                v53 = v51->fields.ReleaseScenarioIndex;
                if ( (unsigned int)v53 >= v52->max_length )
                  goto LABEL_115;
                this = (EventInfoPointRiverProgressControl_o *)v52->m_Items[v53];
                if ( this )
                {
                  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v50);
                  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
                  if ( this )
                  {
                    EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v54);
LABEL_88:
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
                    if ( !byte_4B1380A )
                    {
                      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v44, v45);
                      byte_4B1380A = 1;
                    }
                    v55 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44);
                      v55 = TerminalPramsManager_TypeInfo;
                    }
                    v55->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
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
    sub_1BCAA3C(this, method);
  }
  if ( !this[1].fields.playType )
    j_il2cpp_runtime_class_init_0(this, method);
  if ( !byte_4B1380A )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v31);
    byte_4B1380A = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[1].klass->vtable._10_Redisplay.method) = 0;
  v56 = v3->fields.eventUiEntity;
  if ( !v56 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_114;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3,
    v56->fields.eventId,
    1,
    v32);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v57);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v58);
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
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_114;
    v66.fields.x = x;
    v66.fields.y = y;
    v66.fields.z = z;
    EventInfoUISlideAnimation__SetAfterActionAndInPosition(
      (EventInfoUISlideAnimation_o *)Component_object,
      0LL,
      v66,
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
  __int64 v2; // x2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl__PlayAnim_d__26_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  Il2CppObject *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *callback; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  const MethodInfo *v42; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  System_Collections_IEnumerator_o *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v50; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v54; // x19
  System_Action_o *v55; // x21
  const MethodInfo *v56; // x3
  bool v57; // w2
  EventInfoRiverProgressDrawComponent_o *v58; // x0
  System_Action_o *v59; // x1
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x3
  System_Collections_IEnumerator_o *v62; // x0
  __int64 v63; // x2
  __int64 v64; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v65; // x9
  struct EventInfoRiverProgressDrawComponent_array *v66; // x8
  __int64 v67; // x9
  Il2CppObject *v68; // x22
  EventInfoRiverProgressDrawComponent_o *v69; // x19
  System_Action_o *v70; // x21
  System_Collections_IEnumerator_o *v71; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v72; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v73; // x8
  const MethodInfo *v74; // x2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v75; // x8

  v4 = this;
  if ( (byte_4B177C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__, v5, v6);
    sub_1BCA7E0(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__, v7, v8);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_1BCA7E0(
                                                                     &EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo,
                                                                     v9,
                                                                     v10);
    byte_4B177C7 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
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
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v42);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v44);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, v45);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
        if ( !this )
          goto LABEL_42;
        v47 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
                (EventInfoShipProgressDrawComponent_o *)this,
                1,
                0,
                v46);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                         v47,
                                                                         0LL);
        v50 = _4__this->fields.progressData;
        if ( !v50 )
          goto LABEL_42;
        progressRiver = _4__this->fields.progressRiver;
        if ( !progressRiver )
          goto LABEL_42;
        ReleaseScenarioIndex = v50->fields.ReleaseScenarioIndex;
        if ( (unsigned int)ReleaseScenarioIndex < progressRiver->max_length )
        {
          _8__1 = (Il2CppObject *)v4->fields.__8__1;
          v54 = progressRiver->m_Items[ReleaseScenarioIndex];
          v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v48, v49);
          System_Action___ctor(
            v55,
            _8__1,
            Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
            0LL);
          if ( !v54 )
            goto LABEL_42;
          v57 = 1;
          v58 = v54;
          v59 = v55;
LABEL_33:
          v71 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v58, v59, v57, v56);
          UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v71, 0LL);
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
      v75 = v4->fields.__8__1;
      if ( !v75 )
        goto LABEL_42;
      EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v75->fields.callback, v74);
      return 0;
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, method) )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
      if ( !this )
        goto LABEL_42;
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
      v72 = _4__this->fields.progressData;
      if ( !v72 )
        goto LABEL_42;
      v72->fields.OldTotalPoint = v72->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
      v73 = v4->fields.__8__1;
      if ( !v73 )
        goto LABEL_42;
      ActionExtensions__Call(v73->fields.callback, 0LL);
      return 0;
    }
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_42;
    EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, v60);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
    if ( !this )
      goto LABEL_42;
    v62 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
            (EventInfoShipProgressDrawComponent_o *)this,
            0,
            0,
            v61);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                     v62,
                                                                     0LL);
    v65 = _4__this->fields.progressData;
    if ( !v65 )
      goto LABEL_42;
    v66 = _4__this->fields.progressRiver;
    if ( !v66 )
      goto LABEL_42;
    v67 = v65->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v67 < v66->max_length )
    {
      v68 = (Il2CppObject *)v4->fields.__8__1;
      v69 = v66->m_Items[v67];
      v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v63, v64);
      System_Action___ctor(
        v70,
        v68,
        Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
        0LL);
      if ( !v69 )
        goto LABEL_42;
      v58 = v69;
      v59 = v70;
      v57 = 0;
      goto LABEL_33;
    }
LABEL_43:
    sub_1BCAA44(this, method);
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_1BCAA2C(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v12, 0LL);
    v4->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v4->fields.__8__1;
    if ( this )
    {
      v25 = (int64_t)v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v25;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v25, v19, v20, v21, v22, v23, v24);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v4->fields.__8__1;
      if ( this )
      {
        callback = (Il2CppObject *)v4->fields.callback;
        this->fields.__2__current = callback;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.__2__current,
          (int64_t)callback,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        v4->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v34, v35, v36, v37, v38, v39);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
    }
LABEL_42:
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(_4__this, method);
  progressData->fields.IsOpenFirstRiver = 1;
  EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  const MethodInfo *v7; // x2
  struct EventInfoPointRiverProgressControl_o *v8; // x8
  const MethodInfo *v9; // x3
  struct EventInfoPointRiverProgressControl_o *v10; // x20
  System_Collections_IEnumerator_o *v11; // x0
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  UnityEngine_MonoBehaviour_o *v14; // x20
  UnityEngine_MonoBehaviour_c *klass; // x9
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 name_high; // x9
  EventInfoRiverProgressDrawComponent_o *v18; // x21
  System_Action_o *_9__2; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_IEnumerator_o *v26; // x0

  if ( (byte_4B177C4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__, v4, v5);
    byte_4B177C4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoPointRiverProgressControl__SetNextRiverProgressData(_4__this, method);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v8->fields.releaseTermsObject;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, v7);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v10->fields.progressShip;
  if ( !_4__this )
    goto LABEL_16;
  v11 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
          (EventInfoShipProgressDrawComponent_o *)_4__this,
          1,
          1,
          v9);
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                       (UnityEngine_MonoBehaviour_o *)v10,
                                                       v11,
                                                       0LL);
  v14 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v14 )
    goto LABEL_16;
  klass = v14[5].klass;
  if ( !klass )
    goto LABEL_16;
  m_CancellationTokenSource = v14[2].fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_16;
  name_high = SHIDWORD(klass->_1.name);
  if ( (unsigned int)name_high >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
    sub_1BCAA44(_4__this, method);
  v18 = (EventInfoRiverProgressDrawComponent_o *)*((_QWORD *)&m_CancellationTokenSource->fields._state + name_high);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v20, v21, v22, v23, v24, v25);
  }
  if ( !v18 )
LABEL_16:
    sub_1BCAA3C(_4__this, method);
  v26 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v18, _9__2, 1, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(v14, v26, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v3; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_o *v5; // x8
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_c *klass; // x8

  v3 = this;
  if ( (byte_4B177C5 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_1BCA7E0(
                                                                           &Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
                                                                           method,
                                                                           v2);
    byte_4B177C5 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)_4__this->fields.totalPointLabel;
  if ( !this )
    goto LABEL_11;
  EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
  v5 = v3->fields.__4__this;
  if ( !v5
    || (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v5->fields.maskPanel) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0LL)
    || (klass = this[4].klass) == 0LL
    || (klass->_1.byval_arg.data = (void *)klass->_1.namespaze,
        EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, method),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  struct EventInfoPointRiverProgressControl_o *v12; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v13; // x9
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v17; // x9
  EventInfoRiverProgressDrawComponent_o *v18; // x20
  System_Action_o *_9__1; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct EventInfoReleaseEventPointControl_o *releaseTermsObject; // x8
  const MethodInfo *v27; // x2
  struct EventInfoPointRiverProgressControl_o *v28; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v29; // x9
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_c *klass; // x8
  struct EventInfoPointRiverProgressControl_o *v31; // x8

  v3 = this;
  if ( (byte_4B177C6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&EventInfoPointRiverProgressControl_TypeInfo, v4, v5);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)sub_1BCA7E0(
                                                                           &Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
                                                                           v6,
                                                                           v7);
    byte_4B177C6 = 1;
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
    v12 = v3->fields.__4__this;
    if ( !v12 )
      goto LABEL_33;
    v13 = v12->fields.progressData;
    if ( !v13 )
      goto LABEL_33;
    ReleaseScenarioIndex = v13->fields.ReleaseScenarioIndex;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo, method);
      v12 = v3->fields.__4__this;
      if ( !v12 )
        goto LABEL_33;
    }
    if ( ReleaseScenarioIndex >= EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      releaseTermsObject = v12->fields.releaseTermsObject;
      if ( !releaseTermsObject )
        goto LABEL_33;
      EventInfoReleaseEventPointControl__PlaySe(
        (EventInfoReleaseEventPointControl_o *)this,
        releaseTermsObject->fields.releaseScenarioCheckSE,
        v10);
    }
    else
    {
      v15 = v12->fields.progressData;
      if ( !v15 )
        goto LABEL_33;
      progressRiver = v12->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_33;
      v17 = v15->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v17 >= progressRiver->max_length )
        sub_1BCAA44(this, method);
      v18 = progressRiver->m_Items[v17];
      _9__1 = v3->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v10, v11);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0LL);
        v3->fields.__9__1 = _9__1;
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v20, v21, v22, v23, v24, v25);
      }
      if ( !v18 )
        goto LABEL_33;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v18, _9__1, v10);
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
  v28 = v3->fields.__4__this;
  if ( !v28 || (v29 = v28->fields.progressData) == 0LL )
LABEL_33:
    sub_1BCAA3C(this, method);
  if ( !v29->fields.IsFreeQuestClear )
  {
    v29->fields.IsFreeQuestClear = 1;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v28->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_33;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 1, v27);
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
  v31 = v3->fields.__4__this;
  if ( !v31 )
    goto LABEL_33;
  v31->fields.isChangeRiver = 0;
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
    sub_1BCAA3C(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}