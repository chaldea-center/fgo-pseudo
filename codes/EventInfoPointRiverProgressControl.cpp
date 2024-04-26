void __fastcall EventInfoPointRiverProgressControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4352A56 & 1) == 0 )
  {
    sub_B70694(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_B70694(&StringLiteral_8632/*"LineProgressData_"*/);
    byte_4352A56 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoPointRiverProgressControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_8632/*"LineProgressData_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8632/*"LineProgressData_"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX = 5;
}


void __fastcall EventInfoPointRiverProgressControl___ctor(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4352A55 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    byte_4352A55 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.baseQuestReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.baseQuestReleaseEntList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  sub_B70630(
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
    sub_B7076C(this, method);
  progressData->fields.OldTotalPoint = progressData->fields.TotalPoint;
}


void __fastcall EventInfoPointRiverProgressControl__Awake(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  int max_length; // w8
  int v5; // w9
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = this;
  if ( (byte_4352A43 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserEventPointMaster___);
    this = (EventInfoPointRiverProgressControl_o *)sub_B70694(&DataManager_TypeInfo);
    byte_4352A43 = 1;
  }
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    sub_B7076C(this, method);
  max_length = progressRiver->max_length;
  v5 = -1;
  do
    ++v5;
  while ( v5 < max_length );
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  v2->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_WarQuestSelectionMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.userEventPointMaster,
    Master_WarQuestSelectionMaster,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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

  if ( (byte_4352A54 & 1) == 0 )
  {
    sub_B70694(&EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
    byte_4352A54 = 1;
  }
  v17 = (EventInfoPointRiverProgressControl_ProgressData_o *)sub_B70764(EventInfoPointRiverProgressControl_ProgressData_TypeInfo);
  EventInfoPointRiverProgressControl_ProgressData___ctor(v17, 0LL);
  if ( !v17 )
    sub_B7076C(v18, v19);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  _DWORD *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x10
  int32_t v18; // w2
  __int64 v19; // x1
  EventInfoPointRiverProgressControl_c *v20; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v22; // x1
  System_String_o *v23; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v29; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4352A51 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&EventEntity_TypeInfo);
    sub_B70694(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4352A51 = 1;
  }
  v29 = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !list) )
  {
    sub_B7076C(Master_WarQuestSelectionMaster, v2);
  }
  v4 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_20:
      v14 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                      Enumerator,
                      *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) >= (unsigned int)v17
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v17 - 8) == EventEntity_TypeInfo )
      {
        v18 = v15[4];
        v29 = v18;
        if ( !v4 )
          sub_B7076C(v15, v16);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v4,
               &entity,
               v18,
               (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B7076C(0LL, v19);
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v20 = EventInfoPointRiverProgressControl_TypeInfo;
            if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
              v20 = EventInfoPointRiverProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v20->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
            v22 = System_Int32__ToString((int32_t)&v29, 0LL);
            v23 = System_String__Concat_44758168(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v22, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v23, 0LL);
          }
        }
      }
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_37:
    v27 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
}


int64_t __fastcall EventInfoPointRiverProgressControl__GetUserEventPoint(
        EventInfoPointRiverProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_4352A50 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4352A50 = 1;
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
  if ( (byte_4352A52 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_B70694(&EventInfoPointRiverProgressControl_TypeInfo);
    byte_4352A52 = 1;
  }
  eventId = 0;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B7076C(this, method);
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
  v7 = System_String__Concat_44758168(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v6, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v7, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl__Initialization(
        EventInfoPointRiverProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int32_t eventId; // w20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x0
  struct System_Collections_Generic_List_QuestReleaseEntity__o **p_baseQuestReleaseEntList; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v21; // x23
  int32_t size; // w8
  int v23; // w21
  int32_t v24; // w20
  QuestReleaseEntity_o *v25; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v26; // x24
  int64_t value; // x23
  QuestReleaseEntity_o *v28; // x8
  bool v29; // vf

  if ( (byte_4352A44 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_B70694(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    byte_4352A44 = 1;
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
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
      (System_Int32_array **)entity,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    eventId = entity->fields.eventId;
    if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
    }
    QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(eventId, 0LL);
    this->fields.baseQuestReleaseEntList = QuestReleaseList;
    p_baseQuestReleaseEntList = &this->fields.baseQuestReleaseEntList;
    sub_B70630(
      (BattleServantConfConponent_o *)p_baseQuestReleaseEntList,
      (System_Int32_array **)QuestReleaseList,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = *p_baseQuestReleaseEntList;
    if ( !*p_baseQuestReleaseEntList )
      goto LABEL_23;
    size = v21->fields._size;
    if ( size - 1 >= 1 )
    {
      v23 = size - 2;
      do
      {
        v24 = v23 + 1;
        if ( v21->fields._size <= (unsigned int)(v23 + 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v25 = v21->fields._items->m_Items[v24];
        if ( !v25 )
          break;
        v26 = *p_baseQuestReleaseEntList;
        if ( !*p_baseQuestReleaseEntList )
          break;
        value = v25->fields.value;
        if ( v26->fields._size <= (unsigned int)v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v28 = v26->fields._items->m_Items[v23];
        if ( !v28 )
          break;
        if ( value == v28->fields.value )
        {
          totalPointLabel = (struct EventInfoUserEventPointControl_o *)*p_baseQuestReleaseEntList;
          if ( !*p_baseQuestReleaseEntList )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)totalPointLabel,
            v24,
            (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_QuestReleaseEntity__RemoveAt__);
        }
        v29 = __OFSUB__(v23--, 1);
        if ( v23 < 0 != v29 )
          return;
        v21 = *p_baseQuestReleaseEntList;
      }
      while ( *p_baseQuestReleaseEntList );
LABEL_23:
      sub_B7076C(totalPointLabel, entity);
    }
  }
}


bool __fastcall EventInfoPointRiverProgressControl__IsChangeRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *v2; // x19
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x19
  unsigned int size; // w9
  __int64 ReleaseScenarioIndex; // x20
  QuestReleaseEntity_o *v7; // x8
  int32_t questId; // w19

  v2 = this;
  if ( (byte_4352A4B & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4352A4B = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v7 = baseQuestReleaseEntList->fields._items->m_Items[ReleaseScenarioIndex];
  if ( !v7 )
LABEL_16:
    sub_B7076C(this, method);
  questId = v7->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24296868(questId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsClearFreeQuest(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t pointRiverProgressCommonNo; // w19

  if ( (byte_4352A4D & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4352A4D = 1;
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

  if ( (byte_4352A4C & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4352A4C = 1;
  }
  endScenarioQuestId = this->fields.endScenarioQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24296868(endScenarioQuestId, -1, 0, 0LL);
}


bool __fastcall EventInfoPointRiverProgressControl__IsFirstRiver(
        EventInfoPointRiverProgressControl_o *this,
        const MethodInfo *method)
{
  int32_t firstRiverReleaseQuestId; // w19

  if ( (byte_4352A4A & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_4352A4A = 1;
  }
  firstRiverReleaseQuestId = this->fields.firstRiverReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_24296868(firstRiverReleaseQuestId, -1, 0, 0LL);
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
    sub_B7076C(this, *(_QWORD *)&type);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
  EventInfoPointRiverProgressControl_c *v9; // x0
  System_String_o *SAVE_KEY_PREFIX_LINE_PROGRESS_DATA; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *String; // x21
  __int64 IsNullOrEmpty; // x0
  __int64 v15; // x1
  struct EventUiValueEntity_array *eventUiValueEntityList; // x10
  int max_length; // w8
  unsigned int v18; // w27
  int v19; // w11
  EventUiValueEntity_o *v20; // x8
  int v21; // w26
  int32_t v22; // w21
  const MethodInfo *v23; // x3
  int64_t UserEventPoint; // x22
  const MethodInfo *v25; // x1
  char v26; // w23
  int32_t v27; // w24
  int32_t size; // w8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t klass; // w25
  _BOOL8 IsQuestClear_24296868; // x0
  __int64 v33; // x1
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int v35; // w26
  int v36; // w8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v37; // x25
  QuestReleaseEntity_o *v38; // x8
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x3
  int v47; // w19
  __int64 v48; // x25
  int32_t v49; // w21
  int32_t v50; // w22
  int v51; // w23
  int64_t v52; // x20
  int v53; // w26
  bool v54; // cc
  int64_t v55; // x23
  int64_t v56; // x24
  int v57; // w19
  int32_t v58; // w26
  int32_t v59; // w27
  int32_t v60; // w25
  bool v61; // w26
  bool v62; // w27
  _BOOL8 v63; // x0
  System_Int32_array **ProgressData; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x0
  const MethodInfo *v72; // [xsp+8h] [xbp-B8h]
  struct EventUiValueEntity_array *v73; // [xsp+20h] [xbp-A0h]
  BattleServantConfConponent_o *p_progressData; // [xsp+28h] [xbp-98h]
  _BYTE v75[28]; // [xsp+30h] [xbp-90h] BYREF
  int v76; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+50h] [xbp-70h] BYREF
  int32_t v78; // [xsp+6Ch] [xbp-54h] BYREF

  v78 = eventId;
  if ( (byte_4352A4F & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_B70694(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352A4F = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v76 = 0;
  this->fields.progressData = 0LL;
  p_progressData = (BattleServantConfConponent_o *)&this->fields.progressData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v9 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v9->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v11 = System_Int32__ToString((int32_t)&v78, 0LL);
  v12 = System_String__Concat_44758168(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v11, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = sub_B706AC(char___TypeInfo, 1LL);
    if ( !IsNullOrEmpty )
      goto LABEL_77;
    v15 = IsNullOrEmpty;
    if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
      goto LABEL_78;
    *(_WORD *)(IsNullOrEmpty + 32) = 58;
    if ( !String
      || (IsNullOrEmpty = (__int64)System_String__Split(String, (System_Char_array *)IsNullOrEmpty, 0LL)) == 0 )
    {
LABEL_77:
      sub_B7076C(IsNullOrEmpty, v15);
    }
    v47 = *(_DWORD *)(IsNullOrEmpty + 24);
    v48 = IsNullOrEmpty;
    if ( v47 < 1 )
    {
      v49 = 0;
    }
    else
    {
      IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
      v49 = IsNullOrEmpty;
      if ( v47 != 1 )
      {
        if ( *(_DWORD *)(v48 + 24) <= 1u )
          goto LABEL_78;
        v50 = System_Int32__Parse(*(System_String_o **)(v48 + 40), 0LL);
LABEL_46:
        IsNullOrEmpty = EventInfoPointRiverProgressControl__GetUserEventPoint(this, v78, v49, v46);
        if ( v47 <= 2 )
          v51 = 0;
        else
          v51 = v47;
        v52 = IsNullOrEmpty;
        if ( v47 < 3 )
        {
          v59 = 0;
          v56 = 0LL;
          v55 = 0LL;
        }
        else
        {
          if ( *(_DWORD *)(v48 + 24) <= 2u )
            goto LABEL_78;
          IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v48 + 48), 0LL);
          if ( v51 <= 3 )
            v53 = 0;
          else
            v53 = v51;
          v54 = v51 < 4;
          v55 = IsNullOrEmpty;
          if ( v54 )
          {
            v59 = 0;
            v56 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v48 + 24) <= 3u )
              goto LABEL_78;
            IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v48 + 56), 0LL);
            v56 = IsNullOrEmpty;
            if ( v53 <= 4 )
              v57 = 0;
            else
              v57 = v53;
            if ( v53 >= 5 )
            {
              if ( *(_DWORD *)(v48 + 24) <= 4u )
                goto LABEL_78;
              IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v48 + 64), 0LL);
              v58 = IsNullOrEmpty;
              if ( v57 < 6 )
              {
                v59 = 0;
              }
              else
              {
                if ( *(_DWORD *)(v48 + 24) <= 5u )
                  goto LABEL_78;
                IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v48 + 72), 0LL);
                v59 = IsNullOrEmpty;
                if ( v57 >= 7 )
                {
                  if ( *(_DWORD *)(v48 + 24) <= 6u )
                    goto LABEL_78;
                  v60 = System_Int32__Parse(*(System_String_o **)(v48 + 80), 0LL);
                  goto LABEL_71;
                }
              }
LABEL_70:
              v60 = 0;
LABEL_71:
              if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_Convert_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              }
              v61 = System_Convert__ToBoolean_42425024(v58, 0LL);
              v62 = System_Convert__ToBoolean_42425024(v59, 0LL);
              v63 = System_Convert__ToBoolean_42425024(v60, 0LL);
              ProgressData = (System_Int32_array **)EventInfoPointRiverProgressControl__CreateProgressData(
                                                      (EventInfoPointRiverProgressControl_o *)v63,
                                                      v49,
                                                      v50,
                                                      v52,
                                                      v55,
                                                      v56,
                                                      v61,
                                                      v62,
                                                      v63,
                                                      v72);
              p_progressData->klass = (BattleServantConfConponent_c *)ProgressData;
              sub_B70630(p_progressData, ProgressData, v65, v66, v67, v68, v69, v70);
              return;
            }
            v59 = 0;
          }
        }
        v58 = 0;
        goto LABEL_70;
      }
    }
    v50 = 0;
    goto LABEL_46;
  }
  eventUiValueEntityList = this->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_77;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v19 = 0;
    v73 = this->fields.eventUiValueEntityList;
    while ( v18 < max_length )
    {
      v20 = eventUiValueEntityList->m_Items[v18];
      if ( !v20 )
        goto LABEL_77;
      if ( v20->fields.type == 2 )
      {
        v21 = v19;
        v22 = System_Int32__Parse(v20->fields.value, 0LL);
        UserEventPoint = EventInfoPointRiverProgressControl__GetUserEventPoint(this, v78, v22, v23);
        IsNullOrEmpty = EventInfoPointRiverProgressControl__IsClearFreeQuest(this, v25);
        if ( !this->fields.baseQuestReleaseEntList )
          goto LABEL_77;
        v26 = IsNullOrEmpty;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v75,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.baseQuestReleaseEntList,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
        v27 = 0;
        v77 = *(System_Collections_Generic_List_Enumerator_T__o *)v75;
        while ( 1 )
        {
          v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v77,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
          if ( !v29 )
            break;
          if ( !v77.fields.current )
            sub_B7076C(v29, v30);
          klass = (int32_t)v77.fields.current[1].klass;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_24296868 = CondType__IsQuestClear_24296868(klass, -1, 0, 0LL);
          if ( !IsQuestClear_24296868 )
            break;
          baseQuestReleaseEntList = this->fields.baseQuestReleaseEntList;
          ++v27;
          if ( !baseQuestReleaseEntList )
            sub_B7076C(IsQuestClear_24296868, v33);
          size = baseQuestReleaseEntList->fields._size;
          if ( v27 >= size )
            v27 = size - 1;
        }
        *(_DWORD *)&v75[4 * v21 + 24] = 220;
        v35 = ++v76;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v77,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( *(_DWORD *)&v75[4 * v35 + 20] == 220 )
          {
            --v35;
            v76 = v36;
          }
        }
        v37 = this->fields.baseQuestReleaseEntList;
        if ( !v37 )
          goto LABEL_77;
        if ( v37->fields._size <= (unsigned int)v27 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v38 = v37->fields._items->m_Items[v27];
        if ( !v38 )
          goto LABEL_77;
        v39 = (System_Int32_array **)EventInfoPointRiverProgressControl__CreateProgressData(
                                       (EventInfoPointRiverProgressControl_o *)IsNullOrEmpty,
                                       v22,
                                       v27,
                                       UserEventPoint,
                                       UserEventPoint,
                                       v38->fields.value,
                                       v26 & (UserEventPoint >= v38->fields.value),
                                       0,
                                       v26 & 1,
                                       v72);
        p_progressData->klass = (BattleServantConfConponent_c *)v39;
        sub_B70630(p_progressData, v39, v40, v41, v42, v43, v44, v45);
        eventUiValueEntityList = v73;
        v19 = v35;
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v18 >= max_length )
        return;
    }
LABEL_78:
    v71 = sub_B70798(IsNullOrEmpty);
    sub_B70738(v71, 0LL);
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
  if ( (byte_4352A47 & 1) == 0 )
  {
    this = (EventInfoPointRiverProgressControl_o *)sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    byte_4352A47 = 1;
  }
  if ( type != 1 )
    goto LABEL_7;
  baseQuestReleaseEntList = v6->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    sub_B7076C(this, *(_QWORD *)&type);
  if ( baseQuestReleaseEntList->fields._size )
  {
    v8 = EventInfoPointRiverProgressControl__PlayAnim_26715724(v6, callback, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)v6, v8, 0LL);
  }
  else
  {
LABEL_7:
    ActionExtensions__Call(callback, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoPointRiverProgressControl__PlayAnim_26715724(
        EventInfoPointRiverProgressControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4352A48 & 1) == 0 )
  {
    sub_B70694(&EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
    byte_4352A48 = 1;
  }
  v5 = sub_B70764(EventInfoPointRiverProgressControl__PlayAnim_d__26_TypeInfo);
  EventInfoPointRiverProgressControl__PlayAnim_d__26___ctor(
    (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventInfoShipProgressDrawComponent_o *progressShip; // x19
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x2

  if ( (byte_4352A49 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__);
    sub_B70694(&EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
    byte_4352A49 = 1;
  }
  v5 = sub_B70764(EventInfoPointRiverProgressControl___c__DisplayClass27_0_TypeInfo);
  EventInfoPointRiverProgressControl___c__DisplayClass27_0___ctor(
    (EventInfoPointRiverProgressControl___c__DisplayClass27_0_o *)v5,
    0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = callback,
        sub_B70630(
          (BattleServantConfConponent_o *)(v5 + 24),
          (System_Int32_array **)callback,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        progressShip = this->fields.progressShip,
        v21 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__0__,
          0LL),
        !progressShip) )
  {
    sub_B7076C(v6, v7);
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
    sub_B7076C(this, method);
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
  int32_t v26; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v27; // [xsp+8h] [xbp-48h] BYREF
  int64_t NextPoint; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldTotalPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t ReleaseScenarioIndex; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v32; // [xsp+2Ch] [xbp-24h] BYREF

  v32 = eventId;
  if ( (byte_4352A53 & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_4352A53 = 1;
  }
  ReleaseScenarioIndex = 0;
  Id = 0;
  NextPoint = 0LL;
  OldTotalPoint = 0LL;
  v27 = 0LL;
  v26 = 0;
  v4 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_18;
  Id = progressData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v4 )
    goto LABEL_18;
  System_Text_StringBuilder__Append_42601980(v4, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                  v4,
                                  (System_String_o *)StringLiteral_1250/*":"*/,
                                  0LL);
  v8 = this->fields.progressData;
  if ( !v8 )
    goto LABEL_18;
  ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
  v9 = System_Int32__ToString((int32_t)&ReleaseScenarioIndex, 0LL);
  System_Text_StringBuilder__Append_42601980(v4, v9, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                  v4,
                                  (System_String_o *)StringLiteral_1250/*":"*/,
                                  0LL);
  v10 = this->fields.progressData;
  if ( !v10 )
    goto LABEL_18;
  OldTotalPoint = v10->fields.OldTotalPoint;
  v11 = System_Int64__ToString((int64_t)&OldTotalPoint, 0LL);
  System_Text_StringBuilder__Append_42601980(v4, v11, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                  v4,
                                  (System_String_o *)StringLiteral_1250/*":"*/,
                                  0LL);
  v12 = this->fields.progressData;
  if ( !v12 )
    goto LABEL_18;
  NextPoint = v12->fields.NextPoint;
  v13 = System_Int64__ToString((int64_t)&NextPoint, 0LL);
  System_Text_StringBuilder__Append_42601980(v4, v13, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                  v4,
                                  (System_String_o *)StringLiteral_1250/*":"*/,
                                  0LL);
  v14 = this->fields.progressData;
  if ( !v14 )
    goto LABEL_18;
  IsReleaseScenarioAnimEnd = v14->fields.IsReleaseScenarioAnimEnd;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  HIDWORD(v27) = System_Convert__ToInt32_42434132(IsReleaseScenarioAnimEnd, 0LL);
  v16 = System_Int32__ToString((int32_t)&v27 + 4, 0LL);
  System_Text_StringBuilder__Append_42601980(v4, v16, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                  v4,
                                  (System_String_o *)StringLiteral_1250/*":"*/,
                                  0LL);
  v17 = this->fields.progressData;
  if ( !v17
    || (LODWORD(v27) = System_Convert__ToInt32_42434132(v17->fields.IsOpenFirstRiver, 0LL),
        v18 = System_Int32__ToString((int32_t)&v27, 0LL),
        System_Text_StringBuilder__Append_42601980(v4, v18, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                        v4,
                                        (System_String_o *)StringLiteral_1250/*":"*/,
                                        0LL),
        (v19 = this->fields.progressData) == 0LL) )
  {
LABEL_18:
    sub_B7076C(appended, v6);
  }
  v26 = System_Convert__ToInt32_42434132(v19->fields.IsFreeQuestClear, 0LL);
  v20 = System_Int32__ToString((int32_t)&v26, 0LL);
  System_Text_StringBuilder__Append_42601980(v4, v20, 0LL);
  v21 = EventInfoPointRiverProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
    v21 = EventInfoPointRiverProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_LINE_PROGRESS_DATA = v21->static_fields->SAVE_KEY_PREFIX_LINE_PROGRESS_DATA;
  v23 = System_Int32__ToString((int32_t)&v32, 0LL);
  v24 = System_String__Concat_44758168(SAVE_KEY_PREFIX_LINE_PROGRESS_DATA, v23, 0LL);
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
    sub_B7076C(0LL, isActive);
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
  struct EventInfoPointRiverProgressControl_ProgressData_o *v6; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  const MethodInfo *v9; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v10; // x8
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x8
  int32_t size; // w8
  struct EventInfoRiverProgressDrawComponent_array *v13; // x8
  __int64 name_high; // x9
  struct EventUiEntity_o *eventUiEntity; // x10
  const MethodInfo *v16; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x9
  struct EventInfoRiverProgressDrawComponent_array *v18; // x8
  __int64 v19; // x9
  const MethodInfo *v20; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x20
  struct System_Collections_Generic_List_QuestReleaseEntity__o *v22; // x21
  __int64 v23; // x22
  QuestReleaseEntity_o *v24; // x8
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x8
  __int64 v28; // x0

  v2 = this;
  if ( (byte_4352A4E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    this = (EventInfoPointRiverProgressControl_o *)sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    byte_4352A4E = 1;
  }
  progressData = v2->fields.progressData;
  v2->fields.isChangeRiver = 1;
  if ( !progressData )
    goto LABEL_36;
  progressData->fields.IsReleaseScenarioAnimEnd = 0;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v2, method);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v5 = v2->fields.progressData;
    if ( !v5 )
      goto LABEL_36;
    v5->fields.IsFreeQuestClear = 0;
  }
  v6 = v2->fields.progressData;
  if ( !v6 )
    goto LABEL_36;
  progressRiver = v2->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_36;
  ReleaseScenarioIndex = v6->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressRiver->max_length )
    goto LABEL_37;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[ReleaseScenarioIndex];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v4);
  v10 = v2->fields.progressData;
  if ( !v10 )
    goto LABEL_36;
  ++v10->fields.ReleaseScenarioIndex;
  method = (const MethodInfo *)v2->fields.progressData;
  if ( !method )
    goto LABEL_36;
  baseQuestReleaseEntList = v2->fields.baseQuestReleaseEntList;
  if ( !baseQuestReleaseEntList )
    goto LABEL_36;
  size = baseQuestReleaseEntList->fields._size;
  if ( SHIDWORD(method->name) >= size )
  {
    HIDWORD(method->name) = size - 1;
    method = (const MethodInfo *)v2->fields.progressData;
    if ( !method )
      goto LABEL_36;
  }
  v13 = v2->fields.progressRiver;
  if ( !v13 )
    goto LABEL_36;
  name_high = SHIDWORD(method->name);
  if ( (unsigned int)name_high >= v13->max_length )
    goto LABEL_37;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_36;
  this = (EventInfoPointRiverProgressControl_o *)v13->m_Items[name_high];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    eventUiEntity->fields.eventId,
    v9);
  v17 = v2->fields.progressData;
  if ( !v17 )
    goto LABEL_36;
  v18 = v2->fields.progressRiver;
  if ( !v18 )
    goto LABEL_36;
  v19 = v17->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v19 >= v18->max_length )
  {
LABEL_37:
    v28 = sub_B70798(this);
    sub_B70738(v28, 0LL);
  }
  this = (EventInfoPointRiverProgressControl_o *)v18->m_Items[v19];
  if ( !this )
    goto LABEL_36;
  EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v16);
  v21 = v2->fields.progressData;
  if ( !v21 )
    goto LABEL_36;
  v22 = v2->fields.baseQuestReleaseEntList;
  if ( !v22 )
    goto LABEL_36;
  v23 = v21->fields.ReleaseScenarioIndex;
  if ( v22->fields._size <= (unsigned int)v23 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v24 = v22->fields._items->m_Items[v23];
  if ( !v24 )
    goto LABEL_36;
  v21->fields.NextPoint = v24->fields.value;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_36;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v2->fields.progressData, v20);
  if ( !EventInfoPointRiverProgressControl__IsEndScenarioQuest(v2, v25) )
    goto LABEL_34;
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.releaseTermsObject;
  if ( !this
    || (EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v26),
        (v27 = v2->fields.progressData) == 0LL) )
  {
LABEL_36:
    sub_B7076C(this, method);
  }
  v27->fields.IsReleaseScenarioAnimEnd = 1;
