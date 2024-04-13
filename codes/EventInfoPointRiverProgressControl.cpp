void __fastcall EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E951B & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoPointRiverProgressControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_8617/*"LineProgressData_"*/, v8, v9, v10);
    byte_42E951B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_8617/*"LineProgressData_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8617/*"LineProgressData_"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void __fastcall EventInfoPointRiverProgressControl___ctor(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E951A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v5, v6, v7);
    byte_42E951A = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseQuestReleaseEntList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)ProgressData,
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
    sub_B5D69C(this, method);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void __fastcall EventInfoPointRiverProgressControl__Awake(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  int max_length; // w8
  int v10; // w9
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  v4 = this;
  if ( (byte_42E9508 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventPointMaster___, (_DWORD)method, v2, v3);
    this = (EventInfoPointRiverProgressControl_o *)sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E9508 = 1;
  }
  progressRiver = v4->fields.progressRiver;
  if ( !progressRiver )
    sub_B5D69C(this, method);
  max_length = progressRiver->max_length;
  v10 = -1;
  do
    ++v10;
  while ( v10 < max_length );
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v4->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.userEventPointMaster,
    Master_WarQuestSelectionMaster,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  EventInfoPointRiverProgressControl_ProgressData_o *v17; // x26
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42E9519 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo, id, releaseScenarioIndex, point);
    byte_42E9519 = 1;
  }
  v17 = (EventInfoPointRiverProgressControl_ProgressData_o *)sub_B5D694(EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
  EventInfoPointRiverProgressControl_ProgressData___ctor(v17, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v17->fields.IsReleaseScenarioAnimEnd = isScenarioRelease;
  v17->fields.Id = id;
  v17->fields.ReleaseScenarioIndex = releaseScenarioIndex;
  v17->fields.TotalPoint = point;
  v17->fields.OldTotalPoint = oldPoint;
  v17->fields.NextPoint = nextPoint;
  v17->fields.IsOpenFirstRiver = isOpenFirstRiver;
  v17->fields.IsFreeQuestClear = isFreeQuestClear;
  return v17;
}


void __fastcall EventInfoPointRiverProgressControl__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x3
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  _DWORD *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x10
  int32_t v50; // w2
  __int64 v51; // x1
  EventInfoPointRiverProgressControl_c *v52; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v54; // x1
  System_String_o *v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v61; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42E9516 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&EventEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&EventInfoPointRiverProgressControl_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v28, v29, v30);
    byte_42E9516 = 1;
  }
  v61 = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___),
        !list) )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v32);
  }
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v36);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_20:
      v46 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v42);
    }
    v47 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                      Enumerator,
                      *(_QWORD *)(v46 + 8));
    if ( v47 )
    {
      v49 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 300LL) >= (unsigned int)v49
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * v49 - 8) == EventEntity_TypeInfo )
      {
        v50 = v47[4];
        v61 = v50;
        if ( !v34 )
          sub_B5D69C(v47, v48);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v34,
               &entity,
               v50,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B5D69C(0LL, v51);
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v52 = EventInfoPointRiverProgressControl_TypeInfo;
            if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
              v52 = EventInfoPointRiverProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v52->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
            v54 = System_Int32__ToString((int32_t)&v61, 0LL);
            v55 = System_String__Concat_44577788(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v54, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v55, 0LL);
          }
        }
      }
    }
  }
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_37:
    v59 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v42);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
}


int64_t __fastcall EventInfoPointRiverProgressControl__GetUserEventPoint(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_42E9515 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, eventId, groupId, method);
    byte_42E9515 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__HasSaveData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl_o *v4; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoPointRiverProgressControl_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E9517 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_B5D5C4(
                                                     &EventInfoPointRiverProgressControl_TypeInfo,
                                                     (_DWORD)method,
                                                     v2,
                                                     v3);
    byte_42E9517 = 1;
  }
  eventId = 0;
  eventUiEntity = v4->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B5D69C(this, method);
  eventId = eventUiEntity->fields.eventId;
  v6 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v6 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v6->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v8 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v9 = System_String__Concat_44577788(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v8, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v9, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__Initialization(
        EventInfoPointRiverProgressControl_o *this,
        EventUiEntity_o *entity,
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
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v31; // x23
  int32_t size; // w8
  int v33; // w21
  int32_t v34; // w20
  QuestReleaseEntity_o *v35; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v36; // x24
  int64_t value; // x23
  QuestReleaseEntity_o *v38; // x8
  bool v39; // vf

  if ( (byte_42E9509 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__,
      (_DWORD)entity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v12, v13, v14);
    byte_42E9509 = 1;
  }
  if ( entity )
  {
    totalPointLabel = this->fields.totalPointLabel;
    if ( !totalPointLabel )
      goto LABEL_23;
    ((void (__fastcall *)(struct EventInfoUserEventPointControl_o *, EventUiEntity_o *, Il2CppMethodPointer))totalPointLabel->klass->vtable._4_Initialization.method)(
      totalPointLabel,
      entity,
      totalPointLabel->klass->vtable._5_Setup.methodPtr);
    this->fields.eventUiEntity = entity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
      (System_Int32_array **)entity,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    eventId = entity->fields.eventId;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    }
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0LL);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_baseQuestReleaseEntList,
      (System_Int32_array **)QuestReleaseList,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = *p_baseQuestReleaseEntList;
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_23;
    size = v31->fields._size;
    if ( size - 1 >= 1 )
    {
      v33 = size - 2;
      do
      {
        v34 = v33 + 1;
        if ( v31->fields._size <= (unsigned int)(v33 + 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v35 = v31->fields._items->m_Items[v34];
        if ( !v35 )
          break;
        v36 = *p_baseQuestReleaseEntList;
        if ( !*p_baseQuestReleaseEntList )
          break;
        value = v35->fields.value;
        if ( v36->fields._size <= (unsigned int)v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v38 = v36->fields._items->m_Items[v33];
        if ( !v38 )
          break;
        if ( value == v38->fields.value )
        {
          totalPointLabel = (struct EventInfoUserEventPointControl_o *)*p_baseQuestReleaseEntList;
          if ( !*p_baseQuestReleaseEntList )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)totalPointLabel,
            v34,
            (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        v39 = __OFSUB__(v33--, 1);
        if ( v33 < 0 != v39 )
          return;
        v31 = *p_baseQuestReleaseEntList;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_23:
      sub_B5D69C(totalPointLabel, entity);
    }
  }
}


bool __fastcall EventInfoPointRiverProgressControl__IsChangeRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x19
  unsigned int size; // w9
  __int64 ReleaseScenarioIndex; // x20
  QuestReleaseEntity_o *v15; // x8
  int32_t questId; // w19

  v4 = this;
  if ( (byte_42E9510 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v5, v6, v7);
    this = (EventInfoPointRiverProgressControl_o *)sub_B5D5C4(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v8,
                                                     v9,
                                                     v10);
    byte_42E9510 = 1;
  }
  progressData = v4->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  if ( !progressData->fields.IsReleaseScenarioAnimEnd )
    return 0;
  baseQuestReleaseEntList = v4->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_16;
  size = baseQuestReleaseEntList->fields._size;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( (int)ReleaseScenarioIndex >= (int)(size - 1) )
    return 0;
  if ( size <= (unsigned int)ReleaseScenarioIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v15 = baseQuestReleaseEntList->fields._items->m_Items[ReleaseScenarioIndex];
  if ( !v15 )
LABEL_16:
    sub_B5D69C(this, method);
  questId = v15->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(questId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_42E9512 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9512 = 1;
  }
  pointRiverProgressCommonNo = this->fields.pointRiverProgressCommonNo;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(212, pointRiverProgressCommonNo, 1LL, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsEndScenarioQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t endScenarioQuestId; // w19

  if ( (byte_42E9511 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9511 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(endScenarioQuestId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_42E950F & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E950F = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25877652(firstRiverReleaseQuestId, -1, 0, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&type);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return progressData->fields.TotalPoint >= progressData->fields.NextPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


void __fastcall EventInfoPointRiverProgressControl__LoadProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  EventInfoPointRiverProgressControl_c *v39; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  System_String_o *String; // x21
  __int64 IsNullOrEmpty; // x0
  __int64 v45; // x1
  struct EventUiValueEntity_array *eventUiValueEntityList; // x10
  int max_length; // w8
  unsigned int v48; // w27
  int v49; // w11
  EventUiValueEntity_o *v50; // x8
  int v51; // w26
  int32_t v52; // w21
  const MethodInfo *v53; // x3
  int64_t UserEventPoint; // x22
  const MethodInfo *v55; // x1
  char v56; // w23
  int32_t v57; // w24
  int32_t size; // w8
  _BOOL8 v59; // x0
  __int64 v60; // x1
  int32_t klass; // w25
  _BOOL8 IsQuestClear_25877652; // x0
  __int64 v63; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int v65; // w26
  int v66; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v67; // x25
  QuestReleaseEntity_o *v68; // x8
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  const MethodInfo *v76; // x3
  int v77; // w19
  __int64 v78; // x25
  int32_t v79; // w21
  int32_t v80; // w22
  int v81; // w23
  int64_t v82; // x20
  int v83; // w26
  bool v84; // cc
  int64_t v85; // x23
  int64_t v86; // x24
  int v87; // w19
  int32_t v88; // w26
  int32_t v89; // w27
  int32_t v90; // w25
  bool v91; // w26
  bool v92; // w27
  _BOOL8 v93; // x0
  System_Int32_array **ProgressData; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x0
  const MethodInfo *v102; // [xsp+8h] [xbp-B8h]
  struct EventUiValueEntity_array *v103; // [xsp+20h] [xbp-A0h]
  BattleServantConfConponent_o *p_progressData; // [xsp+28h] [xbp-98h]
  _BYTE v105[28]; // [xsp+30h] [xbp-90h] BYREF
  int v106; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v107; // [xsp+50h] [xbp-70h] BYREF
  int32_t v108; // [xsp+6Ch] [xbp-54h] BYREF

  v108 = eventId;
  if ( (byte_42E9514 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Convert_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v21, v22, v23);
    sub_B5D5C4(&EventInfoPointRiverProgressControl_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1/*""*/, v36, v37, v38);
    byte_42E9514 = 1;
  }
  memset(&v107, 0, sizeof(v107));
  v106 = 0;
  this->fields.progressData = 0LL;
  p_progressData = (BattleServantConfConponent_o *)&this->fields.progressData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v39 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v39 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v39->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v41 = System_Int32__ToString((int32_t)&v108, 0LL);
  v42 = System_String__Concat_44577788(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v41, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v42, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !IsNullOrEmpty )
      goto LABEL_78;
    v45 = IsNullOrEmpty;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
      goto LABEL_77;
    *(_WORD *)(IsNullOrEmpty + 32) = 58;
    if ( !String
      || (IsNullOrEmpty = (__int64)System_String__Split(String, (System_Char_array *)IsNullOrEmpty, 0LL)) == 0 )
    {
LABEL_78:
      sub_194F4C0(IsNullOrEmpty, v45);
    }
    v77 = *(_DWORD *)(IsNullOrEmpty + 24);
    v78 = IsNullOrEmpty;
    if ( v77 < 1 )
    {
      v79 = 0;
    }
    else
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
      v79 = IsNullOrEmpty;
      if ( v77 != 1 )
      {
        if ( *(_DWORD *)(v78 + 24) <= 1u )
          goto LABEL_77;
        v80 = System_Int32__Parse(*(System_String_o **)(v78 + 40), 0LL);
LABEL_46:
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, v108, v79, v76);
        if ( v77 <= 2 )
          v81 = 0;
        else
          v81 = v77;
        v82 = IsNullOrEmpty;
        if ( v77 < 3 )
        {
          v89 = 0;
          v86 = 0LL;
          v85 = 0LL;
        }
        else
        {
          if ( *(_DWORD *)(v78 + 24) <= 2u )
            goto LABEL_77;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v78 + 48), 0LL);
          if ( v81 <= 3 )
            v83 = 0;
          else
            v83 = v81;
          v84 = v81 < 4;
          v85 = IsNullOrEmpty;
          if ( v84 )
          {
            v89 = 0;
            v86 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v78 + 24) <= 3u )
              goto LABEL_77;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v78 + 56), 0LL);
            v86 = IsNullOrEmpty;
            if ( v83 <= 4 )
              v87 = 0;
            else
              v87 = v83;
            if ( v83 >= 5 )
            {
              if ( *(_DWORD *)(v78 + 24) <= 4u )
                goto LABEL_77;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v78 + 64), 0LL);
              v88 = IsNullOrEmpty;
              if ( v87 < 6 )
              {
                v89 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v78 + 24) <= 5u )
                  goto LABEL_77;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v78 + 72), 0LL);
                v89 = IsNullOrEmpty;
                if ( v87 >= 7 )
                {
                  if ( *(_DWORD *)(v78 + 24) <= 6u )
                    goto LABEL_77;
                  v90 = System_Int32__Parse(*(System_String_o **)(v78 + 80), 0LL);
                  goto LABEL_71;
                }
              }
