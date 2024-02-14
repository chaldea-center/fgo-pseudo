void __fastcall EventInfoCircleProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct EventInfoCircleProgressControl_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct EventInfoCircleProgressControl_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_421624A & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_3979/*"CircleProgressData_"*/, v8);
    sub_B0D8A4(&StringLiteral_3981/*"CircleProgressTitleState_"*/, v9);
    sub_B0D8A4(&StringLiteral_3980/*"CircleProgressExtraData_"*/, v10);
    byte_421624A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoCircleProgressControl_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_3981/*"CircleProgressTitleState_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3981/*"CircleProgressTitleState_"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_3979/*"CircleProgressData_"*/;
  v13->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_3979/*"CircleProgressData_"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v13->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_3980/*"CircleProgressExtraData_"*/;
  v21->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = (struct System_String_o *)StringLiteral_3980/*"CircleProgressExtraData_"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v21->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void __fastcall EventInfoCircleProgressControl___ctor(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
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

  if ( (byte_4216249 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo, v4);
    byte_4216249 = 1;
  }
  this->fields.extraCircleHidePosX = -212.0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
  this->fields.progressDataList = (struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.progressDataList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__AddProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t id,
        int64_t point,
        int64_t oldPoint,
        int32_t level,
        int32_t oldLevel,
        int32_t dispState,
        int32_t oldDispState,
        bool isCompleted,
        bool isOldCompleted,
        EventPointBuffEntity_o *ent,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v14; // x20
  int32_t v15; // w20
  int32_t v16; // w21
  int32_t v17; // w22
  int32_t v18; // w23
  int64_t v19; // x24
  EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *progressDataList; // x8
  const MethodInfo *v22; // [xsp+18h] [xbp-68h]
  EventInfoCircleProgressControl_o *v23; // [xsp+28h] [xbp-58h]

  v14 = this;
  if ( (byte_4216244 & 1) == 0 )
  {
    v23 = this;
    v15 = oldDispState;
    v16 = dispState;
    v17 = oldLevel;
    v18 = level;
    v19 = oldPoint;
    this = (EventInfoCircleProgressControl_o *)sub_B0D8A4(
                                                 &Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__,
                                                 *(_QWORD *)&id);
    oldDispState = v15;
    v14 = v23;
    oldPoint = v19;
    level = v18;
    oldLevel = v17;
    dispState = v16;
    byte_4216244 = 1;
  }
  ProgressData = EventInfoCircleProgressControl__CreateProgressData(
                   this,
                   id,
                   point,
                   oldPoint,
                   level,
                   oldLevel,
                   dispState,
                   oldDispState,
                   isCompleted,
                   isOldCompleted,
                   ent,
                   v22);
  progressDataList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14->fields.progressDataList;
  if ( !progressDataList )
    sub_B0D97C(ProgressData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    progressDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)ProgressData,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__);
}


void __fastcall EventInfoCircleProgressControl__Awake(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserEventPointMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4216232 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4216232 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct UserEventPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = Master_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userEventPointMaster,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
EventInfoCircleProgressControl_ProgressData_o *__fastcall EventInfoCircleProgressControl__CreateProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t id,
        int64_t point,
        int64_t oldPoint,
        int32_t level,
        int32_t oldLevel,
        int32_t dispState,
        int32_t oldDispState,
        bool isCompleted,
        bool isOldCompleted,
        EventPointBuffEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v19; // x25
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4216245 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id);
    byte_4216245 = 1;
  }
  v19 = sub_B0D974(EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id, point);
  EventInfoCircleProgressControl_ProgressData___ctor((EventInfoCircleProgressControl_ProgressData_o *)v19, 0LL);
  if ( !v19 )
    sub_B0D97C(v20);
  *(_DWORD *)(v19 + 16) = id;
  *(_QWORD *)(v19 + 24) = point;
  *(_QWORD *)(v19 + 32) = oldPoint;
  *(_DWORD *)(v19 + 40) = level;
  *(_DWORD *)(v19 + 44) = oldLevel;
  *(_DWORD *)(v19 + 48) = dispState;
  *(_DWORD *)(v19 + 52) = oldDispState;
  *(_BYTE *)(v19 + 56) = isCompleted;
  *(_BYTE *)(v19 + 57) = isOldCompleted;
  *(_QWORD *)(v19 + 64) = ent;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 64), (System_Int32_array **)ent, v21, v22, v23, v24, v25, v26);
  return (EventInfoCircleProgressControl_ProgressData_o *)v19;
}


void __fastcall EventInfoCircleProgressControl__DeleteContinueData(const MethodInfo *method)
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
  EventInfoCircleProgressControl_c *v26; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x21
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x21
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x21
  System_String_o *v34; // x1
  System_String_o *v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v41; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_421623E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&EventEntity_TypeInfo, v6);
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_421623E = 1;
  }
  v41 = 0;
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
        v41 = v25;
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
          if ( EventDetailEntity__IsEventCircleProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v26 = EventInfoCircleProgressControl_TypeInfo;
            if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
              v26 = EventInfoCircleProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v26->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
            v28 = System_Int32__ToString((int32_t)&v41, 0LL);
            v29 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v28, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v29, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
            v31 = System_Int32__ToString((int32_t)&v41, 0LL);
            v32 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v31, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v32, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
            v34 = System_Int32__ToString((int32_t)&v41, 0LL);
            v35 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v34, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v35, 0LL);
          }
        }
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_37:
    v39 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t userPoint,
        EventPointBuffEntity_o **nowEventPointBuff,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  EventPointBuffMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v23; // x21
  EventInfoCircleProgressControl___c_c *v24; // x8
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v27; // x23
  struct EventInfoCircleProgressControl___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  _BOOL8 v41; // x0
  Il2CppObject *current; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4216239 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventPointBuffEntity___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventPointBuffEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventPointBuffMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v17);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__, v18);
    sub_B0D8A4(&EventInfoCircleProgressControl___c_TypeInfo, v19);
    byte_4216239 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventPointBuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (EventPointBuffMaster_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                                               Master_WarQuestSelectionMaster,
                                                               eventId,
                                                               groupId,
                                                               0LL);
  v23 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Master_WarQuestSelectionMaster;
  v24 = EventInfoCircleProgressControl___c_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
    v24 = EventInfoCircleProgressControl___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventPointBuffEntity__TypeInfo,
                                                                           v21,
                                                                           v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v27,
      Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v28 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    v28->__9__39_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__39_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v23 )
LABEL_23:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v23,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)nowEventPointBuff, 0LL, v35, v36, v37, v38, v39, v40);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v49,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v41 )
      break;
    current = v49.fields.current;
    if ( !v49.fields.current )
      sub_B0D97C(v41);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v49.fields.current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_B0D840(
        (BattleServantConfConponent_o *)nowEventPointBuff,
        (System_Int32_array **)current,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressBarAnimObject(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v11; // x0
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x20
  Il2CppObject *v14; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4216236 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_B0D8A4(&Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__, v6);
    sub_B0D8A4(&EventInfoCircleProgressControl___c_TypeInfo, v7);
    byte_4216236 = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_B0D97C(result);
  if ( progressData->fields.Point <= progressData->fields.OldPoint )
  {
    circleProgressList = this->fields.circleProgressList;
    v11 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( (BYTE3(EventInfoCircleProgressControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v11 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                                                      method,
                                                                                      v2);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__36_0,
        v14,
        Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__);
      v15 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      v15->__9__36_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__36_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v15->__9__36_0,
        (System_Int32_array **)_9__36_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__36_0,
                                                         (const MethodInfo_170767C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v11; // x0
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__37_0; // x20
  Il2CppObject *v14; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4216237 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_B0D8A4(&Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__, v6);
    sub_B0D8A4(&EventInfoCircleProgressControl___c_TypeInfo, v7);
    byte_4216237 = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_B0D97C(result);
  if ( progressData->fields.IsOldCompleted || !progressData->fields.IsCompleted )
  {
    circleProgressList = this->fields.circleProgressList;
    v11 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( (BYTE3(EventInfoCircleProgressControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v11 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                                                      method,
                                                                                      v2);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__37_0,
        v14,
        Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__);
      v15 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      v15->__9__37_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__37_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v15->__9__37_0,
        (System_Int32_array **)_9__37_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__37_0,
                                                         (const MethodInfo_170767C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventInfoCircleProgressControl_ProgressData_o *__fastcall EventInfoCircleProgressControl__GetProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventInfoCircleProgressControl___c__DisplayClass51_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x20

  if ( (byte_4216243 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__, v5);
    sub_B0D8A4(&Method_System_Predicate_EventInfoCircleProgressControl_ProgressData___ctor__, v6);
    sub_B0D8A4(&System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo, v7);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__, v8);
    sub_B0D8A4(&EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo, v9);
    byte_4216243 = 1;
  }
  v10 = (EventInfoCircleProgressControl___c__DisplayClass51_0_o *)sub_B0D974(
                                                                    EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo,
                                                                    *(_QWORD *)&id,
                                                                    method);
  EventInfoCircleProgressControl___c__DisplayClass51_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_8;
  v10->fields.id = id;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.progressDataList,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___) )
  {
    progressDataList = this->fields.progressDataList;
    v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                                                     v12,
                                                                     v13);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v15,
      (Il2CppObject *)v10,
      Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoCircleProgressControl_ProgressData___ctor__);
    if ( progressDataList )
      return (EventInfoCircleProgressControl_ProgressData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)progressDataList,
                                                                (System_Predicate_T__o *)v15,
                                                                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
LABEL_8:
    sub_B0D97C(v11);
  }
  return 0LL;
}


EventInfoCircleProgressControl_ProgressData_o *__fastcall EventInfoCircleProgressControl__GetProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.progressExtraData;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventInfoCircleProgressControl__GetUserEventPoint(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  int64_t UserId; // x0

  if ( (byte_421623A & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_421623A = 1;
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


bool __fastcall EventInfoCircleProgressControl__HasSaveData(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w1
  EventInfoCircleProgressControl_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  EventInfoCircleProgressControl_c *v9; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  EventInfoCircleProgressControl_c *v13; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  int32_t v19; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_421623F & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, method);
    byte_421623F = 1;
  }
  v19 = 0;
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (eventId = eventUiEntity->fields.eventId,
        v19 = eventId,
        (this = (EventInfoCircleProgressControl_o *)v2->fields.uiVoicePlayer) == 0LL) )
  {
    sub_B0D97C(this);
  }
  if ( !EventInfoUIVoicePlayer__HasSaveData((EventInfoUIVoicePlayer_o *)this, eventId, 0LL) )
    return 0;
  v5 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v5 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v5->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v7 = System_Int32__ToString((int32_t)&v19, 0LL);
  v8 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v8, 0LL) )
    return 0;
  v9 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v9 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v9->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v11 = System_Int32__ToString((int32_t)&v19, 0LL);
  v12 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v11, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v12, 0LL) )
  {
    v13 = EventInfoCircleProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
      v13 = EventInfoCircleProgressControl_TypeInfo;
    }
    SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v13->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
    v15 = System_Int32__ToString((int32_t)&v19, 0LL);
    v16 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v15, 0LL);
    return UnityEngine_PlayerPrefs__HasKey(v16, 0LL);
  }
  else
  {
    return 0;
  }
}


void __fastcall EventInfoCircleProgressControl__Initialization(
        EventInfoCircleProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  struct EventUiEntity_o *v16; // x8

  if ( (byte_4216233 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl__Initialization_b__30_0__, v10);
    byte_4216233 = 1;
  }
  if ( entity )
  {
    this->fields.eventUiEntity = entity;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
      (System_Int32_array **)entity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl__Initialization_b__30_0__,
      0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v14, 0LL);
    v16 = this->fields.eventUiEntity;
    if ( !v16 || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0LL )
      sub_B0D97C(uiVoicePlayer);
    EventInfoUIVoicePlayer__LoadHistory(uiVoicePlayer, v16->fields.eventId, 0LL);
  }
}


void __fastcall EventInfoCircleProgressControl__InsertMuralButton(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *muralButtonObject; // x21
  UnityEngine_GameObject_o *muralButton; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  srcLineSprite_o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_IEnumerator_o *v19; // x0

  if ( (byte_4216248 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, endAction);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_9258/*"MuralButton_in"*/, v7);
    byte_4216248 = 1;
  }
  muralButtonObject = (UnityEngine_Object_o *)this->fields.muralButtonObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(muralButtonObject, 0LL, 0LL)
    || EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0LL) )
  {
    goto LABEL_17;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(muralButton, 1, 0LL);
  muralButton = (UnityEngine_GameObject_o *)this->fields.muralButton;
  if ( !muralButton )
    goto LABEL_28;
  muralButton = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, struct EventUiEntity_o *, const char *))muralButton->klass[1]._1.gc_desc)(
                                              muralButton,
                                              this->fields.eventUiEntity,
                                              muralButton->klass[1]._1.name);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_28;
  muralButton = (UnityEngine_GameObject_o *)this->fields.muralButton;
  if ( !muralButton )
    goto LABEL_28;
  EventInfoMuralComponent__InitDisplay(
    (EventInfoMuralComponent_o *)muralButton,
    eventUiEntity->fields.eventId,
    this,
    0LL);
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_28;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      muralButton,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
LABEL_17:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_28;
  v12 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          muralButton,
          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  muralButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)muralButton & 1) == 0 )
  {
    if ( v12 )
    {
      *(_QWORD *)&v12->fields.mtIsUpdate = endAction;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v12->fields.mtIsUpdate,
        (System_Int32_array **)endAction,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      if ( Component_srcLineSprite )
        goto LABEL_27;
    }
LABEL_28:
    sub_B0D97C(muralButton);
  }
  v19 = BasicHelper__DelayCall(1.133, endAction, 0LL);
  muralButton = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(
                                              (UnityEngine_MonoBehaviour_o *)this,
                                              v19,
                                              0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_28;
LABEL_27:
  UnityEngine_Animation__Play_50564840(
    (UnityEngine_Animation_o *)Component_srcLineSprite,
    (System_String_o *)StringLiteral_9258/*"MuralButton_in"*/,
    0LL);
}


