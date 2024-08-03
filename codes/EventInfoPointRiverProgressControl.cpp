void __fastcall EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FDBEF & 1) == 0 )
  {
    sub_1B640C8(&EventInfoPointRiverProgressControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_8376/*"LineProgressData_"*/, v4);
    byte_49FDBEF = 1;
  }
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_8376/*"LineProgressData_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields,
    StringLiteral_8376/*"LineProgressData_"*/,
    v2,
    v3);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void __fastcall EventInfoPointRiverProgressControl___ctor(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FDBEE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v4);
    byte_49FDBEE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseQuestReleaseEntList, (int32_t)v5, v6, v7);
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
  int32_t v12; // w2
  int32_t v13; // w3
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressData, (int32_t)ProgressData, v12, v13);
}


void __fastcall EventInfoPointRiverProgressControl__ApplyProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1B64324(this);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void __fastcall EventInfoPointRiverProgressControl__Awake(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  __int64 v3; // x1
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  int v5; // w10
  Il2CppObject *Master_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = this;
  if ( (byte_49FDBDC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FDBDC = 1;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    sub_1B64324(this);
  v5 = -1;
  do
    ++v5;
  while ( v5 < (signed int)progressRiver->max_length );
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.userEventPointMaster, (int32_t)Master_object, v7, v8);
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

  if ( (byte_49FDBED & 1) == 0 )
  {
    sub_1B640C8(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id);
    byte_49FDBED = 1;
  }
  v17 = sub_1B64314(
          EventInfoPointRiverProgressControl_ProgressData_TypeInfo,
          *(_QWORD *)&id,
          *(_QWORD *)&releaseScenarioIndex);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1B64324(v18);
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 methodPtr_low; // x10
  int32_t v25; // w2
  EventInfoPointRiverProgressControl_c *v26; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  EventDetailEntity_o *v34; // [xsp+0h] [xbp-60h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FDBEA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&EventEntity_TypeInfo, v6);
    sub_1B640C8(&EventInfoPointRiverProgressControl_TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_49FDBEA = 1;
  }
  v35 = 0;
  v34 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !klass) )
  {
    sub_1B64324(Master_object);
  }
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_12;
      }
      p_method = (__int64)&v15->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_19:
      v22 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
      {
        v25 = v23[4];
        v35 = v25;
        if ( !v13 )
          sub_1B64324(v23);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v13,
               (Il2CppObject **)&v34,
               v25,
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !v34 )
            sub_1B64324(0LL);
          if ( EventDetailEntity__IsEventRiverProgress(v34, 0LL) )
          {
            v26 = EventInfoPointRiverProgressControl_TypeInfo;
            if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
              v26 = EventInfoPointRiverProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v26->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
            v28 = System_Int32__ToString((int32_t)&v35, 0LL);
            v29 = System_String__Concat_61375396(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v28, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v29, 0LL);
          }
        }
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_35;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_35:
    v33 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
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

  if ( (byte_49FDBE9 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49FDBE9 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
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
  if ( (byte_49FDBEB & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1B640C8(&EventInfoPointRiverProgressControl_TypeInfo, method);
    byte_49FDBEB = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B64324(this);
  v4 = EventInfoPointRiverProgressControl_TypeInfo;
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v4 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v4->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_61375396(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v7, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__Initialization(
        EventInfoPointRiverProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *totalPointLabel; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t size; // w8
  int32_t v17; // w20
  int32_t v18; // w21
  Il2CppObject *syncRoot; // x24

  if ( (byte_49FDBDD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__, entity);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v6);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    byte_49FDBDD = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v9, v10);
    eventId = entity->fields.eventId;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0LL);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_baseQuestReleaseEntList, (int32_t)QuestReleaseList, v14, v15);
    totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_18;
    size = totalPointLabel->fields._size;
    if ( size - 1 >= 1 )
    {
      v17 = size - 2;
      do
      {
        v18 = v17 + 1;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         totalPointLabel,
                                                                         v17 + 1,
                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( !*p_baseQuestReleaseEntList )
          break;
        syncRoot = totalPointLabel->fields._syncRoot;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList,
                                                                         v17,
                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( syncRoot == totalPointLabel->fields._syncRoot )
        {
          totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
          if ( !*p_baseQuestReleaseEntList )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            totalPointLabel,
            v18,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        if ( v18 < 2 )
          return;
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        --v17;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_18:
      sub_1B64324(totalPointLabel);
    }
  }
}


bool __fastcall EventInfoPointRiverProgressControl__IsChangeRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CachedPtr; // w19

  v2 = this;
  if ( (byte_49FDBE4 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v3);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B640C8(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v4);
    byte_49FDBE4 = 1;
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
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
LABEL_13:
    sub_1B64324(this);
  m_CachedPtr = this->fields.m_CachedPtr;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(m_CachedPtr, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_49FDBE6 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    byte_49FDBE6 = 1;
  }
  pointRiverProgressCommonNo = this->fields.pointRiverProgressCommonNo;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(212, pointRiverProgressCommonNo, 1LL, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsEndScenarioQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t endScenarioQuestId; // w19

  if ( (byte_49FDBE5 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    byte_49FDBE5 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(endScenarioQuestId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_49FDBE3 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    byte_49FDBE3 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(firstRiverReleaseQuestId, -1, 0, 0LL);
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
        (v8 = v4->fields.progressData) == 0LL) )
  {
    sub_1B64324(this);
  }
  v9 = v8->fields.TotalPoint >= v8->fields.NextPoint && !v8->fields.IsReleaseScenarioAnimEnd;
  return (v9 | (TotalPoint > OldTotalPoint) | (unsigned __int8)this & 1 | EventInfoPointRiverProgressControl__IsChangeRiver(
                                                                            v4,
                                                                            v7)) != 0;
}


bool __fastcall EventInfoPointRiverProgressControl__IsProgressShipAnim(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ServantStatusBattleListViewItem_o *p_progressData; // x19
  EventInfoPointRiverProgressControl_c *v15; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o *String; // x21
  int64_t IsNullOrEmpty; // x0
  __int64 v21; // x1
  struct EventUiValueEntity_array *eventUiValueEntityList; // x27
  int max_length; // w8
  unsigned int v24; // w29
  EventUiValueEntity_o *v25; // x8
  int32_t v26; // w21
  const MethodInfo *v27; // x3
  int64_t v28; // x22
  const MethodInfo *v29; // x1
  char v30; // w23
  int32_t v31; // w24
  _BOOL8 v32; // x0
  int32_t klass; // w25
  _BOOL8 IsQuestClear_37285996; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  EventInfoPointRiverProgressControl_ProgressData_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x3
  int v41; // w8
  int64_t v42; // x25
  int v43; // w26
  int32_t v44; // w21
  int32_t v45; // w22
  const MethodInfo *v46; // x3
  int64_t UserEventPoint; // x20
  int64_t v48; // x23
  int64_t v49; // x24
  int32_t v50; // w27
  bool v51; // cc
  int32_t v52; // w26
  int32_t v53; // w25
  bool v54; // w27
  bool v55; // w26
  _BOOL8 v56; // x0
  EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_49FDBE8 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Convert_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1B640C8(&EventInfoPointRiverProgressControl_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FDBE8 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  this->fields.progressData = 0LL;
  p_progressData = (ServantStatusBattleListViewItem_o *)&this->fields.progressData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressData, 0, (int32_t)method, v3);
  v15 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v15 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v15->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v17 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v18 = System_String__Concat_61375396(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v17, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x3Au, 0, 0LL)) == 0 )
LABEL_58:
      sub_1B64324(IsNullOrEmpty);
    v41 = *(_DWORD *)(IsNullOrEmpty + 24);
    v42 = IsNullOrEmpty;
    if ( v41 < 1 )
    {
      v44 = 0;
    }
    else
    {
      v43 = v41 & ~(v41 >> 31);
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
      v44 = IsNullOrEmpty;
      if ( v43 >= 2 )
      {
        if ( *(_DWORD *)(v42 + 24) <= 1u )
          goto LABEL_59;
        v45 = System_Int32__Parse(*(System_String_o **)(v42 + 40), 0LL);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v44, v46);
        UserEventPoint = IsNullOrEmpty;
        if ( v43 >= 3 )
        {
          if ( *(_DWORD *)(v42 + 24) <= 2u )
            goto LABEL_59;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v42 + 48), 0LL);
          v48 = IsNullOrEmpty;
          if ( v43 < 4 )
          {
            v52 = 0;
            v49 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v42 + 24) <= 3u )
              goto LABEL_59;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v42 + 56), 0LL);
            v49 = IsNullOrEmpty;
            if ( v43 >= 5 )
            {
              if ( *(_DWORD *)(v42 + 24) <= 4u )
                goto LABEL_59;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v42 + 64), 0LL);
              v50 = IsNullOrEmpty;
              if ( v43 < 6 )
              {
                v52 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v42 + 24) <= 5u )
                  goto LABEL_59;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v42 + 72), 0LL);
                v51 = v43 < 7;
                v52 = IsNullOrEmpty;
                if ( !v51 )
                {
                  if ( *(_DWORD *)(v42 + 24) <= 6u )
                    goto LABEL_59;
                  v53 = System_Int32__Parse(*(System_String_o **)(v42 + 80), 0LL);
                  goto LABEL_50;
                }
              }
