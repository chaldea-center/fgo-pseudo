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

  if ( (byte_40FB71E & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_3950/*"CircleProgressData_"*/, v8);
    sub_B16FFC(&StringLiteral_3952/*"CircleProgressTitleState_"*/, v9);
    sub_B16FFC(&StringLiteral_3951/*"CircleProgressExtraData_"*/, v10);
    byte_40FB71E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoCircleProgressControl_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_3952/*"CircleProgressTitleState_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_3952/*"CircleProgressTitleState_"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_3950/*"CircleProgressData_"*/;
  v13->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_3950/*"CircleProgressData_"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v13->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_3951/*"CircleProgressExtraData_"*/;
  v21->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = (struct System_String_o *)StringLiteral_3951/*"CircleProgressExtraData_"*/;
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB71D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo, v6);
    byte_40FB71D = 1;
  }
  this->fields.extraCircleHidePosX = -212.0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
  this->fields.progressDataList = (struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.progressDataList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  if ( (byte_40FB718 & 1) == 0 )
  {
    v23 = this;
    v15 = oldDispState;
    v16 = dispState;
    v17 = oldLevel;
    v18 = level;
    v19 = oldPoint;
    this = (EventInfoCircleProgressControl_o *)sub_B16FFC(
                                                 &Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__,
                                                 *(_QWORD *)&id);
    oldDispState = v15;
    v14 = v23;
    oldPoint = v19;
    level = v18;
    oldLevel = v17;
    dispState = v16;
    byte_40FB718 = 1;
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
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    progressDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)ProgressData,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__);
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

  if ( (byte_40FB706 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FB706 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct UserEventPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = Master_WarQuestSelectionMaster;
  sub_B16F98(
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FB719 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id);
    byte_40FB719 = 1;
  }
  v19 = sub_B170CC(
          EventInfoCircleProgressControl_ProgressData_TypeInfo,
          *(_QWORD *)&id,
          point,
          oldPoint,
          *(_QWORD *)&level);
  EventInfoCircleProgressControl_ProgressData___ctor((EventInfoCircleProgressControl_ProgressData_o *)v19, 0LL);
  if ( !v19 )
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 64), (System_Int32_array **)ent, v20, v21, v22, v23, v24, v25);
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
  WarQuestSelectionMaster_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  _DWORD *v24; // x0
  __int64 v25; // x10
  int32_t v26; // w2
  EventInfoCircleProgressControl_c *v27; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x21
  System_String_o *v29; // x1
  System_String_o *v30; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x21
  System_String_o *v32; // x1
  System_String_o *v33; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x21
  System_String_o *v35; // x1
  System_String_o *v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40FB712 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&EventEntity_TypeInfo, v6);
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_40FB712 = 1;
  }
  v42 = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v13 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !list) )
  {
    sub_B170D4();
  }
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)v13;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_20:
      v23 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    if ( v24 )
    {
      v25 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) >= (unsigned int)v25
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * v25 - 8) == EventEntity_TypeInfo )
      {
        v26 = v24[4];
        v42 = v26;
        if ( !v14 )
          sub_B170D4();
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v14,
               &entity,
               v26,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B170D4();
          if ( EventDetailEntity__IsEventCircleProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v27 = EventInfoCircleProgressControl_TypeInfo;
            if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
              v27 = EventInfoCircleProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v27->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
            v29 = System_Int32__ToString((int32_t)&v42, 0LL);
            v30 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v29, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v30, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
            v32 = System_Int32__ToString((int32_t)&v42, 0LL);
            v33 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v32, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v33, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
            v35 = System_Int32__ToString((int32_t)&v42, 0LL);
            v36 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v35, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v36, 0LL);
          }
        }
      }
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_37:
    v40 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
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
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventPointBuffEntity__o *EntityListWithGroupId; // x21
  EventInfoCircleProgressControl___c_c *v26; // x8
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__39_0; // x22
  Il2CppObject *v29; // x23
  struct EventInfoCircleProgressControl___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  Il2CppObject *current; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FB70D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventPointBuffEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventPointBuffEntity__TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_EventPointBuffMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v17);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__, v18);
    sub_B16FFC(&EventInfoCircleProgressControl___c_TypeInfo, v19);
    byte_40FB70D = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventPointBuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  EntityListWithGroupId = EventPointBuffMaster__GetEntityListWithGroupId(
                            Master_WarQuestSelectionMaster,
                            eventId,
                            groupId,
                            0LL);
  v26 = EventInfoCircleProgressControl___c_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
    v26 = EventInfoCircleProgressControl___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventPointBuffEntity__TypeInfo,
                                                                           v21,
                                                                           v22,
                                                                           v23,
                                                                           v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__39_0,
      v29,
      Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventPointBuffEntity___ctor__);
    v30 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    v30->__9__39_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__39_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !EntityListWithGroupId )