bool __fastcall EventInfoCircleProgressControl__IsBackDrawState(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventInfoCircleProgressControl_Condition_o *titleReverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v2 = this;
  if ( (byte_4216246 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4216246 = 1;
  }
  titleReverseCondition = v2->fields.titleReverseCondition;
  if ( !titleReverseCondition )
    sub_B0D97C(this);
  CondKind = titleReverseCondition->fields.CondKind;
  CondId = titleReverseCondition->fields.CondId;
  CondValue = titleReverseCondition->fields.CondValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL);
}


bool __fastcall EventInfoCircleProgressControl__IsExtraCircleDisp(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventInfoCircleProgressControl_Condition_o *extraCircleOpenCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v2 = this;
  if ( (byte_4216247 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4216247 = 1;
  }
  extraCircleOpenCondition = v2->fields.extraCircleOpenCondition;
  if ( !extraCircleOpenCondition )
    sub_B0D97C(this);
  CondKind = extraCircleOpenCondition->fields.CondKind;
  CondId = extraCircleOpenCondition->fields.CondId;
  CondValue = extraCircleOpenCondition->fields.CondValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoCircleProgressControl__IsPlayAnim(
        EventInfoCircleProgressControl_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ProgressBarAnimObject; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *ProgressCompleteAnimObjcet; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4216234 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_4216234 = 1;
  }
  if ( type != 1 )
    return 0;
  ProgressBarAnimObject = (UnityEngine_Object_o *)EventInfoCircleProgressControl__GetProgressBarAnimObject(
                                                    this,
                                                    *(const MethodInfo **)&type);
  ProgressCompleteAnimObjcet = (UnityEngine_Object_o *)EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
                                                         this,
                                                         v6);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ProgressBarAnimObject, 0LL, 0LL) )
    return 1;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(ProgressCompleteAnimObjcet, 0LL, 0LL)
      || !this->fields.titleDispState && EventInfoCircleProgressControl__IsBackDrawState(this, v8)
      || this->fields.extraCircleState == 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__LoadProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 progressDataList; // x0
  EventInfoCircleProgressControl_c *v14; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *String; // x20
  const MethodInfo *v19; // x3
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  int max_length; // w8
  unsigned int v22; // w25
  EventInfoCircleProgressObjectComponent_o *v23; // x21
  int32_t v24; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x22
  const MethodInfo *v26; // x5
  int32_t lv; // w23
  _BOOL4 IsBackDrawState; // w24
  bool IsCompletedState; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  int v32; // w8
  int v33; // w19
  System_String_o *v34; // x20
  EventInfoCircleProgressControl___c__DisplayClass43_0_o *v35; // x21
  const MethodInfo *v36; // x3
  int v37; // w24
  __int64 v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x5
  int64_t v41; // x23
  __int64 v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t v45; // w9
  int32_t v46; // w26
  struct EventInfoCircleProgressObjectComponent_array *v47; // x20
  EventInfoCircleProgressControl_o *v48; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v49; // x27
  UnityEngine_Object_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x28
  int32_t v51; // w27
  int32_t v52; // w20
  char v53; // w28
  bool isOldCompleted; // w8
  __int64 v55; // x0
  bool isCompleted; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v57; // [xsp+18h] [xbp-88h]
  __int64 v58; // [xsp+20h] [xbp-80h]
  int32_t level; // [xsp+2Ch] [xbp-74h]
  int64_t v60; // [xsp+30h] [xbp-70h]
  EventPointBuffEntity_o *ent; // [xsp+38h] [xbp-68h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+40h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_421623C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, *(_QWORD *)&eventId);
    sub_B0D8A4(&char___TypeInfo, v4);
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__, v10);
    sub_B0D8A4(&EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_421623C = 1;
  }
  ent = 0LL;
  nowEventPointBuff = 0LL;
  progressDataList = (__int64)this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_62;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)progressDataList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__);
  v14 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v14 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v14->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v16 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v17 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v16, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  progressDataList = System_String__IsNullOrEmpty(String, 0LL);
  if ( (progressDataList & 1) != 0 )
  {
    circleProgressList = this->fields.circleProgressList;
    if ( circleProgressList )
    {
      max_length = circleProgressList->max_length;
      if ( max_length >= 1 )
      {
        v22 = 0;
        while ( v22 < max_length )
        {
          v23 = circleProgressList->m_Items[v22];
          if ( !v23 )
            goto LABEL_62;
          v24 = *(_DWORD *)&v23->fields.isExtraCircle;
          UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                                 this,
                                                                 eventIda,
                                                                 v24,
                                                                 v19);
          EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
            UserEventPoint,
            eventIda,
            v24,
            (int64_t)UserEventPoint,
            &nowEventPointBuff,
            v26);
          if ( nowEventPointBuff )
            lv = nowEventPointBuff->fields.lv;
          else
            lv = 1;
          IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(v23, 0LL);
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(v23, IsBackDrawState, 0LL);
          EventInfoCircleProgressControl__AddProgressData(
            this,
            v24,
            (int64_t)UserEventPoint,
            (int64_t)UserEventPoint,
            lv,
            lv,
            IsBackDrawState,
            IsBackDrawState,
            IsCompletedState,
            IsCompletedState,
            nowEventPointBuff,
            v57);
          max_length = circleProgressList->max_length;
          if ( (int)++v22 >= max_length )
            return;
        }
        goto LABEL_63;
      }
      return;
    }
