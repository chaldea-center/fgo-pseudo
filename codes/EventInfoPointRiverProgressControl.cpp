void __fastcall EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_42155FF & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoPointRiverProgressControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_8552/*"LineProgressData_"*/, v8);
    byte_42155FF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8552/*"LineProgressData_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8552/*"LineProgressData_"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void __fastcall EventInfoPointRiverProgressControl___ctor(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42155FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v4);
    byte_42155FE = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseQuestReleaseEntList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  sub_B0D840(
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
    sub_B0D97C(this);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void __fastcall EventInfoPointRiverProgressControl__Awake(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  __int64 v3; // x1
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  int max_length; // w8
  int v6; // w9
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  v2 = this;
  if ( (byte_42155EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    this = (EventInfoPointRiverProgressControl_o *)sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_42155EC = 1;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    sub_B0D97C(this);
  max_length = progressRiver->max_length;
  v6 = -1;
  do
    ++v6;
  while ( v6 < max_length );
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.userEventPointMaster,
    Master_WarQuestSelectionMaster,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  EventInfoPointRiverProgressControl_ProgressData_o *v17; // x26
  __int64 v18; // x0

  if ( (byte_42155FD & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id);
    byte_42155FD = 1;
  }
  v17 = (EventInfoPointRiverProgressControl_ProgressData_o *)sub_B0D974(
                                                               EventInfoPointRiverProgressControl_ProgressData_TypeInfo,
                                                               *(_QWORD *)&id,
                                                               *(_QWORD *)&releaseScenarioIndex);
  EventInfoPointRiverProgressControl_ProgressData___ctor(v17, 0LL);
  if ( !v17 )
    sub_B0D97C(v18);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x10
  int32_t v25; // w2
  EventInfoPointRiverProgressControl_c *v26; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42155FA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&EventEntity_TypeInfo, v6);
    sub_B0D8A4(&EventInfoPointRiverProgressControl_TypeInfo, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_42155FA = 1;
  }
  v35 = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !list) )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_20:
      v22 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      v24 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) >= (unsigned int)v24
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v24 - 8) == EventEntity_TypeInfo )
      {
        v25 = v23[4];
        v35 = v25;
        if ( !v13 )
          sub_B0D97C(v23);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v13,
               &entity,
               v25,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B0D97C(0LL);
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v26 = EventInfoPointRiverProgressControl_TypeInfo;
            if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
              v26 = EventInfoPointRiverProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v26->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
            v28 = System_Int32__ToString((int32_t)&v35, 0LL);
            v29 = System_String__Concat_43849904(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v28, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v29, 0LL);
          }
        }
      }
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_37:
    v33 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  int64_t UserId; // x0

  if ( (byte_42155F9 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_42155F9 = 1;
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
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoPointRiverProgressControl_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42155FB & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_B0D8A4(&EventInfoPointRiverProgressControl_TypeInfo, method);
    byte_42155FB = 1;
  }
  eventId = 0;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
  eventId = eventUiEntity->fields.eventId;
  v4 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v4 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v4->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_43849904(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0LL);
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
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v24; // x23
  int32_t size; // w8
  int v26; // w21
  int32_t v27; // w20
  QuestReleaseEntity_o *v28; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v29; // x24
  int64_t value; // x23
  QuestReleaseEntity_o *v31; // x8
  bool v32; // vf

  if ( (byte_42155ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__, entity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v6);
    sub_B0D8A4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v7);
    byte_42155ED = 1;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
      (System_Int32_array **)entity,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    eventId = entity->fields.eventId;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    }
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0LL);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_baseQuestReleaseEntList,
      (System_Int32_array **)QuestReleaseList,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = *p_baseQuestReleaseEntList;
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_23;
    size = v24->fields._size;
    if ( size - 1 >= 1 )
    {
      v26 = size - 2;
      do
      {
        v27 = v26 + 1;
        if ( v24->fields._size <= (unsigned int)(v26 + 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v28 = v24->fields._items->m_Items[v27];
        if ( !v28 )
          break;
        v29 = *p_baseQuestReleaseEntList;
        if ( !*p_baseQuestReleaseEntList )
          break;
        value = v28->fields.value;
        if ( v29->fields._size <= (unsigned int)v26 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v31 = v29->fields._items->m_Items[v26];
        if ( !v31 )
          break;
        if ( value == v31->fields.value )
        {
          totalPointLabel = (struct EventInfoUserEventPointControl_o *)*p_baseQuestReleaseEntList;
          if ( !*p_baseQuestReleaseEntList )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)totalPointLabel,
            v27,
            (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        v32 = __OFSUB__(v26--, 1);
        if ( v26 < 0 != v32 )
          return;
        v24 = *p_baseQuestReleaseEntList;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_23:
      sub_B0D97C(totalPointLabel);
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
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x19
  unsigned int size; // w9
  __int64 ReleaseScenarioIndex; // x20
  QuestReleaseEntity_o *v9; // x8
  int32_t questId; // w19

  v2 = this;
  if ( (byte_42155F4 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v3);
    this = (EventInfoPointRiverProgressControl_o *)sub_B0D8A4(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v4);
    byte_42155F4 = 1;
  }
  progressData = v2->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  if ( !progressData->fields.IsReleaseScenarioAnimEnd )
    return 0;
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_16;
  size = baseQuestReleaseEntList->fields._size;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( (int)ReleaseScenarioIndex >= (int)(size - 1) )
    return 0;
  if ( size <= (unsigned int)ReleaseScenarioIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v9 = baseQuestReleaseEntList->fields._items->m_Items[ReleaseScenarioIndex];
  if ( !v9 )
LABEL_16:
    sub_B0D97C(this);
  questId = v9->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25410236(questId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_42155F6 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    byte_42155F6 = 1;
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
  int32_t endScenarioQuestId; // w19

  if ( (byte_42155F5 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    byte_42155F5 = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25410236(endScenarioQuestId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_42155F3 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    byte_42155F3 = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_25410236(firstRiverReleaseQuestId, -1, 0, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return progressData->fields.TotalPoint >= progressData->fields.NextPoint
      && !progressData->fields.IsReleaseScenarioAnimEnd;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  EventInfoPointRiverProgressControl_c *v19; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *String; // x21
  __int64 IsNullOrEmpty; // x0
  struct EventUiValueEntity_array *eventUiValueEntityList; // x10
  int max_length; // w8
  unsigned int v27; // w27
  int v28; // w11
  EventUiValueEntity_o *v29; // x8
  int v30; // w26
  int32_t v31; // w21
  const MethodInfo *v32; // x3
  int64_t UserEventPoint; // x22
  const MethodInfo *v34; // x1
  char v35; // w23
  int32_t v36; // w24
  int32_t size; // w8
  _BOOL8 v38; // x0
  int32_t klass; // w25
  _BOOL8 IsQuestClear_25410236; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int v42; // w26
  int v43; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v44; // x25
  QuestReleaseEntity_o *v45; // x8
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x3
  int v54; // w19
  __int64 v55; // x25
  int32_t v56; // w21
  int32_t v57; // w22
  int v58; // w23
  int64_t v59; // x20
  int v60; // w26
  bool v61; // cc
  int64_t v62; // x23
  int64_t v63; // x24
  int v64; // w19
  int32_t v65; // w26
  int32_t v66; // w27
  int32_t v67; // w25
  bool v68; // w26
  bool v69; // w27
  _BOOL8 v70; // x0
  System_Int32_array **ProgressData; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x0
  const MethodInfo *v79; // [xsp+8h] [xbp-B8h]
  struct EventUiValueEntity_array *v80; // [xsp+20h] [xbp-A0h]
  BattleServantConfConponent_o *p_progressData; // [xsp+28h] [xbp-98h]
  _BYTE v82[28]; // [xsp+30h] [xbp-90h] BYREF
  int v83; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+50h] [xbp-70h] BYREF
  int32_t v85; // [xsp+6Ch] [xbp-54h] BYREF

  v85 = eventId;
  if ( (byte_42155F8 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&CondType_TypeInfo, v9);
    sub_B0D8A4(&System_Convert_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v13);
    sub_B0D8A4(&EventInfoPointRiverProgressControl_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_42155F8 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  v83 = 0;
  this->fields.progressData = 0LL;
  p_progressData = (BattleServantConfConponent_o *)&this->fields.progressData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v19 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v19->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v21 = System_Int32__ToString((int32_t)&v85, 0LL);
  v22 = System_String__Concat_43849904(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v21, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !IsNullOrEmpty )
      goto LABEL_77;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
      goto LABEL_78;
    *(_WORD *)(IsNullOrEmpty + 32) = 58;
    if ( !String
      || (IsNullOrEmpty = (__int64)System_String__Split(String, (System_Char_array *)IsNullOrEmpty, 0LL)) == 0 )
    {
LABEL_77:
      sub_B0D97C(IsNullOrEmpty);
    }
    v54 = *(_DWORD *)(IsNullOrEmpty + 24);
    v55 = IsNullOrEmpty;
    if ( v54 < 1 )
    {
      v56 = 0;
    }
    else
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
      v56 = IsNullOrEmpty;
      if ( v54 != 1 )
      {
        if ( *(_DWORD *)(v55 + 24) <= 1u )
          goto LABEL_78;
        v57 = System_Int32__Parse(*(System_String_o **)(v55 + 40), 0LL);
LABEL_46:
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, v85, v56, v53);
        if ( v54 <= 2 )
          v58 = 0;
        else
          v58 = v54;
        v59 = IsNullOrEmpty;
        if ( v54 < 3 )
        {
          v66 = 0;
          v63 = 0LL;
          v62 = 0LL;
        }
        else
        {
          if ( *(_DWORD *)(v55 + 24) <= 2u )
            goto LABEL_78;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v55 + 48), 0LL);
          if ( v58 <= 3 )
            v60 = 0;
          else
            v60 = v58;
          v61 = v58 < 4;
          v62 = IsNullOrEmpty;
          if ( v61 )
          {
            v66 = 0;
            v63 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v55 + 24) <= 3u )
              goto LABEL_78;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v55 + 56), 0LL);
            v63 = IsNullOrEmpty;
            if ( v60 <= 4 )
              v64 = 0;
            else
              v64 = v60;
            if ( v60 >= 5 )
            {
              if ( *(_DWORD *)(v55 + 24) <= 4u )
                goto LABEL_78;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v55 + 64), 0LL);
              v65 = IsNullOrEmpty;
              if ( v64 < 6 )
              {
                v66 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v55 + 24) <= 5u )
                  goto LABEL_78;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v55 + 72), 0LL);
                v66 = IsNullOrEmpty;
                if ( v64 >= 7 )
                {
                  if ( *(_DWORD *)(v55 + 24) <= 6u )
                    goto LABEL_78;
                  v67 = System_Int32__Parse(*(System_String_o **)(v55 + 80), 0LL);
                  goto LABEL_71;
                }
              }
LABEL_70:
              v67 = 0;
LABEL_71:
              if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Convert_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              }
              v68 = System_Convert__ToBoolean_41912200(v65, 0LL);
              v69 = System_Convert__ToBoolean_41912200(v66, 0LL);
              v70 = System_Convert__ToBoolean_41912200(v67, 0LL);
              ProgressData = (System_Int32_array **)EventInfoPointRiverProgressControl__CreateProgressData(
                                                      (EventInfoPointRiverProgressControl_o *)v70,
                                                      v56,
                                                      v57,
                                                      v59,
                                                      v62,
                                                      v63,
                                                      v68,
                                                      v69,
                                                      v70,
                                                      v79);
              p_progressData->klass = (BattleServantConfConponent_c *)ProgressData;
              sub_B0D840(p_progressData, ProgressData, v72, v73, v74, v75, v76, v77);
              return;
            }
            v66 = 0;
          }
        }
        v65 = 0;
        goto LABEL_70;
      }
    }
    v57 = 0;
    goto LABEL_46;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_77;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    v28 = 0;
    v80 = this->fields.eventUiValueEntityList;
    while ( v27 < max_length )
    {
      v29 = eventUiValueEntityList->m_Items[v27];
      if ( !v29 )
        goto LABEL_77;
      if ( v29->fields.type == 2 )
      {
        v30 = v28;
        v31 = System_Int32__Parse(v29->fields.value, 0LL);
        UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, v85, v31, v32);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v34);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_77;
        v35 = IsNullOrEmpty;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v82,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v36 = 0;
        v84 = *(System_Collections_Generic_List_Enumerator_T__o *)v82;
        while ( 1 )
        {
          v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v84,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v38 )
            break;
          if ( !v84.fields.current )
            sub_B0D97C(v38);
          klass = (int32_t)v84.fields.current[1].klass;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25410236 = CondType__IsQuestClear_25410236(klass, -1, 0, 0LL);
          if ( !IsQuestClear_25410236 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v36;
          if ( !baseQuestReleaseEntList )
            sub_B0D97C(IsQuestClear_25410236);
          size = baseQuestReleaseEntList->fields._size;
          if ( v36 >= size )
            v36 = size - 1;
        }
        *(_DWORD *)&v82[4 * v30 + 24] = 220;
        v42 = ++v83;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v84,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( *(_DWORD *)&v82[4 * v42 + 20] == 220 )
          {
            --v42;
            v83 = v43;
          }
        }
        v44 = this->fields.baseQuestReleaseEntList;
        if ( !v44 )
          goto LABEL_77;
        if ( v44->fields._size <= (unsigned int)v36 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v45 = v44->fields._items->m_Items[v36];
        if ( !v45 )
          goto LABEL_77;
        v46 = (System_Int32_array **)EventInfoPointRiverProgressControl__CreateProgressData(
                                       (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                                       v31,
                                       v36,
                                       UserEventPoint,
                                       UserEventPoint,
                                       v45->fields.value,
                                       v35 & (UserEventPoint >= v45->fields.value),
                                       0,
                                       v35 & 1,
                                       v79);
        p_progressData->klass = (BattleServantConfConponent_c *)v46;
        sub_B0D840(p_progressData, v46, v47, v48, v49, v50, v51, v52);
        eventUiValueEntityList = v80;
        v28 = v42;
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v27 >= max_length )
        return;
    }
LABEL_78:
    v78 = sub_B0D9A8(IsNullOrEmpty);
    sub_B0D948(v78, 0LL);
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
  if ( (byte_42155F0 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_B0D8A4(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__,
                                                     *(_QWORD *)&type);
    byte_42155F0 = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_B0D97C(this);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_26222800(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v6, v8, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoPointRiverProgressControl__PlayAnim_26222800(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42155F1 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, callback);
    byte_42155F1 = 1;
  }
  v5 = sub_B0D974(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo, callback, method);
  EventInfoPointRiverProgressControl__PlayAnim_d__26___ctor(
    (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
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
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2

  if ( (byte_42155F2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__, v5);
    sub_B0D8A4(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, v6);
    byte_42155F2 = 1;
  }
  v7 = sub_B0D974(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo, callback, method);
  EventInfoPointRiverProgressControl___c__DisplayClass27_0___ctor(
    (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v7,
    0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14),
        *(_QWORD *)(v7 + 24) = callback,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v7 + 24),
          (System_Int32_array **)callback,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        progressShip = this->fields.progressShip,
        v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v7,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0LL),
        !progressShip) )
  {
    sub_B0D97C(v8);
  }
  EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(progressShip, v24, v25);
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
    sub_B0D97C(this);
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
  int32_t v28; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v29; // [xsp+8h] [xbp-48h] BYREF
  int64_t NextPoint; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldTotalPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v34; // [xsp+2Ch] [xbp-24h] BYREF

  v34 = eventId;
  if ( (byte_42155FC & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventInfoPointRiverProgressControl_TypeInfo, v4);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v6);
    byte_42155FC = 1;
  }
  ReleaseScenarioIndex = 0;
  Id = 0;
  NextPoint = 0LL;
  OldTotalPoint = 0LL;
  v29 = 0LL;
  v28 = 0;
  v7 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method);
  System_Text_StringBuilder___ctor(v7, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_18;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v7 )
    goto LABEL_18;
  System_Text_StringBuilder__Append_42155400(v7, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v7,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v10 = this->fields.progressData;
  if ( !v10 )
    goto LABEL_18;
  ReleaseScenarioIndex = v10->fields.ReleaseScenarioIndex;
  v11 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0LL);
  System_Text_StringBuilder__Append_42155400(v7, v11, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v7,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v12 = this->fields.progressData;
  if ( !v12 )
    goto LABEL_18;
  OldTotalPoint = v12->fields.OldTotalPoint;
  v13 = System_Int64__ToString((int64_t)&OldTotalPoint, 0LL);
  System_Text_StringBuilder__Append_42155400(v7, v13, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v7,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v14 = this->fields.progressData;
  if ( !v14 )
    goto LABEL_18;
  NextPoint = v14->fields.NextPoint;
  v15 = System_Int64__ToString((int64_t)&NextPoint, 0LL);
  System_Text_StringBuilder__Append_42155400(v7, v15, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v7,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v16 = this->fields.progressData;
  if ( !v16 )
    goto LABEL_18;
  IsReleaseScenarioAnimEnd = v16->fields.IsReleaseScenarioAnimEnd;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  HIDWORD(v29) = System_Convert__ToInt32_41921308(IsReleaseScenarioAnimEnd, 0LL);
  v18 = System_Int32__ToString((int32_t)&v29 + 4, 0LL);
  System_Text_StringBuilder__Append_42155400(v7, v18, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v7,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v19 = this->fields.progressData;
  if ( !v19
    || (LODWORD(v29) = System_Convert__ToInt32_41921308(v19->fields.IsOpenFirstRiver, 0LL),
        v20 = System_Int32__ToString((int32_t)&v29, 0LL),
        System_Text_StringBuilder__Append_42155400(v7, v20, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                        v7,
                                        (System_String_o *)StringLiteral_1232/*":"*/,
                                        0LL),
        (v21 = this->fields.progressData) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(appended);
  }
  v28 = System_Convert__ToInt32_41921308(v21->fields.IsFreeQuestClear, 0LL);
  v22 = System_Int32__ToString((int32_t)&v28, 0LL);
  System_Text_StringBuilder__Append_42155400(v7, v22, 0LL);
  v23 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v23 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v23->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v25 = System_Int32__ToString((int32_t)&v34, 0LL);
  v26 = System_String__Concat_43849904(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v25, 0LL);
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
    sub_B0D97C(0LL);
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
  struct EventInfoPointRiverProgressControl_ProgressData_o *v7; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  const MethodInfo *v10; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x8
  EventInfoPointRiverProgressControl_ProgressData_o *v12; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  struct EventInfoRiverProgressDrawComponent_array *v15; // x8
  __int64 v16; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v18; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x9
  struct EventInfoRiverProgressDrawComponent_array *v20; // x8
  __int64 v21; // x9
  const MethodInfo *v22; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v23; // x20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v24; // x21
  __int64 v25; // x22
  QuestReleaseEntity_o *v26; // x8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v29; // x8
  __int64 v30; // x0

  v2 = this;
  if ( (byte_42155F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, method);
    this = (EventInfoPointRiverProgressControl_o *)sub_B0D8A4(
                                                     &Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__,
                                                     v3);
    byte_42155F7 = 1;
  }
  progressData = v2->fields.progressData;
  v2->fields.isChangeRiver = 1;
  if ( !progressData )
    goto LABEL_36;
  progressData->fields.IsReleaseScenarioAnimEnd = 0;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v2, method);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v6 = v2->fields.progressData;
    if ( !v6 )
      goto LABEL_36;
    v6->fields.IsFreeQuestClear = 0;
  }
  v7 = v2->fields.progressData;
  if ( !v7 )
    goto LABEL_36;
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_36;
  ReleaseScenarioIndex = v7->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressRiver->max_length )
    goto LABEL_37;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[ReleaseScenarioIndex];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v5);
  v11 = v2->fields.progressData;
  if ( !v11 )
    goto LABEL_36;
  ++v11->fields.ReleaseScenarioIndex;
  v12 = v2->fields.progressData;
  if ( !v12 )
    goto LABEL_36;
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_36;
  size = baseQuestReleaseEntList->fields._size;
  if ( v12->fields.ReleaseScenarioIndex >= size )
  {
    v12->fields.ReleaseScenarioIndex = size - 1;
    v12 = v2->fields.progressData;
    if ( !v12 )
      goto LABEL_36;
  }
  v15 = v2->fields.progressRiver;
  if ( !v15 )
    goto LABEL_36;
  v16 = v12->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v16 >= v15->max_length )
    goto LABEL_37;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_36;
  this = (EventInfoPointRiverProgressControl_o *)v15->m_Items[v16];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    v12,
    eventUiEntity->fields.eventId,
    v10);
  v19 = v2->fields.progressData;
  if ( !v19 )
    goto LABEL_36;
  v20 = v2->fields.progressRiver;
  if ( !v20 )
    goto LABEL_36;
  v21 = v19->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v21 >= v20->max_length )
  {
LABEL_37:
    v30 = sub_B0D9A8(this);
    sub_B0D948(v30, 0LL);
  }
  this = (EventInfoPointRiverProgressControl_o *)v20->m_Items[v21];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v18);
  v23 = v2->fields.progressData;
  if ( !v23 )
    goto LABEL_36;
  v24 = v2->fields.baseQuestReleaseEntList;
  if ( !v24 )
    goto LABEL_36;
  v25 = v23->fields.ReleaseScenarioIndex;
  if ( v24->fields._size <= (unsigned int)v25 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v26 = v24->fields._items->m_Items[v25];
  if ( !v26 )
    goto LABEL_36;
  v23->fields.NextPoint = v26->fields.value;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_36;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v2->fields.progressData, v22);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v2, v27) )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v28),
        (v29 = v2->fields.progressData) == 0LL) )
  {
LABEL_36:
    sub_B0D97C(this);
  }
  v29->fields.IsReleaseScenarioAnimEnd = 1;
