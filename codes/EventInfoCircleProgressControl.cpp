void EventInfoCircleProgressControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EventInfoCircleProgressControl_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct EventInfoCircleProgressControl_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D30C5D & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&StringLiteral_4446/*"CircleProgressData_"*/);
    sub_1C93AD4(&StringLiteral_4448/*"CircleProgressTitleState_"*/);
    sub_1C93AD4(&StringLiteral_4447/*"CircleProgressExtraData_"*/);
    byte_4D30C5D = 1;
  }
  EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = (struct System_String_o *)StringLiteral_4448/*"CircleProgressTitleState_"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventInfoCircleProgressControl_TypeInfo->static_fields,
    StringLiteral_4448/*"CircleProgressTitleState_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_4446/*"CircleProgressData_"*/;
  static_fields = EventInfoCircleProgressControl_TypeInfo->static_fields;
  static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_4446/*"CircleProgressData_"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_4447/*"CircleProgressExtraData_"*/;
  v16 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v16->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = (struct System_String_o *)StringLiteral_4447/*"CircleProgressExtraData_"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v16->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA,
    v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void EventInfoCircleProgressControl___ctor(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30C5C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo);
    byte_4D30C5C = 1;
  }
  this->fields.extraCircleHidePosX = -212.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
  this->fields.progressDataList = (struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.progressDataList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoCircleProgressControl__AddProgressData(
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
  EventInfoCircleProgressControl_o *v17; // x24
  int32_t v18; // w20
  int32_t v19; // w19
  Il2CppObject *ProgressData; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *progressDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppObject *v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // [xsp+18h] [xbp-68h]

  v17 = this;
  if ( (byte_4D30C57 & 1) == 0 )
  {
    v18 = oldDispState;
    v19 = dispState;
    this = (EventInfoCircleProgressControl_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__);
    dispState = v19;
    oldDispState = v18;
    byte_4D30C57 = 1;
  }
  ProgressData = (Il2CppObject *)EventInfoCircleProgressControl__CreateProgressData(
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
                                   v34);
  progressDataList = (System_Collections_Generic_List_object__o *)v17->fields.progressDataList;
  if ( !progressDataList
    || (items = progressDataList->fields._items,
        v30 = Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__,
        ++progressDataList->fields._version,
        !items) )
  {
    sub_1C93D2C(ProgressData, v21);
  }
  size = progressDataList->fields._size;
  v32 = ProgressData;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      progressDataList,
      ProgressData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    progressDataList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v32, v22, v23, v24, v25, v26, v27);
  }
}


void EventInfoCircleProgressControl__Awake(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30C45 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30C45 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userEventPointMaster,
    (int32_t)Master_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


EventInfoCircleProgressControl_ProgressData_o *EventInfoCircleProgressControl__CreateProgressData(
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
  __int64 v19; // x26
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D30C58 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl_ProgressData_TypeInfo);
    byte_4D30C58 = 1;
  }
  v19 = sub_1C93D20(EventInfoCircleProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    sub_1C93D2C(v20, v21);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 64), (int32_t)ent, v22, v23, v24, v25, v26, v27);
  return (EventInfoCircleProgressControl_ProgressData_o *)v19;
}


void EventInfoCircleProgressControl__DeleteContinueData(const MethodInfo *method)
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
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  __int64 v18; // x1
  EventInfoCircleProgressControl_c *v19; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x21
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x21
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x21
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v34; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4D30C51 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D30C51 = 1;
  }
  v34 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C93D2C(Master_object, v2);
  }
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v10 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_19:
      v14 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 + 16);
      v34 = v17;
      if ( !v4 )
        sub_1C93D2C(v15, v16);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v4,
             &entity,
             v17,
             (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C93D2C(0, v18);
        if ( EventDetailEntity__IsEventCircleProgress((EventDetailEntity_o *)entity, 0) )
        {
          v19 = EventInfoCircleProgressControl_TypeInfo;
          if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
            v19 = EventInfoCircleProgressControl_TypeInfo;
          }
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v19->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
          v21 = System_Int32__ToString((int32_t)&v34, 0);
          v22 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v21, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v22, 0);
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
          v24 = System_Int32__ToString((int32_t)&v34, 0);
          v25 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v24, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v25, 0);
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
          v27 = System_Int32__ToString((int32_t)&v34, 0);
          v28 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v27, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v28, 0);
        }
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_33;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_33:
    v32 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
}


void EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t userPoint,
        EventPointBuffEntity_o **nowEventPointBuff,
        const MethodInfo *method)
{
  EventPointBuffMaster_o *Master_object; // x0
  __int64 v11; // x1
  EventInfoCircleProgressControl___c_c *v12; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v15; // x23
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D30C4C & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_4D30C4C = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventPointBuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (EventPointBuffMaster_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                              Master_object,
                                              eventId,
                                              groupId,
                                              0);
  v12 = EventInfoCircleProgressControl___c_TypeInfo;
  v13 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
    v12 = EventInfoCircleProgressControl___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v12->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v15,
      Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__,
      0);
    static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__39_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__39_0,
      (int32_t)_9__39_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v13 )
LABEL_20:
    sub_1C93D2C(Master_object, v11);
  System_Collections_Generic_List_object___Sort_59225184(
    v13,
    _9__39_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)nowEventPointBuff, 0, v23, v24, v25, v26, v27, v28);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v13,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1C93D2C(v29, v30);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v38.fields._current, userPoint, 0) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)nowEventPointBuff, (int32_t)current, v32, v33, v34, v35, v36, v37);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


EventInfoCircleProgressObjectComponent_o *EventInfoCircleProgressControl__GetProgressBarAnimObject(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v6; // x0
  System_Func_object__bool__o *_9__36_0; // x20
  Il2CppObject *v8; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D30C49 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
    sub_1C93AD4(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_4D30C49 = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0 )
    sub_1C93D2C(result, method);
  if ( progressData->fields.Point <= progressData->fields.OldPoint )
  {
    circleProgressList = this->fields.circleProgressList;
    v6 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v6 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__bool__o *)v6->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__36_0,
        v8,
        Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__,
        0);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__36_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__36_0,
        (int32_t)_9__36_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__36_0,
                                                         (const MethodInfo_318E744 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


EventInfoCircleProgressObjectComponent_o *EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v6; // x0
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v8; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D30C4A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
    sub_1C93AD4(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_4D30C4A = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0 )
    sub_1C93D2C(result, method);
  if ( progressData->fields.IsOldCompleted || !progressData->fields.IsCompleted )
  {
    circleProgressList = this->fields.circleProgressList;
    v6 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v6 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__37_0 = (System_Func_object__bool__o *)v6->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__37_0,
        v8,
        Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__,
        0);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__37_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__37_0,
        (int32_t)_9__37_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__37_0,
                                                         (const MethodInfo_318E744 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


EventInfoCircleProgressControl_ProgressData_o *EventInfoCircleProgressControl__GetProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4D30C56 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
    sub_1C93AD4(&System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo);
    byte_4D30C56 = 1;
  }
  v5 = sub_1C93D20(EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_DWORD *)(v5 + 16) = id;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.progressDataList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___) )
  {
    progressDataList = this->fields.progressDataList;
    v9 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo);
    System_Predicate_object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__,
      0);
    if ( progressDataList )
      return (EventInfoCircleProgressControl_ProgressData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)progressDataList,
                                                                (System_Predicate_T__o *)v9,
                                                                (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
LABEL_8:
    sub_1C93D2C(v6, v7);
  }
  return 0;
}


EventInfoCircleProgressControl_ProgressData_o *EventInfoCircleProgressControl__GetProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.progressExtraData;
}


int64_t EventInfoCircleProgressControl__GetUserEventPoint(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_4D30C4D & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30C4D = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


bool EventInfoCircleProgressControl__HasSaveData(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoCircleProgressControl_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  EventInfoCircleProgressControl_c *v8; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  EventInfoCircleProgressControl_c *v12; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4D30C52 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    byte_4D30C52 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (method = (const MethodInfo *)(unsigned int)eventUiEntity->fields.eventId,
        eventId = eventUiEntity->fields.eventId,
        (this = (EventInfoCircleProgressControl_o *)v2->fields.uiVoicePlayer) == 0) )
  {
    sub_1C93D2C(this, method);
  }
  if ( !EventInfoUIVoicePlayer__HasSaveData((EventInfoUIVoicePlayer_o *)this, (int32_t)method, 0) )
    return 0;
  v4 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&eventId, 0);
  v7 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v7, 0) )
    return 0;
  v8 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v8 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v8->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v10 = System_Int32__ToString((int32_t)&eventId, 0);
  v11 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v10, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v11, 0) )
  {
    v12 = EventInfoCircleProgressControl_TypeInfo;
    if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
      v12 = EventInfoCircleProgressControl_TypeInfo;
    }
    SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v12->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
    v14 = System_Int32__ToString((int32_t)&eventId, 0);
    v15 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v14, 0);
    return UnityEngine_PlayerPrefs__HasKey(v15, 0);
  }
  else
  {
    return 0;
  }
}


void EventInfoCircleProgressControl__Initialization(
        EventInfoCircleProgressControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v11; // x22
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  __int64 v13; // x1
  struct EventUiEntity_o *v14; // x8

  if ( (byte_4D30C46 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl__Initialization_b__30_0__);
    byte_4D30C46 = 1;
  }
  if ( entity )
  {
    this->fields.eventUiEntity = entity;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUiEntity,
      (int32_t)entity,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoCircleProgressControl__Initialization_b__30_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v11, 0);
    v14 = this->fields.eventUiEntity;
    if ( !v14 || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0 )
      sub_1C93D2C(uiVoicePlayer, v13);
    EventInfoUIVoicePlayer__LoadHistory(uiVoicePlayer, v14->fields.eventId, 0);
  }
}


void EventInfoCircleProgressControl__InsertMuralButton(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *muralButtonObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *muralButton; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_IEnumerator_o *v17; // x0

  if ( (byte_4D30C5B & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_9252/*"MuralButton_in"*/);
    byte_4D30C5B = 1;
  }
  muralButtonObject = (UnityEngine_Object_o *)this->fields.muralButtonObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(muralButtonObject, 0, 0)
    || EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0) )
  {
    goto LABEL_15;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(muralButton, 1, 0);
  muralButton = (UnityEngine_GameObject_o *)this->fields.muralButton;
  if ( !muralButton )
    goto LABEL_25;
  muralButton = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, struct EventUiEntity_o *, void *))muralButton->klass[1]._1.image)(
                                              muralButton,
                                              this->fields.eventUiEntity,
                                              muralButton->klass[1]._1.gc_desc);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_25;
  muralButton = (UnityEngine_GameObject_o *)this->fields.muralButton;
  if ( !muralButton )
    goto LABEL_25;
  EventInfoMuralComponent__InitDisplay((EventInfoMuralComponent_o *)muralButton, eventUiEntity->fields.eventId, this, 0);
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       muralButton,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_15:
    ActionExtensions__Call(endAction, 0);
    return;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  v10 = UnityEngine_GameObject__GetComponent_object_(
          muralButton,
          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  muralButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0);
  if ( ((unsigned __int8)muralButton & 1) != 0 )
  {
    v17 = BasicHelper__DelayCall(1.133, endAction, 1, 0);
    muralButton = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_72105100(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v17,
                                                0);
  }
  else
  {
    if ( !v10 )
      goto LABEL_25;
    v10[2].monitor = endAction;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10[2].monitor, (int32_t)endAction, v11, v12, v13, v14, v15, v16);
  }
  if ( !Component_object )