LABEL_62:
    sub_B0D97C(progressDataList);
  }
  progressDataList = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !progressDataList )
    goto LABEL_62;
  if ( !*(_DWORD *)(progressDataList + 24) )
    goto LABEL_63;
  *(_WORD *)(progressDataList + 32) = 44;
  if ( !String )
    goto LABEL_62;
  progressDataList = (__int64)System_String__Split(String, (System_Char_array *)progressDataList, 0LL);
  if ( !progressDataList )
    goto LABEL_62;
  v32 = *(_DWORD *)(progressDataList + 24);
  if ( v32 >= 1 )
  {
    v33 = 0;
    v58 = progressDataList;
    while ( v33 < (unsigned int)v32 )
    {
      v34 = *(System_String_o **)(progressDataList + 8LL * v33 + 32);
      v35 = (EventInfoCircleProgressControl___c__DisplayClass43_0_o *)sub_B0D974(
                                                                        EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo,
                                                                        v30,
                                                                        v31);
      EventInfoCircleProgressControl___c__DisplayClass43_0___ctor(v35, 0LL);
      progressDataList = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !progressDataList )
        goto LABEL_62;
      if ( !*(_DWORD *)(progressDataList + 24) )
        break;
      *(_WORD *)(progressDataList + 32) = 58;
      if ( !v34 )
        goto LABEL_62;
      progressDataList = (__int64)System_String__Split(v34, (System_Char_array *)progressDataList, 0LL);
      if ( !progressDataList )
        goto LABEL_62;
      v37 = *(_DWORD *)(progressDataList + 24);
      v38 = progressDataList;
      if ( v37 < 1 )
      {
        v39 = 0;
        if ( !v35 )
          goto LABEL_62;
      }
      else
      {
        progressDataList = System_Int32__Parse(*(System_String_o **)(progressDataList + 32), 0LL);
        v39 = progressDataList;
        if ( !v35 )
          goto LABEL_62;
      }
      v35->fields.id = v39;
      progressDataList = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v39, v36);
      v41 = progressDataList;
      if ( v37 < 2 )
      {
        v42 = 0LL;
      }
      else
      {
        if ( *(_DWORD *)(v38 + 24) <= 1u )
          break;
        progressDataList = System_Int64__Parse(*(System_String_o **)(v38 + 40), 0LL);
        v42 = progressDataList;
      }
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        (EventInfoCircleProgressControl_o *)progressDataList,
        eventIda,
        v35->fields.id,
        v41,
        &ent,
        v40);
      if ( ent )
        v45 = ent->fields.lv;
      else
        v45 = 1;
      v60 = v42;
      level = v45;
      if ( v37 < 3 )
      {
        v46 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v38 + 24) <= 2u )
          break;
        v46 = System_Int32__Parse(*(System_String_o **)(v38 + 48), 0LL);
      }
      v47 = this->fields.circleProgressList;
      v48 = this;
      v49 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                                                 v43,
                                                                                 v44);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v49,
        (Il2CppObject *)v35,
        Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__);
      USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_Object_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                 (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v47,
                                                                                                 (System_Func_T__bool__o *)v49,
                                                                                                 (const MethodInfo_170767C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      progressDataList = UnityEngine_Object__op_Inequality(
                           USFGOActorBattleActionEventConditional_OverwriteParamCondition,
                           0LL,
                           0LL);
      if ( (progressDataList & 1) != 0 )
      {
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          goto LABEL_62;
        progressDataList = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                             (EventInfoCircleProgressObjectComponent_o *)USFGOActorBattleActionEventConditional_OverwriteParamCondition,
                             0LL);
        v51 = progressDataList & 1;
      }
      else
      {
        v51 = 0;
      }
      if ( v37 < 4 )
      {
        v52 = 0;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          goto LABEL_62;
      }
      else
      {
        if ( *(_DWORD *)(v38 + 24) <= 3u )
          break;
        progressDataList = System_Int32__Parse(*(System_String_o **)(v38 + 56), 0LL);
        v52 = progressDataList;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          goto LABEL_62;
      }
      progressDataList = EventInfoCircleProgressObjectComponent__IsCompletedState(
                           (EventInfoCircleProgressObjectComponent_o *)USFGOActorBattleActionEventConditional_OverwriteParamCondition,
                           v51,
                           0LL);
      v53 = progressDataList;
      if ( v37 >= 5 )
      {
        if ( *(_DWORD *)(v38 + 24) <= 4u )
          break;
        isOldCompleted = System_Int32__Parse(*(System_String_o **)(v38 + 64), 0LL) == 1;
      }
      else
      {
        isOldCompleted = 0;
      }
      isCompleted = v53 & 1;
      this = v48;
      EventInfoCircleProgressControl__AddProgressData(
        v48,
        v35->fields.id,
        v41,
        v60,
        level,
        v46,
        v51,
        v52,
        isCompleted,
        isOldCompleted,
        ent,
        v57);
      progressDataList = v58;
      ++v33;
      v32 = *(_DWORD *)(v58 + 24);
      if ( v33 >= v32 )
        return;
    }