LABEL_23:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityListWithGroupId,
    (System_Comparison_T__o *)_9__39_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)nowEventPointBuff, 0LL, v37, v38, v39, v40, v41, v42);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListWithGroupId,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__) )
  {
    current = v50.fields.current;
    if ( !v50.fields.current )
      sub_B170D4();
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v50.fields.current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_B16F98(
        (BattleServantConfConponent_o *)nowEventPointBuff,
        (System_Int32_array **)current,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressBarAnimObject(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v13; // x0
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__36_0; // x20
  Il2CppObject *v16; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FB70A & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_B16FFC(&Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__, v6);
    sub_B16FFC(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v7);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__, v8);
    sub_B16FFC(&EventInfoCircleProgressControl___c_TypeInfo, v9);
    byte_40FB70A = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_B170D4();
  if ( progressData->fields.Point <= progressData->fields.OldPoint )
  {
    circleProgressList = this->fields.circleProgressList;
    v13 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( (BYTE3(EventInfoCircleProgressControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v13 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__36_0,
        v16,
        Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__);
      v17 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      v17->__9__36_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__36_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v17->__9__36_0,
        (System_Int32_array **)_9__36_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__36_0,
                                                         (const MethodInfo_18B650C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v13; // x0
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__37_0; // x20
  Il2CppObject *v16; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FB70B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_B16FFC(&Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__, v6);
    sub_B16FFC(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v7);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__, v8);
    sub_B16FFC(&EventInfoCircleProgressControl___c_TypeInfo, v9);
    byte_40FB70B = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_B170D4();
  if ( progressData->fields.IsOldCompleted || !progressData->fields.IsCompleted )
  {
    circleProgressList = this->fields.circleProgressList;
    v13 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( (BYTE3(EventInfoCircleProgressControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v13 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__37_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__37_0,
        v16,
        Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__);
      v17 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      v17->__9__37_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__37_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v17->__9__37_0,
        (System_Int32_array **)_9__37_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__37_0,
                                                         (const MethodInfo_18B650C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventInfoCircleProgressControl_ProgressData_o *__fastcall EventInfoCircleProgressControl__GetProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventInfoCircleProgressControl___c__DisplayClass51_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20

  if ( (byte_40FB717 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__, v7);
    sub_B16FFC(&Method_System_Predicate_EventInfoCircleProgressControl_ProgressData___ctor__, v8);
    sub_B16FFC(&System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__, v10);
    sub_B16FFC(&EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo, v11);
    byte_40FB717 = 1;
  }
  v12 = (EventInfoCircleProgressControl___c__DisplayClass51_0_o *)sub_B170CC(
                                                                    EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo,
                                                                    *(_QWORD *)&id,
                                                                    method,
                                                                    v3,
                                                                    v4);
  EventInfoCircleProgressControl___c__DisplayClass51_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  v12->fields.id = id;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.progressDataList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___) )
  {
    progressDataList = this->fields.progressDataList;
    v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                                                     v13,
                                                                     v14,
                                                                     v15,
                                                                     v16);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v18,
      (Il2CppObject *)v12,
      Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoCircleProgressControl_ProgressData___ctor__);
    if ( progressDataList )
      return (EventInfoCircleProgressControl_ProgressData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)progressDataList,
                                                                (System_Predicate_T__o *)v18,
                                                                (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
LABEL_8:
    sub_B170D4();
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

  if ( (byte_40FB70E & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40FB70E = 1;
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
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w1
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  EventInfoCircleProgressControl_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  EventInfoCircleProgressControl_c *v10; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  EventInfoCircleProgressControl_c *v14; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x19
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB713 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, method);
    byte_40FB713 = 1;
  }
  v20 = 0;
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity
    || (eventId = eventUiEntity->fields.eventId, v20 = eventId, (uiVoicePlayer = this->fields.uiVoicePlayer) == 0LL) )
  {
    sub_B170D4();
  }
  if ( !EventInfoUIVoicePlayer__HasSaveData(uiVoicePlayer, eventId, 0LL) )
    return 0;
  v6 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v6 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v6->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v8 = System_Int32__ToString((int32_t)&v20, 0LL);
  v9 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v8, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v9, 0LL) )
    return 0;
  v10 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v10 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v10->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v12 = System_Int32__ToString((int32_t)&v20, 0LL);
  v13 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v12, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v13, 0LL) )
  {
    v14 = EventInfoCircleProgressControl_TypeInfo;
    if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
      v14 = EventInfoCircleProgressControl_TypeInfo;
    }
    SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v14->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
    v16 = System_Int32__ToString((int32_t)&v20, 0LL);
    v17 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v16, 0LL);
    return UnityEngine_PlayerPrefs__HasKey(v17, 0LL);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x22
  struct EventUiEntity_o *v17; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0

  if ( (byte_40FB707 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoCircleProgressControl__Initialization_b__30_0__, v10);
    byte_40FB707 = 1;
  }
  if ( entity )
  {
    this->fields.eventUiEntity = entity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
      (System_Int32_array **)entity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl__Initialization_b__30_0__,
      0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v16, 0LL);
    v17 = this->fields.eventUiEntity;
    if ( !v17 || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0LL )
      sub_B170D4();
    EventInfoUIVoicePlayer__LoadHistory(uiVoicePlayer, v17->fields.eventId, 0LL);
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
  UnityEngine_GameObject_o *v9; // x0
  struct EventInfoMuralComponent_o *muralButton; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoMuralComponent_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v15; // x0
  srcLineSprite_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_IEnumerator_o *v23; // x0

  if ( (byte_40FB71C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, endAction);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_9205/*"MuralButton_in"*/, v7);
    byte_40FB71C = 1;
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
  v9 = this->fields.muralButtonObject;
  if ( !v9 )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(v9, 1, 0LL);
  muralButton = this->fields.muralButton;
  if ( !muralButton )
    goto LABEL_28;
  ((void (__fastcall *)(struct EventInfoMuralComponent_o *, struct EventUiEntity_o *, Il2CppMethodPointer))muralButton->klass->vtable._4_Initialization.method)(
    muralButton,
    this->fields.eventUiEntity,
    muralButton->klass->vtable._5_Setup.methodPtr);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_28;
  v12 = this->fields.muralButton;
  if ( !v12 )
    goto LABEL_28;
  EventInfoMuralComponent__InitDisplay(v12, eventUiEntity->fields.eventId, this, 0LL);
  v13 = this->fields.muralButtonObject;
  if ( !v13 )
    goto LABEL_28;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v13,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
  v15 = this->fields.muralButtonObject;
  if ( !v15 )
    goto LABEL_28;
  v16 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v15,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    if ( v16 )
    {
      *(_QWORD *)&v16->fields.mtIsUpdate = endAction;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v16->fields.mtIsUpdate,
        (System_Int32_array **)endAction,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      if ( Component_srcLineSprite )
        goto LABEL_27;
    }
LABEL_28:
    sub_B170D4();
  }
  v23 = BasicHelper__DelayCall(1.133, endAction, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_28;
LABEL_27:
  UnityEngine_Animation__Play_49744236(
    (UnityEngine_Animation_o *)Component_srcLineSprite,
    (System_String_o *)StringLiteral_9205/*"MuralButton_in"*/,
    0LL);
}