LABEL_49:
              v53 = 0;
LABEL_50:
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v54 = System_Convert__ToBoolean_62023620(v50, 0LL);
              v55 = System_Convert__ToBoolean_62023620(v52, 0LL);
              v56 = System_Convert__ToBoolean_62023620(v53, 0LL);
              ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                               (EventInfoPointRiverProgressControl_o *)v56,
                               v44,
                               v45,
                               UserEventPoint,
                               v48,
                               v49,
                               v54,
                               v55,
                               v56,
                               v60);
              p_progressData->klass = (ServantStatusBattleListViewItem_c *)ProgressData;
              sub_1B6406C(p_progressData, (int32_t)ProgressData, v58, v59);
              return;
            }
            v52 = 0;
          }
LABEL_48:
          v50 = 0;
          goto LABEL_49;
        }
        v52 = 0;
        v49 = 0LL;
LABEL_47:
        v48 = 0LL;
        goto LABEL_48;
      }
    }
    UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v44, v40);
    v52 = 0;
    v49 = 0LL;
    v45 = 0;
    goto LABEL_47;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_58;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( v24 < max_length )
    {
      v25 = eventUiValueEntityList->m_Items[v24];
      if ( !v25 )
        goto LABEL_58;
      if ( v25->fields.type == 2 )
      {
        v26 = System_Int32__Parse(v25->fields.value, 0LL);
        v28 = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v26, v27);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v29);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_58;
        v30 = IsNullOrEmpty;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v61,
          (System_Collections_Generic_List_object__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v31 = 0;
        v62 = v61;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v62,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v32 )
            break;
          if ( !v62.fields._current )
            sub_1B64324(v32);
          klass = (int32_t)v62.fields._current[1].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_37285996 = CondType__IsQuestClear_37285996(klass, -1, 0, 0LL);
          if ( !IsQuestClear_37285996 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v31;
          if ( !baseQuestReleaseEntList )
            sub_1B64324(IsQuestClear_37285996);
          size = baseQuestReleaseEntList->fields._size;
          if ( v31 >= size )
            v31 = size - 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v62,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        IsNullOrEmpty = (int64_t)this->fields.baseQuestReleaseEntList;
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v31,
                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v37 = EventInfoPointRiverProgressControl__CreateProgressData(
                (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                v26,
                v31,
                v28,
                v28,
                *(_QWORD *)(IsNullOrEmpty + 32),
                v30 & (v28 >= *(_QWORD *)(IsNullOrEmpty + 32)),
                0,
                v30 & 1,
                v60);
        p_progressData->klass = (ServantStatusBattleListViewItem_c *)v37;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressData, (int32_t)v37, v38, v39);
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v24 >= max_length )
        return;
    }
