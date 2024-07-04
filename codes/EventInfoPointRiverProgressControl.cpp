void __fastcall EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_48E400D & 1) == 0 )
  {
    sub_1B00CCC(&EventInfoPointRiverProgressControl_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_8322/*"LineProgressData_"*/, v4);
    byte_48E400D = 1;
  }
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_8322/*"LineProgressData_"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields,
    StringLiteral_8322/*"LineProgressData_"*/,
    v2,
    v3);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void __fastcall EventInfoPointRiverProgressControl___ctor(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48E400C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v3);
    byte_48E400C = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.baseQuestReleaseEntList, (int32_t)v4, v5, v6);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.progressData, (int32_t)ProgressData, v12, v13);
}


void __fastcall EventInfoPointRiverProgressControl__ApplyProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1B00F28(this, method);
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
  if ( (byte_48E3FFA & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B00CCC(&DataManager_TypeInfo, v3);
    byte_48E3FFA = 1;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    sub_1B00F28(this, method);
  v5 = -1;
  do
    ++v5;
  while ( v5 < (signed int)progressRiver->max_length );
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.userEventPointMaster, (int32_t)Master_object, v7, v8);
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

  if ( (byte_48E400B & 1) == 0 )
  {
    sub_1B00CCC(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id);
    byte_48E400B = 1;
  }
  v17 = sub_1B00F18(EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1B00F28(v18, v19);
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
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x10
  int32_t v28; // w2
  __int64 v29; // x1
  EventInfoPointRiverProgressControl_c *v30; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v32; // x1
  System_String_o *v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  EventDetailEntity_o *v38; // [xsp+0h] [xbp-60h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_48E4008 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B00CCC(&DataManager_TypeInfo, v4);
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B00CCC(&EventEntity_TypeInfo, v6);
    sub_1B00CCC(&EventInfoPointRiverProgressControl_TypeInfo, v7);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v8);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_48E4008 = 1;
  }
  v39 = 0;
  v38 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventDetailMaster___),
        !klass) )
  {
    sub_1B00F28(Master_object, v12);
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B00F28(0LL, v15);
  while ( 1 )
  {
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_12;
      }
      p_method = (__int64)&v17->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_19:
      v24 = sub_1B52CAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
      {
        v28 = v25[4];
        v39 = v28;
        if ( !v14 )
          sub_1B00F28(v25, v26);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v14,
               (Il2CppObject **)&v38,
               v28,
               (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !v38 )
            sub_1B00F28(0LL, v29);
          if ( EventDetailEntity__IsEventRiverProgress(v38, 0LL) )
          {
            v30 = EventInfoPointRiverProgressControl_TypeInfo;
            if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
              v30 = EventInfoPointRiverProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v30->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
            v32 = System_Int32__ToString((int32_t)&v39, 0LL);
            v33 = System_String__Concat_60325748(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v32, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v33, 0LL);
          }
        }
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_35;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_35:
    v37 = sub_1B52CAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
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

  if ( (byte_48E4007 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_48E4007 = 1;
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
  if ( (byte_48E4009 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1B00CCC(&EventInfoPointRiverProgressControl_TypeInfo, method);
    byte_48E4009 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1B00F28(this, method);
  v4 = EventInfoPointRiverProgressControl_TypeInfo;
  eventId = eventUiEntity->fields.eventId;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v4 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v4->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_60325748(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0LL);
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

  if ( (byte_48E3FFB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__, entity);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v6);
    sub_1B00CCC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    byte_48E3FFB = 1;
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, v9, v10);
    eventId = entity->fields.eventId;
    if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0LL);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p_baseQuestReleaseEntList, (int32_t)QuestReleaseList, v14, v15);
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
                                                                         (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !totalPointLabel )
          break;
        if ( !*p_baseQuestReleaseEntList )
          break;
        syncRoot = totalPointLabel->fields._syncRoot;
        totalPointLabel = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList,
                                                                         v17,
                                                                         (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
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
            (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        if ( v18 < 2 )
          return;
        totalPointLabel = (System_Collections_Generic_List_object__o *)*p_baseQuestReleaseEntList;
        --v17;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_18:
      sub_1B00F28(totalPointLabel, entity);
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
  if ( (byte_48E4002 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v3);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B00CCC(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v4);
    byte_48E4002 = 1;
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
                                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
  if ( !this )
LABEL_13:
    sub_1B00F28(this, method);
  m_CachedPtr = this->fields.m_CachedPtr;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_36399468(m_CachedPtr, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_48E4004 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, method);
    byte_48E4004 = 1;
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

  if ( (byte_48E4003 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, method);
    byte_48E4003 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_36399468(endScenarioQuestId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_48E4001 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, method);
    byte_48E4001 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_36399468(firstRiverReleaseQuestId, -1, 0, 0LL);
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
    sub_1B00F28(this, *(_QWORD *)&type);
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(this, method);
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
  __int64 v33; // x1
  int32_t klass; // w25
  _BOOL8 IsQuestClear_36399468; // x0
  __int64 v36; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  EventInfoPointRiverProgressControl_ProgressData_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x3
  int v43; // w8
  int64_t v44; // x25
  int v45; // w26
  int32_t v46; // w21
  int32_t v47; // w22
  const MethodInfo *v48; // x3
  int64_t UserEventPoint; // x20
  int64_t v50; // x23
  int64_t v51; // x24
  int32_t v52; // w27
  bool v53; // cc
  int32_t v54; // w26
  int32_t v55; // w25
  bool v56; // w27
  bool v57; // w26
  _BOOL8 v58; // x0
  EventInfoPointRiverProgressControl_ProgressData_o *ProgressData; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *v62; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_48E4006 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&System_Convert_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v8);
    sub_1B00CCC(&EventInfoPointRiverProgressControl_TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v12);
    sub_1B00CCC(&StringLiteral_1/*""*/, v13);
    byte_48E4006 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  this->fields.progressData = 0LL;
  p_progressData = (ServantStatusBattleListViewItem_o *)&this->fields.progressData;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.progressData, 0, (int32_t)method, v3);
  v15 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v15 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v15->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v17 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v18 = System_String__Concat_60325748(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v17, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !String || (IsNullOrEmpty = (int64_t)System_String__Split(String, 0x3Au, 0, 0LL)) == 0 )
LABEL_58:
      sub_1B00F28(IsNullOrEmpty, v21);
    v43 = *(_DWORD *)(IsNullOrEmpty + 24);
    v44 = IsNullOrEmpty;
    if ( v43 < 1 )
    {
      v46 = 0;
    }
    else
    {
      v45 = v43 & ~(v43 >> 31);
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
      v46 = IsNullOrEmpty;
      if ( v45 >= 2 )
      {
        if ( *(_DWORD *)(v44 + 24) <= 1u )
          goto LABEL_59;
        v47 = System_Int32__Parse(*(System_String_o **)(v44 + 40), 0LL);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v46, v48);
        UserEventPoint = IsNullOrEmpty;
        if ( v45 >= 3 )
        {
          if ( *(_DWORD *)(v44 + 24) <= 2u )
            goto LABEL_59;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v44 + 48), 0LL);
          v50 = IsNullOrEmpty;
          if ( v45 < 4 )
          {
            v54 = 0;
            v51 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v44 + 24) <= 3u )
              goto LABEL_59;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v44 + 56), 0LL);
            v51 = IsNullOrEmpty;
            if ( v45 >= 5 )
            {
              if ( *(_DWORD *)(v44 + 24) <= 4u )
                goto LABEL_59;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v44 + 64), 0LL);
              v52 = IsNullOrEmpty;
              if ( v45 < 6 )
              {
                v54 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v44 + 24) <= 5u )
                  goto LABEL_59;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v44 + 72), 0LL);
                v53 = v45 < 7;
                v54 = IsNullOrEmpty;
                if ( !v53 )
                {
                  if ( *(_DWORD *)(v44 + 24) <= 6u )
                    goto LABEL_59;
                  v55 = System_Int32__Parse(*(System_String_o **)(v44 + 80), 0LL);
                  goto LABEL_50;
                }
              }