LABEL_63:
    v55 = sub_B0D9A8(progressDataList);
    sub_B0D948(v55, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__LoadProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  EventInfoCircleProgressControl_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *String; // x20
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v12; // x3
  struct EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x8
  int32_t v14; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v16; // x5
  int32_t v17; // w22
  const MethodInfo *v18; // x3
  int v19; // w23
  __int64 v20; // x20
  int32_t v21; // w25
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5
  int64_t v24; // x24
  __int64 v25; // x28
  int32_t v26; // w23
  _BOOL8 IsCompletedState; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  int32_t v36; // w8
  int32_t lv; // w21
  int32_t v38; // w22
  char v39; // w27
  int64_t v40; // x25
  int32_t v41; // w26
  int v42; // w27
  int64_t v43; // x24
  char v44; // w28
  bool isOldCompleted; // w8
  struct EventInfoCircleProgressControl_ProgressData_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  int32_t v54; // w0
  int32_t *p_extraCircleState; // x20
  __int64 v56; // x0
  const MethodInfo *v57; // [xsp+18h] [xbp-78h]
  int32_t id; // [xsp+24h] [xbp-6Ch]
  EventPointBuffEntity_o *ent; // [xsp+28h] [xbp-68h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+30h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_421623D & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421623D = 1;
  }
  ent = 0LL;
  nowEventPointBuff = 0LL;
  v6 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v6 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v6->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v8 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v9 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v8, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    extraCircleProgres = this->fields.extraCircleProgres;
    if ( extraCircleProgres )
    {
      v14 = *(_DWORD *)&extraCircleProgres->fields.isExtraCircle;
      UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                             this,
                                                             eventIda,
                                                             v14,
                                                             v12);
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        UserEventPoint,
        eventIda,
        v14,
        (int64_t)UserEventPoint,
        &nowEventPointBuff,
        v16);
      v17 = nowEventPointBuff ? nowEventPointBuff->fields.lv : 1;
      IsNullOrEmpty = (__int64)this->fields.extraCircleProgres;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                          (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                          0LL);
        if ( this->fields.extraCircleProgres )
        {
          v26 = IsNullOrEmpty & 1;
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                               this->fields.extraCircleProgres,
                               v26,
                               0LL);
          ProgressData = EventInfoCircleProgressControl__CreateProgressData(
                           (EventInfoCircleProgressControl_o *)IsCompletedState,
                           v14,
                           (int64_t)UserEventPoint,
                           (int64_t)UserEventPoint,
                           v17,
                           v17,
                           v26,
                           v26,
                           IsCompletedState,
                           IsCompletedState,
                           nowEventPointBuff,
                           v57);
          this->fields.progressExtraData = ProgressData;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.progressExtraData,
            (System_Int32_array **)ProgressData,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v35) )
            v36 = 2;
          else
            v36 = 0;
          this->fields.extraCircleState = v36;
          return;
        }
      }
    }
LABEL_52:
    sub_B0D97C(IsNullOrEmpty);
  }
  IsNullOrEmpty = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_52;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_53;
  *(_WORD *)(IsNullOrEmpty + 32) = 58;
  if ( !String )
    goto LABEL_52;
  IsNullOrEmpty = (__int64)System_String__Split(String, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_52;
  v19 = *(_DWORD *)(IsNullOrEmpty + 24);
  v20 = IsNullOrEmpty;
  if ( v19 <= 0 )
  {
    IsNullOrEmpty = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, 0, v18);
    v24 = IsNullOrEmpty;
    v21 = 0;
    goto LABEL_26;
  }
  v21 = System_Int32__Parse(*(System_String_o **)(IsNullOrEmpty + 32), 0LL);
  IsNullOrEmpty = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v21, v22);
  v24 = IsNullOrEmpty;
  if ( v19 == 1 )
  {
LABEL_26:
    v25 = 0LL;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_53;
  IsNullOrEmpty = System_Int64__Parse(*(System_String_o **)(v20 + 40), 0LL);
  v25 = IsNullOrEmpty;
LABEL_27:
  EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
    (EventInfoCircleProgressControl_o *)IsNullOrEmpty,
    eventIda,
    v21,
    v24,
    &ent,
    v23);
  if ( ent )
    lv = ent->fields.lv;
  else
    lv = 1;
  if ( v19 < 3 )
  {
    v38 = 0;
  }
  else
  {
    if ( *(_DWORD *)(v20 + 24) <= 2u )
      goto LABEL_53;
    v38 = System_Int32__Parse(*(System_String_o **)(v20 + 48), 0LL);
  }
  IsNullOrEmpty = (__int64)this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_52;
  IsNullOrEmpty = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                    (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                    0LL);
  v39 = IsNullOrEmpty;
  id = v21;
  if ( v19 < 4 )
  {
    v40 = v24;
    v41 = 1;
  }
  else
  {
    if ( *(_DWORD *)(v20 + 24) <= 3u )
      goto LABEL_53;
    v40 = v24;
    v41 = System_Int32__Parse(*(System_String_o **)(v20 + 56), 0LL);
  }
  IsNullOrEmpty = (__int64)this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_52;
  v42 = v39 & 1;
  v43 = v25;
  IsNullOrEmpty = EventInfoCircleProgressObjectComponent__IsCompletedState(
                    (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                    v42,
                    0LL);
  v44 = IsNullOrEmpty;
  if ( v19 >= 5 )
  {
    if ( *(_DWORD *)(v20 + 24) <= 4u )
      goto LABEL_53;
    IsNullOrEmpty = System_Int32__Parse(*(System_String_o **)(v20 + 64), 0LL);
    isOldCompleted = (_DWORD)IsNullOrEmpty == 1;
  }
  else
  {
    isOldCompleted = 0;
  }
  v46 = EventInfoCircleProgressControl__CreateProgressData(
          (EventInfoCircleProgressControl_o *)IsNullOrEmpty,
          id,
          v40,
          v43,
          lv,
          v38,
          v42,
          v41,
          v44 & 1,
          isOldCompleted,
          ent,
          v57);
  this->fields.progressExtraData = v46;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.progressExtraData,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( v19 > 5 )
  {
    if ( *(_DWORD *)(v20 + 24) > 5u )
    {
      v54 = System_Int32__Parse(*(System_String_o **)(v20 + 72), 0LL);
      this->fields.extraCircleState = v54;
      p_extraCircleState = &this->fields.extraCircleState;
      if ( v54 )
        return;
      goto LABEL_49;
    }
LABEL_53:
    v56 = sub_B0D9A8(IsNullOrEmpty);
    sub_B0D948(v56, 0LL);
  }
  this->fields.extraCircleState = 0;
  p_extraCircleState = &this->fields.extraCircleState;
LABEL_49:
  if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v53) )
    *p_extraCircleState = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__LoadTitleState(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  EventInfoCircleProgressControl_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *String; // x20
  const MethodInfo *v10; // x1
  _BOOL8 IsBackDrawState; // x0
  int32_t v12; // w0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = eventId;
  if ( (byte_421623B & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421623B = 1;
  }
  v5 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v5 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v5->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v7 = System_Int32__ToString((int32_t)&v13, 0LL);
  v8 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    IsBackDrawState = EventInfoCircleProgressControl__IsBackDrawState(this, v10);
    if ( !this )
      sub_B0D97C(IsBackDrawState);
    v12 = IsBackDrawState;
  }
  else
  {
    v12 = System_Int32__Parse(String, 0LL);
  }
  this->fields.titleDispState = v12;
}