LABEL_59:
    sub_1B6432C(IsNullOrEmpty, v21);
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
  if ( (byte_49FDBE0 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1B640C8(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__,
                                                     *(_QWORD *)&type);
    byte_49FDBE0 = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_1B64324(this);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_40796816(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v6, v8, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoPointRiverProgressControl__PlayAnim_40796816(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FDBE1 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, callback);
    byte_49FDBE1 = 1;
  }
  v5 = sub_1B64314(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall EventInfoPointRiverProgressControl__PlayMoveShip(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_49FDBE2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__, v5);
    sub_1B640C8(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, v6);
    byte_49FDBE2 = 1;
  }
  v7 = sub_1B64314(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10),
        *(_QWORD *)(v7 + 24) = callback,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v11, v12),
        progressShip = this->fields.progressShip,
        v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v7,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0LL),
        !progressShip) )
  {
    sub_1B64324(v8);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v16, v17);
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
    sub_1B64324(this);
  EventInfoPointRiverProgressControl__SaveProgressData(this, eventUiEntity->fields.eventId, v2);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoPointRiverProgressControl__SaveProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Text_StringBuilder_o *v7; // x19
  System_String_o *appended; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x8
  System_String_o *v11; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x8
  System_String_o *v13; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v14; // x8
  System_String_o *v15; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v16; // x8
  _BOOL4 IsReleaseScenarioAnimEnd; // w22
  System_String_o *v18; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x8
  System_String_o *v20; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x8
  System_String_o *v22; // x0
  EventInfoPointRiverProgressControl_c *v23; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v29; // [xsp+10h] [xbp-50h] BYREF
  int64_t NextPoint; // [xsp+18h] [xbp-48h] BYREF
  int64_t OldTotalPoint; // [xsp+20h] [xbp-40h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t Id; // [xsp+38h] [xbp-28h] BYREF
  int32_t v34; // [xsp+3Ch] [xbp-24h] BYREF

  v34 = eventId;
  if ( (byte_49FDBEC & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&EventInfoPointRiverProgressControl_TypeInfo, v4);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v6);
    byte_49FDBEC = 1;
  }
  ReleaseScenarioIndex = 0;
  NextPoint = 0LL;
  OldTotalPoint = 0LL;
  v29 = 0LL;
  v28 = 0;
  v7 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method);
  System_Text_StringBuilder___ctor(v7, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v7 )
    goto LABEL_16;
  System_Text_StringBuilder__Append_60536548(v7, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v7,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v10 = this->fields.progressData;
  if ( !v10 )
    goto LABEL_16;
  ReleaseScenarioIndex = v10->fields.ReleaseScenarioIndex;
  v11 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0LL);
  System_Text_StringBuilder__Append_60536548(v7, v11, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v7,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v12 = this->fields.progressData;
  if ( !v12 )
    goto LABEL_16;
  OldTotalPoint = v12->fields.OldTotalPoint;
  v13 = System_Int64__ToString((int64_t)&OldTotalPoint, 0LL);
  System_Text_StringBuilder__Append_60536548(v7, v13, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v7,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v14 = this->fields.progressData;
  if ( !v14 )
    goto LABEL_16;
  NextPoint = v14->fields.NextPoint;
  v15 = System_Int64__ToString((int64_t)&NextPoint, 0LL);
  System_Text_StringBuilder__Append_60536548(v7, v15, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v7,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v16 = this->fields.progressData;
  if ( !v16 )
    goto LABEL_16;
  IsReleaseScenarioAnimEnd = v16->fields.IsReleaseScenarioAnimEnd;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  HIDWORD(v29) = System_Convert__ToInt32_61997724(IsReleaseScenarioAnimEnd, 0LL);
  v18 = System_Int32__ToString((int32_t)&v29 + 4, 0LL);
  System_Text_StringBuilder__Append_60536548(v7, v18, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v7,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v19 = this->fields.progressData;
  if ( !v19
    || (LODWORD(v29) = System_Convert__ToInt32_61997724(v19->fields.IsOpenFirstRiver, 0LL),
        v20 = System_Int32__ToString((int32_t)&v29, 0LL),
        System_Text_StringBuilder__Append_60536548(v7, v20, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                        v7,
                                        (System_String_o *)StringLiteral_1546/*":"*/,
                                        0LL),
        (v21 = this->fields.progressData) == 0LL) )
  {
LABEL_16:
    sub_1B64324(appended);
  }
  v28 = System_Convert__ToInt32_61997724(v21->fields.IsFreeQuestClear, 0LL);
  v22 = System_Int32__ToString((int32_t)&v28, 0LL);
  System_Text_StringBuilder__Append_60536548(v7, v22, 0LL);
  v23 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v23 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v23->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v25 = System_Int32__ToString((int32_t)&v34, 0LL);
  v26 = System_String__Concat_61375396(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v25, 0LL);
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                             v7,
                             v7->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v26, v27, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(maskPanel, isActive, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetNextRiverProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  __int64 v3; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  EventInfoPointRiverProgressControl_ProgressData_o *v5; // x1
  const MethodInfo *v6; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v7; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x9
  __int64 ReleaseScenarioIndex; // x8
  const MethodInfo *v10; // x3
  int v11; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x9
  int size; // w9
  struct EventInfoRiverProgressDrawComponent_array *v14; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v16; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x9
  struct EventInfoRiverProgressDrawComponent_array *v18; // x8
  __int64 v19; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v20; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x8

  v2 = this;
  if ( (byte_49FDBE7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, method);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B640C8(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v3);
    byte_49FDBE7 = 1;
  }
  progressData = v2->fields.progressData;
  v2->fields.isChangeRiver = 1;
  if ( !progressData )
    goto LABEL_34;
  progressData->fields.IsReleaseScenarioAnimEnd = 0;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v2, method);
  v7 = v2->fields.progressData;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_34;
  }
  else
  {
    if ( !v7 )
      goto LABEL_34;
    v7->fields.IsFreeQuestClear = 0;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_34;
  ReleaseScenarioIndex = v7->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressRiver->max_length )
    goto LABEL_35;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[ReleaseScenarioIndex];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v6);
  v5 = v2->fields.progressData;
  if ( !v5 )
    goto LABEL_34;
  v11 = v5->fields.ReleaseScenarioIndex + 1;
  v5->fields.ReleaseScenarioIndex = v11;
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_34;
  size = baseQuestReleaseEntList->fields._size;
  if ( v11 >= size )
  {
    v11 = size - 1;
    v5->fields.ReleaseScenarioIndex = size - 1;
  }
  v14 = v2->fields.progressRiver;
  if ( !v14 )
    goto LABEL_34;
  if ( v11 >= v14->max_length )
    goto LABEL_35;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v14->m_Items[v11];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    v5,
    eventUiEntity->fields.eventId,
    v10);
  v17 = v2->fields.progressData;
  if ( !v17 )
    goto LABEL_34;
  v18 = v2->fields.progressRiver;
  if ( !v18 )
    goto LABEL_34;
  v19 = v17->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v19 >= v18->max_length )