bool __fastcall EventInfoCircleProgressControl__IsBackDrawState(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_Condition_o *titleReverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  if ( (byte_40FB71A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FB71A = 1;
  }
  titleReverseCondition = this->fields.titleReverseCondition;
  if ( !titleReverseCondition )
    sub_B170D4();
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
  struct EventInfoCircleProgressControl_Condition_o *extraCircleOpenCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  if ( (byte_40FB71B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FB71B = 1;
  }
  extraCircleOpenCondition = this->fields.extraCircleOpenCondition;
  if ( !extraCircleOpenCondition )
    sub_B170D4();
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

  if ( (byte_40FB708 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_40FB708 = 1;
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
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x0
  EventInfoCircleProgressControl_c *v14; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *String; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  int max_length; // w8
  unsigned int v25; // w25
  EventInfoCircleProgressObjectComponent_o *v26; // x21
  int32_t v27; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x22
  const MethodInfo *v29; // x5
  int32_t lv; // w23
  _BOOL4 IsBackDrawState; // w24
  bool IsCompletedState; // w0
  __int64 v33; // x3
  __int64 v34; // x4
  int v35; // w8
  int v36; // w19
  System_String_o *v37; // x20
  EventInfoCircleProgressControl___c__DisplayClass43_0_o *v38; // x21
  __int64 v39; // x2
  System_String_array *v40; // x0
  const MethodInfo *v41; // x3
  int v42; // w24
  System_String_array *v43; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x5
  int64_t v46; // x23
  __int64 v47; // x20
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w9
  int32_t v51; // w26
  struct EventInfoCircleProgressObjectComponent_array *v52; // x20
  EventInfoCircleProgressControl_o *v53; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v54; // x27
  UnityEngine_Object_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x28
  int32_t v56; // w27
  int32_t v57; // w20
  char v58; // w28
  bool isOldCompleted; // w8
  bool isCompleted; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v61; // [xsp+18h] [xbp-88h]
  __int64 v62; // [xsp+20h] [xbp-80h]
  int32_t level; // [xsp+2Ch] [xbp-74h]
  int64_t v64; // [xsp+30h] [xbp-70h]
  EventPointBuffEntity_o *ent; // [xsp+38h] [xbp-68h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+40h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_40FB710 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, *(_QWORD *)&eventId);
    sub_B16FFC(&char___TypeInfo, v4);
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, v5);
    sub_B16FFC(&Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__, v6);
    sub_B16FFC(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__, v10);
    sub_B16FFC(&EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40FB710 = 1;
  }
  ent = 0LL;
  nowEventPointBuff = 0LL;
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_62;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)progressDataList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__);
  v14 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v14 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v14->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v16 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v17 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v16, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    circleProgressList = this->fields.circleProgressList;
    if ( circleProgressList )
    {
      max_length = circleProgressList->max_length;
      if ( max_length >= 1 )
      {
        v25 = 0;
        while ( v25 < max_length )
        {
          v26 = circleProgressList->m_Items[v25];
          if ( !v26 )
            goto LABEL_62;
          v27 = *(_DWORD *)&v26->fields.isExtraCircle;
          UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                                 this,
                                                                 eventIda,
                                                                 v27,
                                                                 v22);
          EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
            UserEventPoint,
            eventIda,
            v27,
            (int64_t)UserEventPoint,
            &nowEventPointBuff,
            v29);
          if ( nowEventPointBuff )
            lv = nowEventPointBuff->fields.lv;
          else
            lv = 1;
          IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(v26, 0LL);
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(v26, IsBackDrawState, 0LL);
          EventInfoCircleProgressControl__AddProgressData(
            this,
            v27,
            (int64_t)UserEventPoint,
            (int64_t)UserEventPoint,
            lv,
            lv,
            IsBackDrawState,
            IsBackDrawState,
            IsCompletedState,
            IsCompletedState,
            nowEventPointBuff,
            v61);
          max_length = circleProgressList->max_length;
          if ( (int)++v25 >= max_length )
            return;
        }
        goto LABEL_63;
      }
      return;
    }
LABEL_62:
    sub_B170D4();
  }
  IsNullOrEmpty = sub_B17014(char___TypeInfo, 1LL, v21);
  if ( !IsNullOrEmpty )
    goto LABEL_62;
  v20 = IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_63;
  *(_WORD *)(IsNullOrEmpty + 32) = 44;
  if ( !String )
    goto LABEL_62;
  IsNullOrEmpty = (__int64)System_String__Split(String, (System_Char_array *)IsNullOrEmpty, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_62;
  v35 = *(_DWORD *)(IsNullOrEmpty + 24);
  if ( v35 >= 1 )
  {
    v36 = 0;
    v62 = IsNullOrEmpty;
    while ( v36 < (unsigned int)v35 )
    {
      v37 = *(System_String_o **)(IsNullOrEmpty + 8LL * v36 + 32);
      v38 = (EventInfoCircleProgressControl___c__DisplayClass43_0_o *)sub_B170CC(
                                                                        EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo,
                                                                        v20,
                                                                        v21,
                                                                        v33,
                                                                        v34);
      EventInfoCircleProgressControl___c__DisplayClass43_0___ctor(v38, 0LL);
      IsNullOrEmpty = sub_B17014(char___TypeInfo, 1LL, v39);
      if ( !IsNullOrEmpty )
        goto LABEL_62;
      v20 = IsNullOrEmpty;
      if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
        break;
      *(_WORD *)(IsNullOrEmpty + 32) = 58;
      if ( !v37 )
        goto LABEL_62;
      v40 = System_String__Split(v37, (System_Char_array *)IsNullOrEmpty, 0LL);
      if ( !v40 )
        goto LABEL_62;
      v42 = v40->max_length;
      v43 = v40;
      if ( v42 < 1 )
      {
        v44 = 0;
        if ( !v38 )
          goto LABEL_62;
      }
      else
      {
        v44 = System_Int32__Parse(v40->m_Items[0], 0LL);
        if ( !v38 )
          goto LABEL_62;
      }
      v38->fields.id = v44;
      IsNullOrEmpty = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v44, v41);
      v46 = IsNullOrEmpty;
      if ( v42 < 2 )
      {
        v47 = 0LL;
      }
      else
      {
        if ( v43->max_length <= 1 )
          break;
        IsNullOrEmpty = System_Int64__Parse(v43->m_Items[1], 0LL);
        v47 = IsNullOrEmpty;
      }
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        (EventInfoCircleProgressControl_o *)IsNullOrEmpty,
        eventIda,
        v38->fields.id,
        v46,
        &ent,
        v45);
      if ( ent )
        v50 = ent->fields.lv;
      else
        v50 = 1;
      v64 = v47;
      level = v50;
      if ( v42 < 3 )
      {
        v51 = 0;
      }
      else
      {
        if ( v43->max_length <= 2 )
          break;
        v51 = System_Int32__Parse(v43->m_Items[2], 0LL);
      }
      v52 = this->fields.circleProgressList;
      v53 = this;
      v54 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                                                 v20,
                                                                                 v21,
                                                                                 v48,
                                                                                 v49);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v54,
        (Il2CppObject *)v38,
        Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoCircleProgressObjectComponent__bool___ctor__);
      USFGOActorBattleActionEventConditional_OverwriteParamCondition = (UnityEngine_Object_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                                 (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v52,
                                                                                                 (System_Func_T__bool__o *)v54,
                                                                                                 (const MethodInfo_18B650C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsNullOrEmpty = UnityEngine_Object__op_Inequality(
                        USFGOActorBattleActionEventConditional_OverwriteParamCondition,
                        0LL,
                        0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          goto LABEL_62;
        IsNullOrEmpty = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                          (EventInfoCircleProgressObjectComponent_o *)USFGOActorBattleActionEventConditional_OverwriteParamCondition,
                          0LL);
        v56 = IsNullOrEmpty & 1;
      }
      else
      {
        v56 = 0;
      }
      if ( v42 < 4 )
      {
        v57 = 0;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          goto LABEL_62;
      }
      else
      {
        if ( v43->max_length <= 3 )
          break;
        v57 = System_Int32__Parse(v43->m_Items[3], 0LL);
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          goto LABEL_62;
      }
      IsNullOrEmpty = EventInfoCircleProgressObjectComponent__IsCompletedState(
                        (EventInfoCircleProgressObjectComponent_o *)USFGOActorBattleActionEventConditional_OverwriteParamCondition,
                        v56,
                        0LL);
      v58 = IsNullOrEmpty;
      if ( v42 >= 5 )
      {
        if ( v43->max_length <= 4 )
          break;
        isOldCompleted = System_Int32__Parse(v43->m_Items[4], 0LL) == 1;
      }
      else
      {
        isOldCompleted = 0;
      }
      isCompleted = v58 & 1;
      this = v53;
      EventInfoCircleProgressControl__AddProgressData(
        v53,
        v38->fields.id,
        v46,
        v64,
        level,
        v51,
        v56,
        v57,
        isCompleted,
        isOldCompleted,
        ent,
        v61);
      IsNullOrEmpty = v62;
      ++v36;
      v35 = *(_DWORD *)(v62 + 24);
      if ( v36 >= v35 )
        return;
    }
LABEL_63:
    sub_B17100(IsNullOrEmpty, v20, v21);
    sub_B170A0();
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
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  struct EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x8
  int32_t v14; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v16; // x5
  int32_t v17; // w22
  __int64 v18; // x0
  __int64 v19; // x2
  const MethodInfo *v20; // x1
  System_String_array *v21; // x0
  const MethodInfo *v22; // x3
  int max_length; // w23
  System_String_array *v24; // x20
  int32_t v25; // w25
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5
  int64_t v28; // x24
  __int64 v29; // x28
  EventInfoCircleProgressObjectComponent_o *v30; // x0
  bool IsBackDrawState; // w0
  int v32; // w23
  _BOOL8 IsCompletedState; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  int32_t v42; // w8
  int32_t lv; // w21
  int32_t v44; // w22
  EventInfoCircleProgressObjectComponent_o *v45; // x0
  char v46; // w27
  int64_t v47; // x25
  int32_t v48; // w26
  EventInfoCircleProgressObjectComponent_o *v49; // x0
  int v50; // w27
  int64_t v51; // x24
  char v52; // w28
  bool isOldCompleted; // w8
  struct EventInfoCircleProgressControl_ProgressData_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t v61; // w0
  int32_t *p_extraCircleState; // x20
  const MethodInfo *v63; // [xsp+18h] [xbp-78h]
  int32_t id; // [xsp+24h] [xbp-6Ch]
  EventPointBuffEntity_o *ent; // [xsp+28h] [xbp-68h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+30h] [xbp-60h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-54h] BYREF

  eventIda = eventId;
  if ( (byte_40FB711 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FB711 = 1;
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
  v9 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v8, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
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
      v30 = this->fields.extraCircleProgres;
      if ( v30 )
      {
        IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(v30, 0LL);
        if ( this->fields.extraCircleProgres )
        {
          v32 = IsBackDrawState;
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                               this->fields.extraCircleProgres,
                               v32,
                               0LL);
          ProgressData = EventInfoCircleProgressControl__CreateProgressData(
                           (EventInfoCircleProgressControl_o *)IsCompletedState,
                           v14,
                           (int64_t)UserEventPoint,
                           (int64_t)UserEventPoint,
                           v17,
                           v17,
                           v32,
                           v32,
                           IsCompletedState,
                           IsCompletedState,
                           nowEventPointBuff,
                           v63);
          this->fields.progressExtraData = ProgressData;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.progressExtraData,
            (System_Int32_array **)ProgressData,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v41) )
            v42 = 2;
          else
            v42 = 0;
          this->fields.extraCircleState = v42;
          return;
        }
      }
    }