LABEL_25:
    sub_1C93D2C(muralButton, v6);
  UnityEngine_Animation__Play_71862428(
    (UnityEngine_Animation_o *)Component_object,
    (System_String_o *)StringLiteral_9252/*"MuralButton_in"*/,
    0);
}


bool EventInfoCircleProgressControl__IsBackDrawState(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventInfoCircleProgressControl_Condition_o *titleReverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v2 = this;
  if ( (byte_4D30C59 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30C59 = 1;
  }
  titleReverseCondition = v2->fields.titleReverseCondition;
  if ( !titleReverseCondition )
    sub_1C93D2C(this, method);
  CondKind = titleReverseCondition->fields.CondKind;
  CondId = titleReverseCondition->fields.CondId;
  CondValue = titleReverseCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0, 0);
}


bool EventInfoCircleProgressControl__IsExtraCircleDisp(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventInfoCircleProgressControl_Condition_o *extraCircleOpenCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v2 = this;
  if ( (byte_4D30C5A & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30C5A = 1;
  }
  extraCircleOpenCondition = v2->fields.extraCircleOpenCondition;
  if ( !extraCircleOpenCondition )
    sub_1C93D2C(this, method);
  CondKind = extraCircleOpenCondition->fields.CondKind;
  CondId = extraCircleOpenCondition->fields.CondId;
  CondValue = extraCircleOpenCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoCircleProgressControl__IsPlayAnim(
        EventInfoCircleProgressControl_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ProgressBarAnimObject; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *ProgressCompleteAnimObjcet; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4D30C47 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30C47 = 1;
  }
  if ( type != 1 )
    return 0;
  ProgressBarAnimObject = (UnityEngine_Object_o *)EventInfoCircleProgressControl__GetProgressBarAnimObject(
                                                    this,
                                                    *(const MethodInfo **)&type);
  ProgressCompleteAnimObjcet = (UnityEngine_Object_o *)EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
                                                         this,
                                                         v6);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ProgressBarAnimObject, 0, 0) )
    return 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(ProgressCompleteAnimObjcet, 0, 0)
      || !this->fields.titleDispState && EventInfoCircleProgressControl__IsBackDrawState(this, v8)
      || this->fields.extraCircleState == 1;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressControl__LoadProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v3; // x28
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x8
  int32_t size; // w2
  int v6; // w9
  EventInfoCircleProgressControl_c *v7; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *String; // x20
  const MethodInfo *v12; // x3
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  int max_length; // w8
  unsigned int v15; // w25
  EventInfoCircleProgressObjectComponent_o *v16; // x22
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x1
  int32_t lv; // w23
  int32_t IsBackDrawState; // w24
  const MethodInfo *v23; // x2
  bool IsCompletedState; // w0
  int m_CancellationTokenSource; // w8
  int v26; // w20
  System_String_o *v27; // x22
  __int64 v28; // x21
  const MethodInfo *v29; // x3
  int v30; // w19
  EventInfoCircleProgressControl_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x5
  EventInfoCircleProgressControl_o *v34; // x23
  EventInfoCircleProgressControl_o *v35; // x29
  int32_t v36; // w26
  int32_t v37; // w25
  System_Object_array *v38; // x27
  System_Func_object__bool__o *v39; // x28
  Il2CppObject *object; // x28
  const MethodInfo *v41; // x2
  int32_t v42; // w27
  int32_t v43; // w24
  char v44; // w28
  bool v45; // w8
  bool isCompleted; // w8
  bool isOldCompleted; // [xsp+8h] [xbp-A8h]
  const MethodInfo *v48; // [xsp+18h] [xbp-98h]
  EventInfoCircleProgressControl_o *v49; // [xsp+28h] [xbp-88h]
  EventInfoCircleProgressControl_o *v50; // [xsp+30h] [xbp-80h]
  EventPointBuffEntity_o *ent; // [xsp+38h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+40h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_4D30C4F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo);
    this = (EventInfoCircleProgressControl_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30C4F = 1;
  }
  ent = 0;
  nowEventPointBuff = 0;
  progressDataList = v3->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_58;
  size = progressDataList->fields._size;
  v6 = progressDataList->fields._version + 1;
  progressDataList->fields._size = 0;
  progressDataList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)progressDataList->fields._items, 0, size, 0);
  v7 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v7 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v7->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v9 = System_Int32__ToString((int32_t)&eventIda, 0);
  v10 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v9, 0);
  String = UnityEngine_PlayerPrefs__GetString(v10, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (EventInfoCircleProgressControl_o *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    circleProgressList = v3->fields.circleProgressList;
    if ( circleProgressList )
    {
      max_length = circleProgressList->max_length;
      if ( max_length >= 1 )
      {
        v15 = 0;
        while ( v15 < max_length )
        {
          v16 = circleProgressList->m_Items[v15];
          if ( !v16 )
            goto LABEL_58;
          circleId = v16->fields.circleId;
          UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                                 v3,
                                                                 eventIda,
                                                                 circleId,
                                                                 v12);
          EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
            UserEventPoint,
            eventIda,
            circleId,
            (int64_t)UserEventPoint,
            &nowEventPointBuff,
            v19);
          if ( nowEventPointBuff )
            lv = nowEventPointBuff->fields.lv;
          else
            lv = 1;
          IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(v16, v20);
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(v16, IsBackDrawState, v23);
          EventInfoCircleProgressControl__AddProgressData(
            v3,
            circleId,
            (int64_t)UserEventPoint,
            (int64_t)UserEventPoint,
            lv,
            lv,
            IsBackDrawState,
            IsBackDrawState,
            IsCompletedState,
            IsCompletedState,
            nowEventPointBuff,
            v48);
          max_length = circleProgressList->max_length;
          if ( (int)++v15 >= max_length )
            return;
        }
        goto LABEL_59;
      }
      return;
    }
