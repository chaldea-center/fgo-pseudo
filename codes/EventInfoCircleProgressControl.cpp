void EventInfoCircleProgressControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoCircleProgressControl_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventInfoCircleProgressControl_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5970AA3 & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    sub_2213A60(&StringLiteral_4598/*"CircleProgressData_"*/);
    sub_2213A60(&StringLiteral_4600/*"CircleProgressTitleState_"*/);
    sub_2213A60(&StringLiteral_4599/*"CircleProgressExtraData_"*/);
    byte_5970AA3 = 1;
  }
  v7 = StringLiteral_4600/*"CircleProgressTitleState_"*/;
  EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = (struct System_String_o *)StringLiteral_4600/*"CircleProgressTitleState_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoCircleProgressControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_4598/*"CircleProgressData_"*/;
  static_fields = EventInfoCircleProgressControl_TypeInfo->static_fields;
  static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_4598/*"CircleProgressData_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_4599/*"CircleProgressExtraData_"*/;
  v17 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v17->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = (struct System_String_o *)StringLiteral_4599/*"CircleProgressExtraData_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void EventInfoCircleProgressControl___ctor(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5970AA2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo);
    byte_5970AA2 = 1;
  }
  v3 = System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo;
  this->fields.extraCircleHidePosX = -212.0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
  this->fields.progressDataList = (struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progressDataList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  EventInfoCircleProgressControl_o *v17; // x25
  int32_t v18; // w20
  int32_t v19; // w19
  Il2CppObject *ProgressData; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_object__o *progressDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppObject *v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // [xsp+18h] [xbp-68h]

  v17 = this;
  if ( (byte_5970A9D & 1) == 0 )
  {
    v18 = oldDispState;
    v19 = dispState;
    this = (EventInfoCircleProgressControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__);
    dispState = v19;
    oldDispState = v18;
    byte_5970A9D = 1;
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
    sub_2213CDC(ProgressData, v21);
  }
  size = progressDataList->fields._size;
  v32 = ProgressData;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      progressDataList,
      ProgressData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    progressDataList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v32, v22, v23, v24, v25, v26, v27);
  }
}


void EventInfoCircleProgressControl__Awake(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5970A8B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970A8B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userEventPointMaster,
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
  __int64 v19; // x25
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5970A9E & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl_ProgressData_TypeInfo);
    byte_5970A9E = 1;
  }
  v19 = sub_2213CCC(EventInfoCircleProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0);
  if ( !v19 )
    sub_2213CDC(v20, v21);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 64), (int32_t)ent, v22, v23, v24, v25, v26, v27);
  return (EventInfoCircleProgressControl_ProgressData_o *)v19;
}


void EventInfoCircleProgressControl__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w8
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *v9; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *v16; // x20
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  int32_t v21; // w2
  EventInfoCircleProgressControl_c *v22; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x20
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x20
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v30; // x1
  System_String_o *v31; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // x20
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-44h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+28h] [xbp-38h]

  if ( (byte_5970A97 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970A97 = 1;
  }
  v39 = 0;
  v2 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v38 = 0;
  entity = 0;
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_2213CDC(Master_object, v4);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  v39 = Enumerator;
  if ( !Enumerator )
LABEL_32:
    sub_2213CDC(Enumerator, v8);
  v9 = Enumerator;
  while ( 1 )
  {
    klass = v9->klass;
    v11 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_13;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v13 = sub_224BC3C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v9,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v16 = v39;
    if ( !v39 )
      sub_2213CDC(v14, v15);
    v17 = v39->klass;
    v18 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_21;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_21:
      v20 = sub_224BC3C(v39, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                                                  v16,
                                                                  *(_QWORD *)(v20 + 8));
    if ( Enumerator )
    {
      v21 = (int32_t)Enumerator[1].klass;
      v38 = v21;
      if ( !v6 )
        sub_2213CDC(Enumerator, v8);
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                    v6,
                                                                    &entity,
                                                                    v21,
                                                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
      {
        if ( !entity )
          sub_2213CDC(0, v8);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)EventDetailEntity__IsEventCircleProgress(
                                                                      (EventDetailEntity_o *)entity,
                                                                      0);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          v22 = EventInfoCircleProgressControl_TypeInfo;
          if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v8);
            v22 = EventInfoCircleProgressControl_TypeInfo;
          }
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v22->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
          v24 = System_Int32__ToString((int32_t)&v38, 0);
          v25 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v24, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v25, 0);
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
          v27 = System_Int32__ToString((int32_t)&v38, 0);
          v28 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v27, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v28, 0);
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
          v30 = System_Int32__ToString((int32_t)&v38, 0);
          v31 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v30, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v31, 0);
        }
      }
    }
    v9 = v39;
    if ( !v39 )
      goto LABEL_32;
  }
  v32 = v39;
  if ( v39 )
  {
    v33 = v39->klass;
    v34 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_38;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_38:
      v36 = sub_224BC3C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        int64_t userPoint,
        EventPointBuffEntity_o **nowEventPointBuff,
        const MethodInfo *method)
{
  int v10; // w8
  EventPointBuffMaster_o *Master_object; // x0
  __int64 v12; // x1
  EventInfoCircleProgressControl___c_c *v13; // x8
  System_Collections_Generic_List_object__o *v14; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v17; // x23
  struct EventInfoCircleProgressControl___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5970A92 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventPointBuffEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventPointBuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__);
    sub_2213A60(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_5970A92 = 1;
  }
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v40, 0, sizeof(v40));
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = (EventPointBuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (EventPointBuffMaster_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                              Master_object,
                                              eventId,
                                              groupId,
                                              0);
  v13 = EventInfoCircleProgressControl___c_TypeInfo;
  v14 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( !*(&EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo, v12);
    v13 = EventInfoCircleProgressControl___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__39_0 = (System_Comparison_T__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v17,
      Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__,
      0);
    v18 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    v18->__9__39_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__39_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__39_0, (int32_t)_9__39_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !v14 )
LABEL_20:
    sub_2213CDC(Master_object, v12);
  System_Collections_Generic_List_object___Sort_71849708(
    v14,
    _9__39_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)nowEventPointBuff, 0, v25, v26, v27, v28, v29, v30);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v14,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_2213CDC(v31, v32);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v40.fields._current, userPoint, 0) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)nowEventPointBuff, (int32_t)current, v34, v35, v36, v37, v38, v39);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


EventInfoCircleProgressObjectComponent_o *EventInfoCircleProgressControl__GetProgressBarAnimObject(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v6; // x0
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__36_0; // x20
  Il2CppObject *v9; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5970A8F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
    sub_2213A60(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__);
    sub_2213A60(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_5970A8F = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0 )
    sub_2213CDC(result, method);
  if ( progressData->fields.Point <= progressData->fields.OldPoint )
  {
    circleProgressList = this->fields.circleProgressList;
    v6 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !*(&EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo, method);
      v6 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__36_0 = (System_Func_object__bool__o *)static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, method);
        static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__36_0,
        v9,
        Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__,
        0);
      v10 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      v10->__9__36_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__36_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__36_0, (int32_t)_9__36_0, v11, v12, v13, v14, v15, v16);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__36_0,
                                                         (const MethodInfo_3810A1C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
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
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v9; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5970A90 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
    sub_2213A60(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__);
    sub_2213A60(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_5970A90 = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0 )
    sub_2213CDC(result, method);
  if ( progressData->fields.IsOldCompleted || !progressData->fields.IsCompleted )
  {
    circleProgressList = this->fields.circleProgressList;
    v6 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !*(&EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo, method);
      v6 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__37_0 = (System_Func_object__bool__o *)static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, method);
        static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__37_0,
        v9,
        Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__,
        0);
      v10 = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      v10->__9__37_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__37_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__37_0, (int32_t)_9__37_0, v11, v12, v13, v14, v15, v16);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__37_0,
                                                         (const MethodInfo_3810A1C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
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
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x0
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *v9; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_5970A9C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
    sub_2213A60(&System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__);
    sub_2213A60(&EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo);
    byte_5970A9C = 1;
  }
  v5 = sub_2213CCC(EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  progressDataList = this->fields.progressDataList;
  *(_DWORD *)(v5 + 16) = id;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)progressDataList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___) )
  {
    v9 = this->fields.progressDataList;
    v10 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo);
    System_Predicate_object____ctor(
      v10,
      (Il2CppObject *)v5,
      Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__,
      0);
    if ( v9 )
      return (EventInfoCircleProgressControl_ProgressData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)v9,
                                                                (System_Predicate_T__o *)v10,
                                                                (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
LABEL_8:
    sub_2213CDC(v6, v7);
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


// local variable allocation has failed, the output may be wrong!
int64_t EventInfoCircleProgressControl__GetUserEventPoint(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UserEventPointMaster_o *userEventPointMaster; // x21
  NetworkManager_c *v8; // x0

  if ( (byte_5970A93 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970A93 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0);
}


bool EventInfoCircleProgressControl__HasSaveData(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v4; // x1
  EventInfoCircleProgressControl_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  EventInfoCircleProgressControl_c *v10; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  EventInfoCircleProgressControl_c *v15; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x19
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_5970A98 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    byte_5970A98 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  eventId = 0;
  if ( !eventUiEntity
    || (method = (const MethodInfo *)(unsigned int)eventUiEntity->fields.eventId,
        this = (EventInfoCircleProgressControl_o *)v2->fields.uiVoicePlayer,
        eventId = eventUiEntity->fields.eventId,
        !this) )
  {
    sub_2213CDC(this, method);
  }
  if ( !EventInfoUIVoicePlayer__HasSaveData((EventInfoUIVoicePlayer_o *)this, (int32_t)method, 0) )
    return 0;
  v5 = EventInfoCircleProgressControl_TypeInfo;
  if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v4);
    v5 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v5->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v7 = System_Int32__ToString((int32_t)&eventId, 0);
  v8 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0);
  if ( !UnityEngine_PlayerPrefs__HasKey(v8, 0) )
    return 0;
  v10 = EventInfoCircleProgressControl_TypeInfo;
  if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v9);
    v10 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v10->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v12 = System_Int32__ToString((int32_t)&eventId, 0);
  v13 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v12, 0);
  if ( UnityEngine_PlayerPrefs__HasKey(v13, 0) )
  {
    v15 = EventInfoCircleProgressControl_TypeInfo;
    if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v14);
      v15 = EventInfoCircleProgressControl_TypeInfo;
    }
    SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v15->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
    v17 = System_Int32__ToString((int32_t)&eventId, 0);
    v18 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v17, 0);
    return UnityEngine_PlayerPrefs__HasKey(v18, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v11; // x22
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  __int64 v13; // x1
  struct EventUiEntity_o *v14; // x8

  if ( (byte_5970A8C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl__Initialization_b__30_0__);
    byte_5970A8C = 1;
  }
  if ( entity )
  {
    this->fields.eventUiEntity = entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
      (int32_t)entity,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoCircleProgressControl__Initialization_b__30_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v11, 0);
    v14 = this->fields.eventUiEntity;
    if ( !v14 || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0 )
      sub_2213CDC(uiVoicePlayer, v13);
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
  __int64 v9; // x1
  Il2CppObject *Component_object; // x21
  __int64 v11; // x1
  Il2CppObject *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_IEnumerator_o *v19; // x0

  if ( (byte_5970AA1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9582/*"MuralButton_in"*/);
    byte_5970AA1 = 1;
  }
  muralButtonObject = (UnityEngine_Object_o *)this->fields.muralButtonObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction);
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
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_15:
    ActionExtensions__Call(endAction, 0);
    return;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          muralButton,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  muralButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
  if ( ((unsigned __int8)muralButton & 1) != 0 )
  {
    v19 = BasicHelper__DelayCall(1.133, endAction, 1, 0);
    muralButton = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v19,
                                                0);
  }
  else
  {
    if ( !v12 )
      goto LABEL_25;
    v12[2].monitor = endAction;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2].monitor, (int32_t)endAction, v13, v14, v15, v16, v17, v18);
  }
  if ( !Component_object )