LABEL_52:
    sub_B170D4();
  }
  v18 = sub_B17014(char___TypeInfo, 1LL, v11);
  if ( !v18 )
    goto LABEL_52;
  v20 = (const MethodInfo *)v18;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_53;
  *(_WORD *)(v18 + 32) = 58;
  if ( !String )
    goto LABEL_52;
  v21 = System_String__Split(String, (System_Char_array *)v18, 0LL);
  if ( !v21 )
    goto LABEL_52;
  max_length = v21->max_length;
  v24 = v21;
  if ( max_length <= 0 )
  {
    v18 = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, 0, v22);
    v28 = v18;
    v25 = 0;
    goto LABEL_26;
  }
  v25 = System_Int32__Parse(v21->m_Items[0], 0LL);
  v18 = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v25, v26);
  v28 = v18;
  if ( max_length == 1 )
  {
LABEL_26:
    v29 = 0LL;
    goto LABEL_27;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_53;
  v18 = System_Int64__Parse(v24->m_Items[1], 0LL);
  v29 = v18;
LABEL_27:
  EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
    (EventInfoCircleProgressControl_o *)v18,
    eventIda,
    v25,
    v28,
    &ent,
    v27);
  if ( ent )
    lv = ent->fields.lv;
  else
    lv = 1;
  if ( max_length < 3 )
  {
    v44 = 0;
  }
  else
  {
    if ( v24->max_length <= 2 )
      goto LABEL_53;
    v44 = System_Int32__Parse(v24->m_Items[2], 0LL);
  }
  v45 = this->fields.extraCircleProgres;
  if ( !v45 )
    goto LABEL_52;
  v18 = EventInfoCircleProgressObjectComponent__IsBackDrawState(v45, 0LL);
  v46 = v18;
  id = v25;
  if ( max_length < 4 )
  {
    v47 = v28;
    v48 = 1;
  }
  else
  {
    if ( v24->max_length <= 3 )
      goto LABEL_53;
    v47 = v28;
    v48 = System_Int32__Parse(v24->m_Items[3], 0LL);
  }
  v49 = this->fields.extraCircleProgres;
  if ( !v49 )
    goto LABEL_52;
  v50 = v46 & 1;
  v51 = v29;
  v18 = EventInfoCircleProgressObjectComponent__IsCompletedState(v49, v50, 0LL);
  v52 = v18;
  if ( max_length >= 5 )
  {
    if ( v24->max_length <= 4 )
      goto LABEL_53;
    v18 = System_Int32__Parse(v24->m_Items[4], 0LL);
    isOldCompleted = (_DWORD)v18 == 1;
  }
  else
  {
    isOldCompleted = 0;
  }
  v54 = EventInfoCircleProgressControl__CreateProgressData(
          (EventInfoCircleProgressControl_o *)v18,
          id,
          v47,
          v51,
          lv,
          v44,
          v50,
          v48,
          v52 & 1,
          isOldCompleted,
          ent,
          v63);
  this->fields.progressExtraData = v54;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.progressExtraData,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( max_length > 5 )
  {
    if ( v24->max_length > 5 )
    {
      v61 = System_Int32__Parse(v24->m_Items[5], 0LL);
      this->fields.extraCircleState = v61;
      p_extraCircleState = &this->fields.extraCircleState;
      if ( v61 )
        return;
      goto LABEL_49;
    }
LABEL_53:
    sub_B17100(v18, v20, v19);
    sub_B170A0();
  }
  this->fields.extraCircleState = 0;
  p_extraCircleState = &this->fields.extraCircleState;