LABEL_49:
              v55 = 0;
LABEL_50:
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v56 = System_Convert__ToBoolean_60973840(v52, 0LL);
              v57 = System_Convert__ToBoolean_60973840(v54, 0LL);
              v58 = System_Convert__ToBoolean_60973840(v55, 0LL);
              ProgressData = EventInfoPointRiverProgressControl__CreateProgressData(
                               (EventInfoPointRiverProgressControl_o *)v58,
                               v46,
                               v47,
                               UserEventPoint,
                               v50,
                               v51,
                               v56,
                               v57,
                               v58,
                               v62);
              p_progressData->klass = (ServantStatusBattleListViewItem_c *)ProgressData;
              sub_1B00C70(p_progressData, (int32_t)ProgressData, v60, v61);
              return;
            }
            v54 = 0;
          }
LABEL_48:
          v52 = 0;
          goto LABEL_49;
        }
        v54 = 0;
        v51 = 0LL;
LABEL_47:
        v50 = 0LL;
        goto LABEL_48;
      }
    }
    UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, eventIda, v46, v42);
    v54 = 0;
    v51 = 0LL;
    v47 = 0;
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v63,
          (System_Collections_Generic_List_object__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v31 = 0;
        v64 = v63;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v64,
                  (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v32 )
            break;
          if ( !v64.fields._current )
            sub_1B00F28(v32, v33);
          klass = (int32_t)v64.fields._current[1].klass;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_36399468 = CondType__IsQuestClear_36399468(klass, -1, 0, 0LL);
          if ( !IsQuestClear_36399468 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v31;
          if ( !baseQuestReleaseEntList )
            sub_1B00F28(IsQuestClear_36399468, v36);
          size = baseQuestReleaseEntList->fields._size;
          if ( v31 >= size )
            v31 = size - 1;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v64,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        IsNullOrEmpty = (int64_t)this->fields.baseQuestReleaseEntList;
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                                   v31,
                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v39 = EventInfoPointRiverProgressControl__CreateProgressData(
                (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                v26,
                v31,
                v28,
                v28,
                *(_QWORD *)(IsNullOrEmpty + 32),
                v30 & (v28 >= *(_QWORD *)(IsNullOrEmpty + 32)),
                0,
                v30 & 1,
                v62);
        p_progressData->klass = (ServantStatusBattleListViewItem_c *)v39;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.progressData, (int32_t)v39, v40, v41);
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v24 >= max_length )
        return;
    }