LABEL_70:
              v90 = 0;
LABEL_71:
              if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Convert_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              }
              v91 = System_Convert__ToBoolean_42776788(v88, 0LL);
              v92 = System_Convert__ToBoolean_42776788(v89, 0LL);
              v93 = System_Convert__ToBoolean_42776788(v90, 0LL);
              ProgressData = (System_Int32_array **)EventInfoPointRiverProgressControl__CreateProgressData(
                                                      (EventInfoPointRiverProgressControl_o *)v93,
                                                      v79,
                                                      v80,
                                                      v82,
                                                      v85,
                                                      v86,
                                                      v91,
                                                      v92,
                                                      v93,
                                                      v102);
              p_progressData->klass = (BattleServantConfConponent_c *)ProgressData;
              sub_B5D560(p_progressData, ProgressData, v95, v96, v97, v98, v99, v100);
              return;
            }
            v89 = 0;
          }
        }
        v88 = 0;
        goto LABEL_70;
      }
    }
    v80 = 0;
    goto LABEL_46;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_78;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v48 = 0;
    v49 = 0;
    v103 = this->fields.eventUiValueEntityList;
    while ( v48 < max_length )
    {
      v50 = eventUiValueEntityList->m_Items[v48];
      if ( !v50 )
        goto LABEL_78;
      if ( v50->fields.type == 2 )
      {
        v51 = v49;
        v52 = System_Int32__Parse(v50->fields.value, 0LL);
        UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, v108, v52, v53);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v55);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_78;
        v56 = IsNullOrEmpty;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v105,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v57 = 0;
        v107 = *(System_Collections_Generic_List_Enumerator_T__o *)v105;
        while ( 1 )
        {
          v59 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v107,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v59 )
            break;
          if ( !v107.fields.current )
            sub_B5D69C(v59, v60);
          klass = (int32_t)v107.fields.current[1].klass;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25877652 = CondType__IsQuestClear_25877652(klass, -1, 0, 0LL);
          if ( !IsQuestClear_25877652 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v57;
          if ( !baseQuestReleaseEntList )
            sub_B5D69C(IsQuestClear_25877652, v63);
          size = baseQuestReleaseEntList->fields._size;
          if ( v57 >= size )
            v57 = size - 1;
        }
        *(_DWORD *)&v105[4 * v51 + 24] = 220;
        v65 = ++v106;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v107,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        if ( v65 )
        {
          v66 = v65 - 1;
          if ( *(_DWORD *)&v105[4 * v65 + 20] == 220 )
          {
            --v65;
            v106 = v66;
          }
        }
        v67 = this->fields.baseQuestReleaseEntList;
        if ( !v67 )
          goto LABEL_78;
        if ( v67->fields._size <= (unsigned int)v57 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v68 = v67->fields._items->m_Items[v57];
        if ( !v68 )
          goto LABEL_78;
        v69 = (System_Int32_array **)EventInfoPointRiverProgressControl__CreateProgressData(
                                       (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                                       v52,
                                       v57,
                                       UserEventPoint,
                                       UserEventPoint,
                                       v68->fields.value,
                                       v56 & (UserEventPoint >= v68->fields.value),
                                       0,
                                       v56 & 1,
                                       v102);
        p_progressData->klass = (BattleServantConfConponent_c *)v69;
        sub_B5D560(p_progressData, v69, v70, v71, v72, v73, v74, v75);
        eventUiValueEntityList = v103;
        v49 = v65;
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v48 >= max_length )
        return;
    }