LABEL_35:
    sub_1B6432C(this, v5);
  this = (EventInfoPointRiverProgressControl_o *)v18->m_Items[v19];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v16);
  v20 = v2->fields.progressData;
  if ( !v20 )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.baseQuestReleaseEntList;
  if ( !this )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v20->fields.ReleaseScenarioIndex,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
    goto LABEL_34;
  v20->fields.NextPoint = (int64_t)this->fields.datas;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_34;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v2->fields.progressData, v21);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v2, v22) )
    goto LABEL_32;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v23),
        (v24 = v2->fields.progressData) == 0LL) )
  {
LABEL_34:
    sub_1B64324(this);
  }
  v24->fields.IsReleaseScenarioAnimEnd = 1;
LABEL_32:
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.progressShip;
  if ( !this )
    goto LABEL_34;
  EventInfoShipProgressDrawComponent__ResetShip(
    (EventInfoShipProgressDrawComponent_o *)this,
    v2->fields.progressData,
    v23);
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
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v7; // w22
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_49FDBDE & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, entities);
    sub_1B640C8(&StringLiteral_1472/*"2DUI"*/, v5);
    byte_49FDBDE = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v7 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1472/*"2DUI"*/, 0LL);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v7, 0LL);
    this->fields.eventUiValueEntityList = entities;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entities, v8, v9);
    EventInfoPointRiverProgressControl__SetupDisp(this, v10);
    if ( !EventInfoPointRiverProgressControl__HasSaveData(this, v11) )
      EventInfoPointRiverProgressControl__SaveAllData(this, v12);
  }
}