LABEL_59:
    sub_1B00F30(IsNullOrEmpty, v21);
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
  if ( (byte_48E3FFE & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_1B00CCC(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__,
                                                     *(_QWORD *)&type);
    byte_48E3FFE = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_1B00F28(this, *(_QWORD *)&type);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_39876804(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)v6, v8, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoPointRiverProgressControl__PlayAnim_39876804(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E3FFF & 1) == 0 )
  {
    sub_1B00CCC(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, callback);
    byte_48E3FFF = 1;
  }
  v5 = sub_1B00F18(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_48E4000 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__, v5);
    sub_1B00CCC(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, v6);
    byte_48E4000 = 1;
  }
  v7 = sub_1B00F18(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 24) = callback,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13),
        progressShip = this->fields.progressShip,
        v15 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v7,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0LL),
        !progressShip) )
  {
    sub_1B00F28(v8, v9);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v15, v16);
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
    sub_1B00F28(this, method);
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
  __int64 v9; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x8
  System_String_o *v12; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v13; // x8
  System_String_o *v14; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x8
  System_String_o *v16; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8
  _BOOL4 IsReleaseScenarioAnimEnd; // w22
  System_String_o *v19; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v20; // x8
  System_String_o *v21; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  System_String_o *v23; // x0
  EventInfoPointRiverProgressControl_c *v24; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  System_String_o *v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF
  __int64 v30; // [xsp+10h] [xbp-50h] BYREF
  int64_t NextPoint; // [xsp+18h] [xbp-48h] BYREF
  int64_t OldTotalPoint; // [xsp+20h] [xbp-40h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t Id; // [xsp+38h] [xbp-28h] BYREF
  int32_t v35; // [xsp+3Ch] [xbp-24h] BYREF

  v35 = eventId;
  if ( (byte_48E400A & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, *(_QWORD *)&eventId);
    sub_1B00CCC(&EventInfoPointRiverProgressControl_TypeInfo, v4);
    sub_1B00CCC(&System_Text_StringBuilder_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_1540/*":"*/, v6);
    byte_48E400A = 1;
  }
  ReleaseScenarioIndex = 0;
  NextPoint = 0LL;
  OldTotalPoint = 0LL;
  v30 = 0LL;
  v29 = 0;
  v7 = (System_Text_StringBuilder_o *)sub_1B00F18(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v7, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v7 )
    goto LABEL_16;
  System_Text_StringBuilder__Append_59487644(v7, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_59487644(
                                  v7,
                                  (System_String_o *)StringLiteral_1540/*":"*/,
                                  0LL);
  v11 = this->fields.progressData;
  if ( !v11 )
    goto LABEL_16;
  ReleaseScenarioIndex = v11->fields.ReleaseScenarioIndex;
  v12 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0LL);
  System_Text_StringBuilder__Append_59487644(v7, v12, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_59487644(
                                  v7,
                                  (System_String_o *)StringLiteral_1540/*":"*/,
                                  0LL);
  v13 = this->fields.progressData;
  if ( !v13 )
    goto LABEL_16;
  OldTotalPoint = v13->fields.OldTotalPoint;
  v14 = System_Int64__ToString((int64_t)&OldTotalPoint, 0LL);
  System_Text_StringBuilder__Append_59487644(v7, v14, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_59487644(
                                  v7,
                                  (System_String_o *)StringLiteral_1540/*":"*/,
                                  0LL);
  v15 = this->fields.progressData;
  if ( !v15 )
    goto LABEL_16;
  NextPoint = v15->fields.NextPoint;
  v16 = System_Int64__ToString((int64_t)&NextPoint, 0LL);
  System_Text_StringBuilder__Append_59487644(v7, v16, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_59487644(
                                  v7,
                                  (System_String_o *)StringLiteral_1540/*":"*/,
                                  0LL);
  v17 = this->fields.progressData;
  if ( !v17 )
    goto LABEL_16;
  IsReleaseScenarioAnimEnd = v17->fields.IsReleaseScenarioAnimEnd;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  HIDWORD(v30) = System_Convert__ToInt32_60947944(IsReleaseScenarioAnimEnd, 0LL);
  v19 = System_Int32__ToString((int32_t)&v30 + 4, 0LL);
  System_Text_StringBuilder__Append_59487644(v7, v19, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_59487644(
                                  v7,
                                  (System_String_o *)StringLiteral_1540/*":"*/,
                                  0LL);
  v20 = this->fields.progressData;
  if ( !v20
    || (LODWORD(v30) = System_Convert__ToInt32_60947944(v20->fields.IsOpenFirstRiver, 0LL),
        v21 = System_Int32__ToString((int32_t)&v30, 0LL),
        System_Text_StringBuilder__Append_59487644(v7, v21, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_59487644(
                                        v7,
                                        (System_String_o *)StringLiteral_1540/*":"*/,
                                        0LL),
        (v22 = this->fields.progressData) == 0LL) )
  {
LABEL_16:
    sub_1B00F28(appended, v9);
  }
  v29 = System_Convert__ToInt32_60947944(v22->fields.IsFreeQuestClear, 0LL);
  v23 = System_Int32__ToString((int32_t)&v29, 0LL);
  System_Text_StringBuilder__Append_59487644(v7, v23, 0LL);
  v24 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v24 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v24->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v26 = System_Int32__ToString((int32_t)&v35, 0LL);
  v27 = System_String__Concat_60325748(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v26, 0LL);
  v28 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                             v7,
                             v7->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v27, v28, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1B00F28(0LL, isActive);
  UnityEngine_GameObject__SetActive(maskPanel, isActive, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetNextRiverProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  __int64 v3; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v5; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v6; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x9
  __int64 ReleaseScenarioIndex; // x8
  const MethodInfo *v9; // x3
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
  if ( (byte_48E4005 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, method);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B00CCC(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v3);
    byte_48E4005 = 1;
  }
  progressData = v2->fields.progressData;
  v2->fields.isChangeRiver = 1;
  if ( !progressData )
    goto LABEL_34;
  progressData->fields.IsReleaseScenarioAnimEnd = 0;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v2, method);
  v6 = v2->fields.progressData;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_34;
  }
  else
  {
    if ( !v6 )
      goto LABEL_34;
    v6->fields.IsFreeQuestClear = 0;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_34;
  ReleaseScenarioIndex = v6->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressRiver->max_length )
    goto LABEL_35;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[ReleaseScenarioIndex];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v5);
  method = (const MethodInfo *)v2->fields.progressData;
  if ( !method )
    goto LABEL_34;
  v10 = HIDWORD(method->invoker_method) + 1;
  HIDWORD(method->invoker_method) = v10;
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_34;
  size = baseQuestReleaseEntList->fields._size;
  if ( v10 >= size )
  {
    v10 = size - 1;
    HIDWORD(method->invoker_method) = size - 1;
  }
  v13 = v2->fields.progressRiver;
  if ( !v13 )
    goto LABEL_34;
  if ( v10 >= v13->max_length )
    goto LABEL_35;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v13->m_Items[v10];
  if ( !this )
    goto LABEL_34;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    eventUiEntity->fields.eventId,
    v9);
  v16 = v2->fields.progressData;
  if ( !v16 )
    goto LABEL_34;
  v17 = v2->fields.progressRiver;
  if ( !v17 )
    goto LABEL_34;
  v18 = v16->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v18 >= v17->max_length )
LABEL_35:
    sub_1B00F30(this, method);
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
                                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
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
        (v23 = v2->fields.progressData) == 0LL) )
  {
LABEL_34:
    sub_1B00F28(this, method);
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

  if ( (byte_48E3FFC & 1) == 0 )
  {
    sub_1B00CCC(&NGUITools_TypeInfo, entities);
    sub_1B00CCC(&StringLiteral_1466/*"2DUI"*/, v5);
    byte_48E3FFC = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v7 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1466/*"2DUI"*/, 0LL);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v7, 0LL);
    this->fields.eventUiValueEntityList = entities;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entities, v8, v9);
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
  const MethodInfo *v10; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x22
  int32_t ReleaseScenarioIndex; // w1
  int32_t m_CancellationTokenSource; // w8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v14; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 invoker_method_high; // x9
  struct EventUiEntity_o *v18; // x10
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoUserEventPointControl_o *v21; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x9
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v26; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x8
  const MethodInfo *v28; // x1
  TerminalPramsManager_c *v29; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x9
  struct EventInfoRiverProgressDrawComponent_array *v33; // x8
  __int64 v34; // x9
  __int64 v35; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v36; // x8
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x4
  struct EventUiEntity_o *v39; // x8
  const MethodInfo *v40; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v41; // x9
  struct EventInfoRiverProgressDrawComponent_array *v42; // x8
  __int64 v43; // x9
  const MethodInfo *v44; // x2
  TerminalPramsManager_c *v45; // x0
  struct EventUiEntity_o *v46; // x8
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_48E3FFD & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    this = (EventInfoPointRiverProgressControl_o *)sub_1B00CCC(&TerminalPramsManager_TypeInfo, v8);
    byte_48E3FFD = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_114;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48E14D8 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    byte_48E14D8 = 1;
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
                                                     (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    if ( !this )
      goto LABEL_114;
    progressData->fields.NextPoint = (int64_t)this->fields.datas;
    v14 = v3->fields.progressData;
    if ( !v14 )
      goto LABEL_114;
    v14->fields.OldTotalPoint = v14->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
    v15 = v3->fields.progressData;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_114;
      v15->fields.IsFreeQuestClear = 1;
    }
    else if ( !v15 )
    {
      goto LABEL_114;
    }
    if ( v15->fields.OldTotalPoint >= v15->fields.NextPoint && v15->fields.IsFreeQuestClear )
      v15->fields.IsReleaseScenarioAnimEnd = 1;
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
  v18 = v3->fields.eventUiEntity;
  if ( !v18 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[invoker_method_high];
  if ( !this )
    goto LABEL_114;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    v18->fields.eventId,
    v10);
  v19 = v3->fields.progressData;
  if ( !v19 )
    goto LABEL_114;
  totalPointLabel = v3->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_114;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v19->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
  v21 = v3->fields.totalPointLabel;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_114;
  }
  else
  {
    v22 = v3->fields.progressData;
    if ( !v22 || !v21 )
      goto LABEL_114;
    v21->fields._oldTotalPoint_k__BackingField = v22->fields.TotalPoint;
  }
  ((void (__fastcall *)(struct EventInfoUserEventPointControl_o *, struct EventUiValueEntity_array *, Il2CppMethodPointer))v21->klass->vtable._5_Setup.method)(
    v21,
    v3->fields.eventUiValueEntityList,
    v21->klass->vtable._6_SetValue.methodPtr);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v23) )
  {
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_114;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v24) )
    goto LABEL_118;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48E14D8 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    byte_48E14D8 = 1;
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
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, method) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_48E14D8 )
      {
        sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
        byte_48E14D8 = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) )
      {
        v27 = v3->fields.progressData;
        if ( !v27 )
          goto LABEL_114;
        v27->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v3, method);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, method) )
      goto LABEL_69;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_48E14D8 )
    {
      sub_1B00CCC(&TerminalPramsManager_TypeInfo, v28);
      byte_48E14D8 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    if ( !v29->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v28);
      v36 = v3->fields.progressData;
      if ( !v36 )
        goto LABEL_114;
      v36->fields.OldTotalPoint = v36->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v3, method);
    }
    else
    {
LABEL_69:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v28) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
        if ( this )
        {
          EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v30);
          v32 = v3->fields.progressData;
          if ( v32 )
          {
            v33 = v3->fields.progressRiver;
            if ( v33 )
            {
              v34 = v32->fields.ReleaseScenarioIndex;
              if ( (unsigned int)v34 < v33->max_length )
              {
                this = (EventInfoPointRiverProgressControl_o *)v33->m_Items[v34];
                if ( !this )
                  goto LABEL_114;
                EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v31);
                goto LABEL_88;
              }
LABEL_115:
              sub_1B00F30(this, method);
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
        v30);
      this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
      if ( this )
      {
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v37);
        v39 = v3->fields.eventUiEntity;
        if ( v39 )
        {
          this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
          if ( this )
          {
            EventInfoShipProgressDrawComponent__Setup(
              (EventInfoShipProgressDrawComponent_o *)this,
              v3,
              v39->fields.eventId,
              v3->fields.isChangeRiver,
              v38);
            v41 = v3->fields.progressData;
            if ( v41 )
            {
              v42 = v3->fields.progressRiver;
              if ( v42 )
              {
                v43 = v41->fields.ReleaseScenarioIndex;
                if ( (unsigned int)v43 >= v42->max_length )
                  goto LABEL_115;
                this = (EventInfoPointRiverProgressControl_o *)v42->m_Items[v43];
                if ( this )
                {
                  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v40);
                  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
                  if ( this )
                  {
                    EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v44);
LABEL_88:
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_48DFF81 )
                    {
                      sub_1B00CCC(&TerminalPramsManager_TypeInfo, v35);
                      byte_48DFF81 = 1;
                    }
                    v45 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v45 = TerminalPramsManager_TypeInfo;
                    }
                    v45->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
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
    sub_1B00F28(this, method);
  }
  if ( !this[1].fields.playType )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_48DFF81 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    byte_48DFF81 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(this[1].klass->vtable._10_Redisplay.methodPtr) = 0;
  v46 = v3->fields.eventUiEntity;
  if ( !v46 )
    goto LABEL_114;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_114;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3,
    v46->fields.eventId,
    1,
    v25);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v47);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_114;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v48);
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
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
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
    v55.fields.x = x;
    v55.fields.y = y;
    v55.fields.z = z;
    EventInfoUISlideAnimation__SetAfterActionAndInPosition(
      (EventInfoUISlideAnimation_o *)Component_object,
      0LL,
      v55,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  Il2CppObject *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct EventInfoPointRiverProgressControl_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *callback; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  const MethodInfo *v21; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v31; // x19
  System_Action_o *v32; // x21
  const MethodInfo *v33; // x3
  bool v34; // w2
  EventInfoRiverProgressDrawComponent_o *v35; // x0
  System_Action_o *v36; // x1
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  System_Collections_IEnumerator_o *v39; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v40; // x9
  struct EventInfoRiverProgressDrawComponent_array *v41; // x8
  __int64 v42; // x9
  Il2CppObject *v43; // x22
  EventInfoRiverProgressDrawComponent_o *v44; // x19
  System_Action_o *v45; // x21
  System_Collections_IEnumerator_o *v46; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v47; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v48; // x8
  const MethodInfo *v49; // x2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v50; // x8

  v2 = this;
  if ( (byte_48E4011 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__, v3);
    sub_1B00CCC(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__, v4);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_1B00CCC(
                                                                     &EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo,
                                                                     v5);
    byte_48E4011 = 1;
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
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v21);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v23);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_42;
        EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, v24);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
        if ( !this )
          goto LABEL_42;
        v26 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
                (EventInfoShipProgressDrawComponent_o *)this,
                1,
                0,
                v25);
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                                                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                         v26,
                                                                         0LL);
        v27 = _4__this->fields.progressData;
        if ( !v27 )
          goto LABEL_42;
        progressRiver = _4__this->fields.progressRiver;
        if ( !progressRiver )
          goto LABEL_42;
        ReleaseScenarioIndex = v27->fields.ReleaseScenarioIndex;
        if ( (unsigned int)ReleaseScenarioIndex < progressRiver->max_length )
        {
          _8__1 = (Il2CppObject *)v2->fields.__8__1;
          v31 = progressRiver->m_Items[ReleaseScenarioIndex];
          v32 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            _8__1,
            Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
            0LL);
          if ( !v31 )
            goto LABEL_42;
          v34 = 1;
          v35 = v31;
          v36 = v32;