LABEL_25:
    sub_2213CDC(muralButton, v6);
  UnityEngine_Animation__Play_83078544(
    (UnityEngine_Animation_o *)Component_object,
    (System_String_o *)StringLiteral_9582/*"MuralButton_in"*/,
    0);
}


bool EventInfoCircleProgressControl__IsBackDrawState(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventInfoCircleProgressControl_Condition_o *titleReverseCondition; // x8
  int64_t CondValue; // x21
  int32_t CondKind; // w19
  int32_t CondId; // w20

  v2 = this;
  if ( (byte_5970A9F & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_2213A60(&CondType_TypeInfo);
    byte_5970A9F = 1;
  }
  titleReverseCondition = v2->fields.titleReverseCondition;
  if ( !titleReverseCondition )
    sub_2213CDC(this, method);
  CondValue = titleReverseCondition->fields.CondValue;
  CondKind = titleReverseCondition->fields.CondKind;
  CondId = titleReverseCondition->fields.CondId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0, 0);
}


bool EventInfoCircleProgressControl__IsExtraCircleDisp(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_o *v2; // x19
  struct EventInfoCircleProgressControl_Condition_o *extraCircleOpenCondition; // x8
  int64_t CondValue; // x21
  int32_t CondKind; // w19
  int32_t CondId; // w20

  v2 = this;
  if ( (byte_5970AA0 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_2213A60(&CondType_TypeInfo);
    byte_5970AA0 = 1;
  }
  extraCircleOpenCondition = v2->fields.extraCircleOpenCondition;
  if ( !extraCircleOpenCondition )
    sub_2213CDC(this, method);
  CondValue = extraCircleOpenCondition->fields.CondValue;
  CondKind = extraCircleOpenCondition->fields.CondKind;
  CondId = extraCircleOpenCondition->fields.CondId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
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
  __int64 v7; // x1
  UnityEngine_Object_o *ProgressCompleteAnimObjcet; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_5970A8D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A8D = 1;
  }
  if ( type != 1 )
    return 0;
  ProgressBarAnimObject = (UnityEngine_Object_o *)EventInfoCircleProgressControl__GetProgressBarAnimObject(
                                                    this,
                                                    *(const MethodInfo **)&type);
  ProgressCompleteAnimObjcet = (UnityEngine_Object_o *)EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
                                                         this,
                                                         v6);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(ProgressBarAnimObject, 0, 0) )
    return 1;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  return UnityEngine_Object__op_Inequality(ProgressCompleteAnimObjcet, 0, 0)
      || !this->fields.titleDispState && EventInfoCircleProgressControl__IsBackDrawState(this, v10)
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
  bool IsBackDrawState; // w24
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
  int32_t v33; // w1
  const MethodInfo *v34; // x5
  EventInfoCircleProgressControl_o *v35; // x23
  EventInfoCircleProgressControl_o *v36; // x29
  int32_t v37; // w26
  int32_t v38; // w25
  System_Object_array *v39; // x27
  System_Func_object__bool__o *v40; // x28
  __int64 v41; // x1
  Il2CppObject *object; // x28
  const MethodInfo *v43; // x2
  int32_t v44; // w27
  int32_t v45; // w24
  char v46; // w28
  bool isOldCompleted; // w8
  bool isCompleted; // w9
  const MethodInfo *v49; // [xsp+18h] [xbp-98h]
  EventInfoCircleProgressControl_o *v50; // [xsp+28h] [xbp-88h]
  EventInfoCircleProgressControl_o *v51; // [xsp+30h] [xbp-80h]
  EventPointBuffEntity_o *ent; // [xsp+38h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+40h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_5970A95 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    sub_2213A60(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__);
    sub_2213A60(&EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo);
    this = (EventInfoCircleProgressControl_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970A95 = 1;
  }
  progressDataList = v3->fields.progressDataList;
  ent = 0;
  nowEventPointBuff = 0;
  if ( !progressDataList )
    goto LABEL_58;
  size = progressDataList->fields._size;
  v6 = progressDataList->fields._version + 1;
  progressDataList->fields._size = 0;
  progressDataList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)progressDataList->fields._items, 0, size, 0);
  v7 = EventInfoCircleProgressControl_TypeInfo;
  if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v7 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v7->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v9 = System_Int32__ToString((int32_t)&eventIda, 0);
  v10 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v9, 0);
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
            v49);
          max_length = circleProgressList->max_length;
          if ( (int)++v15 >= max_length )
            return;
        }
        goto LABEL_59;
      }
      return;
    }