LABEL_58:
    sub_1C93D2C(this, *(_QWORD *)&eventId);
  }
  if ( !String )
    goto LABEL_58;
  this = (EventInfoCircleProgressControl_o *)System_String__Split(String, 0x2Cu, 0, 0);
  if ( !this )
    goto LABEL_58;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v26 = 0;
    v49 = v3;
    v50 = this;
    while ( v26 < (unsigned int)m_CancellationTokenSource )
    {
      v27 = (System_String_o *)*((_QWORD *)&this->fields.datas + v26);
      v28 = sub_1C93D20(EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0);
      if ( !v27 )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)System_String__Split(v27, 0x3Au, 0, 0);
      if ( !this )
        goto LABEL_58;
      v30 = (int)this->fields.m_CancellationTokenSource;
      v31 = this;
      if ( v30 < 1 )
      {
        v32 = 0;
        if ( !v28 )
          goto LABEL_58;
      }
      else
      {
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0);
        v32 = (int)this;
        if ( !v28 )
          goto LABEL_58;
      }
      *(_DWORD *)(v28 + 16) = v32;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                   v3,
                                                   eventIda,
                                                   v32,
                                                   v29);
      v34 = this;
      if ( v30 < 2 )
      {
        v35 = 0;
      }
      else
      {
        if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int64__Parse(*(System_String_o **)&v31->fields.playType, 0);
        v35 = this;
      }
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        this,
        eventIda,
        *(_DWORD *)(v28 + 16),
        (int64_t)v34,
        &ent,
        v33);
      v36 = ent ? ent->fields.lv : 1;
      if ( v30 < 3 )
      {
        v37 = 0;
      }
      else
      {
        if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 2 )
          break;
        v37 = System_Int32__Parse((System_String_o *)v31->fields.assetData, 0);
      }
      v38 = (System_Object_array *)v3->fields.circleProgressList;
      v39 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v39,
        (Il2CppObject *)v28,
        Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__,
        0);
      object = BasicHelper__Find_object_(
                 v38,
                 (System_Func_T__bool__o *)v39,
                 (const MethodInfo_318E744 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoCircleProgressControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !object )
          goto LABEL_58;
        this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                     (EventInfoCircleProgressObjectComponent_o *)object,
                                                     *(const MethodInfo **)&eventId);
        v42 = (unsigned __int8)this & 1;
      }
      else
      {
        v42 = 0;
      }
      if ( v30 < 4 )
      {
        v43 = 0;
      }
      else
      {
        if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 3 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)v31->fields.assetData2, 0);
        v43 = (int)this;
      }
      if ( !object )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsCompletedState(
                                                   (EventInfoCircleProgressObjectComponent_o *)object,
                                                   v42,
                                                   v41);
      v44 = (char)this;
      if ( v30 >= 5 )
      {
        if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 4 )
          break;
        v45 = System_Int32__Parse((System_String_o *)v31->fields.assetDataList, 0) == 1;
      }
      else
      {
        v45 = 0;
      }
      isOldCompleted = v45;
      isCompleted = v44 & 1;
      v3 = v49;
      EventInfoCircleProgressControl__AddProgressData(
        v49,
        *(_DWORD *)(v28 + 16),
        (int64_t)v34,
        (int64_t)v35,
        v36,
        v37,
        v42,
        v43,
        isCompleted,
        isOldCompleted,
        ent,
        v48);
      this = v50;
      ++v26;
      m_CancellationTokenSource = (int)v50->fields.m_CancellationTokenSource;
      if ( v26 >= m_CancellationTokenSource )
        return;
    }