void __fastcall EventInfoPointRiverProgressControl__SetupDisp(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoPointRiverProgressControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x22
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CancellationTokenSource; // w8
  const MethodInfo *v15; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v16; // x8
  const MethodInfo *v17; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  EventInfoPointRiverProgressControl_ProgressData_o *v19; // x1
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v21; // x9
  struct EventUiEntity_o *v22; // x10
  const MethodInfo *v23; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoUserEventPointControl_o *v26; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x9
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x8
  const MethodInfo *v33; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v34; // x8
  const MethodInfo *v35; // x1
  TerminalPramsManager_c *v36; // x0
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v39; // x9
  struct EventInfoRiverProgressDrawComponent_array *v40; // x8
  __int64 v41; // x9
  __int64 v42; // x1
  const MethodInfo *v43; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v44; // x8
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x4
  struct EventUiEntity_o *v47; // x8
  const MethodInfo *v48; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v49; // x9
  struct EventInfoRiverProgressDrawComponent_array *v50; // x8
  __int64 v51; // x9
  const MethodInfo *v52; // x2
  TerminalPramsManager_c *v53; // x0
  struct EventUiEntity_o *v54; // x8
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_49FDBDF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49FDBDF = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_114;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB07E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49FB07E = 1;
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
                                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    if ( !this )
      goto LABEL_114;
    progressData->fields.NextPoint = (int64_t)this->fields.datas;
    v16 = v3->fields.progressData;
    if ( !v16 )
      goto LABEL_114;
    v16->fields.OldTotalPoint = v16->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, v15);
    v18 = v3->fields.progressData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_114;
      v18->fields.IsFreeQuestClear = 1;
    }
    else if ( !v18 )
    {
      goto LABEL_114;
    }
    if ( v18->fields.OldTotalPoint >= v18->fields.NextPoint && v18->fields.IsFreeQuestClear )
      v18->fields.IsReleaseScenarioAnimEnd = 1;
    EventInfoPointRiverProgressControl__SaveAllData(v3, v17);
  }
  v19 = v3->fields.progressData;
  if ( !v19 )
    goto LABEL_114;
  progressRiver = v3->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_114;
  v21 = v19->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v21 >= progressRiver->max_length )
    goto LABEL_115;
  v22 = v3->fields.eventUiEntity;
  if ( !v22 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[v21];
  if ( !this )
    goto LABEL_114;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    v19,
    v22->fields.eventId,
    v11);
  v24 = v3->fields.progressData;
  if ( !v24 )
    goto LABEL_114;
  totalPointLabel = v3->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_114;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v24->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, v23);
  v26 = v3->fields.totalPointLabel;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_114;
  }
  else
  {
    v27 = v3->fields.progressData;
    if ( !v27 || !v26 )
      goto LABEL_114;
    v26->fields._oldTotalPoint_k__BackingField = v27->fields.TotalPoint;
  }
  ((void (__fastcall *)(struct EventInfoUserEventPointControl_o *, struct EventUiValueEntity_array *, Il2CppMethodPointer))v26->klass->vtable._5_Setup.method)(
    v26,
    v3->fields.eventUiValueEntityList,
    v26->klass->vtable._6_SetValue.methodPtr);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v28) )
  {
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_114;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v29) )
    goto LABEL_118;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB07E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v30);
    byte_49FB07E = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(this[1].klass->vtable._10_Redisplay.method) )
    goto LABEL_118;
  v32 = v3->fields.progressData;
  if ( !v32 )
    goto LABEL_114;
  if ( v32->fields.IsOpenFirstRiver )
  {
LABEL_118:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, v30) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB07E )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v33);
        byte_49FB07E = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !BYTE2(this[1].klass->vtable._10_Redisplay.method) )
      {
        v34 = v3->fields.progressData;
        if ( !v34 )
          goto LABEL_114;
        v34->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v3, v33);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v33) )
      goto LABEL_69;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB07E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v35);
      byte_49FB07E = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
    }
    if ( !v36->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v35);
      v44 = v3->fields.progressData;
      if ( !v44 )
        goto LABEL_114;
      v44->fields.OldTotalPoint = v44->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v3, v43);
    }
    else
    {
LABEL_69:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v35) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
        if ( this )
        {
          EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v37);
          v39 = v3->fields.progressData;
          if ( v39 )
          {
            v40 = v3->fields.progressRiver;
            if ( v40 )
            {
              v41 = v39->fields.ReleaseScenarioIndex;
              if ( (unsigned int)v41 < v40->max_length )
              {
                this = (EventInfoPointRiverProgressControl_o *)v40->m_Items[v41];
                if ( !this )
                  goto LABEL_114;
                EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v38);
                goto LABEL_88;
              }
LABEL_115:
              sub_1B6432C(this, v19);
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
        v37);
      this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
      if ( this )
      {
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v45);
        v47 = v3->fields.eventUiEntity;
        if ( v47 )
        {
          this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
          if ( this )
          {
            EventInfoShipProgressDrawComponent__Setup(
              (EventInfoShipProgressDrawComponent_o *)this,
              v3,
              v47->fields.eventId,
              v3->fields.isChangeRiver,
              v46);
            v49 = v3->fields.progressData;
            if ( v49 )
            {
              v50 = v3->fields.progressRiver;
              if ( v50 )
              {
                v51 = v49->fields.ReleaseScenarioIndex;
                if ( (unsigned int)v51 >= v50->max_length )
                  goto LABEL_115;
                this = (EventInfoPointRiverProgressControl_o *)v50->m_Items[v51];
                if ( this )
                {
                  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v48);
                  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
                  if ( this )
                  {
                    EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v52);
LABEL_88:
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_49F9AC8 )
                    {
                      sub_1B640C8(&TerminalPramsManager_TypeInfo, v42);
                      byte_49F9AC8 = 1;
                    }
                    v53 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v53 = TerminalPramsManager_TypeInfo;
                    }
                    v53->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
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
    sub_1B64324(this);
  }
  if ( !this[1].fields.playType )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_49F9AC8 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v30);
    byte_49F9AC8 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[1].klass->vtable._10_Redisplay.method) = 0;
  v54 = v3->fields.eventUiEntity;
  if ( !v54 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_114;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3,
    v54->fields.eventId,
    1,
    v31);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v55);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v56);
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
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
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
    v63.fields.x = x;
    v63.fields.y = y;
    v63.fields.z = z;
    EventInfoUISlideAnimation__SetAfterActionAndInPosition(
      (EventInfoUISlideAnimation_o *)Component_object,
      0LL,
      v63,
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
  EventInfoPointRiverProgressControl__PlayAnim_d__26_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventInfoPointRiverProgressControl_o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *callback; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  System_Collections_IEnumerator_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v31; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v35; // x19
  System_Action_o *v36; // x21
  const MethodInfo *v37; // x3
  bool v38; // w2
  EventInfoRiverProgressDrawComponent_o *v39; // x0
  System_Action_o *v40; // x1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  System_Collections_IEnumerator_o *v43; // x0
  __int64 v44; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v45; // x9
  struct EventInfoRiverProgressDrawComponent_array *v46; // x8
  __int64 v47; // x9
  Il2CppObject *v48; // x22
  EventInfoRiverProgressDrawComponent_o *v49; // x19
  System_Action_o *v50; // x21
  System_Collections_IEnumerator_o *v51; // x0
  const MethodInfo *v52; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v53; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v54; // x8
  const MethodInfo *v55; // x2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v56; // x8

  v3 = this;
  if ( (byte_49FDBF3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__, v4);
    sub_1B640C8(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__, v5);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_1B640C8(
                                                                     &EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo,
                                                                     v6);
    byte_49FDBF3 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
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
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v23);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v25);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, v26);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
        if ( !this )
          goto LABEL_42;
        v28 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
                (EventInfoShipProgressDrawComponent_o *)this,
                1,
                0,
                v27);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                         v28,
                                                                         0LL);
        v31 = _4__this->fields.progressData;
        if ( !v31 )
          goto LABEL_42;
        progressRiver = _4__this->fields.progressRiver;
        if ( !progressRiver )
          goto LABEL_42;
        ReleaseScenarioIndex = v31->fields.ReleaseScenarioIndex;
        if ( (unsigned int)ReleaseScenarioIndex < progressRiver->max_length )
        {
          _8__1 = (Il2CppObject *)v3->fields.__8__1;
          v35 = progressRiver->m_Items[ReleaseScenarioIndex];
          v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
          System_Action___ctor(
            v36,
            _8__1,
            Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
            0LL);
          if ( !v35 )
            goto LABEL_42;
          v38 = 1;
          v39 = v35;
          v40 = v36;
LABEL_33:
          v51 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v39, v40, v38, v37);
          UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v51, 0LL);
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
      v56 = v3->fields.__8__1;
      if ( !v56 )
        goto LABEL_42;
      EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v56->fields.callback, v55);
      return 0;
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, v22) )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
      if ( !this )
        goto LABEL_42;
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
      v53 = _4__this->fields.progressData;
      if ( !v53 )
        goto LABEL_42;
      v53->fields.OldTotalPoint = v53->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(_4__this, v52);
      v54 = v3->fields.__8__1;
      if ( !v54 )
        goto LABEL_42;
      ActionExtensions__Call(v54->fields.callback, 0LL);
      return 0;
    }
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_42;
    EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, v41);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
    if ( !this )
      goto LABEL_42;
    v43 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
            (EventInfoShipProgressDrawComponent_o *)this,
            0,
            0,
            v42);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                     v43,
                                                                     0LL);
    v45 = _4__this->fields.progressData;
    if ( !v45 )
      goto LABEL_42;
    v46 = _4__this->fields.progressRiver;
    if ( !v46 )
      goto LABEL_42;
    v47 = v45->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v47 < v46->max_length )
    {
      v48 = (Il2CppObject *)v3->fields.__8__1;
      v49 = v46->m_Items[v47];
      v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v44);
      System_Action___ctor(
        v50,
        v48,
        Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
        0LL);
      if ( !v49 )
        goto LABEL_42;
      v39 = v49;
      v40 = v50;
      v38 = 0;
      goto LABEL_33;
    }