LABEL_34:
  this = (EventInfoPointRiverProgressControl_o *)v2->fields.progressShip;
  if ( !this )
    goto LABEL_36;
  EventInfoShipProgressDrawComponent__ResetShip(
    (EventInfoShipProgressDrawComponent_o *)this,
    v2->fields.progressData,
    v26);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4352A45 & 1) == 0 )
  {
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&StringLiteral_1175/*"2DUI"*/);
    byte_4352A45 = 1;
  }
  if ( entities )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v6 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_1175/*"2DUI"*/, 0LL);
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetLayer(gameObject, v6, 0LL);
    this->fields.eventUiValueEntityList = entities;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.eventUiValueEntityList,
      (System_Int32_array **)entities,
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
  struct System_Collections_Generic_List_QuestReleaseEntity__o *baseQuestReleaseEntList; // x23
  int32_t size; // w8
  __int64 ReleaseScenarioIndex; // x24
  QuestReleaseEntity_o *v10; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v13; // x8
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 name_high; // x9
  struct EventUiEntity_o *v16; // x10
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8
  struct EventInfoUserEventPointControl_o *totalPointLabel; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x8
  struct EventInfoUserEventPointControl_o *v20; // x9
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x4
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x8
  const MethodInfo *v26; // x1
  TerminalPramsManager_c *v27; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v30; // x9
  struct EventInfoRiverProgressDrawComponent_array *v31; // x8
  __int64 v32; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v33; // x8
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  struct EventUiEntity_o *v36; // x8
  const MethodInfo *v37; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v38; // x9
  struct EventInfoRiverProgressDrawComponent_array *v39; // x8
  __int64 v40; // x9
  const MethodInfo *v41; // x2
  TerminalPramsManager_c *v42; // x0
  struct EventUiEntity_o *v43; // x8
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4352A46 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestReleaseEntity__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4352A46 = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_132;
  EventInfoPointRiverProgressControl__LoadProgressData(v3, eventUiEntity->fields.eventId, v2);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434E57C )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434E57C = 1;
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
    progressData = v3->fields.progressData;
    if ( !progressData )
      goto LABEL_132;
    baseQuestReleaseEntList = v3->fields.baseQuestReleaseEntList;
    if ( !baseQuestReleaseEntList )
      goto LABEL_132;
    size = baseQuestReleaseEntList->fields._size;
    if ( progressData->fields.ReleaseScenarioIndex >= size )
    {
      progressData->fields.ReleaseScenarioIndex = size - 1;
      progressData = v3->fields.progressData;
      if ( !progressData )
        goto LABEL_132;
      baseQuestReleaseEntList = v3->fields.baseQuestReleaseEntList;
      if ( !baseQuestReleaseEntList )
        goto LABEL_132;
    }
    ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
    if ( baseQuestReleaseEntList->fields._size <= (unsigned int)ReleaseScenarioIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v10 = baseQuestReleaseEntList->fields._items->m_Items[ReleaseScenarioIndex];
    if ( !v10 )
      goto LABEL_132;
    progressData->fields.NextPoint = v10->fields.value;
    v11 = v3->fields.progressData;
    if ( !v11 )
      goto LABEL_132;
    v11->fields.OldTotalPoint = v11->fields.TotalPoint;
    this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v3->fields.progressData;
      if ( !v12 )
        goto LABEL_132;
      v12->fields.IsFreeQuestClear = 1;
    }
    v13 = v3->fields.progressData;
    if ( !v13 )
      goto LABEL_132;
    if ( v13->fields.OldTotalPoint >= v13->fields.NextPoint && v13->fields.IsFreeQuestClear )
      v13->fields.IsReleaseScenarioAnimEnd = 1;
    EventInfoPointRiverProgressControl__SaveAllData(v3, method);
  }
  method = (const MethodInfo *)v3->fields.progressData;
  if ( !method )
    goto LABEL_132;
  progressRiver = v3->fields.progressRiver;
  if ( !progressRiver )
    goto LABEL_132;
  name_high = SHIDWORD(method->name);
  if ( (unsigned int)name_high >= progressRiver->max_length )
    goto LABEL_133;
  v16 = v3->fields.eventUiEntity;
  if ( !v16 )
    goto LABEL_132;
  this = (EventInfoPointRiverProgressControl_o *)progressRiver->m_Items[name_high];
  if ( !this )
    goto LABEL_132;
  EventInfoRiverProgressDrawComponent__Setup(
    (EventInfoRiverProgressDrawComponent_o *)this,
    (EventInfoPointRiverProgressControl_ProgressData_o *)method,
    v16->fields.eventId,
    v5);
  v17 = v3->fields.progressData;
  if ( !v17 )
    goto LABEL_132;
  totalPointLabel = v3->fields.totalPointLabel;
  if ( !totalPointLabel )
    goto LABEL_132;
  totalPointLabel->fields._oldTotalPoint_k__BackingField = v17->fields.OldTotalPoint;
  this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(v3, method);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v19 = v3->fields.progressData;
    if ( !v19 )
      goto LABEL_132;
    v20 = v3->fields.totalPointLabel;
    if ( !v20 )
      goto LABEL_132;
    v20->fields._oldTotalPoint_k__BackingField = v19->fields.TotalPoint;
  }
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.totalPointLabel;
  if ( !this )
    goto LABEL_132;
  ((void (__fastcall *)(EventInfoPointRiverProgressControl_o *, struct EventUiValueEntity_array *, Il2CppMethodPointer))this->klass->vtable._5_Setup.method)(
    this,
    v3->fields.eventUiValueEntityList,
    this->klass->vtable._6_SetValue.methodPtr);
  if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, v21) )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    this = (EventInfoPointRiverProgressControl_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !this )
      goto LABEL_132;
    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)this, 0LL);
  }
  if ( !EventInfoPointRiverProgressControl__IsFirstRiver(v3, v22) )
    goto LABEL_136;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434E57C )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434E57C = 1;
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
  v24 = v3->fields.progressData;
  if ( !v24 )
    goto LABEL_132;
  if ( v24->fields.IsOpenFirstRiver )
  {
LABEL_136:
    if ( EventInfoPointRiverProgressControl__IsFirstRiver(v3, method) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434E57C )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434E57C = 1;
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
        v25 = v3->fields.progressData;
        if ( !v25 )
          goto LABEL_132;
        v25->fields.IsOpenFirstRiver = 1;
        EventInfoPointRiverProgressControl__SaveAllData(v3, method);
      }
    }
    if ( !EventInfoPointRiverProgressControl__IsChangeRiver(v3, method) )
      goto LABEL_82;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434E57C )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434E57C = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    if ( !v27->static_fields->_isPlayRiverActionCheck_k__BackingField )
    {
      EventInfoPointRiverProgressControl__SetNextRiverProgressData(v3, v26);
      v33 = v3->fields.progressData;
      if ( !v33 )
        goto LABEL_132;
      v33->fields.OldTotalPoint = v33->fields.TotalPoint;
      EventInfoPointRiverProgressControl__SaveAllData(v3, method);
    }
    else
    {
LABEL_82:
      if ( EventInfoPointRiverProgressControl__IsEndScenarioQuest(v3, v26) )
      {
        this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
        if ( !this )
          goto LABEL_132;
        EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v28);
        v30 = v3->fields.progressData;
        if ( !v30 )
          goto LABEL_132;
        v31 = v3->fields.progressRiver;
        if ( !v31 )
          goto LABEL_132;
        v32 = v30->fields.ReleaseScenarioIndex;
        if ( (unsigned int)v32 < v31->max_length )
        {
          this = (EventInfoPointRiverProgressControl_o *)v31->m_Items[v32];
          if ( this )
          {
            EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 0, v29);
            goto LABEL_101;
          }
          goto LABEL_132;
        }