LABEL_59:
    sub_1C93D34(this);
  }
}


void EventInfoCircleProgressControl__LoadProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  struct EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x8
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v15; // x5
  int32_t v16; // w22
  const MethodInfo *v17; // x3
  int v18; // w29
  void *v19; // x20
  int32_t v20; // w22
  const MethodInfo *v21; // x3
  int64_t IsBackDrawState; // x0
  const MethodInfo *v23; // x5
  int64_t v24; // x21
  int64_t v25; // x23
  const MethodInfo *v26; // x2
  int32_t v27; // w23
  _BOOL8 IsCompletedState; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x1
  int32_t v37; // w8
  int32_t lv; // w24
  int32_t v39; // w25
  const MethodInfo *v40; // x2
  char v41; // w27
  int32_t v42; // w26
  int32_t v43; // w27
  char v44; // w28
  bool isOldCompleted; // w8
  struct EventInfoCircleProgressControl_ProgressData_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  const MethodInfo *v53; // x1
  int32_t v54; // w0
  int32_t *p_extraCircleState; // x20
  const MethodInfo *v56; // [xsp+18h] [xbp-88h]
  EventPointBuffEntity_o *ent; // [xsp+28h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+30h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4D30C50 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30C50 = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  ent = 0;
  nowEventPointBuff = 0;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v6 = System_Int32__ToString((int32_t)&eventIda, 0);
  v7 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v6, 0);
  String = UnityEngine_PlayerPrefs__GetString(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    extraCircleProgres = this->fields.extraCircleProgres;
    if ( extraCircleProgres )
    {
      circleId = extraCircleProgres->fields.circleId;
      UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                             this,
                                                             eventIda,
                                                             circleId,
                                                             v11);
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        UserEventPoint,
        eventIda,
        circleId,
        (int64_t)UserEventPoint,
        &nowEventPointBuff,
        v15);
      v16 = nowEventPointBuff ? nowEventPointBuff->fields.lv : 1;
      IsNullOrEmpty = this->fields.extraCircleProgres;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (void *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                  (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                                  v10);
        if ( this->fields.extraCircleProgres )
        {
          v27 = (unsigned __int8)IsNullOrEmpty & 1;
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                               this->fields.extraCircleProgres,
                               v27,
                               v26);
          ProgressData = EventInfoCircleProgressControl__CreateProgressData(
                           (EventInfoCircleProgressControl_o *)IsCompletedState,
                           circleId,
                           (int64_t)UserEventPoint,
                           (int64_t)UserEventPoint,
                           v16,
                           v16,
                           v27,
                           v27,
                           IsCompletedState,
                           IsCompletedState,
                           nowEventPointBuff,
                           v56);
          this->fields.progressExtraData = ProgressData;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.progressExtraData,
            (int32_t)ProgressData,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v36) )
            v37 = 2;
          else
            v37 = 0;
          this->fields.extraCircleState = v37;
          return;
        }
      }
    }
LABEL_49:
    sub_1C93D2C(IsNullOrEmpty, v10);
  }
  if ( !String )
    goto LABEL_49;
  IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v18 = *((_DWORD *)IsNullOrEmpty + 6);
  v19 = IsNullOrEmpty;
  if ( v18 <= 0 )
  {
    IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, 0, v17);
    v24 = IsBackDrawState;
    v20 = 0;
    goto LABEL_23;
  }
  v20 = System_Int32__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0);
  IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v20, v21);
  v24 = IsBackDrawState;
  if ( v18 == 1 )
  {
LABEL_23:
    v25 = 0;
    goto LABEL_24;
  }
  if ( *((_DWORD *)v19 + 6) <= 1u )
    goto LABEL_50;
  IsBackDrawState = System_Int64__Parse(*((System_String_o **)v19 + 5), 0);
  v25 = IsBackDrawState;
LABEL_24:
  EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
    (EventInfoCircleProgressControl_o *)IsBackDrawState,
    eventIda,
    v20,
    v24,
    &ent,
    v23);
  if ( ent )
    lv = ent->fields.lv;
  else
    lv = 1;
  if ( v18 < 3 )
  {
    v39 = 0;
  }
  else
  {
    if ( *((_DWORD *)v19 + 6) <= 2u )
      goto LABEL_50;
    v39 = System_Int32__Parse(*((System_String_o **)v19 + 6), 0);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v10);
  v41 = IsBackDrawState;
  if ( v18 < 4 )
  {
    v42 = 1;
  }
  else
  {
    if ( *((_DWORD *)v19 + 6) <= 3u )
      goto LABEL_50;
    v42 = System_Int32__Parse(*((System_String_o **)v19 + 7), 0);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v43 = v41 & 1;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v43,
                      v40);
  v44 = IsBackDrawState;
  if ( v18 >= 5 )
  {
    if ( *((_DWORD *)v19 + 6) <= 4u )
      goto LABEL_50;
    IsBackDrawState = System_Int32__Parse(*((System_String_o **)v19 + 8), 0);
    isOldCompleted = (_DWORD)IsBackDrawState == 1;
  }
  else
  {
    isOldCompleted = 0;
  }
  v46 = EventInfoCircleProgressControl__CreateProgressData(
          (EventInfoCircleProgressControl_o *)IsBackDrawState,
          v20,
          v24,
          v25,
          lv,
          v39,
          v43,
          v42,
          v44 & 1,
          isOldCompleted,
          ent,
          v56);
  this->fields.progressExtraData = v46;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.progressExtraData,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( v18 > 5 )
  {
    if ( *((_DWORD *)v19 + 6) > 5u )
    {
      v54 = System_Int32__Parse(*((System_String_o **)v19 + 9), 0);
      this->fields.extraCircleState = v54;
      p_extraCircleState = &this->fields.extraCircleState;
      if ( v54 )
        return;
      goto LABEL_46;
    }
LABEL_50:
    sub_1C93D34(IsBackDrawState);
  }
  this->fields.extraCircleState = 0;
  p_extraCircleState = &this->fields.extraCircleState;
LABEL_46:
  if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v53) )
    *p_extraCircleState = 1;
}


void EventInfoCircleProgressControl__LoadTitleState(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *String; // x20
  const MethodInfo *v9; // x1
  _BOOL8 IsBackDrawState; // x0
  __int64 v11; // x1
  int32_t v12; // w0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_4D30C4E & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D30C4E = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&v13, 0);
  v7 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0);
  String = UnityEngine_PlayerPrefs__GetString(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( System_String__IsNullOrEmpty(String, 0) )
  {
    IsBackDrawState = EventInfoCircleProgressControl__IsBackDrawState(this, v9);
    if ( !this )
      sub_1C93D2C(IsBackDrawState, v11);
    v12 = IsBackDrawState;
  }
  else
  {
    v12 = System_Int32__Parse(String, 0);
  }
  this->fields.titleDispState = v12;
}