LABEL_58:
    sub_2213CDC(this, *(_QWORD *)&eventId);
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
    v50 = v3;
    v51 = this;
    while ( v26 < (unsigned int)m_CancellationTokenSource )
    {
      v27 = (System_String_o *)*((_QWORD *)&this->fields.datas + v26);
      v28 = sub_2213CCC(EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo);
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
      v33 = eventIda;
      *(_DWORD *)(v28 + 16) = v32;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(v3, v33, v32, v29);
      v35 = this;
      if ( v30 < 2 )
      {
        v36 = 0;
      }
      else
      {
        if ( ((__int64)v31->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int64__Parse(*(System_String_o **)&v31->fields.playType, 0);
        v36 = this;
      }
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        this,
        eventIda,
        *(_DWORD *)(v28 + 16),
        (int64_t)v35,
        &ent,
        v34);
      v37 = ent ? ent->fields.lv : 1;
      if ( v30 < 3 )
      {
        v38 = 0;
      }
      else
      {
        if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 2 )
          break;
        v38 = System_Int32__Parse((System_String_o *)v31->fields.assetData, 0);
      }
      v39 = (System_Object_array *)v3->fields.circleProgressList;
      v40 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v40,
        (Il2CppObject *)v28,
        Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__,
        0);
      object = BasicHelper__Find_object_(
                 v39,
                 (System_Func_T__bool__o *)v40,
                 (const MethodInfo_3810A1C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
      this = (EventInfoCircleProgressControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !object )
          goto LABEL_58;
        this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                     (EventInfoCircleProgressObjectComponent_o *)object,
                                                     *(const MethodInfo **)&eventId);
        v44 = (unsigned __int8)this & 1;
      }
      else
      {
        v44 = 0;
      }
      if ( v30 < 4 )
      {
        v45 = 0;
      }
      else
      {
        if ( ((__int64)v31->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)v31->fields.assetData2, 0);
        v45 = (int)this;
      }
      if ( !object )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsCompletedState(
                                                   (EventInfoCircleProgressObjectComponent_o *)object,
                                                   v44,
                                                   v43);
      v46 = (char)this;
      if ( v30 >= 5 )
      {
        if ( LODWORD(v31->fields.m_CancellationTokenSource) <= 4 )
          break;
        isOldCompleted = System_Int32__Parse((System_String_o *)v31->fields.assetDataList, 0) == 1;
      }
      else
      {
        isOldCompleted = 0;
      }
      isCompleted = v46 & 1;
      v3 = v50;
      EventInfoCircleProgressControl__AddProgressData(
        v50,
        *(_DWORD *)(v28 + 16),
        (int64_t)v35,
        (int64_t)v36,
        v37,
        v38,
        v44,
        v45,
        isCompleted,
        isOldCompleted,
        ent,
        v49);
      this = v51;
      ++v26;
      m_CancellationTokenSource = (int)v51->fields.m_CancellationTokenSource;
      if ( v26 >= m_CancellationTokenSource )
        return;
    }