LABEL_33:
          v46 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v35, v36, v34, v33);
          UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)_4__this, v46, 0LL);
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
      v50 = v2->fields.__8__1;
      if ( !v50 )
        goto LABEL_42;
      EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v50->fields.callback, v49);
      return 0;
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, method) )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
      if ( !this )
        goto LABEL_42;
      EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
      v47 = _4__this->fields.progressData;
      if ( !v47 )
        goto LABEL_42;
      v47->fields.OldTotalPoint = v47->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(_4__this, method);
      v48 = v2->fields.__8__1;
      if ( !v48 )
        goto LABEL_42;
      ActionExtensions__Call(v48->fields.callback, 0LL);
      return 0;
    }
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.maskPanel;
    if ( !this )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_42;
    EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, v37);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
    if ( !this )
      goto LABEL_42;
    v39 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
            (EventInfoShipProgressDrawComponent_o *)this,
            0,
            0,
            v38);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                                                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                     v39,
                                                                     0LL);
    v40 = _4__this->fields.progressData;
    if ( !v40 )
      goto LABEL_42;
    v41 = _4__this->fields.progressRiver;
    if ( !v41 )
      goto LABEL_42;
    v42 = v40->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v42 < v41->max_length )
    {
      v43 = (Il2CppObject *)v2->fields.__8__1;
      v44 = v41->m_Items[v42];
      v45 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(
        v45,
        v43,
        Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
        0LL);
      if ( !v44 )
        goto LABEL_42;
      v35 = v44;
      v36 = v45;
      v34 = 0;
      goto LABEL_33;
    }