void EventInfoCircleProgressControl__OnDestroy(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
    EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
  }
}


void EventInfoCircleProgressControl__OnDisable(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *uiVoicePlayer; // x20
  __int64 v4; // x1
  EventInfoUIVoicePlayer_o *v5; // x0

  if ( (byte_4D30C44 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30C44 = 1;
  }
  uiVoicePlayer = (UnityEngine_Object_o *)this->fields.uiVoicePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiVoicePlayer, 0, 0) )
  {
    v5 = this->fields.uiVoicePlayer;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    EventInfoUIVoicePlayer__Stop(v5, 0);
  }
}


void EventInfoCircleProgressControl__PlayAnim(
        EventInfoCircleProgressControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_GameObject_o *IsBackDrawState; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressBarAnimObject; // x0
  UnityEngine_GameObject_o **v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressCompleteAnimObjcet; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Object_o *v39; // x24
  __int64 v40; // x9
  EventInfoCircleProgressDrawComponent_o *v41; // x19
  System_Action_o *v42; // x21
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *v44; // x22
  const MethodInfo *v45; // x1
  System_Action_o *v46; // x21
  System_Collections_IEnumerator_o *v47; // x0
  EventInfoCircleProgressObjectComponent_o *v48; // x19
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x2
  System_Action_o *v51; // x21
  Il2CppObject *Component_object; // x20
  Il2CppObject *v53; // x22
  const MethodInfo *v54; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w20
  unsigned int v57; // w22
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x19
  System_Action_o *v59; // x21
  const MethodInfo *v60; // x2
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7

  if ( (byte_4D30C48 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_17313/*"bit_circlemeter_rotate"*/);
    byte_4D30C48 = 1;
  }
  v7 = sub_1C93D20(EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( type != 1 )
    goto LABEL_40;
  ProgressBarAnimObject = EventInfoCircleProgressControl__GetProgressBarAnimObject(this, v22);
  *(_QWORD *)(v7 + 24) = ProgressBarAnimObject;
  v24 = (UnityEngine_GameObject_o **)(v7 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)ProgressBarAnimObject, v25, v26, v27, v28, v29, v30);
  ProgressCompleteAnimObjcet = EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(this, v31);
  *(_QWORD *)(v7 + 40) = ProgressCompleteAnimObjcet;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v7 + 40),
    (int32_t)ProgressCompleteAnimObjcet,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = *(UnityEngine_Object_o **)(v7 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
  {
    IsBackDrawState = *v24;
    if ( *v24 )
    {
      IsBackDrawState = (UnityEngine_GameObject_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                      (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
                                                      v9);
      if ( *v24 )
      {
        v40 = 40;
        if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
          v40 = 48;
        v41 = *(EventInfoCircleProgressDrawComponent_o **)((char *)&(*v24)->klass + v40);
        v42 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v42,
          (Il2CppObject *)v7,
          Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__,
          0);
        if ( v41 )
        {
          EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(v41, v42, v43);
          return;
        }
      }
    }
LABEL_36:
    sub_1C93D2C(IsBackDrawState, v9);
  }
  v44 = *(UnityEngine_Object_o **)(v7 + 40);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v44, 0, 0) )
  {
    v46 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v7,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__,
      0);
    v47 = BasicHelper__DelayCall(1.0, v46, 1, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v47, 0);
    v48 = *(EventInfoCircleProgressObjectComponent_o **)(v7 + 40);
    v49 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v49,
      (Il2CppObject *)v7,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__,
      0);
    if ( !v48 )
      goto LABEL_36;
    EventInfoCircleProgressObjectComponent__PlayCompleteAnim(v48, v49, v50);
    return;
  }
  if ( this->fields.titleDispState || !EventInfoCircleProgressControl__IsBackDrawState(this, v45) )
  {
    if ( this->fields.extraCircleState == 1 )
    {
      extraCircleProgres = this->fields.extraCircleProgres;
      v59 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v7,
        Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__,
        0);
      if ( !extraCircleProgres )
        goto LABEL_36;
      EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(extraCircleProgres, v59, v60);
      return;
    }
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
    return;
  }
  v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v7,
    Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__,
    0);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsBackDrawState )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       IsBackDrawState,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsBackDrawState )
    goto LABEL_36;
  v53 = UnityEngine_GameObject__GetComponent_object_(
          IsBackDrawState,
          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
    goto LABEL_29;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v53, 0, 0);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
  {
LABEL_29:
    circleProgressList = this->fields.circleProgressList;
    if ( !circleProgressList )
      goto LABEL_36;
    max_length = circleProgressList->max_length;
    if ( max_length >= 1 )
    {
      v57 = 0;
      do
      {
        if ( v57 >= LODWORD(circleProgressList->max_length) )
          sub_1C93D34(IsBackDrawState);
        IsBackDrawState = (UnityEngine_GameObject_o *)circleProgressList->m_Items[v57];
        if ( !IsBackDrawState )
          break;
        EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
          (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
          0,
          v54);
        if ( max_length == ++v57 )
          goto LABEL_41;
        circleProgressList = this->fields.circleProgressList;
      }
      while ( circleProgressList );
      goto LABEL_36;
    }
LABEL_41:
    EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(this, v51, v54);
  }
  else
  {
    if ( !Component_object )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
    if ( !v53 )
      goto LABEL_36;
    v53[2].monitor = v51;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v53[2].monitor, (int32_t)v51, v61, v62, v63, v64, v65, v66);
    UnityEngine_Animation__Play_71862428(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17313/*"bit_circlemeter_rotate"*/,
      0);
  }
}


void EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *titleBaseObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x22
  UnityEngine_GameObject_o *v29; // x0
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  EasingObject_o *v37; // x19
  System_Action_o *v38; // x21
  Il2CppObject *v39; // x22
  System_Action_o *v40; // x20
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30C4B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__);
    sub_1C93AD4(&EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo);
    byte_4D30C4B = 1;
  }
  v5 = sub_1C93D20(EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = endAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  titleBaseObject = this->fields.titleBaseObject;
  if ( !titleBaseObject )
    goto LABEL_10;
  gameObject = UnityEngine_GameObject__get_gameObject(titleBaseObject, 0);
  *(float *)(v5 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0);
  *(_DWORD *)(v5 + 20) = 1151172608;
  v21 = sub_1C93D20(EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21 )
    goto LABEL_10;
  *(_QWORD *)(v21 + 32) = v5;
  v28 = v21 + 32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 32), v5, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)(v21 + 32) )
    goto LABEL_10;
  v41.fields.x = *(float *)(*(_QWORD *)(v21 + 32) + 16LL);
  v41.fields.y = 0.0;
  v41.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, v41, 0);
  if ( !*(_QWORD *)v28 )
    goto LABEL_10;
  *(_DWORD *)(v21 + 24) = *(_DWORD *)(*(_QWORD *)v28 + 16LL);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v29,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v21 + 16) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 16), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v21 + 16);
  v38 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v21,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__,
    0);
  v39 = *(Il2CppObject **)(v21 + 32);
  v40 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    v39,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__,
    0);
  if ( !v37 )