LABEL_59:
    sub_2213CE4(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressControl__LoadProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_c *v4; // x0
  int v5; // w8
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x3
  struct EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x8
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v16; // x5
  int32_t v17; // w22
  const MethodInfo *v18; // x3
  int v19; // w29
  void *v20; // x20
  int32_t v21; // w22
  const MethodInfo *v22; // x3
  int64_t IsBackDrawState; // x0
  const MethodInfo *v24; // x5
  int64_t v25; // x21
  int64_t v26; // x23
  const MethodInfo *v27; // x2
  char v28; // w23
  _BOOL8 IsCompletedState; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x1
  int32_t v38; // w8
  int32_t lv; // w24
  int32_t v40; // w25
  const MethodInfo *v41; // x2
  char v42; // w26
  int32_t v43; // w27
  char v44; // w28
  bool isOldCompleted; // w8
  struct EventInfoCircleProgressControl_ProgressData_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x1
  int32_t v54; // w0
  int32_t *p_extraCircleState; // x20
  const MethodInfo *v56; // [xsp+18h] [xbp-88h]
  EventPointBuffEntity_o *ent; // [xsp+28h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+30h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_5970A96 & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970A96 = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  v5 = *(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1);
  ent = 0;
  nowEventPointBuff = 0;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v7 = System_Int32__ToString((int32_t)&eventIda, 0);
  v8 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v7, 0);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0);
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
                                                             v12);
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        UserEventPoint,
        eventIda,
        circleId,
        (int64_t)UserEventPoint,
        &nowEventPointBuff,
        v16);
      v17 = nowEventPointBuff ? nowEventPointBuff->fields.lv : 1;
      IsNullOrEmpty = this->fields.extraCircleProgres;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (void *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                  (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                                  v11);
        if ( this->fields.extraCircleProgres )
        {
          v28 = (char)IsNullOrEmpty;
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                               this->fields.extraCircleProgres,
                               (unsigned __int8)IsNullOrEmpty & 1,
                               v27);
          ProgressData = EventInfoCircleProgressControl__CreateProgressData(
                           (EventInfoCircleProgressControl_o *)IsCompletedState,
                           circleId,
                           (int64_t)UserEventPoint,
                           (int64_t)UserEventPoint,
                           v17,
                           v17,
                           v28 & 1,
                           v28 & 1,
                           IsCompletedState,
                           IsCompletedState,
                           nowEventPointBuff,
                           v56);
          this->fields.progressExtraData = ProgressData;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.progressExtraData,
            (int32_t)ProgressData,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v37) )
            v38 = 2;
          else
            v38 = 0;
          this->fields.extraCircleState = v38;
          return;
        }
      }
    }