LABEL_77:
    v101 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v101, 0LL);
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
  if ( (byte_42E950C & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_B5D5C4(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__,
                                                     type,
                                                     (_DWORD)callback,
                                                     method);
    byte_42E950C = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_B5D69C(this, *(_QWORD *)&type);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_26542760(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v6, v8, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoPointRiverProgressControl__PlayAnim_26542760(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E950D & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E950D = 1;
  }
  v6 = sub_B5D694(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
  EventInfoPointRiverProgressControl__PlayAnim_d__26___ctor(
    (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EventInfoPointRiverProgressControl__PlayMoveShip(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2

  if ( (byte_42E950E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__, v6, v7, v8);
    sub_B5D5C4(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, v9, v10, v11);
    byte_42E950E = 1;
  }
  v12 = sub_B5D694(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
  EventInfoPointRiverProgressControl___c__DisplayClass27_0___ctor(
    (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v12,
    0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v12 + 16),
          (System_Int32_array **)this,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_QWORD *)(v12 + 24) = callback,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v12 + 24),
          (System_Int32_array **)callback,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        progressShip = this->fields.progressShip,
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v28,
          (Il2CppObject *)v12,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0LL),
        !progressShip) )
  {
    sub_B5D69C(v13, v14);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v28, v29);
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
    sub_B5D69C(this, method);
  EventInfoPointRiverProgressControl__SaveProgressData(this, eventUiEntity->fields.eventId, v2);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SaveProgressData(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Text_StringBuilder_o *v14; // x19
  System_String_o *appended; // x0
  __int64 v16; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  System_String_o *v19; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v20; // x8
  System_String_o *v21; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  System_String_o *v23; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x8
  _BOOL4 IsReleaseScenarioAnimEnd; // w22
  System_String_o *v26; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x8
  System_String_o *v28; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v29; // x8
  System_String_o *v30; // x0
  EventInfoPointRiverProgressControl_c *v31; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  System_String_o *v35; // x0
  int32_t v36; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v37; // [xsp+8h] [xbp-48h] BYREF
  int64_t NextPoint; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldTotalPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v42; // [xsp+2Ch] [xbp-24h] BYREF

  v42 = eventId;
  if ( (byte_42E9518 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&EventInfoPointRiverProgressControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v11, v12, v13);
    byte_42E9518 = 1;
  }
  ReleaseScenarioIndex = 0;
  Id = 0;
  NextPoint = 0LL;
  OldTotalPoint = 0LL;
  v37 = 0LL;
  v36 = 0;
  v14 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v14, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_18;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v14 )
    goto LABEL_18;
  System_Text_StringBuilder__Append_42953744(v14, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                  v14,
                                  (System_String_o *)StringLiteral_1245/*":"*/,
                                  0LL);
  v18 = this->fields.progressData;
  if ( !v18 )
    goto LABEL_18;
  ReleaseScenarioIndex = v18->fields.ReleaseScenarioIndex;
  v19 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0LL);
  System_Text_StringBuilder__Append_42953744(v14, v19, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                  v14,
                                  (System_String_o *)StringLiteral_1245/*":"*/,
                                  0LL);
  v20 = this->fields.progressData;
  if ( !v20 )
    goto LABEL_18;
  OldTotalPoint = v20->fields.OldTotalPoint;
  v21 = System_Int64__ToString((int64_t)&OldTotalPoint, 0LL);
  System_Text_StringBuilder__Append_42953744(v14, v21, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                  v14,
                                  (System_String_o *)StringLiteral_1245/*":"*/,
                                  0LL);
  v22 = this->fields.progressData;
  if ( !v22 )
    goto LABEL_18;
  NextPoint = v22->fields.NextPoint;
  v23 = System_Int64__ToString((int64_t)&NextPoint, 0LL);
  System_Text_StringBuilder__Append_42953744(v14, v23, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                  v14,
                                  (System_String_o *)StringLiteral_1245/*":"*/,
                                  0LL);
  v24 = this->fields.progressData;
  if ( !v24 )
    goto LABEL_18;
  IsReleaseScenarioAnimEnd = v24->fields.IsReleaseScenarioAnimEnd;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  HIDWORD(v37) = System_Convert__ToInt32_42785896(IsReleaseScenarioAnimEnd, 0LL);
  v26 = System_Int32__ToString((int32_t)&v37 + 4, 0LL);
  System_Text_StringBuilder__Append_42953744(v14, v26, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                  v14,
                                  (System_String_o *)StringLiteral_1245/*":"*/,
                                  0LL);
  v27 = this->fields.progressData;
  if ( !v27
    || (LODWORD(v37) = System_Convert__ToInt32_42785896(v27->fields.IsOpenFirstRiver, 0LL),
        v28 = System_Int32__ToString((int32_t)&v37, 0LL),
        System_Text_StringBuilder__Append_42953744(v14, v28, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                        v14,
                                        (System_String_o *)StringLiteral_1245/*":"*/,
                                        0LL),
        (v29 = this->fields.progressData) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(appended, v16);
  }
  v36 = System_Convert__ToInt32_42785896(v29->fields.IsFreeQuestClear, 0LL);
  v30 = System_Int32__ToString((int32_t)&v36, 0LL);
  System_Text_StringBuilder__Append_42953744(v14, v30, 0LL);
  v31 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v31 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v31->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v33 = System_Int32__ToString((int32_t)&v42, 0LL);
  v34 = System_String__Concat_44577788(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v33, 0LL);
  v35 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v14->klass->vtable._3_ToString.method)(
                             v14,
                             v14->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v34, v35, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetMaskPanelActive(
        EventInfoPointRiverProgressControl_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_B5D69C(0LL, isActive);
  UnityEngine_GameObject__SetActive(maskPanel, isActive, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__SetNextRiverProgressData(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  const MethodInfo *v9; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  const MethodInfo *v14; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v15; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  struct EventInfoRiverProgressDrawComponent_array *v18; // x8
  __int64 name_high; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v21; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x9
  struct EventInfoRiverProgressDrawComponent_array *v23; // x8
  __int64 v24; // x9
  const MethodInfo *v25; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v26; // x20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v27; // x21
  __int64 v28; // x22
  QuestReleaseEntity_o *v29; // x8
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x8
  __int64 v33; // x0

  v4 = this;
  if ( (byte_42E9513 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, (_DWORD)method, v2, v3);
    this = (EventInfoPointRiverProgressControl_o *)sub_B5D5C4(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v5,
                                                     v6,
                                                     v7);
    byte_42E9513 = 1;
  }
  progressData = v4->fields.progressData;
  v4->fields.isChangeRiver = 1;
  if ( !progressData )
    goto LABEL_36;
  progressData->fields.IsReleaseScenarioAnimEnd = 0;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v4, method);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = v4->fields.progressData;
    if ( !v10 )
      goto LABEL_36;
    v10->fields.IsFreeQuestClear = 0;
  }
  v11 = v4->fields.progressData;
  if ( !v11 )
    goto LABEL_36;
  progressRiver = v4->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_36;
  ReleaseScenarioIndex = v11->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressRiver->max_length )
    goto LABEL_37;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[ReleaseScenarioIndex];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v9);
  v15 = v4->fields.progressData;
  if ( !v15 )
    goto LABEL_36;
  ++v15->fields.ReleaseScenarioIndex;
  method = (const MethodInfo *)v4->fields.progressData;
  if ( !method )
    goto LABEL_36;
  baseQuestReleaseEntList = v4->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_36;
  size = baseQuestReleaseEntList->fields._size;
  if ( SHIDWORD(method->name) >= size )
  {
    HIDWORD(method->name) = size - 1;
    method = (const MethodInfo *)v4->fields.progressData;
    if ( !method )
      goto LABEL_36;
  }
  v18 = v4->fields.progressRiver;
  if ( !v18 )
    goto LABEL_36;
  name_high = SHIDWORD(method->name);
  if ( (unsigned int)name_high >= v18->max_length )
    goto LABEL_37;
  eventUiEntity = v4->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_36;
  this = (EventInfoPointRiverProgressControl_o *)v18->m_Items[name_high];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    eventUiEntity->fields.eventId,
    v14);
  v22 = v4->fields.progressData;
  if ( !v22 )
    goto LABEL_36;
  v23 = v4->fields.progressRiver;
  if ( !v23 )
    goto LABEL_36;
  v24 = v22->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v24 >= v23->max_length )
  {
LABEL_37:
    v33 = sub_B5D6C8(this);
    sub_B5D668(v33, 0LL);
  }
  this = (EventInfoPointRiverProgressControl_o *)v23->m_Items[v24];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v21);
  v26 = v4->fields.progressData;
  if ( !v26 )
    goto LABEL_36;
  v27 = v4->fields.baseQuestReleaseEntList;
  if ( !v27 )
    goto LABEL_36;
  v28 = v26->fields.ReleaseScenarioIndex;
  if ( v27->fields._size <= (unsigned int)v28 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v29 = v27->fields._items->m_Items[v28];
  if ( !v29 )
    goto LABEL_36;
  v26->fields.NextPoint = v29->fields.value;
  this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_36;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v4->fields.progressData, v25);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v4, v30) )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v31),
        (v32 = v4->fields.progressData) == 0LL) )
  {
LABEL_36:
    sub_B5D69C(this, method);
  }
  v32->fields.IsReleaseScenarioAnimEnd = 1;