LABEL_10:
    sub_1C93D2C(titleBaseObject, v7);
  EasingObject__Play(v37, 0.5, v38, v40, 0.0, 0, 0);
}


void EventInfoCircleProgressControl__Redisplay(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  if ( this->fields.eventUiEntity )
    EventInfoCircleProgressControl__SetupDisp(this, method);
}


void EventInfoCircleProgressControl__SaveAllData(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoCircleProgressControl_o *v3; // x19
  int32_t eventId; // w20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || (v3 = this, (this = (EventInfoCircleProgressControl_o *)this->fields.uiVoicePlayer) == 0) )
    sub_1C93D2C(this, method);
  eventId = eventUiEntity->fields.eventId;
  EventInfoUIVoicePlayer__SaveHistrory((EventInfoUIVoicePlayer_o *)this, eventId, 0);
  EventInfoCircleProgressControl__SaveTitleState(v3, eventId, v5);
  EventInfoCircleProgressControl__SaveProgressData(v3, eventId, v6);
  EventInfoCircleProgressControl__SaveProgressExtraData(v3, eventId, v7);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressControl__SaveProgressData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v3; // x19
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x8
  int size; // w22
  System_Text_StringBuilder_o *v6; // x20
  int32_t v7; // w21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  EventInfoCircleProgressControl_c *v12; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v14; // x0
  EventInfoCircleProgressControl_o *v15; // x19
  System_String_o *v16; // x0
  __int64 v17; // [xsp+0h] [xbp-60h] BYREF
  __int64 animType; // [xsp+8h] [xbp-58h] BYREF
  struct System_Collections_Generic_List_EventInfoUIBase_Data__o *datas; // [xsp+10h] [xbp-50h] BYREF
  int m_CachedPtr; // [xsp+18h] [xbp-48h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-44h] BYREF

  v3 = this;
  v21 = eventId;
  if ( (byte_4D30C54 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    this = (EventInfoCircleProgressControl_o *)sub_1C93AD4(&StringLiteral_809/*","*/);
    byte_4D30C54 = 1;
  }
  m_CachedPtr = 0;
  animType = 0;
  datas = 0;
  v17 = 0;
  progressDataList = v3->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_25;
  size = progressDataList->fields._size;
  v6 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0);
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 )
      {
        if ( !v6 )
          break;
        System_Text_StringBuilder__Append_64509684(v6, (System_String_o *)StringLiteral_809/*","*/, 0);
      }
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoCircleProgressControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0);
      if ( !v6 )
        break;
      System_Text_StringBuilder__Append_64509684(v6, (System_String_o *)this, 0);
      System_Text_StringBuilder__Append_64509684(v6, (System_String_o *)StringLiteral_1451/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      datas = this->fields.datas;
      v8 = System_Int64__ToString((int64_t)&datas, 0);
      System_Text_StringBuilder__Append_64509684(v6, v8, 0);
      System_Text_StringBuilder__Append_64509684(v6, (System_String_o *)StringLiteral_1451/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      animType = this->fields.animType;
      v9 = System_Int64__ToString((int64_t)&animType, 0);
      System_Text_StringBuilder__Append_64509684(v6, v9, 0);
      System_Text_StringBuilder__Append_64509684(v6, (System_String_o *)StringLiteral_1451/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      HIDWORD(v17) = HIDWORD(this->fields.assetData);
      v10 = System_Int32__ToString((int32_t)&v17 + 4, 0);
      System_Text_StringBuilder__Append_64509684(v6, v10, 0);
      System_Text_StringBuilder__Append_64509684(v6, (System_String_o *)StringLiteral_1451/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      LODWORD(v17) = BYTE1(this->fields.assetData2);
      v11 = System_Int32__ToString((int32_t)&v17, 0);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_64509684(v6, v11, 0);
      if ( size == ++v7 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1C93D2C(this, *(_QWORD *)&eventId);
  }
LABEL_21:
  v12 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v12 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v12->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v14 = System_Int32__ToString((int32_t)&v21, 0);
  this = (EventInfoCircleProgressControl_o *)System_String__Concat_64425724(
                                               SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
                                               v14,
                                               0);
  if ( !v6 )
    goto LABEL_25;
  v15 = this;
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                             v6,
                             v6->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v15, v16, 0);
}


void EventInfoCircleProgressControl__SaveProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v4; // x19
  System_String_o *appended; // x0
  __int64 v6; // x1
  struct EventInfoCircleProgressControl_ProgressData_o *progressExtraData; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *v8; // x8
  System_String_o *v9; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v10; // x8
  System_String_o *v11; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v12; // x8
  System_String_o *v13; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v14; // x8
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  EventInfoCircleProgressControl_c *v17; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  int32_t extraCircleState; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v23; // [xsp+8h] [xbp-48h] BYREF
  __int64 OldLevel; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v27; // [xsp+2Ch] [xbp-24h] BYREF

  v27 = eventId;
  if ( (byte_4D30C55 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&StringLiteral_1451/*":"*/);
    byte_4D30C55 = 1;
  }
  OldLevel = 0;
  OldPoint = 0;
  v23 = 0;
  extraCircleState = 0;
  v4 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  progressExtraData = this->fields.progressExtraData;
  if ( !progressExtraData )
    goto LABEL_12;
  Id = progressExtraData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0);
  if ( !v4 )
    goto LABEL_12;
  System_Text_StringBuilder__Append_64509684(v4, appended, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64509684(v4, (System_String_o *)StringLiteral_1451/*":"*/, 0);
  v8 = this->fields.progressExtraData;
  if ( !v8 )
    goto LABEL_12;
  OldPoint = v8->fields.OldPoint;
  v9 = System_Int64__ToString((int64_t)&OldPoint, 0);
  System_Text_StringBuilder__Append_64509684(v4, v9, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64509684(v4, (System_String_o *)StringLiteral_1451/*":"*/, 0);
  v10 = this->fields.progressExtraData;
  if ( !v10 )
    goto LABEL_12;
  OldLevel = v10->fields.OldLevel;
  v11 = System_Int64__ToString((int64_t)&OldLevel, 0);
  System_Text_StringBuilder__Append_64509684(v4, v11, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_64509684(v4, (System_String_o *)StringLiteral_1451/*":"*/, 0);
  v12 = this->fields.progressExtraData;
  if ( !v12
    || (HIDWORD(v23) = v12->fields.OldDispState,
        v13 = System_Int32__ToString((int32_t)&v23 + 4, 0),
        System_Text_StringBuilder__Append_64509684(v4, v13, 0),
        appended = (System_String_o *)System_Text_StringBuilder__Append_64509684(
                                        v4,
                                        (System_String_o *)StringLiteral_1451/*":"*/,
                                        0),
        (v14 = this->fields.progressExtraData) == 0) )
  {
LABEL_12:
    sub_1C93D2C(appended, v6);
  }
  LODWORD(v23) = v14->fields.IsOldCompleted;
  v15 = System_Int32__ToString((int32_t)&v23, 0);
  System_Text_StringBuilder__Append_64509684(v4, v15, 0);
  System_Text_StringBuilder__Append_64509684(v4, (System_String_o *)StringLiteral_1451/*":"*/, 0);
  extraCircleState = this->fields.extraCircleState;
  v16 = System_Int32__ToString((int32_t)&extraCircleState, 0);
  System_Text_StringBuilder__Append_64509684(v4, v16, 0);
  v17 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v17 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v17->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v19 = System_Int32__ToString((int32_t)&v27, 0);
  v20 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v19, 0);
  v21 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                             v4,
                             v4->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v20, v21, 0);
}


void EventInfoCircleProgressControl__SaveTitleState(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  int32_t titleDispState; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_4D30C53 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl_TypeInfo);
    byte_4D30C53 = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  titleDispState = this->fields.titleDispState;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&v10, 0);
  v7 = System_String__Concat_64425724(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0);
  v8 = System_Int32__ToString((int32_t)&titleDispState, 0);
  UnityEngine_PlayerPrefs__SetString(v7, v8, 0);
}