LABEL_49:
    sub_2213CDC(IsNullOrEmpty, v11);
  }
  if ( !String )
    goto LABEL_49;
  IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v19 = *((_DWORD *)IsNullOrEmpty + 6);
  v20 = IsNullOrEmpty;
  if ( v19 <= 0 )
  {
    IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, 0, v18);
    v25 = IsBackDrawState;
    v21 = 0;
    goto LABEL_23;
  }
  v21 = System_Int32__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0);
  IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v21, v22);
  v25 = IsBackDrawState;
  if ( v19 == 1 )
  {
LABEL_23:
    v26 = 0;
    goto LABEL_24;
  }
  if ( (*((_DWORD *)v20 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_50;
  IsBackDrawState = System_Int64__Parse(*((System_String_o **)v20 + 5), 0);
  v26 = IsBackDrawState;
LABEL_24:
  EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
    (EventInfoCircleProgressControl_o *)IsBackDrawState,
    eventIda,
    v21,
    v25,
    &ent,
    v24);
  if ( ent )
    lv = ent->fields.lv;
  else
    lv = 1;
  if ( v19 < 3 )
  {
    v40 = 0;
  }
  else
  {
    if ( *((_DWORD *)v20 + 6) <= 2u )
      goto LABEL_50;
    v40 = System_Int32__Parse(*((System_String_o **)v20 + 6), 0);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v11);
  v42 = IsBackDrawState;
  if ( v19 < 4 )
  {
    v43 = 1;
  }
  else
  {
    if ( (*((_DWORD *)v20 + 6) & 0xFFFFFFFC) == 0 )
      goto LABEL_50;
    v43 = System_Int32__Parse(*((System_String_o **)v20 + 7), 0);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v42 & 1,
                      v41);
  v44 = IsBackDrawState;
  if ( v19 >= 5 )
  {
    if ( *((_DWORD *)v20 + 6) <= 4u )
      goto LABEL_50;
    IsBackDrawState = System_Int32__Parse(*((System_String_o **)v20 + 8), 0);
    isOldCompleted = (_DWORD)IsBackDrawState == 1;
  }
  else
  {
    isOldCompleted = 0;
  }
  v46 = EventInfoCircleProgressControl__CreateProgressData(
          (EventInfoCircleProgressControl_o *)IsBackDrawState,
          v21,
          v25,
          v26,
          lv,
          v40,
          v42 & 1,
          v43,
          v44 & 1,
          isOldCompleted,
          ent,
          v56);
  this->fields.progressExtraData = v46;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressExtraData,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( v19 > 5 )
  {
    if ( *((_DWORD *)v20 + 6) > 5u )
    {
      v54 = System_Int32__Parse(*((System_String_o **)v20 + 9), 0);
      this->fields.extraCircleState = v54;
      p_extraCircleState = &this->fields.extraCircleState;
      if ( v54 )
        return;
      goto LABEL_46;
    }
LABEL_50:
    sub_2213CE4(IsBackDrawState);
  }
  this->fields.extraCircleState = 0;
  p_extraCircleState = &this->fields.extraCircleState;
LABEL_46:
  if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v53) )
    *p_extraCircleState = 1;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_5970A94 & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970A94 = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&v13, 0);
  v7 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0);
  String = UnityEngine_PlayerPrefs__GetString(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( System_String__IsNullOrEmpty(String, 0) )
  {
    IsBackDrawState = EventInfoCircleProgressControl__IsBackDrawState(this, v9);
    if ( !this )
      sub_2213CDC(IsBackDrawState, v11);
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

  if ( (byte_5970A8A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A8A = 1;
  }
  uiVoicePlayer = (UnityEngine_Object_o *)this->fields.uiVoicePlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(uiVoicePlayer, 0, 0) )
  {
    v5 = this->fields.uiVoicePlayer;
    if ( !v5 )
      sub_2213CDC(0, v4);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressBarAnimObject; // x0
  UnityEngine_GameObject_o **v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressCompleteAnimObjcet; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  UnityEngine_Object_o *v40; // x24
  UnityEngine_GameObject_o *v41; // x8
  EventInfoCircleProgressDrawComponent_o **p_fields; // x8
  UnityEngine_Object_o *v43; // x22
  const MethodInfo *v44; // x1
  System_Action_o *v45; // x21
  System_Collections_IEnumerator_o *v46; // x0
  EventInfoCircleProgressObjectComponent_o *v47; // x19
  System_Action_o *v48; // x21
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x21
  Il2CppObject *Component_object; // x20
  __int64 v52; // x1
  Il2CppObject *v53; // x22
  const MethodInfo *v54; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  il2cpp_array_size_t max_length; // x20
  __int64 v57; // x22
  struct EventInfoCircleProgressObjectComponent_array *v58; // x8
  EventInfoCircleProgressDrawComponent_o *v59; // x19
  System_Action_o *v60; // x21
  const MethodInfo *v61; // x2
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x19
  System_Action_o *v63; // x21
  const MethodInfo *v64; // x2
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7

  if ( (byte_5970A8E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__);
    sub_2213A60(&EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo);
    sub_2213A60(&StringLiteral_17924/*"bit_circlemeter_rotate"*/);
    byte_5970A8E = 1;
  }
  v7 = sub_2213CCC(EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_46;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( type != 1 )
    goto LABEL_42;
  ProgressBarAnimObject = EventInfoCircleProgressControl__GetProgressBarAnimObject(this, v22);
  *(_QWORD *)(v7 + 24) = ProgressBarAnimObject;
  v24 = (UnityEngine_GameObject_o **)(v7 + 24);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v7 + 24),
    (int32_t)ProgressBarAnimObject,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  ProgressCompleteAnimObjcet = EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(this, v31);
  *(_QWORD *)(v7 + 40) = ProgressCompleteAnimObjcet;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v7 + 40),
    (int32_t)ProgressCompleteAnimObjcet,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v40 = *(UnityEngine_Object_o **)(v7 + 24);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
  {
    IsBackDrawState = *v24;
    if ( !*v24 )
      goto LABEL_46;
    IsBackDrawState = (UnityEngine_GameObject_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                    (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
                                                    v9);
    v41 = *v24;
    if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
    {
      if ( !v41 )
        goto LABEL_46;
      p_fields = (EventInfoCircleProgressDrawComponent_o **)&v41[2];
    }
    else
    {
      if ( !v41 )
        goto LABEL_46;
      p_fields = (EventInfoCircleProgressDrawComponent_o **)&v41[1].fields;
    }
    v59 = *p_fields;
    v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v60,
      (Il2CppObject *)v7,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__,
      0);
    if ( v59 )
    {
      EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(v59, v60, v61);
      return;
    }
LABEL_46:
    sub_2213CDC(IsBackDrawState, v9);
  }
  v43 = *(UnityEngine_Object_o **)(v7 + 40);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
  {
    v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v7,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__,
      0);
    v46 = BasicHelper__DelayCall(1.0, v45, 1, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v46, 0);
    v47 = *(EventInfoCircleProgressObjectComponent_o **)(v7 + 40);
    v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v7,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__,
      0);
    if ( v47 )
    {
      EventInfoCircleProgressObjectComponent__PlayCompleteAnim(v47, v48, v49);
      return;
    }
    goto LABEL_46;
  }
  if ( this->fields.titleDispState || !EventInfoCircleProgressControl__IsBackDrawState(this, v44) )
  {
    if ( this->fields.extraCircleState == 1 )
    {
      extraCircleProgres = this->fields.extraCircleProgres;
      v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v63,
        (Il2CppObject *)v7,
        Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__,
        0);
      if ( !extraCircleProgres )
        goto LABEL_46;
      EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(extraCircleProgres, v63, v64);
      return;
    }