LABEL_49:
  if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v20) )
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
  bool IsBackDrawState; // w0
  int v12; // w0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = eventId;
  if ( (byte_40FB70F & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FB70F = 1;
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
  v8 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    IsBackDrawState = EventInfoCircleProgressControl__IsBackDrawState(this, v10);
    if ( !this )
      sub_B170D4();
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

  if ( (byte_40FB705 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB705 = 1;
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
      sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
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
  EventInfoCircleProgressObjectComponent_o **v33; // x22
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
  bool IsBackDrawState; // w0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x9
  EventInfoCircleProgressDrawComponent_o *v55; // x19
  System_Action_o *v56; // x21
  UnityEngine_Object_o *v57; // x22
  const MethodInfo *v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Action_o *v62; // x21
  System_Collections_IEnumerator_o *v63; // x0
  EventInfoCircleProgressObjectComponent_o *v64; // x19
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x21
  System_Action_o *v70; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v73; // x0
  srcLineSprite_o *v74; // x22
  _BOOL8 v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w20
  il2cpp_array_size_t v80; // w22
  EventInfoCircleProgressObjectComponent_o *v81; // x0
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x19
  System_Action_o *v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7

  if ( (byte_40FB709 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__, v11);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__, v12);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__, v13);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__, v14);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__, v15);
    sub_B16FFC(&EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_16679/*"bit_circlemeter_rotate"*/, v17);
    byte_40FB709 = 1;
  }
  v18 = sub_B170CC(
          EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo,
          *(_QWORD *)&type,
          callback,
          method,
          v4);
  EventInfoCircleProgressControl___c__DisplayClass35_0___ctor(
    (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_40;
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 32) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)callback, v25, v26, v27, v28, v29, v30);
  if ( type != 1 )
    goto LABEL_44;
  ProgressBarAnimObject = (System_Int32_array **)EventInfoCircleProgressControl__GetProgressBarAnimObject(this, v31);
  *(_QWORD *)(v18 + 24) = ProgressBarAnimObject;
  v33 = (EventInfoCircleProgressObjectComponent_o **)(v18 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), ProgressBarAnimObject, v34, v35, v36, v37, v38, v39);
  ProgressCompleteAnimObjcet = (System_Int32_array **)EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
                                                        this,
                                                        v40);
  *(_QWORD *)(v18 + 40) = ProgressCompleteAnimObjcet;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), ProgressCompleteAnimObjcet, v42, v43, v44, v45, v46, v47);
  v48 = *(UnityEngine_Object_o **)(v18 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
  {
    if ( *v33 )
    {
      IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(*v33, 0LL);
      if ( *v33 )
      {
        v54 = 32LL;
        if ( IsBackDrawState )
          v54 = 40LL;
        v55 = *(EventInfoCircleProgressDrawComponent_o **)((char *)&(*v33)->klass + v54);
        v56 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
        System_Action___ctor(
          v56,
          (Il2CppObject *)v18,
          Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__,
          0LL);
        if ( v55 )
        {
          EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(v55, v56, 0LL);
          return;
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
  v57 = *(UnityEngine_Object_o **)(v18 + 40);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v57, 0LL, 0LL) )
  {
    v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v58, v59, v60, v61);
    System_Action___ctor(
      v62,
      (Il2CppObject *)v18,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__,
      0LL);
    v63 = BasicHelper__DelayCall(1.0, v62, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v63, 0LL);
    v64 = *(EventInfoCircleProgressObjectComponent_o **)(v18 + 40);
    v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
    System_Action___ctor(
      v69,
      (Il2CppObject *)v18,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__,
      0LL);
    if ( !v64 )
      goto LABEL_40;
    EventInfoCircleProgressObjectComponent__PlayCompleteAnim(v64, v69, 0LL);
    return;
  }
  if ( this->fields.titleDispState || !EventInfoCircleProgressControl__IsBackDrawState(this, v58) )
  {
    if ( this->fields.extraCircleState == 1 )
    {
      extraCircleProgres = this->fields.extraCircleProgres;
      v83 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v58, v59, v60, v61);
      System_Action___ctor(
        v83,
        (Il2CppObject *)v18,
        Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__,
        0LL);
      if ( !extraCircleProgres )
        goto LABEL_40;
      EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(extraCircleProgres, v83, 0LL);
      return;
    }
LABEL_44:
    ActionExtensions__Call(*(System_Action_o **)(v18 + 32), 0LL);
    return;
  }
  v70 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v58, v59, v60, v61);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v18,
    Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v73 )
    goto LABEL_40;
  v74 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v73,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v75 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( v75 )
    goto LABEL_33;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v75 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v74, 0LL, 0LL);
  if ( v75 )
  {
LABEL_33:
    circleProgressList = this->fields.circleProgressList;
    if ( !circleProgressList )
      goto LABEL_40;
    max_length = circleProgressList->max_length;
    if ( max_length >= 1 )
    {
      v80 = 0;
      do
      {
        if ( v80 >= circleProgressList->max_length )
        {
          sub_B17100(v75, v76, v77);
          sub_B170A0();
        }
        v81 = circleProgressList->m_Items[v80];
        if ( !v81 )
          break;
        EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(v81, 0LL, 0LL);
        if ( (int)++v80 >= max_length )
          goto LABEL_45;
        circleProgressList = this->fields.circleProgressList;
      }
      while ( circleProgressList );
      goto LABEL_40;
    }
LABEL_45:
    EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(this, v70, v77);
  }
  else
  {
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
    if ( !v74 )
      goto LABEL_40;
    *(_QWORD *)&v74->fields.mtIsUpdate = v70;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v74->fields.mtIsUpdate,
      (System_Int32_array **)v70,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    UnityEngine_Animation__Play_49744236(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      (System_String_o *)StringLiteral_16679/*"bit_circlemeter_rotate"*/,
      0LL);
  }
}