void EventInfoCircleProgressControl__SetSprite(
        EventInfoCircleProgressControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, sprite, spriteName, 0);
}


void EventInfoCircleProgressControl__Setup(
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


void EventInfoCircleProgressControl__SetupDisp(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoCircleProgressControl_o *v4; // x19
  const MethodInfo *v5; // x2
  struct EventUiEntity_o *v6; // x8
  const MethodInfo *v7; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w21
  unsigned int v10; // w22
  Il2CppClass **v11; // x8
  EventInfoCircleProgressObjectComponent_o *v12; // x20
  const MethodInfo *v13; // x2
  EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  const MethodInfo *v15; // x3
  struct EventUiEntity_o *v16; // x8
  UnityEngine_Component_o *extraCircleProgres; // x20
  int32_t extraCircleState; // w21
  float extraCircleHidePosX; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_12;
  v4 = this;
  EventInfoCircleProgressControl__LoadTitleState(this, eventUiEntity->fields.eventId, v2);
  v23.fields.x = 180.0;
  if ( v4->fields.titleDispState != 1 )
    v23.fields.x = 0.0;
  v23.fields.y = 0.0;
  v23.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v4->fields.titleBaseObject, v23, 0);
  v6 = v4->fields.eventUiEntity;
  if ( !v6 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressData(v4, v6->fields.eventId, v5);
  circleProgressList = v4->fields.circleProgressList;
  if ( !circleProgressList )
    goto LABEL_12;
  max_length = circleProgressList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= LODWORD(circleProgressList->max_length) )
        sub_1C93D34(this);
      v11 = &circleProgressList->obj.klass + (int)v10;
      v12 = (EventInfoCircleProgressObjectComponent_o *)v11[4];
      if ( !v12 )
        break;
      EventInfoCircleProgressObjectComponent__SetActive((EventInfoCircleProgressObjectComponent_o *)v11[4], 1, v7);
      ProgressData = EventInfoCircleProgressControl__GetProgressData(v4, v12->fields.circleId, v13);
      EventInfoCircleProgressObjectComponent__Setup(v12, v4, ProgressData, v15);
      if ( max_length == ++v10 )
        goto LABEL_13;
      circleProgressList = v4->fields.circleProgressList;
    }
    while ( circleProgressList );
LABEL_12:
    sub_1C93D2C(this, method);
  }
LABEL_13:
  v16 = v4->fields.eventUiEntity;
  if ( !v16 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressExtraData(v4, v16->fields.eventId, v7);
  extraCircleProgres = (UnityEngine_Component_o *)v4->fields.extraCircleProgres;
  if ( !extraCircleProgres )
    goto LABEL_12;
  extraCircleState = v4->fields.extraCircleState;
  this = (EventInfoCircleProgressControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v4->fields.extraCircleProgres,
                                               0);
  if ( !this )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (unsigned int)(extraCircleState - 1) < 2, 0);
  extraCircleHidePosX = 0.0;
  if ( v4->fields.extraCircleState <= 1u )
    extraCircleHidePosX = v4->fields.extraCircleHidePosX;
  gameObject = UnityEngine_Component__get_gameObject(extraCircleProgres, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, extraCircleHidePosX, 0);
  EventInfoCircleProgressObjectComponent__Setup(
    (EventInfoCircleProgressObjectComponent_o *)extraCircleProgres,
    v4,
    v4->fields.progressExtraData,
    v21);
  EventInfoCircleProgressControl__SetupMuralButton(v4, v22);
}


void EventInfoCircleProgressControl__SetupMuralButton(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *IsTargetScene; // x0
  struct UnityEngine_GameObject_o *v4; // x1
  char v5; // w20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct EventUiEntity_o *eventUiEntity; // x8

  IsTargetScene = (struct UnityEngine_GameObject_o *)EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0);
  if ( !this->fields.muralButton )
    goto LABEL_12;
  v5 = (char)IsTargetScene;
  IsTargetScene = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.muralButton, 0);
  v4 = IsTargetScene;
  if ( (v5 & 1) != 0 )
  {
    if ( IsTargetScene )
      goto LABEL_11;
LABEL_12:
    sub_1C93D2C(IsTargetScene, v4);
  }
  this->fields.muralButtonObject = IsTargetScene;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.muralButtonObject,
    (int32_t)IsTargetScene,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  IsTargetScene = this->fields.muralButtonObject;
  if ( !IsTargetScene )
    goto LABEL_12;
  if ( this->fields.extraCircleState == 2 )
  {
    UnityEngine_GameObject__SetActive(IsTargetScene, 1, 0);
    IsTargetScene = (struct UnityEngine_GameObject_o *)this->fields.muralButton;
    if ( IsTargetScene )
    {
      IsTargetScene = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UnityEngine_GameObject_o *, struct EventUiEntity_o *, void *))IsTargetScene->klass[1]._1.image)(
                                                           IsTargetScene,
                                                           this->fields.eventUiEntity,
                                                           IsTargetScene->klass[1]._1.gc_desc);
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
            0);
          return;
        }
      }
    }
    goto LABEL_12;
  }
LABEL_11:
  UnityEngine_GameObject__SetActive(IsTargetScene, 0, 0);
}