LABEL_34:
  this = (EventInfoPointRiverProgressControl_o *)v4->fields.progressShip;
  if ( !this )
    goto LABEL_36;
  EventInfoShipProgressDrawComponent__ResetShip(
    (EventInfoShipProgressDrawComponent_o *)this,
    v4->fields.progressData,
    v31);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v10; // w22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_42E950A & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)entities, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1170/*"2DUI"*/, v6, v7, v8);
    byte_42E950A = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v10 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1170/*"2DUI"*/, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v10, 0LL);
    this->fields.eventUiValueEntityList = entities;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)entities,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventInfoPointRiverProgressControl__SetupDisp(this, v17);
    if ( !EventInfoPointRiverProgressControl__HasSaveData(this, v18) )
      EventInfoPointRiverProgressControl__SaveAllData(this, v19);
  }
}


void __fastcall EventInfoPointRiverProgressControl__SetupDisp(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct EventUiEntity_o *eventUiEntity; // x8
  int v24; // w2
  const MethodInfo *v25; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x22
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x23
  int32_t size; // w8
  __int64 ReleaseScenarioIndex; // x24
  QuestReleaseEntity_o *v30; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v31; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v33; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 name_high; // x9
  struct EventUiEntity_o *v36; // x10
  struct EventInfoPointRiverProgressControl_ProgressData_o *v37; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v39; // x8
  struct EventInfoUserEventPointControl_o *v40; // x9
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  int v43; // w2
  __int64 v44; // x3
  const MethodInfo *v45; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v46; // x8
  int v47; // w2
  __int64 v48; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v49; // x8
  const MethodInfo *v50; // x1
  int v51; // w2
  __int64 v52; // x3
  TerminalPramsManager_c *v53; // x0
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v56; // x9
  struct EventInfoRiverProgressDrawComponent_array *v57; // x8
  __int64 v58; // x9
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v62; // x8
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x4
  struct EventUiEntity_o *v65; // x8
  const MethodInfo *v66; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v67; // x9
  struct EventInfoRiverProgressDrawComponent_array *v68; // x8
  __int64 v69; // x9
  const MethodInfo *v70; // x2
  TerminalPramsManager_c *v71; // x0
  struct EventUiEntity_o *v72; // x8
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v80; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E950B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v17, v18, v19);
    this = (EventInfoPointRiverProgressControl_o *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E950B = 1;
  }
  eventUiEntity = v4->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_132;
  EventInfoPointRiverProgressControl__LoadProgressData(v4, eventUiEntity->fields.eventId, v2);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E502A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v24, v25);
    byte_42E502A = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*((_BYTE *)this[1].monitor + 466) )
  {
    progressData = v4->fields.progressData;
    if ( !progressData )
      goto LABEL_132;
    baseQuestReleaseEntList = v4->fields.baseQuestReleaseEntList;
    if ( !baseQuestReleaseEntList )
      goto LABEL_132;
    size = baseQuestReleaseEntList->fields._size;
    if ( progressData->fields.ReleaseScenarioIndex >= size )
    {
      progressData->fields.ReleaseScenarioIndex = size - 1;
      progressData = v4->fields.progressData;
      if ( !progressData )
        goto LABEL_132;
      baseQuestReleaseEntList = v4->fields.baseQuestReleaseEntList;
      if ( !baseQuestReleaseEntList )
        goto LABEL_132;
    }
    ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
    if ( baseQuestReleaseEntList->fields._size <= (unsigned int)ReleaseScenarioIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v30 = baseQuestReleaseEntList->fields._items->m_Items[ReleaseScenarioIndex];
    if ( !v30 )
      goto LABEL_132;
    progressData->fields.NextPoint = v30->fields.value;
    v31 = v4->fields.progressData;
    if ( !v31 )
      goto LABEL_132;
    v31->fields.OldTotalPoint = v31->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v4, method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v32 = v4->fields.progressData;
      if ( !v32 )
        goto LABEL_132;
      v32->fields.IsFreeQuestClear = 1;
    }
    v33 = v4->fields.progressData;
    if ( !v33 )
      goto LABEL_132;
    if ( v33->fields.OldTotalPoint >= v33->fields.NextPoint && v33->fields.IsFreeQuestClear )
      v33->fields.IsReleaseScenarioAnimEnd = 1;
    EventInfoPointRiverProgressControl__SaveAllData(v4, method);
  }
  method = (const MethodInfo *)v4->fields.progressData;
  if ( !method )
    goto LABEL_132;
  progressRiver = v4->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_132;
  name_high = SHIDWORD(method->name);
  if ( (unsigned int)name_high >= progressRiver->max_length )
    goto LABEL_133;
  v36 = v4->fields.eventUiEntity;
  if ( !v36 )
    goto LABEL_132;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[name_high];
  if ( !this )
    goto LABEL_132;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    v36->fields.eventId,
    v25);
  v37 = v4->fields.progressData;
  if ( !v37 )
    goto LABEL_132;
  totalPointLabel = v4->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_132;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v37->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v4, method);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v39 = v4->fields.progressData;
    if ( !v39 )
      goto LABEL_132;
    v40 = v4->fields.totalPointLabel;
    if ( !v40 )
      goto LABEL_132;
    v40->fields._oldTotalPoint_k__BackingField = v39->fields.TotalPoint;
  }
  this = (EventInfoPointRiverProgressControl_o *)v4->fields.totalPointLabel;
  if ( !this )
    goto LABEL_132;
  ((void (__fastcall *)(EventInfoPointRiverProgressControl_o *, struct EventUiValueEntity_array *, Il2CppMethodPointer))this->klass->vtable._5_Setup.method)(
    this,
    v4->fields.eventUiValueEntityList,
    this->klass->vtable._6_SetValue.methodPtr);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v4, v41) )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_132;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v4, v42) )
    goto LABEL_136;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E502A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v43, v44);
    byte_42E502A = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*((_BYTE *)this[1].monitor + 466) )
    goto LABEL_136;
  v46 = v4->fields.progressData;
  if ( !v46 )
    goto LABEL_132;
  if ( v46->fields.IsOpenFirstRiver )
  {
LABEL_136:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v4, method) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E502A )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v47, v48);
        byte_42E502A = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*((_BYTE *)this[1].monitor + 466) )
      {
        v49 = v4->fields.progressData;
        if ( !v49 )
          goto LABEL_132;
        v49->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v4, method);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v4, method) )
      goto LABEL_82;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E502A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v50, v51, v52);
      byte_42E502A = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    if ( !v53->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v4, v50);
      v62 = v4->fields.progressData;
      if ( !v62 )
        goto LABEL_132;
      v62->fields.OldTotalPoint = v62->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v4, method);
    }
    else
    {
LABEL_82:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v4, v50) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_132;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v54);
        v56 = v4->fields.progressData;
        if ( !v56 )
          goto LABEL_132;
        v57 = v4->fields.progressRiver;
        if ( !v57 )
          goto LABEL_132;
        v58 = v56->fields.ReleaseScenarioIndex;
        if ( (unsigned int)v58 < v57->max_length )
        {
          this = (EventInfoPointRiverProgressControl_o *)v57->m_Items[v58];
          if ( this )
          {
            EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v55);
            goto LABEL_101;
          }
          goto LABEL_132;
        }