LABEL_43:
    sub_1B6432C(this, v29);
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v8 = (Il2CppObject *)sub_1B64314(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo, method, v2);
    System_Object___ctor(v8, 0LL);
    v3->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, (int32_t)v8, v9, v10);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v3->fields.__8__1;
    if ( this )
    {
      v13 = v3->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v13, v11, v12);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v3->fields.__8__1;
      if ( this )
      {
        callback = (Il2CppObject *)v3->fields.callback;
        this->fields.__2__current = callback;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)callback, v14, v15);
        v3->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
        sub_1B6406C(p__2__current, 0, v18, v19);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
    }
LABEL_42:
    sub_1B64324(this);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
    sub_1B64324(_4__this);
  progressData->fields.IsOpenFirstRiver = 1;
  EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  const MethodInfo *v5; // x2
  struct EventInfoPointRiverProgressControl_o *v6; // x8
  const MethodInfo *v7; // x3
  struct EventInfoPointRiverProgressControl_o *v8; // x20
  System_Collections_IEnumerator_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  UnityEngine_MonoBehaviour_o *v13; // x20
  UnityEngine_MonoBehaviour_c *klass; // x9
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 name_high; // x9
  EventInfoRiverProgressDrawComponent_o *v17; // x21
  System_Action_o *_9__2; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_IEnumerator_o *v21; // x0

  if ( (byte_49FDBF0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__, v3);
    byte_49FDBF0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoPointRiverProgressControl__SetNextRiverProgressData(_4__this, method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v6->fields.releaseTermsObject;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, v5);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v8->fields.progressShip;
  if ( !_4__this )
    goto LABEL_16;
  v9 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
         (EventInfoShipProgressDrawComponent_o *)_4__this,
         1,
         1,
         v7);
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                       (UnityEngine_MonoBehaviour_o *)v8,
                                                       v9,
                                                       0LL);
  v13 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v13 )
    goto LABEL_16;
  klass = v13[5].klass;
  if ( !klass )
    goto LABEL_16;
  m_CancellationTokenSource = v13[2].fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_16;
  name_high = SHIDWORD(klass->_1.name);
  if ( (unsigned int)name_high >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
    sub_1B6432C(_4__this, v10);
  v17 = (EventInfoRiverProgressDrawComponent_o *)*((_QWORD *)&m_CancellationTokenSource->fields._state + name_high);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v19, v20);
  }
  if ( !v17 )