LABEL_34:
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.progressShip;
  if ( !this )
    goto LABEL_36;
  EventInfoShipProgressDrawComponent__ResetShip(
    (EventInfoShipProgressDrawComponent_o *)this,
    v2->fields.progressData,
    v28);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_42155EE & 1) == 0 )
  {
    sub_B0D8A4(&NGUITools_TypeInfo, entities);
    sub_B0D8A4(&StringLiteral_1156/*"2DUI"*/, v5);
    byte_42155EE = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v7 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1156/*"2DUI"*/, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v7, 0LL);
    this->fields.eventUiValueEntityList = entities;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)entities,
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
  __int64 v9; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x22
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x23
  int32_t size; // w8
  __int64 ReleaseScenarioIndex; // x24
  QuestReleaseEntity_o *v17; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  const MethodInfo *v19; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v20; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x8
  EventInfoPointRiverProgressControl_ProgressData_o *v22; // x1
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v24; // x9
  struct EventUiEntity_o *v25; // x10
  const MethodInfo *v26; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v29; // x8
  struct EventInfoUserEventPointControl_o *v30; // x9
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v34; // x8
  const MethodInfo *v35; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v36; // x8
  const MethodInfo *v37; // x1
  TerminalPramsManager_c *v38; // x0
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v41; // x9
  struct EventInfoRiverProgressDrawComponent_array *v42; // x8
  __int64 v43; // x9
  __int64 v44; // x1
  TerminalPramsManager_c *v45; // x0
  const MethodInfo *v46; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v47; // x8
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x4
  struct EventUiEntity_o *v50; // x8
  const MethodInfo *v51; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v52; // x9
  struct EventInfoRiverProgressDrawComponent_array *v53; // x8
  __int64 v54; // x9
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  TerminalPramsManager_c *v57; // x0
  struct EventUiEntity_o *v58; // x8
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v66; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_42155EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    this = (EventInfoPointRiverProgressControl_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    byte_42155EF = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_138;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210D3D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    byte_4210D3D = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*((_BYTE *)this[1].monitor + 450) )
  {
    progressData = v3->fields.progressData;
    if ( !progressData )
      goto LABEL_138;
    baseQuestReleaseEntList = v3->fields.baseQuestReleaseEntList;
    if ( !baseQuestReleaseEntList )
      goto LABEL_138;
    size = baseQuestReleaseEntList->fields._size;
    if ( progressData->fields.ReleaseScenarioIndex >= size )
    {
      progressData->fields.ReleaseScenarioIndex = size - 1;
      progressData = v3->fields.progressData;
      if ( !progressData )
        goto LABEL_138;
      baseQuestReleaseEntList = v3->fields.baseQuestReleaseEntList;
      if ( !baseQuestReleaseEntList )
        goto LABEL_138;
    }
    ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
    if ( baseQuestReleaseEntList->fields._size <= (unsigned int)ReleaseScenarioIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v17 = baseQuestReleaseEntList->fields._items->m_Items[ReleaseScenarioIndex];
    if ( !v17 )
      goto LABEL_138;
    progressData->fields.NextPoint = v17->fields.value;
    v18 = v3->fields.progressData;
    if ( !v18 )
      goto LABEL_138;
    v18->fields.OldTotalPoint = v18->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, v11);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v20 = v3->fields.progressData;
      if ( !v20 )
        goto LABEL_138;
      v20->fields.IsFreeQuestClear = 1;
    }
    v21 = v3->fields.progressData;
    if ( !v21 )