LABEL_43:
    sub_1B00F30(this, method);
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v7 = (Il2CppObject *)sub_1B00F18(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor(v7, 0LL);
    v2->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v7, v8, v9);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
    if ( this )
    {
      v12 = v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v12;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v12, v10, v11);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
      if ( this )
      {
        callback = (Il2CppObject *)v2->fields.callback;
        this->fields.__2__current = callback;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)callback, v13, v14);
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B00C70(p__2__current, 0, v17, v18);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
    }
LABEL_42:
    sub_1B00F28(this, method);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
    sub_1B00F28(_4__this, method);
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
  const MethodInfo *v10; // x3
  UnityEngine_MonoBehaviour_o *v11; // x20
  UnityEngine_MonoBehaviour_c *klass; // x9
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  __int64 name_high; // x9
  EventInfoRiverProgressDrawComponent_o *v15; // x21
  System_Action_o *_9__2; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_IEnumerator_o *v19; // x0

  if ( (byte_48E400E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__, v3);
    byte_48E400E = 1;
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
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_68062928(
                                                       (UnityEngine_MonoBehaviour_o *)v8,
                                                       v9,
                                                       0LL);
  v11 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v11 )
    goto LABEL_16;
  klass = v11[5].klass;
  if ( !klass )
    goto LABEL_16;
  m_CancellationTokenSource = v11[2].fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_16;
  name_high = SHIDWORD(klass->_1.name);
  if ( (unsigned int)name_high >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
    sub_1B00F30(_4__this, method);
  v15 = (EventInfoRiverProgressDrawComponent_o *)*((_QWORD *)&m_CancellationTokenSource->fields._state + name_high);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v17, v18);
  }
  if ( !v15 )