LABEL_133:
        v51 = sub_B70798(this);
        sub_B70738(v51, 0LL);
      }
    }
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_132;
    EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v28);
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
    if ( !this )
      goto LABEL_132;
    EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 1, v34);
    v36 = v3->fields.eventUiEntity;
    if ( !v36 )
      goto LABEL_132;
    this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
    if ( !this )
      goto LABEL_132;
    EventInfoShipProgressDrawComponent__Setup(
      (EventInfoShipProgressDrawComponent_o *)this,
      v3,
      v36->fields.eventId,
      v3->fields.isChangeRiver,
      v35);
    v38 = v3->fields.progressData;
    if ( !v38 )
      goto LABEL_132;
    v39 = v3->fields.progressRiver;
    if ( !v39 )
      goto LABEL_132;
    v40 = v38->fields.ReleaseScenarioIndex;
    if ( (unsigned int)v40 >= v39->max_length )
      goto LABEL_133;
    this = (EventInfoPointRiverProgressControl_o *)v39->m_Items[v40];
    if ( this )
    {
      EventInfoRiverProgressDrawComponent__SetActive((EventInfoRiverProgressDrawComponent_o *)this, 1, v37);
      this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
      if ( this )
      {
        EventInfoShipProgressDrawComponent__SetActive((EventInfoShipProgressDrawComponent_o *)this, 1, v41);
LABEL_101:
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_434E581 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434E581 = 1;
        }
        v42 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v42 = TerminalPramsManager_TypeInfo;
        }
        v42->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
        return;
      }
    }