void __fastcall EventInfoCircleProgressControl__OnDestroy(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
  }
}


void __fastcall EventInfoCircleProgressControl__OnDisable(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *uiVoicePlayer; // x20
  EventInfoUIVoicePlayer_o *v4; // x0

  if ( (byte_4216231 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216231 = 1;
  }
  uiVoicePlayer = (UnityEngine_Object_o *)this->fields.uiVoicePlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiVoicePlayer, 0LL, 0LL) )
  {
    v4 = this->fields.uiVoicePlayer;
    if ( !v4 )
      sub_B0D97C(0LL);
    EventInfoUIVoicePlayer__Stop(v4, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__PlayAnim(
        EventInfoCircleProgressControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  UnityEngine_GameObject_o *IsBackDrawState; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  System_Int32_array **ProgressBarAnimObject; // x0
  UnityEngine_GameObject_o **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  System_Int32_array **ProgressCompleteAnimObjcet; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x9
  EventInfoCircleProgressDrawComponent_o *v52; // x19
  System_Action_o *v53; // x21
  UnityEngine_Object_o *v54; // x22
  const MethodInfo *v55; // x1
  __int64 v56; // x2
  System_Action_o *v57; // x21
  System_Collections_IEnumerator_o *v58; // x0
  EventInfoCircleProgressObjectComponent_o *v59; // x19
  __int64 v60; // x1
  __int64 v61; // x2
  System_Action_o *v62; // x21
  System_Action_o *v63; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  srcLineSprite_o *v65; // x22
  const MethodInfo *v66; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w20
  il2cpp_array_size_t v69; // w22
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x19
  System_Action_o *v71; // x21
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x0

  if ( (byte_4216235 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__, v10);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__, v11);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__, v12);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__, v13);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__, v14);
    sub_B0D8A4(&EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_16792/*"bit_circlemeter_rotate"*/, v16);
    byte_4216235 = 1;
  }
  v17 = sub_B0D974(EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, *(_QWORD *)&type, callback);
  EventInfoCircleProgressControl___c__DisplayClass35_0___ctor(
    (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_40;
  *(_QWORD *)(v17 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v17 + 32) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  if ( type != 1 )
    goto LABEL_44;
  ProgressBarAnimObject = (System_Int32_array **)EventInfoCircleProgressControl__GetProgressBarAnimObject(this, v31);
  *(_QWORD *)(v17 + 24) = ProgressBarAnimObject;
  v33 = (UnityEngine_GameObject_o **)(v17 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 24), ProgressBarAnimObject, v34, v35, v36, v37, v38, v39);
  ProgressCompleteAnimObjcet = (System_Int32_array **)EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
                                                        this,
                                                        v40);
  *(_QWORD *)(v17 + 40) = ProgressCompleteAnimObjcet;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), ProgressCompleteAnimObjcet, v42, v43, v44, v45, v46, v47);
  v48 = *(UnityEngine_Object_o **)(v17 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    IsBackDrawState = *v33;
    if ( *v33 )
    {
      IsBackDrawState = (UnityEngine_GameObject_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                      (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
                                                      0LL);
      if ( *v33 )
      {
        v51 = 32LL;
        if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
          v51 = 40LL;
        v52 = *(EventInfoCircleProgressDrawComponent_o **)((char *)&(*v33)->klass + v51);
        v53 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
        System_Action___ctor(
          v53,
          (Il2CppObject *)v17,
          Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__,
          0LL);
        if ( v52 )
        {
          EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(v52, v53, 0LL);
          return;
        }
      }
    }
LABEL_40:
    sub_B0D97C(IsBackDrawState);
  }
  v54 = *(UnityEngine_Object_o **)(v17 + 40);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
    v57 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v55, v56);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v17,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__,
      0LL);
    v58 = BasicHelper__DelayCall(1.0, v57, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v58, 0LL);
    v59 = *(EventInfoCircleProgressObjectComponent_o **)(v17 + 40);
    v62 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v60, v61);
    System_Action___ctor(
      v62,
      (Il2CppObject *)v17,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__,
      0LL);
    if ( !v59 )
      goto LABEL_40;
    EventInfoCircleProgressObjectComponent__PlayCompleteAnim(v59, v62, 0LL);
    return;
  }
  if ( this->fields.titleDispState || !EventInfoCircleProgressControl__IsBackDrawState(this, v55) )
  {
    if ( this->fields.extraCircleState == 1 )
    {
      extraCircleProgres = this->fields.extraCircleProgres;
      v71 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v55, v56);
      System_Action___ctor(
        v71,
        (Il2CppObject *)v17,
        Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__,
        0LL);
      if ( !extraCircleProgres )
        goto LABEL_40;
      EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(extraCircleProgres, v71, 0LL);
      return;
    }
LABEL_44:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
    return;
  }
  v63 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v55, v56);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v17,
    Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__,
    0LL);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_40;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      IsBackDrawState,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_40;
  v65 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          IsBackDrawState,
          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
    goto LABEL_33;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v65, 0LL, 0LL);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
  {
LABEL_33:
    circleProgressList = this->fields.circleProgressList;
    if ( !circleProgressList )
      goto LABEL_40;
    max_length = circleProgressList->max_length;
    if ( max_length >= 1 )
    {
      v69 = 0;
      do
      {
        if ( v69 >= circleProgressList->max_length )
        {
          v78 = sub_B0D9A8(IsBackDrawState);
          sub_B0D948(v78, 0LL);
        }
        IsBackDrawState = (UnityEngine_GameObject_o *)circleProgressList->m_Items[v69];
        if ( !IsBackDrawState )
          break;
        EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
          (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
          0LL,
          0LL);
        if ( (int)++v69 >= max_length )
          goto LABEL_45;
        circleProgressList = this->fields.circleProgressList;
      }
      while ( circleProgressList );
      goto LABEL_40;
    }
LABEL_45:
    EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(this, v63, v66);
  }
  else
  {
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
    if ( !v65 )
      goto LABEL_40;
    *(_QWORD *)&v65->fields.mtIsUpdate = v63;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v65->fields.mtIsUpdate,
      (System_Int32_array **)v63,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    UnityEngine_Animation__Play_50564840(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      (System_String_o *)StringLiteral_16792/*"bit_circlemeter_rotate"*/,
      0LL);
  }
}


void __fastcall EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  UnityEngine_GameObject_o *titleBaseObject; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x22
  UnityEngine_GameObject_o *v35; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  EasingObject_o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x21
  Il2CppObject *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x20
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216238 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAction);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__, v6);
    sub_B0D8A4(&EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, v7);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__, v8);
    sub_B0D8A4(&EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v9);
    byte_4216238 = 1;
  }
  v10 = sub_B0D974(EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, endAction, method);
  EventInfoCircleProgressControl___c__DisplayClass38_0___ctor(
    (EventInfoCircleProgressControl___c__DisplayClass38_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 32) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)endAction, v18, v19, v20, v21, v22, v23);
  titleBaseObject = this->fields.titleBaseObject;
  if ( !titleBaseObject )
    goto LABEL_10;
  gameObject = UnityEngine_GameObject__get_gameObject(titleBaseObject, 0LL);
  *(float *)(v10 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v10 + 20) = 1151172608;
  v27 = sub_B0D974(EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v25, v26);
  EventInfoCircleProgressControl___c__DisplayClass38_1___ctor(
    (EventInfoCircleProgressControl___c__DisplayClass38_1_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_10;
  *(_QWORD *)(v27 + 32) = v10;
  v34 = v27 + 32;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v10, v28, v29, v30, v31, v32, v33);
  if ( !*(_QWORD *)(v27 + 32) )
    goto LABEL_10;
  v51.fields.x = *(float *)(*(_QWORD *)(v27 + 32) + 16LL);
  v51.fields.y = 0.0;
  v51.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, v51, 0LL);
  if ( !*(_QWORD *)v34 )
    goto LABEL_10;
  *(_DWORD *)(v27 + 24) = *(_DWORD *)(*(_QWORD *)v34 + 16LL);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v35,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v27 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 16), Component_UIWidget, v37, v38, v39, v40, v41, v42);
  v43 = *(EasingObject_o **)(v27 + 16);
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v27,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__,
    0LL);
  v47 = *(Il2CppObject **)(v27 + 32);
  v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
  System_Action___ctor(
    v50,
    v47,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__,
    0LL);
  if ( !v43 )