LABEL_42:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
    return;
  }
  v50 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v7,
    Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__,
    0);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsBackDrawState )
    goto LABEL_46;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       IsBackDrawState,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !IsBackDrawState )
    goto LABEL_46;
  v53 = UnityEngine_GameObject__GetComponent_object_(
          IsBackDrawState,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0,
                                                  0);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
    goto LABEL_27;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v53, 0, 0);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
  {
LABEL_27:
    circleProgressList = this->fields.circleProgressList;
    if ( circleProgressList )
    {
      max_length = circleProgressList->max_length;
      if ( (int)max_length < 1 )
      {
LABEL_34:
        EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(this, v50, v54);
        return;
      }
      v57 = 0;
      while ( 1 )
      {
        v58 = this->fields.circleProgressList;
        if ( !v58 )
          break;
        if ( (unsigned int)v57 >= LODWORD(v58->max_length) )
          sub_2213CE4(IsBackDrawState);
        IsBackDrawState = (UnityEngine_GameObject_o *)v58->m_Items[v57];
        if ( !IsBackDrawState )
          break;
        EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
          (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
          0,
          v54);
        if ( (_DWORD)max_length == (_DWORD)++v57 )
          goto LABEL_34;
      }
    }
    goto LABEL_46;
  }
  if ( !Component_object )
    goto LABEL_46;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  if ( !v53 )
    goto LABEL_46;
  v53[2].monitor = v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53[2].monitor, (int32_t)v50, v65, v66, v67, v68, v69, v70);
  UnityEngine_Animation__Play_83078544(
    (UnityEngine_Animation_o *)Component_object,
    (System_String_o *)StringLiteral_17924/*"bit_circlemeter_rotate"*/,
    0);
}


void EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *titleBaseObject; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalEulerAngleX; // s0
  EventInfoCircleProgressControl___c__DisplayClass38_1_c *v22; // x0
  __int64 v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x22
  UnityEngine_GameObject_o *v31; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  EasingObject_o *v39; // x19
  System_Action_o *v40; // x21
  Il2CppObject *v41; // x22
  System_Action_o *v42; // x20
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5970A91 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__);
    sub_2213A60(&EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__);
    sub_2213A60(&EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo);
    byte_5970A91 = 1;
  }
  v5 = sub_2213CCC(EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  titleBaseObject = this->fields.titleBaseObject;
  if ( !titleBaseObject )
    goto LABEL_10;
  gameObject = UnityEngine_GameObject__get_gameObject(titleBaseObject, 0);
  LocalEulerAngleX = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0);
  v22 = EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo;
  *(float *)(v5 + 16) = LocalEulerAngleX;
  *(_DWORD *)(v5 + 20) = 1151172608;
  v23 = sub_2213CCC(v22);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    goto LABEL_10;
  *(_QWORD *)(v23 + 32) = v5;
  v30 = v23 + 32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), v5, v24, v25, v26, v27, v28, v29);
  if ( !*(_QWORD *)(v23 + 32) )
    goto LABEL_10;
  v43.fields.y = 0.0;
  v43.fields.z = 0.0;
  v43.fields.x = *(float *)(*(_QWORD *)(v23 + 32) + 16LL);
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, v43, 0);
  if ( !*(_QWORD *)v30 )
    goto LABEL_10;
  *(_DWORD *)(v23 + 24) = *(_DWORD *)(*(_QWORD *)v30 + 16LL);
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v31,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v23 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 16), (int32_t)Component_object, v33, v34, v35, v36, v37, v38);
  v39 = *(EasingObject_o **)(v23 + 16);
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v23,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__,
    0);
  v41 = *(Il2CppObject **)(v23 + 32);
  v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    v41,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__,
    0);
  if ( !v39 )
LABEL_10:
    sub_2213CDC(titleBaseObject, v7);
  EasingObject__Play(v39, 0.5, v40, v42, 0.0, 0, 0);
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
    sub_2213CDC(this, method);
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
  if ( (byte_5970A9A & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    this = (EventInfoCircleProgressControl_o *)sub_2213A60(&StringLiteral_869/*","*/);
    byte_5970A9A = 1;
  }
  progressDataList = v3->fields.progressDataList;
  m_CachedPtr = 0;
  animType = 0;
  datas = 0;
  v17 = 0;
  if ( !progressDataList )
    goto LABEL_25;
  size = progressDataList->fields._size;
  v6 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
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
        System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)StringLiteral_869/*","*/, 0);
      }
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoCircleProgressControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0);
      if ( !v6 )
        break;
      System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)this, 0);
      System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)StringLiteral_1533/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      datas = this->fields.datas;
      v8 = System_Int64__ToString((int64_t)&datas, 0);
      System_Text_StringBuilder__Append_75735064(v6, v8, 0);
      System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)StringLiteral_1533/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      animType = this->fields.animType;
      v9 = System_Int64__ToString((int64_t)&animType, 0);
      System_Text_StringBuilder__Append_75735064(v6, v9, 0);
      System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)StringLiteral_1533/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      HIDWORD(v17) = HIDWORD(this->fields.assetData);
      v10 = System_Int32__ToString((int32_t)&v17 + 4, 0);
      System_Text_StringBuilder__Append_75735064(v6, v10, 0);
      System_Text_StringBuilder__Append_75735064(v6, (System_String_o *)StringLiteral_1533/*":"*/, 0);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v7,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      LODWORD(v17) = BYTE1(this->fields.assetData2);
      v11 = System_Int32__ToString((int32_t)&v17, 0);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_75735064(v6, v11, 0);
      if ( size == ++v7 )
        goto LABEL_21;
    }
LABEL_25:
    sub_2213CDC(this, *(_QWORD *)&eventId);
  }