void __fastcall EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *titleBaseObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x22
  UnityEngine_GameObject_o *v39; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  EasingObject_o *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x21
  Il2CppObject *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Action_o *v58; // x20
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB70C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__, v8);
    sub_B16FFC(&EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__, v10);
    sub_B16FFC(&EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v11);
    byte_40FB70C = 1;
  }
  v12 = sub_B170CC(EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, endAction, method, v3, v4);
  EventInfoCircleProgressControl___c__DisplayClass38_0___ctor(
    (EventInfoCircleProgressControl___c__DisplayClass38_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_QWORD *)(v12 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 32) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)endAction, v19, v20, v21, v22, v23, v24);
  titleBaseObject = this->fields.titleBaseObject;
  if ( !titleBaseObject )
    goto LABEL_10;
  gameObject = UnityEngine_GameObject__get_gameObject(titleBaseObject, 0LL);
  *(float *)(v12 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v12 + 20) = 1151172608;
  v31 = sub_B170CC(EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v27, v28, v29, v30);
  EventInfoCircleProgressControl___c__DisplayClass38_1___ctor(
    (EventInfoCircleProgressControl___c__DisplayClass38_1_o *)v31,
    0LL);
  if ( !v31 )
    goto LABEL_10;
  *(_QWORD *)(v31 + 32) = v12;
  v38 = v31 + 32;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)v12, v32, v33, v34, v35, v36, v37);
  if ( !*(_QWORD *)(v31 + 32) )
    goto LABEL_10;
  v59.fields.x = *(float *)(*(_QWORD *)(v31 + 32) + 16LL);
  v59.fields.y = 0.0;
  v59.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, v59, 0LL);
  if ( !*(_QWORD *)v38 )
    goto LABEL_10;
  *(_DWORD *)(v31 + 24) = *(_DWORD *)(*(_QWORD *)v38 + 16LL);
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v39,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v31 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), Component_UIWidget, v41, v42, v43, v44, v45, v46);
  v47 = *(EasingObject_o **)(v31 + 16);
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v31,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__,
    0LL);
  v53 = *(Il2CppObject **)(v31 + 32);
  v58 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v54, v55, v56, v57);
  System_Action___ctor(
    v58,
    v53,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__,
    0LL);
  if ( !v47 )