LABEL_16:
    sub_1B64324(_4__this);
  v21 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v17, _9__2, 1, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(v13, v21, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_o *v4; // x8
  const MethodInfo *v5; // x1
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_c *klass; // x8

  v2 = this;
  if ( (byte_49FDBF1 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_1B640C8(
                                                                           &Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
                                                                           method);
    byte_49FDBF1 = 1;
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
        EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, v5),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_1B64324(this);
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
  __int64 v5; // x1
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct EventInfoPointRiverProgressControl_o *v10; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x9
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_ProgressData_o *v13; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v15; // x9
  EventInfoRiverProgressDrawComponent_o *v16; // x20
  System_Action_o *_9__1; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  struct EventInfoReleaseEventPointControl_o *releaseTermsObject; // x8
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  struct EventInfoPointRiverProgressControl_o *v23; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x9
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_c *klass; // x8
  struct EventInfoPointRiverProgressControl_o *v26; // x8

  v3 = this;
  if ( (byte_49FDBF2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&EventInfoPointRiverProgressControl_TypeInfo, v4);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)sub_1B640C8(
                                                                           &Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
                                                                           v5);
    byte_49FDBF2 = 1;
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
    v10 = v3->fields.__4__this;
    if ( !v10 )
      goto LABEL_33;
    v11 = v10->fields.progressData;
    if ( !v11 )
      goto LABEL_33;
    ReleaseScenarioIndex = v11->fields.ReleaseScenarioIndex;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v10 = v3->fields.__4__this;
      if ( !v10 )
        goto LABEL_33;
    }
    if ( ReleaseScenarioIndex >= EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      releaseTermsObject = v10->fields.releaseTermsObject;
      if ( !releaseTermsObject )
        goto LABEL_33;
      EventInfoReleaseEventPointControl__PlaySe(
        (EventInfoReleaseEventPointControl_o *)this,
        releaseTermsObject->fields.releaseScenarioCheckSE,
        v9);
    }
    else
    {
      v13 = v10->fields.progressData;
      if ( !v13 )
        goto LABEL_33;
      progressRiver = v10->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_33;
      v15 = v13->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v15 >= progressRiver->max_length )
        sub_1B6432C(this, v8);
      v16 = progressRiver->m_Items[v15];
      _9__1 = v3->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0LL);
        v3->fields.__9__1 = _9__1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v18, v19);
      }
      if ( !v16 )
        goto LABEL_33;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v16, _9__1, v9);
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
    sub_1B64324(this);
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
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, v21);
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
    sub_1B64324(_4__this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}