LABEL_21:
  v12 = EventInfoCircleProgressControl_TypeInfo;
  if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v12 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v12->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v14 = System_Int32__ToString((int32_t)&v21, 0);
  this = (EventInfoCircleProgressControl_o *)System_String__Concat_75651716(
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
  __int64 v17; // x1
  EventInfoCircleProgressControl_c *v18; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  int32_t extraCircleState; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v24; // [xsp+8h] [xbp-48h] BYREF
  __int64 OldLevel; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v28; // [xsp+2Ch] [xbp-24h] BYREF

  v28 = eventId;
  if ( (byte_5970A9B & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5970A9B = 1;
  }
  Id = 0;
  OldLevel = 0;
  OldPoint = 0;
  v24 = 0;
  extraCircleState = 0;
  v4 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v4, 0);
  progressExtraData = this->fields.progressExtraData;
  if ( !progressExtraData )
    goto LABEL_12;
  Id = progressExtraData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0);
  if ( !v4 )
    goto LABEL_12;
  System_Text_StringBuilder__Append_75735064(v4, appended, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v8 = this->fields.progressExtraData;
  if ( !v8 )
    goto LABEL_12;
  OldPoint = v8->fields.OldPoint;
  v9 = System_Int64__ToString((int64_t)&OldPoint, 0);
  System_Text_StringBuilder__Append_75735064(v4, v9, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v10 = this->fields.progressExtraData;
  if ( !v10 )
    goto LABEL_12;
  OldLevel = v10->fields.OldLevel;
  v11 = System_Int64__ToString((int64_t)&OldLevel, 0);
  System_Text_StringBuilder__Append_75735064(v4, v11, 0);
  appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  v12 = this->fields.progressExtraData;
  if ( !v12
    || (HIDWORD(v24) = v12->fields.OldDispState,
        v13 = System_Int32__ToString((int32_t)&v24 + 4, 0),
        System_Text_StringBuilder__Append_75735064(v4, v13, 0),
        appended = (System_String_o *)System_Text_StringBuilder__Append_75735064(
                                        v4,
                                        (System_String_o *)StringLiteral_1533/*":"*/,
                                        0),
        (v14 = this->fields.progressExtraData) == 0) )
  {
LABEL_12:
    sub_2213CDC(appended, v6);
  }
  LODWORD(v24) = v14->fields.IsOldCompleted;
  v15 = System_Int32__ToString((int32_t)&v24, 0);
  System_Text_StringBuilder__Append_75735064(v4, v15, 0);
  System_Text_StringBuilder__Append_75735064(v4, (System_String_o *)StringLiteral_1533/*":"*/, 0);
  extraCircleState = this->fields.extraCircleState;
  v16 = System_Int32__ToString((int32_t)&extraCircleState, 0);
  System_Text_StringBuilder__Append_75735064(v4, v16, 0);
  v18 = EventInfoCircleProgressControl_TypeInfo;
  if ( !*(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v17);
    v18 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v18->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v20 = System_Int32__ToString((int32_t)&v28, 0);
  v21 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v20, 0);
  v22 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v4->klass->vtable._3_ToString.methodPtr)(
                             v4,
                             v4->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v21, v22, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressControl__SaveTitleState(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoCircleProgressControl_c *v4; // x0
  int v5; // w9
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x19
  System_String_o *v9; // x0
  int32_t titleDispState; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = eventId;
  if ( (byte_5970A99 & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl_TypeInfo);
    byte_5970A99 = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  v5 = *(&EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished + 1);
  titleDispState = this->fields.titleDispState;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v7 = System_Int32__ToString((int32_t)&v11, 0);
  v8 = System_String__Concat_75651716(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0);
  v9 = System_Int32__ToString((int32_t)&titleDispState, 0);
  UnityEngine_PlayerPrefs__SetString(v8, v9, 0);
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


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressControl__SetupDisp(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoCircleProgressControl_o *v4; // x19
  float v5; // s0 OVERLAPPED
  int v6; // s2
  int v7; // s1
  const MethodInfo *v8; // x2
  struct EventUiEntity_o *v9; // x8
  const MethodInfo *v10; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v13; // x22
  struct EventInfoCircleProgressObjectComponent_array *v14; // x8
  Il2CppClass **v15; // x8
  EventInfoCircleProgressObjectComponent_o *v16; // x20
  const MethodInfo *v17; // x2
  EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  const MethodInfo *v19; // x3
  struct EventUiEntity_o *v20; // x8
  UnityEngine_Component_o *extraCircleProgres; // x20
  int32_t extraCircleState; // w21
  float extraCircleHidePosX; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_18;
  v4 = this;
  EventInfoCircleProgressControl__LoadTitleState(this, eventUiEntity->fields.eventId, v2);
  v5 = 0.0;
  v6 = 0;
  if ( v4->fields.titleDispState == 1 )
    v5 = 180.0;
  v7 = 0;
  GameObjectExtensions__SetLocalEulerAngle(v4->fields.titleBaseObject, *(UnityEngine_Vector3_o *)&v5, 0);
  v9 = v4->fields.eventUiEntity;
  if ( !v9 )
    goto LABEL_18;
  EventInfoCircleProgressControl__LoadProgressData(v4, v9->fields.eventId, v8);
  circleProgressList = v4->fields.circleProgressList;
  if ( !circleProgressList )
    goto LABEL_18;
  max_length = circleProgressList->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = v4->fields.circleProgressList;
      if ( !v14 )
        break;
      if ( (unsigned int)v13 >= LODWORD(v14->max_length) )
        sub_2213CE4(this);
      v15 = &v14->obj.klass + v13;
      v16 = (EventInfoCircleProgressObjectComponent_o *)v15[4];
      if ( !v16 )
        break;
      EventInfoCircleProgressObjectComponent__SetActive((EventInfoCircleProgressObjectComponent_o *)v15[4], 1, v10);
      ProgressData = EventInfoCircleProgressControl__GetProgressData(v4, v16->fields.circleId, v17);
      EventInfoCircleProgressObjectComponent__Setup(v16, v4, ProgressData, v19);
      if ( (_DWORD)max_length == (_DWORD)++v13 )
        goto LABEL_12;
    }
LABEL_18:
    sub_2213CDC(this, method);
  }
LABEL_12:
  v20 = v4->fields.eventUiEntity;
  if ( !v20 )
    goto LABEL_18;
  EventInfoCircleProgressControl__LoadProgressExtraData(v4, v20->fields.eventId, v10);
  extraCircleProgres = (UnityEngine_Component_o *)v4->fields.extraCircleProgres;
  if ( !extraCircleProgres )
    goto LABEL_18;
  extraCircleState = v4->fields.extraCircleState;
  this = (EventInfoCircleProgressControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v4->fields.extraCircleProgres,
                                               0);
  if ( !this )
    goto LABEL_18;
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
    v25);
  EventInfoCircleProgressControl__SetupMuralButton(v4, v26);
}


void EventInfoCircleProgressControl__SetupMuralButton(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsTargetScene; // w8
  UnityEngine_Component_o *muralButton; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct EventUiEntity_o *eventUiEntity; // x8

  IsTargetScene = EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0);
  muralButton = (UnityEngine_Component_o *)this->fields.muralButton;
  if ( IsTargetScene )
  {
    if ( !muralButton )
      goto LABEL_14;
    muralButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(muralButton, 0);
    if ( !muralButton )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( !muralButton )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(muralButton, 0);
  this->fields.muralButtonObject = gameObject;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.muralButtonObject,
    (int32_t)gameObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  muralButton = (UnityEngine_Component_o *)this->fields.muralButtonObject;
  if ( this->fields.extraCircleState != 2 )
  {
    if ( !muralButton )
      goto LABEL_14;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muralButton, 0, 0);
    return;
  }
  if ( !muralButton
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muralButton, 1, 0),
        (muralButton = (UnityEngine_Component_o *)this->fields.muralButton) == 0)
    || (muralButton = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, struct EventUiEntity_o *, void *))muralButton->klass[1]._1.image)(
                                                   muralButton,
                                                   this->fields.eventUiEntity,
                                                   muralButton->klass[1]._1.gc_desc),
        (eventUiEntity = this->fields.eventUiEntity) == 0)
    || (muralButton = (UnityEngine_Component_o *)this->fields.muralButton) == 0 )
  {
LABEL_14:
    sub_2213CDC(muralButton, v3);
  }
  EventInfoMuralComponent__InitDisplay((EventInfoMuralComponent_o *)muralButton, eventUiEntity->fields.eventId, this, 0);
}