LABEL_133:
        v80 = sub_B5D6C8(this);
        sub_B5D668(v80, 0LL);
      }
    }
    this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_132;
    EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v4->fields.progressData, v54);
    this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_132;
    EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v63);
    v65 = v4->fields.eventUiEntity;
    if ( !v65 )
      goto LABEL_132;
    this = (EventInfoPointRiverProgressControl_o *)v4->fields.progressShip;
    if ( !this )
      goto LABEL_132;
    EventInfoShipProgressDrawComponent__Setup(
      (EventInfoShipProgressDrawComponent_o *)this,
      v4,
      v65->fields.eventId,
      v4->fields.isChangeRiver,
      v64);
    v67 = v4->fields.progressData;
    if ( !v67 )
      goto LABEL_132;
    v68 = v4->fields.progressRiver;
    if ( !v68 )
      goto LABEL_132;
    v69 = v67->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v69 >= v68->max_length )
      goto LABEL_133;
    this = (EventInfoPointRiverProgressControl_o *)v68->m_Items[v69];
    if ( this )
    {
      EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v66);
      this = (EventInfoPointRiverProgressControl_o *)v4->fields.progressShip;
      if ( this )
      {
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v70);
LABEL_101:
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E502F )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v59, v60, v61);
          byte_42E502F = 1;
        }
        v71 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v71 = TerminalPramsManager_TypeInfo;
        }
        v71->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
        return;
      }
    }