LABEL_10:
    sub_B0D97C(titleBaseObject);
  EasingObject__Play(v43, 0.5, v46, v50, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressControl__Redisplay(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  if ( this->fields.eventUiEntity )
    EventInfoCircleProgressControl__SetupDisp(this, method);
}


void __fastcall EventInfoCircleProgressControl__SaveAllData(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoCircleProgressControl_o *v3; // x19
  int32_t eventId; // w20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || (v3 = this, (this = (EventInfoCircleProgressControl_o *)this->fields.uiVoicePlayer) == 0LL) )
    sub_B0D97C(this);
  eventId = eventUiEntity->fields.eventId;
  EventInfoUIVoicePlayer__SaveHistrory((EventInfoUIVoicePlayer_o *)this, eventId, 0LL);
  EventInfoCircleProgressControl__SaveTitleState(v3, eventId, v5);
  EventInfoCircleProgressControl__SaveProgressData(v3, eventId, v6);
  EventInfoCircleProgressControl__SaveProgressExtraData(v3, eventId, v7);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__SaveProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x8
  int size; // w21
  System_Text_StringBuilder_o *v11; // x20
  __int64 v12; // x22
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v13; // x26
  unsigned int v14; // w25
  __int64 v15; // x8
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v16; // x26
  __int64 v17; // x8
  System_String_o *v18; // x0
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v19; // x26
  __int64 v20; // x8
  System_String_o *v21; // x0
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v22; // x26
  __int64 v23; // x8
  System_String_o *v24; // x0
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v25; // x26
  __int64 v26; // x8
  System_String_o *v27; // x0
  EventInfoCircleProgressControl_c *v28; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v30; // x0
  System_String_o *v31; // x19
  System_String_o *v32; // x0
  __int64 v33; // [xsp+0h] [xbp-60h] BYREF
  __int64 v34; // [xsp+8h] [xbp-58h] BYREF
  __int64 v35; // [xsp+10h] [xbp-50h] BYREF
  int v36; // [xsp+18h] [xbp-48h] BYREF
  int32_t v37; // [xsp+1Ch] [xbp-44h] BYREF

  v3 = this;
  v37 = eventId;
  if ( (byte_4216241 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__, v5);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v7);
    this = (EventInfoCircleProgressControl_o *)sub_B0D8A4(&StringLiteral_705/*","*/, v8);
    byte_4216241 = 1;
  }
  v36 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  progressDataList = v3->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_36;
  size = progressDataList->fields._size;
  v11 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method);
  System_Text_StringBuilder___ctor(v11, 0LL);
  if ( size >= 1 )
  {
    v12 = 4LL;
    while ( 1 )
    {
      if ( (_DWORD)v12 != 4 )
      {
        if ( !v11 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_42155400(
                                                     v11,
                                                     (System_String_o *)StringLiteral_705/*","*/,
                                                     0LL);
      }
      v13 = v3->fields.progressDataList;
      if ( !v13 )
        break;
      v14 = v12 - 4;
      if ( v13->fields._size <= (unsigned int)(v12 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = *((_QWORD *)&v13->fields._items->obj.klass + v12);
      if ( !v15 )
        break;
      v36 = *(_DWORD *)(v15 + 16);
      this = (EventInfoCircleProgressControl_o *)System_Int32__ToString((int32_t)&v36, 0LL);
      if ( !v11 )
        break;
      System_Text_StringBuilder__Append_42155400(v11, (System_String_o *)this, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_42155400(
                                                   v11,
                                                   (System_String_o *)StringLiteral_1232/*":"*/,
                                                   0LL);
      v16 = v3->fields.progressDataList;
      if ( !v16 )
        break;
      if ( v16->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v17 = *((_QWORD *)&v16->fields._items->obj.klass + v12);
      if ( !v17 )
        break;
      v35 = *(_QWORD *)(v17 + 32);
      v18 = System_Int64__ToString((int64_t)&v35, 0LL);
      System_Text_StringBuilder__Append_42155400(v11, v18, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_42155400(
                                                   v11,
                                                   (System_String_o *)StringLiteral_1232/*":"*/,
                                                   0LL);
      v19 = v3->fields.progressDataList;
      if ( !v19 )
        break;
      if ( v19->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v20 = *((_QWORD *)&v19->fields._items->obj.klass + v12);
      if ( !v20 )
        break;
      v34 = *(int *)(v20 + 44);
      v21 = System_Int64__ToString((int64_t)&v34, 0LL);
      System_Text_StringBuilder__Append_42155400(v11, v21, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_42155400(
                                                   v11,
                                                   (System_String_o *)StringLiteral_1232/*":"*/,
                                                   0LL);
      v22 = v3->fields.progressDataList;
      if ( !v22 )
        break;
      if ( v22->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v23 = *((_QWORD *)&v22->fields._items->obj.klass + v12);
      if ( !v23 )
        break;
      HIDWORD(v33) = *(_DWORD *)(v23 + 52);
      v24 = System_Int32__ToString((int32_t)&v33 + 4, 0LL);
      System_Text_StringBuilder__Append_42155400(v11, v24, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_42155400(
                                                   v11,
                                                   (System_String_o *)StringLiteral_1232/*":"*/,
                                                   0LL);
      v25 = v3->fields.progressDataList;
      if ( !v25 )
        break;
      if ( v25->fields._size <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v26 = *((_QWORD *)&v25->fields._items->obj.klass + v12);
      if ( !v26 )
        break;
      LODWORD(v33) = *(unsigned __int8 *)(v26 + 57);
      v27 = System_Int32__ToString((int32_t)&v33, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_42155400(v11, v27, 0LL);
      if ( (int)++v12 - 4 >= size )
        goto LABEL_31;
    }
LABEL_36:
    sub_B0D97C(this);
  }
LABEL_31:
  v28 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v28 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v28->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v30 = System_Int32__ToString((int32_t)&v37, 0LL);
  this = (EventInfoCircleProgressControl_o *)System_String__Concat_43849904(
                                               SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
                                               v30,
                                               0LL);
  if ( !v11 )
    goto LABEL_36;
  v31 = (System_String_o *)this;
  v32 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                             v11,
                             v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v31, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__SaveProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_StringBuilder_o *v6; // x19
  System_String_o *appended; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressExtraData; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *v9; // x8
  System_String_o *v10; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v11; // x8
  System_String_o *v12; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v13; // x8
  System_String_o *v14; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v15; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  EventInfoCircleProgressControl_c *v18; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  int32_t extraCircleState; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v24; // [xsp+8h] [xbp-38h] BYREF
  __int64 OldLevel; // [xsp+10h] [xbp-30h] BYREF
  int64_t OldPoint; // [xsp+18h] [xbp-28h] BYREF
  int32_t Id; // [xsp+28h] [xbp-18h] BYREF
  int32_t v28; // [xsp+2Ch] [xbp-14h] BYREF

  v28 = eventId;
  if ( (byte_4216242 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v5);
    byte_4216242 = 1;
  }
  Id = 0;
  OldLevel = 0LL;
  OldPoint = 0LL;
  v24 = 0LL;
  extraCircleState = 0;
  v6 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method);
  System_Text_StringBuilder___ctor(v6, 0LL);
  progressExtraData = this->fields.progressExtraData;
  if ( !progressExtraData )
    goto LABEL_13;
  Id = progressExtraData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v6 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_42155400(v6, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v6,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v9 = this->fields.progressExtraData;
  if ( !v9 )
    goto LABEL_13;
  OldPoint = v9->fields.OldPoint;
  v10 = System_Int64__ToString((int64_t)&OldPoint, 0LL);
  System_Text_StringBuilder__Append_42155400(v6, v10, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v6,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v11 = this->fields.progressExtraData;
  if ( !v11 )
    goto LABEL_13;
  OldLevel = v11->fields.OldLevel;
  v12 = System_Int64__ToString((int64_t)&OldLevel, 0LL);
  System_Text_StringBuilder__Append_42155400(v6, v12, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                  v6,
                                  (System_String_o *)StringLiteral_1232/*":"*/,
                                  0LL);
  v13 = this->fields.progressExtraData;
  if ( !v13
    || (HIDWORD(v24) = v13->fields.OldDispState,
        v14 = System_Int32__ToString((int32_t)&v24 + 4, 0LL),
        System_Text_StringBuilder__Append_42155400(v6, v14, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                        v6,
                                        (System_String_o *)StringLiteral_1232/*":"*/,
                                        0LL),
        (v15 = this->fields.progressExtraData) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(appended);
  }
  LODWORD(v24) = v15->fields.IsOldCompleted;
  v16 = System_Int32__ToString((int32_t)&v24, 0LL);
  System_Text_StringBuilder__Append_42155400(v6, v16, 0LL);
  System_Text_StringBuilder__Append_42155400(v6, (System_String_o *)StringLiteral_1232/*":"*/, 0LL);
  extraCircleState = this->fields.extraCircleState;
  v17 = System_Int32__ToString((int32_t)&extraCircleState, 0LL);
  System_Text_StringBuilder__Append_42155400(v6, v17, 0LL);
  v18 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v18 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v18->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v20 = System_Int32__ToString((int32_t)&v28, 0LL);
  v21 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v20, 0LL);
  v22 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                             v6,
                             v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v21, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__SaveTitleState(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  int32_t titleDispState; // [xsp+8h] [xbp-18h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = eventId;
  if ( (byte_4216240 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    byte_4216240 = 1;
  }
  titleDispState = this->fields.titleDispState;
  v4 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_43849904(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0LL);
  v8 = System_Int32__ToString((int32_t)&titleDispState, 0LL);
  UnityEngine_PlayerPrefs__SetString(v7, v8, 0LL);
}


void __fastcall EventInfoCircleProgressControl__SetSprite(
        EventInfoCircleProgressControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, sprite, spriteName, 0LL);
}


void __fastcall EventInfoCircleProgressControl__Setup(
        EventInfoCircleProgressControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( this->fields.eventUiEntity )
  {
    EventInfoCircleProgressControl__SetupDisp(this, (const MethodInfo *)entitys);
    if ( !EventInfoCircleProgressControl__HasSaveData(this, v4) )
      EventInfoCircleProgressControl__SaveAllData(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__SetupDisp(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoCircleProgressControl_o *v4; // x19
  float v5; // s0
  int v6; // s1
  int v7; // s2
  const MethodInfo *v8; // x2
  struct EventUiEntity_o *v9; // x8
  const MethodInfo *v10; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w21
  il2cpp_array_size_t v13; // w22
  Il2CppClass **v14; // x8
  Il2CppClass *v15; // x20
  const MethodInfo *v16; // x2
  EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  struct EventUiEntity_o *v18; // x8
  UnityEngine_Component_o *extraCircleProgres; // x20
  int32_t extraCircleState; // w21
  float extraCircleHidePosX; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x0

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_12;
  v4 = this;
  EventInfoCircleProgressControl__LoadTitleState(this, eventUiEntity->fields.eventId, v2);
  v5 = 180.0;
  if ( v4->fields.titleDispState != 1 )
    v5 = 0.0;
  v6 = 0;
  v7 = 0;
  GameObjectExtensions__SetLocalEulerAngle(v4->fields.titleBaseObject, *(UnityEngine_Vector3_o *)&v5, 0LL);
  v9 = v4->fields.eventUiEntity;
  if ( !v9 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressData(v4, v9->fields.eventId, v8);
  circleProgressList = v4->fields.circleProgressList;
  if ( !circleProgressList )
    goto LABEL_12;
  max_length = circleProgressList->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= circleProgressList->max_length )
      {
        v24 = sub_B0D9A8(this);
        sub_B0D948(v24, 0LL);
      }
      v14 = &circleProgressList->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      EventInfoCircleProgressObjectComponent__SetActive((EventInfoCircleProgressObjectComponent_o *)v14[4], 1, 0LL);
      ProgressData = EventInfoCircleProgressControl__GetProgressData(v4, (int32_t)v15->_1.namespaze, v16);
      EventInfoCircleProgressObjectComponent__Setup(
        (EventInfoCircleProgressObjectComponent_o *)v15,
        v4,
        ProgressData,
        0LL);
      if ( (int)++v13 >= max_length )
        goto LABEL_13;
      circleProgressList = v4->fields.circleProgressList;
    }
    while ( circleProgressList );
LABEL_12:
    sub_B0D97C(this);
  }
LABEL_13:
  v18 = v4->fields.eventUiEntity;
  if ( !v18 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressExtraData(v4, v18->fields.eventId, v10);
  extraCircleProgres = (UnityEngine_Component_o *)v4->fields.extraCircleProgres;
  if ( !extraCircleProgres )
    goto LABEL_12;
  extraCircleState = v4->fields.extraCircleState;
  this = (EventInfoCircleProgressControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v4->fields.extraCircleProgres,
                                               0LL);
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (unsigned int)(extraCircleState - 1) < 2, 0LL);
  extraCircleHidePosX = 0.0;
  if ( v4->fields.extraCircleState <= 1u )
    extraCircleHidePosX = v4->fields.extraCircleHidePosX;
  gameObject = UnityEngine_Component__get_gameObject(extraCircleProgres, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, extraCircleHidePosX, 0LL);
  EventInfoCircleProgressObjectComponent__Setup(
    (EventInfoCircleProgressObjectComponent_o *)extraCircleProgres,
    v4,
    v4->fields.progressExtraData,
    0LL);
  EventInfoCircleProgressControl__SetupMuralButton(v4, v23);
}


void __fastcall EventInfoCircleProgressControl__SetupMuralButton(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *IsTargetScene; // x0
  char v4; // w20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct EventUiEntity_o *eventUiEntity; // x8

  IsTargetScene = (struct UnityEngine_GameObject_o *)EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0LL);
  if ( !this->fields.muralButton )
    goto LABEL_12;
  v4 = (char)IsTargetScene;
  IsTargetScene = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.muralButton, 0LL);
  if ( (v4 & 1) != 0 )
  {
    if ( IsTargetScene )
      goto LABEL_11;
LABEL_12:
    sub_B0D97C(IsTargetScene);
  }
  this->fields.muralButtonObject = IsTargetScene;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.muralButtonObject,
    (System_Int32_array **)IsTargetScene,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  IsTargetScene = this->fields.muralButtonObject;
  if ( !IsTargetScene )
    goto LABEL_12;
  if ( this->fields.extraCircleState == 2 )
  {
    UnityEngine_GameObject__SetActive(IsTargetScene, 1, 0LL);
    IsTargetScene = (struct UnityEngine_GameObject_o *)this->fields.muralButton;
    if ( IsTargetScene )
    {
      IsTargetScene = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UnityEngine_GameObject_o *, struct EventUiEntity_o *, const char *))IsTargetScene->klass[1]._1.gc_desc)(
                                                           IsTargetScene,
                                                           this->fields.eventUiEntity,
                                                           IsTargetScene->klass[1]._1.name);
      eventUiEntity = this->fields.eventUiEntity;
      if ( eventUiEntity )
      {
        IsTargetScene = (struct UnityEngine_GameObject_o *)this->fields.muralButton;
        if ( IsTargetScene )
        {
          EventInfoMuralComponent__InitDisplay(
            (EventInfoMuralComponent_o *)IsTargetScene,
            eventUiEntity->fields.eventId,
            this,
            0LL);
          return;
        }
      }
    }
    goto LABEL_12;
  }
LABEL_11:
  UnityEngine_GameObject__SetActive(IsTargetScene, 0, 0LL);
}


void __fastcall EventInfoCircleProgressControl___Initialization_b__30_0(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B0D97C(this);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0LL);
}


void __fastcall EventInfoCircleProgressControl_Condition___ctor(
        EventInfoCircleProgressControl_Condition_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressControl_ProgressData___ctor(
        EventInfoCircleProgressControl_ProgressData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211B4F & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoCircleProgressControl___c_TypeInfo, v1);
    byte_4211B4F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoCircleProgressControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoCircleProgressControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventInfoCircleProgressControl___c___ctor(
        EventInfoCircleProgressControl___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoCircleProgressControl___c___GetEnableEventPointBuffEntity_b__39_0(
        EventInfoCircleProgressControl___c_o *this,
        EventPointBuffEntity_o *a,
        EventPointBuffEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.eventPoint - a->fields.eventPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressBarAnimObject_b__36_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_B0D97C(this);
  return progressData->fields.Point > progressData->fields.OldPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressCompleteAnimObjcet_b__37_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_B0D97C(this);
  return !progressData->fields.IsOldCompleted && progressData->fields.IsCompleted;
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__0(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v2; // x19
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  struct EventInfoCircleProgressControl_o *v5; // x8
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v6; // x1

  v2 = this;
  if ( (byte_4211B51 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211B51 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210852 = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer
    || (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                           uiVoicePlayer,
                                                                           2,
                                                                           this[2].fields.__9__5->fields.method_ptr,
                                                                           0LL),
        (v5 = v2->fields.__4__this) == 0LL)
    || (v6 = this, (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(this);
  }
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)v6, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__1(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *progressCompleteAnimObjcet; // x0

  progressCompleteAnimObjcet = this->fields.progressCompleteAnimObjcet;
  if ( !progressCompleteAnimObjcet
    || (EventInfoCircleProgressObjectComponent__ApplyProgressData(progressCompleteAnimObjcet, 0LL),
        (progressCompleteAnimObjcet = (EventInfoCircleProgressObjectComponent_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(progressCompleteAnimObjcet);
  }
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)progressCompleteAnimObjcet, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__2(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *_9__5; // x22
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_Collections_IEnumerator_o *v7; // x0

  if ( (byte_4211B52 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__, v4);
    byte_4211B52 = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B0D840(&this->fields.__9__5, _9__5);
  }
  v7 = BasicHelper__DelayCall(0.5, _9__5, 0LL);
  if ( !_4__this )
    sub_B0D97C(v7);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(_4__this, v7, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__3(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v2; // x19
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  struct EventInfoCircleProgressControl_o *v5; // x8
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v6; // x1

  v2 = this;
  if ( (byte_4211B50 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211B50 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210852 = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer )
    goto LABEL_18;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                     uiVoicePlayer,
                                                                     1,
                                                                     this[2].fields.__9__5->fields.method_ptr,
                                                                     0LL);
  v5 = v2->fields.__4__this;
  if ( !v5
    || (v6 = this, (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer) == 0LL)
    || (EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)v6, 0LL),
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v2->fields.progressBarAnimObject) == 0LL)
    || (EventInfoCircleProgressObjectComponent__ApplyProgressData((EventInfoCircleProgressObjectComponent_o *)this, 0LL),
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(this);
  }
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, 0LL);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__4(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v3; // x19
  struct System_Action_o *_9__5; // x8
  int m_target; // w21
  __int64 v6; // x22
  struct System_Action_o *v7; // x8
  System_Action_c **v8; // x8
  System_Action_c *v9; // x20
  Il2CppClass *declaringType; // x8
  Il2CppClass *v11; // x8
  __int64 v12; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.titleDispState = 1,
        v3 = this,
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)this->fields.__4__this) == 0LL)
    || (_9__5 = this[1].fields.__9__5) == 0LL )
  {
LABEL_12:
    sub_B0D97C(this);
  }
  m_target = (int)_9__5->fields.m_target;
  v6 = 0LL;
  while ( (int)v6 < m_target )
  {
    v7 = this[1].fields.__9__5;
    if ( v7 )
    {
      if ( (unsigned int)v6 >= LODWORD(v7->fields.m_target) )
      {
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v8 = &v7->klass + v6;
      v9 = v8[4];
      if ( v9 )
      {
        EventInfoCircleProgressObjectComponent__ApplyProgressData(
          (EventInfoCircleProgressObjectComponent_o *)v8[4],
          0LL);
        declaringType = v9->_1.declaringType;
        if ( declaringType )
        {
          BYTE1(declaringType->_1.this_arg.bits) = 0;
          v11 = v9->_1.declaringType;
          if ( v11 )
          {
            LOBYTE(v11->_1.this_arg.bits) = 0;
            this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v3->fields.__4__this;
            ++v6;
            if ( this )
              continue;
          }
        }
      }
    }
    goto LABEL_12;
  }
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__5(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  EventInfoCircleProgressControl_o *v6; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4211B53 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_B0D8A4(
                                                                       &Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
                                                                       v4);
    byte_4211B53 = 1;
  }
  klass = (System_Action_o *)v3[3].klass;
  v6 = (EventInfoCircleProgressControl_o *)v3[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(klass, v3, Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__, 0LL);
    v3[3].klass = (Il2CppClass *)klass;
    sub_B0D840(&v3[3], klass);
  }
  if ( !v6 )
    sub_B0D97C(this);
  EventInfoCircleProgressControl__InsertMuralButton(v6, klass, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__6(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  struct EventInfoCircleProgressControl_o *v3; // x8
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v4; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.extraCircleState = 2, v3 = this->fields.__4__this, v4 = this, !v3)
    || (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v3->fields.extraCircleProgres) == 0LL
    || (EventInfoCircleProgressObjectComponent__ApplyProgressData((EventInfoCircleProgressObjectComponent_o *)this, 0LL),
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(this);
  }
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, 0LL);
  ActionExtensions__Call(v4->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass38_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass38_0___PlayTitleAnimToBackDraw_b__1(
        EventInfoCircleProgressControl___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass38_1___ctor(
        EventInfoCircleProgressControl___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass38_1___PlayTitleAnimToBackDraw_b__0(
        EventInfoCircleProgressControl___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl___c__DisplayClass38_0_o *CS___8__locals1; // x8
  struct EasingObject_o *easingObj; // x9
  float v5; // s0
  struct EventInfoCircleProgressControl___c__DisplayClass38_0_o *v6; // x8
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  float v8; // s8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj) == 0LL
    || (v5 = UnityEngine_Mathf__Lerp(
               CS___8__locals1->fields.fromAngle,
               CS___8__locals1->fields.toAngle,
               easingObj->fields.mStartTime,
               0LL),
        (v6 = this->fields.CS___8__locals1) == 0LL)
    || (_4__this = v6->fields.__4__this) == 0LL )
  {
    sub_B0D97C(this);
  }
  v8 = v5;
  GameObjectExtensions__AddLocalEulerAngleX(_4__this->fields.titleBaseObject, v5 - this->fields.oldAngle, 0LL);
  this->fields.oldAngle = v8;
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass43_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoCircleProgressControl___c__DisplayClass43_0___LoadProgressData_b__0(
        EventInfoCircleProgressControl___c__DisplayClass43_0_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B0D97C(this);
  return *(_DWORD *)&n->fields.isExtraCircle == this->fields.id;
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass51_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoCircleProgressControl___c__DisplayClass51_0___GetProgressData_b__0(
        EventInfoCircleProgressControl___c__DisplayClass51_0_o *this,
        EventInfoCircleProgressControl_ProgressData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B0D97C(this);
  return n->fields.Id == this->fields.id;
}