void EventInfoCircleProgressControl___Initialization_b__30_0(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_2213CDC(this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970AA4 & 1) == 0 )
  {
    sub_2213A60(&EventInfoCircleProgressControl___c_TypeInfo);
    byte_5970AA4 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoCircleProgressControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoCircleProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCircleProgressControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoCircleProgressControl___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}


bool EventInfoCircleProgressControl___c___GetProgressBarAnimObject_b__36_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0 )
    sub_2213CDC(this, n);
  return progressData->fields.Point > progressData->fields.OldPoint;
}


bool EventInfoCircleProgressControl___c___GetProgressCompleteAnimObjcet_b__37_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0 )
    sub_2213CDC(this, n);
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
  if ( (byte_5970AA6 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970AA6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer
    || (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                           uiVoicePlayer,
                                                                           2,
                                                                           HIDWORD(this[2].fields.__9__5->fields.method_ptr),
                                                                           0),
        (v5 = v2->fields.__4__this) == 0)
    || (method = (const MethodInfo *)this,
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, method);
  }
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)method, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__1(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressObjectComponent_o *progressCompleteAnimObjcet; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v4; // x19
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w9

  progressCompleteAnimObjcet = this->fields.progressCompleteAnimObjcet;
  if ( !progressCompleteAnimObjcet )
    goto LABEL_5;
  progressData = progressCompleteAnimObjcet->fields.progressData;
  if ( !progressData )
    goto LABEL_5;
  v4 = this;
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)this->fields.__4__this;
  progressData->fields.OldPoint = progressData->fields.Point;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
  if ( !this )
LABEL_5:
    sub_2213CDC(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v4->fields.callback, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__2(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *_9__5; // x22
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_IEnumerator_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_5970AA7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__);
    byte_5970AA7 = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__5, (int32_t)_9__5, v5, v6, v7, v8, v9, v10);
  }
  v11 = BasicHelper__DelayCall(0.5, _9__5, 1, 0);
  if ( !_4__this )
    sub_2213CDC(v11, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(_4__this, v11, 0);
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
  bool IsCompleted; // w9

  v2 = this;
  if ( (byte_5970AA5 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970AA5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer )
    goto LABEL_17;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                     uiVoicePlayer,
                                                                     1,
                                                                     HIDWORD(this[2].fields.__9__5->fields.method_ptr),
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
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v2->fields.__4__this;
  progressData->fields.OldPoint = progressData->fields.Point;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
  if ( !this )
LABEL_17:
    sub_2213CDC(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v2->fields.callback, 0);
}


void EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__4(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_o *_4__this; // x0
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x9
  int max_length; // w8
  EventInfoCircleProgressObjectComponent_o **m_Items; // x9
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x10
  int64_t Point; // x11
  int32_t Level; // w12
  int32_t DispState; // w13

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
    m_Items = circleProgressList->m_Items;
    while ( *m_Items )
    {
      progressData = (*m_Items)->fields.progressData;
      if ( !progressData )
        break;
      Point = progressData->fields.Point;
      Level = progressData->fields.Level;
      --max_length;
      DispState = progressData->fields.DispState;
      ++m_Items;
      *(_WORD *)&progressData->fields.IsCompleted = 0;
      progressData->fields.OldPoint = Point;
      progressData->fields.OldLevel = Level;
      progressData->fields.OldDispState = DispState;
      if ( !max_length )
        goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(_4__this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_5970AA8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_2213A60(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__);
    byte_5970AA8 = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
      0);
    v3->fields.__9__6 = _9__6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
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
  bool IsCompleted; // w9

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (extraCircleProgres = _4__this->fields.extraCircleProgres,
        _4__this->fields.extraCircleState = 2,
        !extraCircleProgres)
    || (progressData = extraCircleProgres->fields.progressData) == 0 )
  {
    sub_2213CDC(_4__this, method);
  }
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  progressData->fields.OldPoint = progressData->fields.Point;
  IsCompleted = progressData->fields.IsCompleted;
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
  struct EasingObject_o *easingObj; // x10
  struct EventInfoCircleProgressControl_o *_4__this; // x9
  float v6; // s0
  float mNow; // s1
  float v8; // s8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
  }
  v6 = 1.0;
  mNow = easingObj->fields.mNow;
  if ( mNow <= 1.0 )
    v6 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v6 = 0.0;
  v8 = CS___8__locals1->fields.fromAngle
     + (float)((float)(CS___8__locals1->fields.toAngle - CS___8__locals1->fields.fromAngle) * v6);
  GameObjectExtensions__AddLocalEulerAngleX(_4__this->fields.titleBaseObject, v8 - this->fields.oldAngle, 0);
  this->fields.oldAngle = v8;
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return n->fields.Id == this->fields.id;
}