LABEL_132:
    sub_B5D69C(this, method);
  }
  if ( (BYTE3(this[1].fields.userEventPointMaster) & 4) != 0 && !LODWORD(this[1].fields.assetData2) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_42E502F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v43, v44);
    byte_42E502F = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)this[1].monitor + 466) = 0;
  v72 = v4->fields.eventUiEntity;
  if ( !v72 )
    goto LABEL_132;
  this = (EventInfoPointRiverProgressControl_o *)v4->fields.progressShip;
  if ( !this )
    goto LABEL_132;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v4,
    v72->fields.eventId,
    1,
    v45);
  this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_132;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v73);
  this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_132;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v4->fields.progressData, v74);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v4,
                                                   0LL);
  if ( !this )
    goto LABEL_132;
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_132;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v4,
                                                   0LL);
  if ( !this )
    goto LABEL_132;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_srcLineSprite,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      v82.fields.x = x;
      v82.fields.y = y;
      v82.fields.z = z;
      EventInfoUISlideAnimation__SetAfterActionAndInPosition(
        (EventInfoUISlideAnimation_o *)Component_srcLineSprite,
        0LL,
        v82,
        0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      GameObjectExtensions__SetLocalPosition(
        gameObject,
        *(UnityEngine_Vector3_o *)&Component_srcLineSprite->fields.mcLineSprite,
        0LL);
      return;
    }
    goto LABEL_132;
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
  int v2; // w2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl__PlayAnim_d__26_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  Il2CppObject *v15; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v20; // x8
  System_Collections_IEnumerator_o *v21; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x9
  struct EventInfoRiverProgressDrawComponent_array *v23; // x8
  __int64 v24; // x9
  Il2CppObject *v25; // x22
  EventInfoRiverProgressDrawComponent_o *v26; // x19
  System_Action_o *v27; // x21
  EventInfoRiverProgressDrawComponent_o *v28; // x0
  System_Action_o *v29; // x1
  bool v30; // w2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v31; // x8
  System_Collections_IEnumerator_o *v32; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v33; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v37; // x19
  System_Action_o *v38; // x21
  System_Collections_IEnumerator_o *v39; // x0
  __int64 v40; // x0

  v4 = this;
  if ( (byte_42E6542 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__, v8, v9, v10);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_B5D5C4(
                                                                     &EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo,
                                                                     v11,
                                                                     v12,
                                                                     v13);
    byte_42E6542 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_38;
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)EventInfoPointRiverProgressControl__IsFirstRiver(
                                                                     _4__this,
                                                                     0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_12;
    progressData = _4__this->fields.progressData;
    if ( !progressData )
      goto LABEL_38;
    if ( !progressData->fields.IsOpenFirstRiver )
    {
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
      if ( !this )
        goto LABEL_38;
      EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, 0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
      if ( !this )
        goto LABEL_38;
      EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, 0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
      if ( !this )
        goto LABEL_38;
      EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 1, 0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
      if ( !this )
        goto LABEL_38;
      v32 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
              (EventInfoShipProgressDrawComponent_o *)this,
              1,
              0,
              0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                       v32,
                                                                       0LL);
      v33 = _4__this->fields.progressData;
      if ( !v33 )
        goto LABEL_38;
      progressRiver = _4__this->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_38;
      ReleaseScenarioIndex = v33->fields.ReleaseScenarioIndex;
      if ( (unsigned int)ReleaseScenarioIndex < progressRiver->max_length )
      {
        _8__1 = (Il2CppObject *)v4->fields.__8__1;
        v37 = progressRiver->m_Items[ReleaseScenarioIndex];
        v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v38,
          _8__1,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
          0LL);
        if ( !v37 )
          goto LABEL_38;
        v30 = 1;
        v28 = v37;
        v29 = v38;
        goto LABEL_36;
      }
    }
    else
    {
LABEL_12:
      if ( EventInfoPointRiverProgressControl__IsProgressShipAnim(_4__this, 0LL) )
      {
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
        if ( !this )
          goto LABEL_38;
        EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
        v20 = v4->fields.__8__1;
        if ( !v20 )
          goto LABEL_38;
        EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v20->fields.callback, 0LL);
        return 0;
      }
      if ( !EventInfoPointRiverProgressControl__IsChangeRiver(_4__this, 0LL) )
      {
        this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.totalPointLabel;
        if ( !this )
          goto LABEL_38;
        EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
        EventInfoPointRiverProgressControl__ApplyProgressData(_4__this, 0LL);
        EventInfoPointRiverProgressControl__SaveAllData(_4__this, 0LL);
        v31 = v4->fields.__8__1;
        if ( !v31 )
          goto LABEL_38;
        ActionExtensions__Call(v31->fields.callback, 0LL);
        return 0;
      }
      EventInfoPointRiverProgressControl__SetMaskPanelActive(_4__this, 1, 0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.releaseTermsObject;
      if ( !this )
        goto LABEL_38;
      EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)this, 0, 0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)_4__this->fields.progressShip;
      if ( !this )
        goto LABEL_38;
      v21 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
              (EventInfoShipProgressDrawComponent_o *)this,
              0,
              0,
              0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                       v21,
                                                                       0LL);
      v22 = _4__this->fields.progressData;
      if ( !v22 )
        goto LABEL_38;
      v23 = _4__this->fields.progressRiver;
      if ( !v23 )
        goto LABEL_38;
      v24 = v22->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v24 < v23->max_length )
      {
        v25 = (Il2CppObject *)v4->fields.__8__1;
        v26 = v23->m_Items[v24];
        v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v27,
          v25,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
          0LL);
        if ( !v26 )
          goto LABEL_38;
        v28 = v26;
        v29 = v27;
        v30 = 0;