void EventInfoCircleProgressControl___Initialization_b__30_0(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C93D2C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoCircleProgressControl_Condition___ctor(
        EventInfoCircleProgressControl_Condition_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressControl_ProgressData___ctor(
        EventInfoCircleProgressControl_ProgressData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30C5E & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_4D30C5E = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventInfoCircleProgressControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCircleProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCircleProgressControl___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventInfoCircleProgressControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoCircleProgressControl___c___ctor(EventInfoCircleProgressControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventInfoCircleProgressControl___c___GetEnableEventPointBuffEntity_b__39_0(
        EventInfoCircleProgressControl___c_o *this,
        EventPointBuffEntity_o *a,
        EventPointBuffEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}


bool EventInfoCircleProgressControl___c___GetProgressBarAnimObject_b__36_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0 )
    sub_1C93D2C(this, n);
  return progressData->fields.Point > progressData->fields.OldPoint;
}


bool EventInfoCircleProgressControl___c___GetProgressCompleteAnimObjcet_b__37_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0 )
    sub_1C93D2C(this, n);
  return !progressData->fields.IsOldCompleted && progressData->fields.IsCompleted;
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__0(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v2; // x19
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  struct EventInfoCircleProgressControl_o *v5; // x8

  v2 = this;
  if ( (byte_4D30C60 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D30C60 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer
    || (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                           uiVoicePlayer,
                                                                           2,
                                                                           *(_DWORD *)(*((_QWORD *)this + 23) + 20LL),
                                                                           0),
        (v5 = v2->fields.__4__this) == 0)
    || (method = (const MethodInfo *)this,
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer) == 0) )
  {
LABEL_14:
    sub_1C93D2C(this, method);
  }
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)method, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__1(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressObjectComponent_o *progressCompleteAnimObjcet; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w12
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v7; // x19

  progressCompleteAnimObjcet = this->fields.progressCompleteAnimObjcet;
  if ( !progressCompleteAnimObjcet )
    goto LABEL_5;
  progressData = progressCompleteAnimObjcet->fields.progressData;
  if ( !progressData )
    goto LABEL_5;
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldPoint = progressData->fields.Point;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
  v7 = this;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1C93D2C(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v7->fields.callback, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__2(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *_9__5; // x21
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_IEnumerator_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4D30C61 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__);
    byte_4D30C61 = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__5, (int32_t)_9__5, v5, v6, v7, v8, v9, v10);
  }
  v11 = BasicHelper__DelayCall(0.5, _9__5, 1, 0);
  if ( !_4__this )
    sub_1C93D2C(v11, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(_4__this, v11, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__3(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v2; // x19
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  struct EventInfoCircleProgressControl_o *v5; // x8
  struct EventInfoCircleProgressObjectComponent_o *progressBarAnimObject; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w12

  v2 = this;
  if ( (byte_4D30C5F & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D30C5F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer )
    goto LABEL_17;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                     uiVoicePlayer,
                                                                     1,
                                                                     *(_DWORD *)(*((_QWORD *)this + 23) + 20LL),
                                                                     0);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_17;
  method = (const MethodInfo *)this;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer;
  if ( !this )
    goto LABEL_17;
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)method, 0);
  progressBarAnimObject = v2->fields.progressBarAnimObject;
  if ( !progressBarAnimObject )
    goto LABEL_17;
  progressData = progressBarAnimObject->fields.progressData;
  if ( !progressData )
    goto LABEL_17;
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldPoint = progressData->fields.Point;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_17:
    sub_1C93D2C(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v2->fields.callback, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__4(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_o *_4__this; // x0
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w9
  int v6; // w10
  EventInfoCircleProgressObjectComponent_o *v7; // x11
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x11
  int32_t Level; // w13
  int32_t DispState; // w14

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  circleProgressList = _4__this->fields.circleProgressList;
  _4__this->fields.titleDispState = 1;
  if ( !circleProgressList )
    goto LABEL_9;
  max_length = circleProgressList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = circleProgressList->m_Items[v6];
      if ( !v7 )
        break;
      progressData = v7->fields.progressData;
      if ( !progressData )
        break;
      Level = progressData->fields.Level;
      DispState = progressData->fields.DispState;
      ++v6;
      progressData->fields.OldPoint = progressData->fields.Point;
      progressData->fields.OldLevel = Level;
      progressData->fields.OldDispState = DispState;
      *(_WORD *)&progressData->fields.IsCompleted = 0;
      if ( max_length == v6 )
        goto LABEL_8;
    }
LABEL_9:
    sub_1C93D2C(_4__this, method);
  }
LABEL_8:
  EventInfoCircleProgressControl__SaveAllData(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__5(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v3; // x19
  System_Action_o *_9__6; // x22
  EventInfoCircleProgressControl_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D30C62 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1C93AD4(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__);
    byte_4D30C62 = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
      0);
    v3->fields.__9__6 = _9__6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  EventInfoCircleProgressControl__InsertMuralButton(_4__this, _9__6, v2);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__6(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_o *_4__this; // x0
  struct EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w12

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (extraCircleProgres = _4__this->fields.extraCircleProgres,
        _4__this->fields.extraCircleState = 2,
        !extraCircleProgres)
    || (progressData = extraCircleProgres->fields.progressData) == 0 )
  {
    sub_1C93D2C(_4__this, method);
  }
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldPoint = progressData->fields.Point;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
  EventInfoCircleProgressControl__SaveAllData(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass38_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass38_0___PlayTitleAnimToBackDraw_b__1(
        EventInfoCircleProgressControl___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass38_1___ctor(
        EventInfoCircleProgressControl___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass38_1___PlayTitleAnimToBackDraw_b__0(
        EventInfoCircleProgressControl___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl___c__DisplayClass38_0_o *CS___8__locals1; // x8
  struct EasingObject_o *easingObj; // x9
  float mNow; // s0
  struct EventInfoCircleProgressControl_o *_4__this; // x9
  float v7; // s1
  bool v8; // nf
  float v9; // s0
  float v10; // s8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_7;
  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_7;
  mNow = easingObj->fields.mNow;
  _4__this = CS___8__locals1->fields.__4__this;
  v7 = fminf(mNow, 1.0);
  v8 = mNow < 0.0;
  v9 = 0.0;
  if ( !v8 )
    v9 = v7;
  if ( !_4__this )
LABEL_7:
    sub_1C93D2C(this, method);
  v10 = CS___8__locals1->fields.fromAngle
      + (float)((float)(CS___8__locals1->fields.toAngle - CS___8__locals1->fields.fromAngle) * v9);
  GameObjectExtensions__AddLocalEulerAngleX(_4__this->fields.titleBaseObject, v10 - this->fields.oldAngle, 0);
  this->fields.oldAngle = v10;
}


void EventInfoCircleProgressControl___c__DisplayClass43_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoCircleProgressControl___c__DisplayClass43_0___LoadProgressData_b__0(
        EventInfoCircleProgressControl___c__DisplayClass43_0_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C93D2C(this, 0);
  return n->fields.circleId == this->fields.id;
}


void EventInfoCircleProgressControl___c__DisplayClass51_0___ctor(
        EventInfoCircleProgressControl___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoCircleProgressControl___c__DisplayClass51_0___GetProgressData_b__0(
        EventInfoCircleProgressControl___c__DisplayClass51_0_o *this,
        EventInfoCircleProgressControl_ProgressData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C93D2C(this, 0);
  return n->fields.Id == this->fields.id;
}