LABEL_132:
    sub_B7076C(this, method);
  }
  if ( (BYTE3(this[1].fields.userEventPointMaster) & 4) != 0 && !LODWORD(this[1].fields.assetData2) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_434E581 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434E581 = 1;
  }
  this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoPointRiverProgressControl_o *)TerminalPramsManager_TypeInfo;
  }
  *((_BYTE *)this[1].monitor + 466) = 0;
  v43 = v3->fields.eventUiEntity;
  if ( !v43 )
    goto LABEL_132;
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.progressShip;
  if ( !this )
    goto LABEL_132;
  EventInfoShipProgressDrawComponent__Setup(
    (EventInfoShipProgressDrawComponent_o *)this,
    v3,
    v43->fields.eventId,
    1,
    v23);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_132;
  EventInfoReleaseEventPointControl__SetActive((EventInfoReleaseEventPointControl_o *)this, 0, v44);
  this = (EventInfoPointRiverProgressControl_o *)v3->fields.releaseTermsObject;
  if ( !this )
    goto LABEL_132;
  EventInfoReleaseEventPointControl__Setup((EventInfoReleaseEventPointControl_o *)this, v3->fields.progressData, v45);
  this = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v3,
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
                                                   (UnityEngine_Component_o *)v3,
                                                   0LL);
  if ( !this )
    goto LABEL_132;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUISlideAnimation___);
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
      v53.fields.x = x;
      v53.fields.y = y;
      v53.fields.z = z;
      EventInfoUISlideAnimation__SetAfterActionAndInPosition(
        (EventInfoUISlideAnimation_o *)Component_srcLineSprite,
        0LL,
        v53,
        0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
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
  EventInfoPointRiverProgressControl__PlayAnim_d__26_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct EventInfoPointRiverProgressControl_o *_4__this; // x20
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v9; // x8
  System_Collections_IEnumerator_o *v10; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x9
  struct EventInfoRiverProgressDrawComponent_array *v12; // x8
  __int64 v13; // x9
  Il2CppObject *v14; // x22
  EventInfoRiverProgressDrawComponent_o *v15; // x19
  System_Action_o *v16; // x21
  EventInfoRiverProgressDrawComponent_o *v17; // x0
  System_Action_o *v18; // x1
  bool v19; // w2
  struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v20; // x8
  System_Collections_IEnumerator_o *v21; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppObject *_8__1; // x22
  EventInfoRiverProgressDrawComponent_o *v26; // x19
  System_Action_o *v27; // x21
  System_Collections_IEnumerator_o *v28; // x0
  __int64 v29; // x0

  v2 = this;
  if ( (byte_434F08E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_B70694(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)sub_B70694(&EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    byte_434F08E = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
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
      v21 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
              (EventInfoShipProgressDrawComponent_o *)this,
              1,
              0,
              0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                       v21,
                                                                       0LL);
      v22 = _4__this->fields.progressData;
      if ( !v22 )
        goto LABEL_38;
      progressRiver = _4__this->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_38;
      ReleaseScenarioIndex = v22->fields.ReleaseScenarioIndex;
      if ( (unsigned int)ReleaseScenarioIndex < progressRiver->max_length )
      {
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        v26 = progressRiver->m_Items[ReleaseScenarioIndex];
        v27 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v27,
          _8__1,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__0__,
          0LL);
        if ( !v26 )
          goto LABEL_38;
        v19 = 1;
        v17 = v26;
        v18 = v27;
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
        v9 = v2->fields.__8__1;
        if ( !v9 )
          goto LABEL_38;
        EventInfoPointRiverProgressControl__PlayMoveShip(_4__this, v9->fields.callback, 0LL);
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
        v20 = v2->fields.__8__1;
        if ( !v20 )
          goto LABEL_38;
        ActionExtensions__Call(v20->fields.callback, 0LL);
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
      v10 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
              (EventInfoShipProgressDrawComponent_o *)this,
              0,
              0,
              0LL);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                                                       (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                       v10,
                                                                       0LL);
      v11 = _4__this->fields.progressData;
      if ( !v11 )
        goto LABEL_38;
      v12 = _4__this->fields.progressRiver;
      if ( !v12 )
        goto LABEL_38;
      v13 = v11->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v13 < v12->max_length )
      {
        v14 = (Il2CppObject *)v2->fields.__8__1;
        v15 = v12->m_Items[v13];
        v16 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v16,
          v14,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__1__,
          0LL);
        if ( !v15 )
          goto LABEL_38;
        v17 = v15;
        v18 = v16;
        v19 = 0;
LABEL_36:
        v28 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v17, v18, v19, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, v28, 0LL);
        return 0;
      }
    }
    v29 = sub_B70798(this);
    sub_B70738(v29, 0LL);
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_B70764(EventInfoPointRiverProgressControl___c__DisplayClass26_0_TypeInfo);
    System_Object___ctor(v4, 0LL);
    v2->fields.__8__1 = (struct EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v4;
    sub_B70630(&v2->fields.__8__1);
    this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
    if ( this )
    {
      *(_QWORD *)&this->fields.__1__state = v2->fields.__4__this;
      sub_B70630(&this->fields);
      this = (EventInfoPointRiverProgressControl__PlayAnim_d__26_o *)v2->fields.__8__1;
      if ( this )
      {
        this->fields.__2__current = (Il2CppObject *)v2->fields.callback;
        sub_B70630(&this->fields.__2__current);
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B70630(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_38:
    sub_B7076C(this, method);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_EventInfoPointRiverProgressControl__PlayAnim_d__26_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
    sub_B7076C(this, method);
  }
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_o *v4; // x8
  UnityEngine_MonoBehaviour_o *v5; // x20
  System_Collections_IEnumerator_o *v6; // x0
  UnityEngine_MonoBehaviour_o *v7; // x20
  int *monitor; // x9
  _DWORD *v9; // x8
  __int64 v10; // x9
  EventInfoRiverProgressDrawComponent_o *v11; // x21
  System_Action_o *_9__2; // x22
  System_Collections_IEnumerator_o *v13; // x0
  __int64 v14; // x0

  if ( (byte_434F08B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__);
    byte_434F08B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoPointRiverProgressControl__SetNextRiverProgressData(_4__this, 0LL);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
  if ( !_4__this )
    goto LABEL_16;
  EventInfoReleaseEventPointControl__PlayChangeNextPointAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, 0LL);
  v5 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v5 )
    goto LABEL_16;
  _4__this = (EventInfoPointRiverProgressControl_o *)v5[3].klass;
  if ( !_4__this )
    goto LABEL_16;
  v6 = EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
         (EventInfoShipProgressDrawComponent_o *)_4__this,
         1,
         1,
         0LL);
  _4__this = (EventInfoPointRiverProgressControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_36062060(v5, v6, 0LL);
  v7 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_16;
  monitor = (int *)v7[6].monitor;
  if ( !monitor )
    goto LABEL_16;
  v9 = v7[3].monitor;
  if ( !v9 )
    goto LABEL_16;
  v10 = monitor[5];
  if ( (unsigned int)v10 >= v9[6] )
  {
    v14 = sub_B70798(_4__this);
    sub_B70738(v14, 0LL);
  }
  v11 = *(EventInfoRiverProgressDrawComponent_o **)&v9[2 * v10 + 8];
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoPointRiverProgressControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B70630(&this->fields.__9__2);
  }
  if ( !v11 )
LABEL_16:
    sub_B7076C(_4__this, method);
  v13 = EventInfoRiverProgressDrawComponent__PlayChangeNewRiverAnim(v11, _9__2, 1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060(v7, v13, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoPointRiverProgressControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoPointRiverProgressControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_434F08C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_434F08C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)_4__this->fields.totalPointLabel;
  if ( !this )
    goto LABEL_13;
  EventInfoUserEventPointControl__PlayAnim((EventInfoUserEventPointControl_o *)this, 0LL);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  EventInfoPointRiverProgressControl__SetMaskPanelActive((EventInfoPointRiverProgressControl_o *)this, 0, 0LL);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  EventInfoPointRiverProgressControl__ApplyProgressData((EventInfoPointRiverProgressControl_o *)this, 0LL);
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  EventInfoPointRiverProgressControl__SaveAllData((EventInfoPointRiverProgressControl_o *)this, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  this = (EventInfoPointRiverProgressControl___c__DisplayClass26_0_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !this )
LABEL_13:
    sub_B7076C(this, method);
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
  EventInfoPointRiverProgressControl_o *_4__this; // x0
  struct EventInfoPointRiverProgressControl_o *v4; // x8
  struct EventInfoPointRiverProgressControl_o *v5; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  int32_t ReleaseScenarioIndex; // w20
  struct EventInfoPointRiverProgressControl_ProgressData_o *v8; // x9
  struct EventInfoRiverProgressDrawComponent_array *progressRiver; // x8
  __int64 v10; // x9
  EventInfoRiverProgressDrawComponent_o *v11; // x20
  System_Action_o *_9__1; // x21
  struct EventInfoPointRiverProgressControl_o *v13; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v14; // x8
  struct EventInfoPointRiverProgressControl_o *v15; // x8
  struct EventInfoPointRiverProgressControl_o *v16; // x8
  __int64 v17; // x0

  if ( (byte_434F08D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&EventInfoPointRiverProgressControl_TypeInfo);
    sub_B70694(&Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__);
    byte_434F08D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsScenarioReleaseAnim(
                                                       _4__this,
                                                       0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v4 = this->fields.__4__this;
    if ( !v4 )
      goto LABEL_34;
    _4__this = (EventInfoPointRiverProgressControl_o *)v4->fields.releaseTermsObject;
    if ( !_4__this )
      goto LABEL_34;
    EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)_4__this, 0, 0LL);
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_34;
    progressData = v5->fields.progressData;
    if ( !progressData )
      goto LABEL_34;
    ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
    _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoPointRiverProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoPointRiverProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPointRiverProgressControl_TypeInfo);
      v5 = this->fields.__4__this;
      if ( !v5 )
        goto LABEL_34;
    }
    if ( ReleaseScenarioIndex >= EventInfoPointRiverProgressControl_TypeInfo->static_fields->MAX_SCENARIO_RIVER_INDEX )
    {
      _4__this = (EventInfoPointRiverProgressControl_o *)v5->fields.releaseTermsObject;
      if ( !_4__this )
        goto LABEL_34;
      EventInfoReleaseEventPointControl__PlayCheckSE((EventInfoReleaseEventPointControl_o *)_4__this, 0LL);
    }
    else
    {
      v8 = v5->fields.progressData;
      if ( !v8 )
        goto LABEL_34;
      progressRiver = v5->fields.progressRiver;
      if ( !progressRiver )
        goto LABEL_34;
      v10 = v8->fields.ReleaseScenarioIndex;
      if ( (unsigned int)v10 >= progressRiver->max_length )
      {
        v17 = sub_B70798(_4__this);
        sub_B70738(v17, 0LL);
      }
      v11 = progressRiver->m_Items[v10];
      _9__1 = this->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)this,
          Method_EventInfoPointRiverProgressControl___c__DisplayClass27_0__PlayMoveShip_b__1__,
          0LL);
        this->fields.__9__1 = _9__1;
        sub_B70630(&this->fields.__9__1);
      }
      if ( !v11 )
        goto LABEL_34;
      EventInfoRiverProgressDrawComponent__PlayProgressClearAnim(v11, _9__1, 0LL);
    }
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_34;
  _4__this = (EventInfoPointRiverProgressControl_o *)EventInfoPointRiverProgressControl__IsClearFreeQuest(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_34;
    v14 = v13->fields.progressData;
    if ( !v14 )
      goto LABEL_34;
    if ( !v14->fields.IsFreeQuestClear )
    {
      v14->fields.IsFreeQuestClear = 1;
      v15 = this->fields.__4__this;
      if ( v15 )
      {
        _4__this = (EventInfoPointRiverProgressControl_o *)v15->fields.releaseTermsObject;
        if ( _4__this )
        {
          EventInfoReleaseEventPointControl__PlayCheckInAnim((EventInfoReleaseEventPointControl_o *)_4__this, 1, 0LL);
          goto LABEL_30;
        }
      }
LABEL_34:
      sub_B7076C(_4__this, method);
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
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_34;
  v16->fields.isChangeRiver = 0;
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
    sub_B7076C(this, method);
  }
  EventInfoPointRiverProgressControl__SetMaskPanelActive((EventInfoPointRiverProgressControl_o *)this, 0, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}