LABEL_36:
        v39 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v28, v29, v30, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, v39, 0LL);
        return 0;
      }
    }
    v40 = sub_B5D6C8(this);
    sub_B5D668(v40, 0LL);
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v15 = (Il2CppObject *)sub_B5D694(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor(v15, 0LL);
    v4->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v15;
    sub_B5D560(&v4->fields.__8__1);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v4->fields.__8__1;
    if ( this )
    {
      *(_QWORD *)&this->fields.__1__state = v4->fields.__4__this;
      sub_B5D560(&this->fields);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v4->fields.__8__1;
      if ( this )
      {
        this->fields.__2__current = (Il2CppObject *)v4->fields.callback;
        sub_B5D560(&this->fields.__2__current);
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_38:
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (progressData = _4__this->fields.progressData) == 0LL
    || (progressData->fields.IsOpenFirstRiver = 1,
        v4 = this,
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_o *v9; // x8
  UnityEngine_MonoBehaviour_o *v10; // x20
  System_Collections_IEnumerator_o *v11; // x0
  UnityEngine_MonoBehaviour_o *v12; // x20
  int *monitor; // x9
  _DWORD *v14; // x8
  __int64 v15; // x9
  EventInfoRiverProgressDrawComponent_o *v16; // x21
  System_Action_o *_9__2; // x22
  System_Collections_IEnumerator_o *v18; // x0
  __int64 v19; // x0

  if ( (byte_42E653F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__, v5, v6, v7);
    byte_42E653F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoPointRiverProgressControl__SetNextRiverProgressData(_4__this, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v9->fields.releaseTermsObject;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, 0LL);
  v10 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v10[3].klass;
  if ( !_4__this )
    goto LABEL_16;
  v11 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
          (EventInfoShipProgressDrawComponent_o *)_4__this,
          1,
          1,
          0LL);
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(v10, v11, 0LL);
  v12 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v12 )
    goto LABEL_16;
  monitor = (int *)v12[6].monitor;
  if ( !monitor )
    goto LABEL_16;
  v14 = v12[3].monitor;
  if ( !v14 )
    goto LABEL_16;
  v15 = monitor[5];
  if ( (unsigned int)v15 >= v14[6] )
  {
    v19 = sub_B5D6C8(_4__this);
    sub_B5D668(v19, 0LL);
  }
  v16 = *(EventInfoRiverProgressDrawComponent_o **)&v14[2 * v15 + 8];
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v16 )
LABEL_16:
    sub_B5D69C(_4__this, method);
  v18 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v16, _9__2, 1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(v12, v18, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8

  v4 = this;
  if ( (byte_42E6540 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_B5D5C4(
                                                                           &SingletonTemplate_MissionNotifyManager__TypeInfo,
                                                                           v5,
                                                                           v6,
                                                                           v7);
    byte_42E6540 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)_4__this->fields.totalPointLabel;
  if ( !this )
    goto LABEL_13;
  EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  EventInfoPointRiverProgressControl__SetMaskPanelActive((EventInfoPointRiverProgressControl_o *)this, 0, 0LL);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  EventInfoPointRiverProgressControl__ApplyProgressData((EventInfoPointRiverProgressControl_o *)this, 0LL);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
LABEL_13:
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_o *v12; // x8
  struct EventInfoPointRiverProgressControl_o *v13; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_ProgressData_o *v16; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v18; // x9
  EventInfoRiverProgressDrawComponent_o *v19; // x20
  System_Action_o *_9__1; // x21
  struct EventInfoPointRiverProgressControl_o *v21; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x8
  struct EventInfoPointRiverProgressControl_o *v23; // x8
  struct EventInfoPointRiverProgressControl_o *v24; // x8
  __int64 v25; // x0

  if ( (byte_42E6541 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventInfoPointRiverProgressControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__, v8, v9, v10);
    byte_42E6541 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsScenarioReleaseAnim(
                                                       _4__this,
                                                       0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_34;
    _4__this = (EventInfoPointRiverProgressControl_o *)v12->fields.releaseTermsObject;
    if ( !_4__this )
      goto LABEL_34;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)_4__this, 0, 0LL);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_34;
    progressData = v13->fields.progressData;
    if ( !progressData )
      goto LABEL_34;
    ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
    _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v13 = this->fields.__4__this;
      if ( !v13 )
        goto LABEL_34;
    }
    if ( ReleaseScenarioIndex >= EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      _4__this = (EventInfoPointRiverProgressControl_o *)v13->fields.releaseTermsObject;
      if ( !_4__this )
        goto LABEL_34;
      EventInfoReleaseEventPointControl__PlayCheckSE((EventInfoReleaseEventPointControl_o *)_4__this, 0LL);
    }
    else
    {
      v16 = v13->fields.progressData;
      if ( !v16 )
        goto LABEL_34;
      progressRiver = v13->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_34;
      v18 = v16->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v18 >= progressRiver->max_length )
      {
        v25 = sub_B5D6C8(_4__this);
        sub_B5D668(v25, 0LL);
      }
      v19 = progressRiver->m_Items[v18];
      _9__1 = this->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)this,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0LL);
        this->fields.__9__1 = _9__1;
        sub_B5D560(&this->fields.__9__1);
      }
      if ( !v19 )
        goto LABEL_34;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v19, _9__1, 0LL);
    }
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_34;
    v22 = v21->fields.progressData;
    if ( !v22 )
      goto LABEL_34;
    if ( !v22->fields.IsFreeQuestClear )
    {
      v22->fields.IsFreeQuestClear = 1;
      v23 = this->fields.__4__this;
      if ( v23 )
      {
        _4__this = (EventInfoPointRiverProgressControl_o *)v23->fields.releaseTermsObject;
        if ( _4__this )
        {
          EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, 0LL);
          goto LABEL_30;
        }
      }
LABEL_34:
      sub_B5D69C(_4__this, method);
    }
  }
LABEL_30:
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  EventInfoPointRiverProgressControl__ApplyProgressData(_4__this, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  EventInfoPointRiverProgressControl__SaveAllData(_4__this, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_34;
  v24->fields.isChangeRiver = 0;
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass27_0___PlayMoveShip_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (progressData = _4__this->fields.progressData) == 0LL
    || (progressData->fields.IsReleaseScenarioAnimEnd = 1,
        v4 = this,
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)this->fields.__4__this) == 0LL)
    || (EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, 0LL),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  EventInfoPointRiverProgressControl__SetMaskPanelActive((EventInfoPointRiverProgressControl_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}