LABEL_10:
    sub_B170D4();
  EasingObject__Play(v47, 0.5, v52, v58, 0.0, 0, 0LL);
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
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  int32_t eventId; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0LL )
    sub_B170D4();
  eventId = eventUiEntity->fields.eventId;
  EventInfoUIVoicePlayer__SaveHistrory(uiVoicePlayer, eventId, 0LL);
  EventInfoCircleProgressControl__SaveTitleState(this, eventId, v6);
  EventInfoCircleProgressControl__SaveProgressData(this, eventId, v7);
  EventInfoCircleProgressControl__SaveProgressExtraData(this, eventId, v8);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__SaveProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x8
  int size; // w21
  System_Text_StringBuilder_o *v13; // x20
  __int64 v14; // x22
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v15; // x26
  unsigned int v16; // w25
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
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v28; // x26
  __int64 v29; // x8
  System_String_o *v30; // x0
  EventInfoCircleProgressControl_c *v31; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x19
  System_String_o *v36; // x0
  __int64 v37; // [xsp+0h] [xbp-60h] BYREF
  __int64 v38; // [xsp+8h] [xbp-58h] BYREF
  __int64 v39; // [xsp+10h] [xbp-50h] BYREF
  int v40; // [xsp+18h] [xbp-48h] BYREF
  int32_t v41; // [xsp+1Ch] [xbp-44h] BYREF

  v41 = eventId;
  if ( (byte_40FB715 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__, v7);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v9);
    sub_B16FFC(&StringLiteral_698/*","*/, v10);
    byte_40FB715 = 1;
  }
  v40 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  progressDataList = this->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_36;
  size = progressDataList->fields._size;
  v13 = (System_Text_StringBuilder_o *)sub_B170CC(
                                         System_Text_StringBuilder_TypeInfo,
                                         *(_QWORD *)&eventId,
                                         method,
                                         v3,
                                         v4);
  System_Text_StringBuilder___ctor(v13, 0LL);
  if ( size >= 1 )
  {
    v14 = 4LL;
    while ( 1 )
    {
      if ( (_DWORD)v14 != 4 )
      {
        if ( !v13 )
          break;
        System_Text_StringBuilder__Append_41914240(v13, (System_String_o *)StringLiteral_698/*","*/, 0LL);
      }
      v15 = this->fields.progressDataList;
      if ( !v15 )
        break;
      v16 = v14 - 4;
      if ( v15->fields._size <= (unsigned int)(v14 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v17 = *((_QWORD *)&v15->fields._items->obj.klass + v14);
      if ( !v17 )
        break;
      v40 = *(_DWORD *)(v17 + 16);
      v18 = System_Int32__ToString((int32_t)&v40, 0LL);
      if ( !v13 )
        break;
      System_Text_StringBuilder__Append_41914240(v13, v18, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
      v19 = this->fields.progressDataList;
      if ( !v19 )
        break;
      if ( v19->fields._size <= v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v20 = *((_QWORD *)&v19->fields._items->obj.klass + v14);
      if ( !v20 )
        break;
      v39 = *(_QWORD *)(v20 + 32);
      v21 = System_Int64__ToString((int64_t)&v39, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, v21, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
      v22 = this->fields.progressDataList;
      if ( !v22 )
        break;
      if ( v22->fields._size <= v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v23 = *((_QWORD *)&v22->fields._items->obj.klass + v14);
      if ( !v23 )
        break;
      v38 = *(int *)(v23 + 44);
      v24 = System_Int64__ToString((int64_t)&v38, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, v24, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
      v25 = this->fields.progressDataList;
      if ( !v25 )
        break;
      if ( v25->fields._size <= v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v26 = *((_QWORD *)&v25->fields._items->obj.klass + v14);
      if ( !v26 )
        break;
      HIDWORD(v37) = *(_DWORD *)(v26 + 52);
      v27 = System_Int32__ToString((int32_t)&v37 + 4, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, v27, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
      v28 = this->fields.progressDataList;
      if ( !v28 )
        break;
      if ( v28->fields._size <= v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v29 = *((_QWORD *)&v28->fields._items->obj.klass + v14);
      if ( !v29 )
        break;
      LODWORD(v37) = *(unsigned __int8 *)(v29 + 57);
      v30 = System_Int32__ToString((int32_t)&v37, 0LL);
      System_Text_StringBuilder__Append_41914240(v13, v30, 0LL);
      if ( (int)++v14 - 4 >= size )
        goto LABEL_31;
    }
LABEL_36:
    sub_B170D4();
  }
LABEL_31:
  v31 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v31 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v31->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v33 = System_Int32__ToString((int32_t)&v41, 0LL);
  v34 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v33, 0LL);
  if ( !v13 )
    goto LABEL_36;
  v35 = v34;
  v36 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
                             v13,
                             v13->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v35, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__SaveProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Text_StringBuilder_o *v8; // x19
  struct EventInfoCircleProgressControl_ProgressData_o *progressExtraData; // x8
  System_String_o *v10; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v11; // x8
  System_String_o *v12; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v13; // x8
  System_String_o *v14; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v15; // x8
  System_String_o *v16; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v17; // x8
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  EventInfoCircleProgressControl_c *v20; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  int32_t extraCircleState; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v26; // [xsp+8h] [xbp-38h] BYREF
  __int64 OldLevel; // [xsp+10h] [xbp-30h] BYREF
  int64_t OldPoint; // [xsp+18h] [xbp-28h] BYREF
  int32_t Id; // [xsp+28h] [xbp-18h] BYREF
  int32_t v30; // [xsp+2Ch] [xbp-14h] BYREF

  v30 = eventId;
  if ( (byte_40FB716 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v7);
    byte_40FB716 = 1;
  }
  Id = 0;
  OldLevel = 0LL;
  OldPoint = 0LL;
  v26 = 0LL;
  extraCircleState = 0;
  v8 = (System_Text_StringBuilder_o *)sub_B170CC(
                                        System_Text_StringBuilder_TypeInfo,
                                        *(_QWORD *)&eventId,
                                        method,
                                        v3,
                                        v4);
  System_Text_StringBuilder___ctor(v8, 0LL);
  progressExtraData = this->fields.progressExtraData;
  if ( !progressExtraData )
    goto LABEL_13;
  Id = progressExtraData->fields.Id;
  v10 = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v8 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_41914240(v8, v10, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
  v11 = this->fields.progressExtraData;
  if ( !v11 )
    goto LABEL_13;
  OldPoint = v11->fields.OldPoint;
  v12 = System_Int64__ToString((int64_t)&OldPoint, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, v12, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
  v13 = this->fields.progressExtraData;
  if ( !v13 )
    goto LABEL_13;
  OldLevel = v13->fields.OldLevel;
  v14 = System_Int64__ToString((int64_t)&OldLevel, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, v14, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
  v15 = this->fields.progressExtraData;
  if ( !v15
    || (HIDWORD(v26) = v15->fields.OldDispState,
        v16 = System_Int32__ToString((int32_t)&v26 + 4, 0LL),
        System_Text_StringBuilder__Append_41914240(v8, v16, 0LL),
        System_Text_StringBuilder__Append_41914240(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL),
        (v17 = this->fields.progressExtraData) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  LODWORD(v26) = v17->fields.IsOldCompleted;
  v18 = System_Int32__ToString((int32_t)&v26, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, v18, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
  extraCircleState = this->fields.extraCircleState;
  v19 = System_Int32__ToString((int32_t)&extraCircleState, 0LL);
  System_Text_StringBuilder__Append_41914240(v8, v19, 0LL);
  v20 = EventInfoCircleProgressControl_TypeInfo;
  if ( (BYTE3(EventInfoCircleProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v20 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v20->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v22 = System_Int32__ToString((int32_t)&v30, 0LL);
  v23 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v22, 0LL);
  v24 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                             v8,
                             v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v23, v24, 0LL);
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
  if ( (byte_40FB714 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    byte_40FB714 = 1;
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
  v7 = System_String__Concat_43743732(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0LL);
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
  float v5; // s0
  int v6; // s1
  int v7; // s2
  const MethodInfo *v8; // x2
  struct EventUiEntity_o *v9; // x8
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w21
  il2cpp_array_size_t v15; // w22
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x20
  const MethodInfo *v18; // x2
  EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  struct EventUiEntity_o *v20; // x8
  UnityEngine_Component_o *extraCircleProgres; // x20
  int32_t extraCircleState; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  float extraCircleHidePosX; // s8
  UnityEngine_GameObject_o *v25; // x0
  const MethodInfo *v26; // x1

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadTitleState(this, eventUiEntity->fields.eventId, v2);
  v5 = 180.0;
  if ( this->fields.titleDispState != 1 )
    v5 = 0.0;
  v6 = 0;
  v7 = 0;
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, *(UnityEngine_Vector3_o *)&v5, 0LL);
  v9 = this->fields.eventUiEntity;
  if ( !v9 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressData(this, v9->fields.eventId, v8);
  circleProgressList = this->fields.circleProgressList;
  if ( !circleProgressList )
    goto LABEL_12;
  max_length = circleProgressList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= circleProgressList->max_length )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v16 = &circleProgressList->obj.klass + (int)v15;
      v17 = v16[4];
      if ( !v17 )
        break;
      EventInfoCircleProgressObjectComponent__SetActive((EventInfoCircleProgressObjectComponent_o *)v16[4], 1, 0LL);
      ProgressData = EventInfoCircleProgressControl__GetProgressData(this, (int32_t)v17->_1.namespaze, v18);
      EventInfoCircleProgressObjectComponent__Setup(
        (EventInfoCircleProgressObjectComponent_o *)v17,
        this,
        ProgressData,
        0LL);
      if ( (int)++v15 >= max_length )
        goto LABEL_13;
      circleProgressList = this->fields.circleProgressList;
    }
    while ( circleProgressList );
LABEL_12:
    sub_B170D4();
  }
LABEL_13:
  v20 = this->fields.eventUiEntity;
  if ( !v20 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressExtraData(this, v20->fields.eventId, v12);
  extraCircleProgres = (UnityEngine_Component_o *)this->fields.extraCircleProgres;
  if ( !extraCircleProgres )
    goto LABEL_12;
  extraCircleState = this->fields.extraCircleState;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.extraCircleProgres, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned int)(extraCircleState - 1) < 2, 0LL);
  extraCircleHidePosX = 0.0;
  if ( this->fields.extraCircleState <= 1u )
    extraCircleHidePosX = this->fields.extraCircleHidePosX;
  v25 = UnityEngine_Component__get_gameObject(extraCircleProgres, 0LL);
  GameObjectExtensions__SetLocalPositionX(v25, extraCircleHidePosX, 0LL);
  EventInfoCircleProgressObjectComponent__Setup(
    (EventInfoCircleProgressObjectComponent_o *)extraCircleProgres,
    this,
    this->fields.progressExtraData,
    0LL);
  EventInfoCircleProgressControl__SetupMuralButton(this, v26);
}


void __fastcall EventInfoCircleProgressControl__SetupMuralButton(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  bool IsTargetScene; // w0
  bool v4; // w20
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct EventInfoMuralComponent_o *muralButton; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoMuralComponent_o *v14; // x0

  IsTargetScene = EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0LL);
  if ( !this->fields.muralButton )
    goto LABEL_12;
  v4 = IsTargetScene;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.muralButton, 0LL);
  if ( v4 )
  {
    if ( gameObject )
      goto LABEL_11;
LABEL_12:
    sub_B170D4();
  }
  this->fields.muralButtonObject = gameObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.muralButtonObject,
    (System_Int32_array **)gameObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  gameObject = this->fields.muralButtonObject;
  if ( !gameObject )
    goto LABEL_12;
  if ( this->fields.extraCircleState == 2 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    muralButton = this->fields.muralButton;
    if ( muralButton )
    {
      ((void (__fastcall *)(struct EventInfoMuralComponent_o *, struct EventUiEntity_o *, Il2CppMethodPointer))muralButton->klass->vtable._4_Initialization.method)(
        muralButton,
        this->fields.eventUiEntity,
        muralButton->klass->vtable._5_Setup.methodPtr);
      eventUiEntity = this->fields.eventUiEntity;
      if ( eventUiEntity )
      {
        v14 = this->fields.muralButton;
        if ( v14 )
        {
          EventInfoMuralComponent__InitDisplay(v14, eventUiEntity->fields.eventId, this, 0LL);
          return;
        }
      }
    }
    goto LABEL_12;
  }
LABEL_11:
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall EventInfoCircleProgressControl___Initialization_b__30_0(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FBD & 1) == 0 )
  {
    sub_B16FFC(&EventInfoCircleProgressControl___c_TypeInfo, v1);
    byte_40F6FBD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoCircleProgressControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoCircleProgressControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.eventPoint - a->fields.eventPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressBarAnimObject_b__36_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_B170D4();
  return progressData->fields.Point > progressData->fields.OldPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressCompleteAnimObjcet_b__37_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_B170D4();
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
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  TerminalPramsManager_c *v5; // x0
  EventInfoUIVoicePlayer_VoiceData_o *TargetVoiceData; // x0
  struct EventInfoCircleProgressControl_o *v7; // x8
  EventInfoUIVoicePlayer_VoiceData_o *v8; // x1
  EventInfoUIVoicePlayer_o *v9; // x0

  if ( (byte_40F6FBF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6FBF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6057 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer
    || (TargetVoiceData = EventInfoUIVoicePlayer__GetTargetVoiceData(
                            uiVoicePlayer,
                            2,
                            v5->static_fields->_QuestId_k__BackingField,
                            0LL),
        (v7 = this->fields.__4__this) == 0LL)
    || (v8 = TargetVoiceData, (v9 = v7->fields.uiVoicePlayer) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  EventInfoUIVoicePlayer__Play(v9, v8, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__1(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *progressCompleteAnimObjcet; // x0
  EventInfoCircleProgressControl_o *_4__this; // x0

  progressCompleteAnimObjcet = this->fields.progressCompleteAnimObjcet;
  if ( !progressCompleteAnimObjcet
    || (EventInfoCircleProgressObjectComponent__ApplyProgressData(progressCompleteAnimObjcet, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  EventInfoCircleProgressControl__SaveAllData(_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__2(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__5; // x22
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_IEnumerator_o *v15; // x0

  if ( (byte_40F6FC0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__, v6);
    byte_40F6FC0 = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = BasicHelper__DelayCall(0.5, _9__5, 0LL);
  if ( !_4__this )
    sub_B170D4();
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(_4__this, v15, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__3(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  TerminalPramsManager_c *v5; // x0
  EventInfoUIVoicePlayer_VoiceData_o *TargetVoiceData; // x0
  struct EventInfoCircleProgressControl_o *v7; // x8
  EventInfoUIVoicePlayer_VoiceData_o *v8; // x1
  EventInfoUIVoicePlayer_o *v9; // x0
  EventInfoCircleProgressObjectComponent_o *progressBarAnimObject; // x0
  EventInfoCircleProgressControl_o *v11; // x0

  if ( (byte_40F6FBE & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6FBE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6057 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer )
    goto LABEL_18;
  TargetVoiceData = EventInfoUIVoicePlayer__GetTargetVoiceData(
                      uiVoicePlayer,
                      1,
                      v5->static_fields->_QuestId_k__BackingField,
                      0LL);
  v7 = this->fields.__4__this;
  if ( !v7
    || (v8 = TargetVoiceData, (v9 = v7->fields.uiVoicePlayer) == 0LL)
    || (EventInfoUIVoicePlayer__Play(v9, v8, 0LL), (progressBarAnimObject = this->fields.progressBarAnimObject) == 0LL)
    || (EventInfoCircleProgressObjectComponent__ApplyProgressData(progressBarAnimObject, 0LL),
        (v11 = this->fields.__4__this) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  EventInfoCircleProgressControl__SaveAllData(v11, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__4(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  struct EventInfoCircleProgressControl_o *v5; // x0
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w21
  __int64 v8; // x22
  struct EventInfoCircleProgressObjectComponent_array *v9; // x8
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x20
  Il2CppClass *declaringType; // x8
  Il2CppClass *v13; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.titleDispState = 1, (v5 = this->fields.__4__this) == 0LL)
    || (circleProgressList = v5->fields.circleProgressList) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  max_length = circleProgressList->max_length;
  v8 = 0LL;
  while ( (int)v8 < max_length )
  {
    v9 = v5->fields.circleProgressList;
    if ( v9 )
    {
      if ( (unsigned int)v8 >= v9->max_length )
      {
        sub_B17100(v5, method, v2);
        sub_B170A0();
      }
      v10 = &v9->obj.klass + v8;
      v11 = v10[4];
      if ( v11 )
      {
        EventInfoCircleProgressObjectComponent__ApplyProgressData(
          (EventInfoCircleProgressObjectComponent_o *)v10[4],
          0LL);
        declaringType = v11->_1.declaringType;
        if ( declaringType )
        {
          BYTE1(declaringType->_1.this_arg.bits) = 0;
          v13 = v11->_1.declaringType;
          if ( v13 )
          {
            LOBYTE(v13->_1.this_arg.bits) = 0;
            v5 = this->fields.__4__this;
            ++v8;
            if ( v5 )
              continue;
          }
        }
      }
    }
    goto LABEL_12;
  }
  EventInfoCircleProgressControl__SaveAllData(v5, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__5(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__6; // x22
  EventInfoCircleProgressControl_o *_4__this; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F6FC1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__, v6);
    byte_40F6FC1 = 1;
  }
  _9__6 = this->fields.__9__6;
  _4__this = this->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
      0LL);
    this->fields.__9__6 = _9__6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__6,
      (System_Int32_array **)_9__6,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !_4__this )
    sub_B170D4();
  EventInfoCircleProgressControl__InsertMuralButton(_4__this, _9__6, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__6(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  struct EventInfoCircleProgressControl_o *v3; // x8
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x0
  EventInfoCircleProgressControl_o *v6; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.extraCircleState = 2, (v3 = this->fields.__4__this) == 0LL)
    || (extraCircleProgres = v3->fields.extraCircleProgres) == 0LL
    || (EventInfoCircleProgressObjectComponent__ApplyProgressData(extraCircleProgres, 0LL),
        (v6 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  EventInfoCircleProgressControl__SaveAllData(v6, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return n->fields.Id == this->fields.id;
}