LABEL_138:
      sub_B0D97C(this);
    if ( v21->fields.OldTotalPoint >= v21->fields.NextPoint && v21->fields.IsFreeQuestClear )
      v21->fields.IsReleaseScenarioAnimEnd = 1;
    EventInfoPointRiverProgressControl__SaveAllData(v3, v19);
  }
  v22 = v3->fields.progressData;
  if ( !v22 )
    goto LABEL_138;
  progressRiver = v3->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_138;
  v24 = v22->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v24 >= progressRiver->max_length )
  {
LABEL_139:
    v66 = sub_B0D9A8(this);
    sub_B0D948(v66, 0LL);
  }
  v25 = v3->fields.eventUiEntity;
  if ( !v25 )
    goto LABEL_138;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[v24];
  if ( !this )
    goto LABEL_138;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    v22,
    v25->fields.eventId,
    v12);
  v27 = v3->fields.progressData;
  if ( !v27 )
    goto LABEL_138;
  totalPointLabel = v3->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_138;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v27->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, v26);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v29 = v3->fields.progressData;
    if ( !v29 )
      goto LABEL_138;
    v30 = v3->fields.totalPointLabel;
    if ( !v30 )
      goto LABEL_138;
    v30->fields._oldTotalPoint_k__BackingField = v29->fields.TotalPoint;
  }
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.totalPointLabel;
  if ( !this )
    goto LABEL_138;
  ((void (__fastcall *)(EventInfoPointRiverProgressControl_o *, struct EventUiValueEntity_array *, Il2CppMethodPointer))this->klass->vtable._5_Setup.method)(
    this,
    v3->fields.eventUiValueEntityList,
    this->klass->vtable._6_SetValue.methodPtr);
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v31) )
    goto LABEL_142;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210D3D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v32);
    byte_4210D3D = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*((_BYTE *)this[1].monitor + 450) )
    goto LABEL_142;
  v34 = v3->fields.progressData;
  if ( !v34 )
    goto LABEL_138;
  if ( !v34->fields.IsOpenFirstRiver )
  {
    if ( (BYTE3(this[1].fields.userEventPointMaster) & 4) != 0 && !LODWORD(this[1].fields.assetData2) )
      j_il2cpp_runtime_class_init_0(this);
    if ( !byte_4211ACA )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v32);
      byte_4211ACA = 1;
    }
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
    }
    *((_BYTE *)this[1].monitor + 450) = 0;
    v58 = v3->fields.eventUiEntity;
    if ( !v58 )
      goto LABEL_138;
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
    if ( !this )
      goto LABEL_138;
    EventInfoShipProgressDrawComponent__Setup(
      (EventInfoShipProgressDrawComponent_o *)this,
      v3,
      v58->fields.eventId,
      1,
      v33);
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_138;
    EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v59);
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_138;
    EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v60);
    this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v3,
                                                     0LL);
    if ( !this )
      goto LABEL_138;
    this = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_138;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v3,
                                                     0LL);
    if ( !this )
      goto LABEL_138;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
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
        v68.fields.x = x;
        v68.fields.y = y;
        v68.fields.z = z;
        EventInfoUISlideAnimation__SetAfterActionAndInPosition(
          (EventInfoUISlideAnimation_o *)Component_srcLineSprite,
          0LL,
          v68,
          0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
        GameObjectExtensions__SetLocalPosition(
          gameObject,
          *(UnityEngine_Vector3_o *)&Component_srcLineSprite->fields.mcLineSprite,
          0LL);
        return;
      }
      goto LABEL_138;
    }
  }
  else
  {
LABEL_142:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, v32) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210D3D )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v35);
        byte_4210D3D = 1;
      }
      this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !*((_BYTE *)this[1].monitor + 450) )
      {
        v36 = v3->fields.progressData;
        if ( !v36 )
          goto LABEL_138;
        v36->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v3, v35);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v35) )
      goto LABEL_76;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210D3D )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v37);
      byte_4210D3D = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    if ( !v38->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v37);
      v47 = v3->fields.progressData;
      if ( !v47 )
        goto LABEL_138;
      v47->fields.OldTotalPoint = v47->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v3, v46);
    }
    else
    {
LABEL_76:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v37) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_138;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v39);
        v41 = v3->fields.progressData;
        if ( !v41 )
          goto LABEL_138;
        v42 = v3->fields.progressRiver;
        if ( !v42 )
          goto LABEL_138;
        v43 = v41->fields.ReleaseScenarioIndex;
        if ( (unsigned int)v43 < v42->max_length )
        {
          this = (EventInfoPointRiverProgressControl_o *)v42->m_Items[v43];
          if ( this )
          {
            EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v40);
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4211ACA )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v44);
              byte_4211ACA = 1;
            }
            v45 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v45 = TerminalPramsManager_TypeInfo;
            }
            v45->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
            return;
          }
          goto LABEL_138;
        }
        goto LABEL_139;
      }
    }
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_138;
    EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v39);
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_138;
    EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v48);
    v50 = v3->fields.eventUiEntity;
    if ( !v50 )
      goto LABEL_138;
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
    if ( !this )
      goto LABEL_138;
    EventInfoShipProgressDrawComponent__Setup(
      (EventInfoShipProgressDrawComponent_o *)this,
      v3,
      v50->fields.eventId,
      v3->fields.isChangeRiver,
      v49);
    v52 = v3->fields.progressData;
    if ( !v52 )
      goto LABEL_138;
    v53 = v3->fields.progressRiver;
    if ( !v53 )
      goto LABEL_138;
    v54 = v52->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v54 >= v53->max_length )
      goto LABEL_139;
    this = (EventInfoPointRiverProgressControl_o *)v53->m_Items[v54];
    if ( !this )
      goto LABEL_138;
    EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v51);
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
    if ( !this )
      goto LABEL_138;
    EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v55);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ACA )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v56);
      byte_4211ACA = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v57 = TerminalPramsManager_TypeInfo;
    }
    v57->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v56) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( this )
      {
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
        return;
      }
      goto LABEL_138;
    }
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
  Il2CppObject *v8; // x20
  struct EventInfoPointRiverProgressControl_o *v9; // x1
  Il2CppObject *callback; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v15; // x8
  System_Collections_IEnumerator_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x9
  struct EventInfoRiverProgressDrawComponent_array *v20; // x8
  __int64 v21; // x9
  Il2CppObject *v22; // x22
  EventInfoRiverProgressDrawComponent_o *v23; // x19
  System_Action_o *v24; // x21
  EventInfoRiverProgressDrawComponent_o *v25; // x0
  System_Action_o *v26; // x1
  bool v27; // w2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v28; // x8
  System_Collections_IEnumerator_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v36; // x19
  System_Action_o *v37; // x21
  System_Collections_IEnumerator_o *v38; // x0
  __int64 v39; // x0

  v3 = this;
  if ( (byte_4211B6D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__, v4);
    sub_B0D8A4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__, v5);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_B0D8A4(
                                                                     &EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo,
                                                                     v6);
    byte_4211B6D = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
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
      v29 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
              (EventInfoShipProgressDrawComponent_o *)this,
              1,
              0,
              0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                                                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                       v29,
                                                                       0LL);
      v32 = _4__this->fields.progressData;
      if ( !v32 )
        goto LABEL_38;
      progressRiver = _4__this->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_38;
      ReleaseScenarioIndex = v32->fields.ReleaseScenarioIndex;
      if ( (unsigned int)ReleaseScenarioIndex < progressRiver->max_length )
      {
        _8__1 = (Il2CppObject *)v3->fields.__8__1;
        v36 = progressRiver->m_Items[ReleaseScenarioIndex];
        v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
        System_Action___ctor(
          v37,
          _8__1,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
          0LL);
        if ( !v36 )
          goto LABEL_38;
        v27 = 1;
        v25 = v36;
        v26 = v37;
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
        v15 = v3->fields.__8__1;
        if ( !v15 )
          goto LABEL_38;
        EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v15->fields.callback, 0LL);
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
        v28 = v3->fields.__8__1;
        if ( !v28 )
          goto LABEL_38;
        ActionExtensions__Call(v28->fields.callback, 0LL);
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
      v16 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
              (EventInfoShipProgressDrawComponent_o *)this,
              0,
              0,
              0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                                                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                       v16,
                                                                       0LL);
      v19 = _4__this->fields.progressData;
      if ( !v19 )
        goto LABEL_38;
      v20 = _4__this->fields.progressRiver;
      if ( !v20 )
        goto LABEL_38;
      v21 = v19->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v21 < v20->max_length )
      {
        v22 = (Il2CppObject *)v3->fields.__8__1;
        v23 = v20->m_Items[v21];
        v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
        System_Action___ctor(
          v24,
          v22,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
          0LL);
        if ( !v23 )
          goto LABEL_38;
        v25 = v23;
        v26 = v24;
        v27 = 0;
LABEL_36:
        v38 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v25, v26, v27, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, v38, 0LL);
        return 0;
      }
    }
    v39 = sub_B0D9A8(this);
    sub_B0D948(v39, 0LL);
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v8 = (Il2CppObject *)sub_B0D974(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo, method, v2);
    System_Object___ctor(v8, 0LL);
    v3->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v8;
    sub_B0D840(&v3->fields.__8__1, v8);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v3->fields.__8__1;
    if ( this )
    {
      v9 = v3->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v9;
      sub_B0D840(&this->fields, v9);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v3->fields.__8__1;
      if ( this )
      {
        callback = (Il2CppObject *)v3->fields.callback;
        this->fields.__2__current = callback;
        sub_B0D840(&this->fields.__2__current, callback);
        v3->fields.__2__current = 0LL;
        p__2__current = &v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_38:
    sub_B0D97C(this);
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
    sub_B0D97C(this);
  }
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_o *v5; // x8
  UnityEngine_MonoBehaviour_o *v6; // x20
  System_Collections_IEnumerator_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_MonoBehaviour_o *v10; // x20
  int *monitor; // x9
  _DWORD *v12; // x8
  __int64 v13; // x9
  EventInfoRiverProgressDrawComponent_o *v14; // x21
  System_Action_o *_9__2; // x22
  System_Collections_IEnumerator_o *v16; // x0
  __int64 v17; // x0

  if ( (byte_4211B6B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__, v3);
    byte_4211B6B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoPointRiverProgressControl__SetNextRiverProgressData(_4__this, 0LL);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v5->fields.releaseTermsObject;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, 0LL);
  v6 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v6[3].klass;
  if ( !_4__this )
    goto LABEL_16;
  v7 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
         (EventInfoShipProgressDrawComponent_o *)_4__this,
         1,
         1,
         0LL);
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(v6, v7, 0LL);
  v10 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  monitor = (int *)v10[6].monitor;
  if ( !monitor )
    goto LABEL_16;
  v12 = v10[3].monitor;
  if ( !v12 )
    goto LABEL_16;
  v13 = monitor[5];
  if ( (unsigned int)v13 >= v12[6] )
  {
    v17 = sub_B0D9A8(_4__this);
    sub_B0D948(v17, 0LL);
  }
  v14 = *(EventInfoRiverProgressDrawComponent_o **)&v12[2 * v13 + 8];
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v14 )
LABEL_16:
    sub_B0D97C(_4__this);
  v16 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v14, _9__2, 1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(v10, v16, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  v3 = this;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)_4__this->fields.totalPointLabel;
  if ( !this
    || (EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0LL)
    || (EventInfoPointRiverProgressControl__SetMaskPanelActive((EventInfoPointRiverProgressControl_o *)this, 0, 0LL),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0LL)
    || (EventInfoPointRiverProgressControl__ApplyProgressData((EventInfoPointRiverProgressControl_o *)this, 0LL),
        (this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0LL) )
  {
LABEL_7:
    sub_B0D97C(this);
  }
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_o *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventInfoPointRiverProgressControl_o *v9; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v14; // x9
  EventInfoRiverProgressDrawComponent_o *v15; // x20
  System_Action_o *_9__1; // x21
  struct EventInfoPointRiverProgressControl_o *v17; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  struct EventInfoPointRiverProgressControl_o *v19; // x8
  struct EventInfoPointRiverProgressControl_o *v20; // x8
  __int64 v21; // x0

  if ( (byte_4211B6C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&EventInfoPointRiverProgressControl_TypeInfo, v3);
    sub_B0D8A4(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__, v4);
    byte_4211B6C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsScenarioReleaseAnim(
                                                       _4__this,
                                                       0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_34;
    _4__this = (EventInfoPointRiverProgressControl_o *)v6->fields.releaseTermsObject;
    if ( !_4__this )
      goto LABEL_34;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)_4__this, 0, 0LL);
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_34;
    progressData = v9->fields.progressData;
    if ( !progressData )
      goto LABEL_34;
    ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
    _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v9 = this->fields.__4__this;
      if ( !v9 )
        goto LABEL_34;
    }
    if ( ReleaseScenarioIndex >= EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      _4__this = (EventInfoPointRiverProgressControl_o *)v9->fields.releaseTermsObject;
      if ( !_4__this )
        goto LABEL_34;
      EventInfoReleaseEventPointControl__PlayCheckSE((EventInfoReleaseEventPointControl_o *)_4__this, 0LL);
    }
    else
    {
      v12 = v9->fields.progressData;
      if ( !v12 )
        goto LABEL_34;
      progressRiver = v9->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_34;
      v14 = v12->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v14 >= progressRiver->max_length )
      {
        v21 = sub_B0D9A8(_4__this);
        sub_B0D948(v21, 0LL);
      }
      v15 = progressRiver->m_Items[v14];
      _9__1 = this->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)this,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0LL);
        this->fields.__9__1 = _9__1;
        sub_B0D840(&this->fields.__9__1, _9__1);
      }
      if ( !v15 )
        goto LABEL_34;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v15, _9__1, 0LL);
    }
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v17 = this->fields.__4__this;
    if ( !v17 )
      goto LABEL_34;
    v18 = v17->fields.progressData;
    if ( !v18 )
      goto LABEL_34;
    if ( !v18->fields.IsFreeQuestClear )
    {
      v18->fields.IsFreeQuestClear = 1;
      v19 = this->fields.__4__this;
      if ( v19 )
      {
        _4__this = (EventInfoPointRiverProgressControl_o *)v19->fields.releaseTermsObject;
        if ( _4__this )
        {
          EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, 0LL);
          goto LABEL_30;
        }
      }
LABEL_34:
      sub_B0D97C(_4__this);
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
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_34;
  v20->fields.isChangeRiver = 0;
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
    sub_B0D97C(this);
  }
  EventInfoPointRiverProgressControl__SetMaskPanelActive((EventInfoPointRiverProgressControl_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}