LABEL_16:
    sub_1B00F28(_4__this, method);
  v19 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v15, _9__2, 1, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928(v11, v19, 0LL);
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
  if ( (byte_48E400F & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_1B00CCC(
                                                                           &Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
                                                                           method);
    byte_48E400F = 1;
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
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_11:
    sub_1B00F28(this, method);
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
  const MethodInfo *v8; // x2
  struct EventInfoPointRiverProgressControl_o *v9; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x9
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v14; // x9
  EventInfoRiverProgressDrawComponent_o *v15; // x20
  System_Action_o *_9__1; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  struct EventInfoReleaseEventPointControl_o *releaseTermsObject; // x8
  const MethodInfo *v20; // x2
  struct EventInfoPointRiverProgressControl_o *v21; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x9
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_c *klass; // x8
  struct EventInfoPointRiverProgressControl_o *v24; // x8

  v3 = this;
  if ( (byte_48E4010 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&EventInfoPointRiverProgressControl_TypeInfo, v4);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)sub_1B00CCC(
                                                                           &Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
                                                                           v5);
    byte_48E4010 = 1;
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
    v9 = v3->fields.__4__this;
    if ( !v9 )
      goto LABEL_33;
    v10 = v9->fields.progressData;
    if ( !v10 )
      goto LABEL_33;
    ReleaseScenarioIndex = v10->fields.ReleaseScenarioIndex;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v9 = v3->fields.__4__this;
      if ( !v9 )
        goto LABEL_33;
    }
    if ( ReleaseScenarioIndex >= EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      releaseTermsObject = v9->fields.releaseTermsObject;
      if ( !releaseTermsObject )
        goto LABEL_33;
      EventInfoReleaseEventPointControl__PlaySe(
        (EventInfoReleaseEventPointControl_o *)this,
        releaseTermsObject->fields.releaseScenarioCheckSE,
        v8);
    }
    else
    {
      v12 = v9->fields.progressData;
      if ( !v12 )
        goto LABEL_33;
      progressRiver = v9->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_33;
      v14 = v12->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v14 >= progressRiver->max_length )
        sub_1B00F30(this, method);
      v15 = progressRiver->m_Items[v14];
      _9__1 = v3->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0LL);
        v3->fields.__9__1 = _9__1;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v17, v18);
      }
      if ( !v15 )
        goto LABEL_33;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v15, _9__1, v8);
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
  v21 = v3->fields.__4__this;
  if ( !v21 || (v22 = v21->fields.progressData) == 0LL )
LABEL_33:
    sub_1B00F28(this, method);
  if ( !v22->fields.IsFreeQuestClear )
  {
    v22->fields.IsFreeQuestClear = 1;
    this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v21->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_33;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)this, 1, v20);
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
  v24 = v3->fields.__4__this;
  if ( !v24 )
    goto LABEL_33;
  v24->fields.isChangeRiver = 0;
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
    sub_1B00F28(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}