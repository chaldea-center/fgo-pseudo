void __fastcall EventInfoCircleProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct EventInfoCircleProgressControl_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct EventInfoCircleProgressControl_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FCF62 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_4445/*"CircleProgressData_"*/, v4);
    sub_1B640C8(&StringLiteral_4447/*"CircleProgressTitleState_"*/, v5);
    sub_1B640C8(&StringLiteral_4446/*"CircleProgressExtraData_"*/, v6);
    byte_49FCF62 = 1;
  }
  EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = (struct System_String_o *)StringLiteral_4447/*"CircleProgressTitleState_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoCircleProgressControl_TypeInfo->static_fields,
    StringLiteral_4447/*"CircleProgressTitleState_"*/,
    v2,
    v3);
  v7 = StringLiteral_4445/*"CircleProgressData_"*/;
  static_fields = EventInfoCircleProgressControl_TypeInfo->static_fields;
  static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_4445/*"CircleProgressData_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v7, v9, v10);
  v11 = StringLiteral_4446/*"CircleProgressExtraData_"*/;
  v12 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v12->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = (struct System_String_o *)StringLiteral_4446/*"CircleProgressExtraData_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v11, v13, v14);
}


void __fastcall EventInfoCircleProgressControl___ctor(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FCF61 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo, v4);
    byte_49FCF61 = 1;
  }
  this->fields.extraCircleHidePosX = -212.0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
  this->fields.progressDataList = (struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressDataList, (int32_t)v5, v6, v7);
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
  EventInfoCircleProgressControl_o *v17; // x24
  int32_t v18; // w20
  int32_t v19; // w19
  Il2CppObject *ProgressData; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *progressDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppObject *v27; // x1
  Il2CppClass **v28; // x0
  const MethodInfo *v29; // [xsp+18h] [xbp-68h]

  v17 = this;
  if ( (byte_49FCF5C & 1) == 0 )
  {
    v18 = oldDispState;
    v19 = dispState;
    this = (EventInfoCircleProgressControl_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__,
                                                 *(_QWORD *)&id);
    dispState = v19;
    oldDispState = v18;
    byte_49FCF5C = 1;
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
                                   v29);
  progressDataList = (System_Collections_Generic_List_object__o *)v17->fields.progressDataList;
  if ( !progressDataList
    || (items = progressDataList->fields._items,
        v25 = Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__,
        ++progressDataList->fields._version,
        !items) )
  {
    sub_1B64324(ProgressData);
  }
  size = progressDataList->fields._size;
  v27 = ProgressData;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      progressDataList,
      ProgressData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    progressDataList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v21, v22);
  }
}


void __fastcall EventInfoCircleProgressControl__Awake(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FCF4A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FCF4A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userEventPointMaster, (int32_t)Master_object, v5, v6);
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
  __int64 v19; // x26
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FCF5D & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id);
    byte_49FCF5D = 1;
  }
  v19 = sub_1B64314(EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id, point);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1B64324(v20);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)ent, v21, v22);
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
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  EventDetailEntity_o *v40; // [xsp+0h] [xbp-60h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FCF56 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&EventEntity_TypeInfo, v6);
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_49FCF56 = 1;
  }
  v41 = 0;
  v40 = 0LL;
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
        v41 = v25;
        if ( !v13 )
          sub_1B64324(v23);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v13,
               (Il2CppObject **)&v40,
               v25,
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !v40 )
            sub_1B64324(0LL);
          if ( EventDetailEntity__IsEventCircleProgress(v40, 0LL) )
          {
            v26 = EventInfoCircleProgressControl_TypeInfo;
            if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
              v26 = EventInfoCircleProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v26->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
            v28 = System_Int32__ToString((int32_t)&v41, 0LL);
            v29 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v28, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v29, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
            v31 = System_Int32__ToString((int32_t)&v41, 0LL);
            v32 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v31, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v32, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
            v34 = System_Int32__ToString((int32_t)&v41, 0LL);
            v35 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v34, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v35, 0LL);
          }
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_35;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_35:
    v39 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  EventPointBuffMaster_o *Master_object; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  EventInfoCircleProgressControl___c_c *v22; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v25; // x23
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  _BOOL8 v31; // x0
  Il2CppObject *current; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FCF51 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMaster_EventPointBuffMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v16);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__, v17);
    sub_1B640C8(&EventInfoCircleProgressControl___c_TypeInfo, v18);
    byte_49FCF51 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventPointBuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventPointBuffMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (EventPointBuffMaster_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                              Master_object,
                                              eventId,
                                              groupId,
                                              0LL);
  v22 = EventInfoCircleProgressControl___c_TypeInfo;
  v23 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
    v22 = EventInfoCircleProgressControl___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v22->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventPointBuffEntity__TypeInfo, v20, v21);
    System_Comparison_object____ctor(
      _9__39_0,
      v25,
      Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__,
      0LL);
    static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__39_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v27, v28);
  }
  if ( !v23 )
LABEL_20:
    sub_1B64324(Master_object);
  System_Collections_Generic_List_object___Sort_55243320(
    v23,
    _9__39_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)nowEventPointBuff, 0, v29, v30);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v23,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B64324(v31);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v35.fields._current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)nowEventPointBuff, (int32_t)current, v33, v34);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressBarAnimObject(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v10; // x0
  System_Func_object__bool__o *_9__36_0; // x20
  Il2CppObject *v12; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FCF4E & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_1B640C8(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v4);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__, v5);
    sub_1B640C8(&EventInfoCircleProgressControl___c_TypeInfo, v6);
    byte_49FCF4E = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_1B64324(result);
  if ( progressData->fields.Point <= progressData->fields.OldPoint )
  {
    circleProgressList = this->fields.circleProgressList;
    v10 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v10 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__bool__o *)v10->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                  method,
                                                  v2);
      System_Func_object__bool____ctor(
        _9__36_0,
        v12,
        Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__,
        0LL);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__36_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v14, v15);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__36_0,
                                                         (const MethodInfo_2E2543C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
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
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v10; // x0
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v12; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FCF4F & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_1B640C8(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v4);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__, v5);
    sub_1B640C8(&EventInfoCircleProgressControl___c_TypeInfo, v6);
    byte_49FCF4F = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_1B64324(result);
  if ( progressData->fields.IsOldCompleted || !progressData->fields.IsCompleted )
  {
    circleProgressList = this->fields.circleProgressList;
    v10 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v10 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__37_0 = (System_Func_object__bool__o *)v10->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                  method,
                                                  v2);
      System_Func_object__bool____ctor(
        _9__37_0,
        v12,
        Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__,
        0LL);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__37_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v14, v15);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__37_0,
                                                         (const MethodInfo_2E2543C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
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
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_49FCF5B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__, v5);
    sub_1B640C8(&System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo, v6);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__, v7);
    sub_1B640C8(&EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo, v8);
    byte_49FCF5B = 1;
  }
  v9 = sub_1B64314(EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo, *(_QWORD *)&id, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 16) = id;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.progressDataList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___) )
  {
    progressDataList = this->fields.progressDataList;
    v14 = (System_Predicate_object__o *)sub_1B64314(
                                          System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                          v11,
                                          v12);
    System_Predicate_object____ctor(
      v14,
      (Il2CppObject *)v9,
      Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__,
      0LL);
    if ( progressDataList )
      return (EventInfoCircleProgressControl_ProgressData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)progressDataList,
                                                                (System_Predicate_T__o *)v14,
                                                                (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
LABEL_8:
    sub_1B64324(v10);
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
  int64_t UserId; // x1

  if ( (byte_49FCF52 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49FCF52 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  if ( (byte_49FCF57 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, method);
    byte_49FCF57 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (eventId = eventUiEntity->fields.eventId,
        v19 = eventId,
        (this = (EventInfoCircleProgressControl_o *)v2->fields.uiVoicePlayer) == 0LL) )
  {
    sub_1B64324(this);
  }
  if ( !EventInfoUIVoicePlayer__HasSaveData((EventInfoUIVoicePlayer_o *)this, eventId, 0LL) )
    return 0;
  v5 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v5 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v5->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v7 = System_Int32__ToString((int32_t)&v19, 0LL);
  v8 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v8, 0LL) )
    return 0;
  v9 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v9 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v9->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v11 = System_Int32__ToString((int32_t)&v19, 0LL);
  v12 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v11, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v12, 0LL) )
  {
    v13 = EventInfoCircleProgressControl_TypeInfo;
    if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
      v13 = EventInfoCircleProgressControl_TypeInfo;
    }
    SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v13->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
    v15 = System_Int32__ToString((int32_t)&v19, 0LL);
    v16 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v15, 0LL);
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
  int32_t v3; // w3
  __int64 v6; // x1
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x22
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  struct EventUiEntity_o *v12; // x8

  if ( (byte_49FCF4B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_EventInfoCircleProgressControl__Initialization_b__30_0__, v6);
    byte_49FCF4B = 1;
  }
  if ( entity )
  {
    this->fields.eventUiEntity = entity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
    eventUiEntity = this->fields.eventUiEntity;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl__Initialization_b__30_0__,
      0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v10, 0LL);
    v12 = this->fields.eventUiEntity;
    if ( !v12 || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0LL )
      sub_1B64324(uiVoicePlayer);
    EventInfoUIVoicePlayer__LoadHistory(uiVoicePlayer, v12->fields.eventId, 0LL);
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
  Il2CppObject *Component_object; // x21
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_IEnumerator_o *v15; // x0

  if ( (byte_49FCF60 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, endAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_9133/*"MuralButton_in"*/, v7);
    byte_49FCF60 = 1;
  }
  muralButtonObject = (UnityEngine_Object_o *)this->fields.muralButtonObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(muralButtonObject, 0LL, 0LL)
    || EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0LL) )
  {
    goto LABEL_15;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(muralButton, 1, 0LL);
  muralButton = (UnityEngine_GameObject_o *)this->fields.muralButton;
  if ( !muralButton )
    goto LABEL_25;
  muralButton = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, struct EventUiEntity_o *, const char *))muralButton->klass[1]._1.gc_desc)(
                                              muralButton,
                                              this->fields.eventUiEntity,
                                              muralButton->klass[1]._1.name);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_25;
  muralButton = (UnityEngine_GameObject_o *)this->fields.muralButton;
  if ( !muralButton )
    goto LABEL_25;
  EventInfoMuralComponent__InitDisplay(
    (EventInfoMuralComponent_o *)muralButton,
    eventUiEntity->fields.eventId,
    this,
    0LL);
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       muralButton,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_15:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          muralButton,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  muralButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)muralButton & 1) != 0 )
  {
    v15 = BasicHelper__DelayCall(1.133, endAction, 0LL);
    muralButton = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v15,
                                                0LL);
  }
  else
  {
    if ( !v12 )
      goto LABEL_25;
    v12[2].monitor = endAction;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12[2].monitor, (int32_t)endAction, v13, v14);
  }
  if ( !Component_object )
LABEL_25:
    sub_1B64324(muralButton);
  UnityEngine_Animation__Play_68872828(
    (UnityEngine_Animation_o *)Component_object,
    (System_String_o *)StringLiteral_9133/*"MuralButton_in"*/,
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
  if ( (byte_49FCF5E & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1B640C8(&CondType_TypeInfo, method);
    byte_49FCF5E = 1;
  }
  titleReverseCondition = v2->fields.titleReverseCondition;
  if ( !titleReverseCondition )
    sub_1B64324(this);
  CondKind = titleReverseCondition->fields.CondKind;
  CondId = titleReverseCondition->fields.CondId;
  CondValue = titleReverseCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
  if ( (byte_49FCF5F & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1B640C8(&CondType_TypeInfo, method);
    byte_49FCF5F = 1;
  }
  extraCircleOpenCondition = v2->fields.extraCircleOpenCondition;
  if ( !extraCircleOpenCondition )
    sub_1B64324(this);
  CondKind = extraCircleOpenCondition->fields.CondKind;
  CondId = extraCircleOpenCondition->fields.CondId;
  CondValue = extraCircleOpenCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FCF4C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_49FCF4C = 1;
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
  if ( UnityEngine_Object__op_Inequality(ProgressBarAnimObject, 0LL, 0LL) )
    return 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  EventInfoCircleProgressControl_o *v3; // x28
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x8
  int32_t size; // w2
  int v13; // w9
  EventInfoCircleProgressControl_c *v14; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *String; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  int max_length; // w8
  unsigned int v23; // w25
  EventInfoCircleProgressObjectComponent_o *v24; // x22
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v27; // x5
  const MethodInfo *v28; // x1
  int32_t lv; // w23
  _BOOL4 IsBackDrawState; // w24
  const MethodInfo *v31; // x2
  bool IsCompletedState; // w0
  __int64 v33; // x2
  int m_CancellationTokenSource; // w8
  int v35; // w20
  System_String_o *v36; // x22
  __int64 v37; // x21
  const MethodInfo *v38; // x3
  int v39; // w19
  EventInfoCircleProgressControl_o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x5
  EventInfoCircleProgressControl_o *v43; // x23
  EventInfoCircleProgressControl_o *v44; // x29
  __int64 v45; // x2
  int32_t v46; // w26
  int32_t v47; // w25
  System_Object_array *v48; // x27
  System_Func_object__bool__o *v49; // x28
  Il2CppObject *object; // x28
  const MethodInfo *v51; // x2
  int v52; // w27
  int32_t v53; // w24
  char v54; // w28
  bool v55; // w8
  bool isCompleted; // w8
  bool isOldCompleted; // [xsp+8h] [xbp-A8h]
  const MethodInfo *v58; // [xsp+18h] [xbp-98h]
  EventInfoCircleProgressControl_o *v59; // [xsp+28h] [xbp-88h]
  EventInfoCircleProgressControl_o *v60; // [xsp+30h] [xbp-80h]
  EventPointBuffEntity_o *ent; // [xsp+38h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+40h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_49FCF54 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, *(_QWORD *)&eventId);
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, v4);
    sub_1B640C8(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__, v8);
    sub_1B640C8(&EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo, v9);
    this = (EventInfoCircleProgressControl_o *)sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FCF54 = 1;
  }
  ent = 0LL;
  nowEventPointBuff = 0LL;
  progressDataList = v3->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_58;
  size = progressDataList->fields._size;
  v13 = progressDataList->fields._version + 1;
  progressDataList->fields._size = 0;
  progressDataList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)progressDataList->fields._items, 0, size, 0LL);
  v14 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v14 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v14->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v16 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v17 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v16, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoCircleProgressControl_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    circleProgressList = v3->fields.circleProgressList;
    if ( circleProgressList )
    {
      max_length = circleProgressList->max_length;
      if ( max_length >= 1 )
      {
        v23 = 0;
        while ( v23 < max_length )
        {
          v24 = circleProgressList->m_Items[v23];
          if ( !v24 )
            goto LABEL_58;
          circleId = v24->fields.circleId;
          UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                                 v3,
                                                                 eventIda,
                                                                 circleId,
                                                                 v20);
          EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
            UserEventPoint,
            eventIda,
            circleId,
            (int64_t)UserEventPoint,
            &nowEventPointBuff,
            v27);
          if ( nowEventPointBuff )
            lv = nowEventPointBuff->fields.lv;
          else
            lv = 1;
          IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(v24, v28);
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(v24, IsBackDrawState, v31);
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
            v58);
          max_length = circleProgressList->max_length;
          if ( (int)++v23 >= max_length )
            return;
        }
        goto LABEL_59;
      }
      return;
    }
LABEL_58:
    sub_1B64324(this);
  }
  if ( !String )
    goto LABEL_58;
  this = (EventInfoCircleProgressControl_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
  if ( !this )
    goto LABEL_58;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v35 = 0;
    v59 = v3;
    v60 = this;
    while ( v35 < (unsigned int)m_CancellationTokenSource )
    {
      v36 = (System_String_o *)*((_QWORD *)&this->fields.datas + v35);
      v37 = sub_1B64314(EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo, v19, v33);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( !v36 )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)System_String__Split(v36, 0x3Au, 0, 0LL);
      if ( !this )
        goto LABEL_58;
      v39 = (int)this->fields.m_CancellationTokenSource;
      v40 = this;
      if ( v39 < 1 )
      {
        v41 = 0;
        if ( !v37 )
          goto LABEL_58;
      }
      else
      {
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0LL);
        v41 = (int)this;
        if ( !v37 )
          goto LABEL_58;
      }
      *(_DWORD *)(v37 + 16) = v41;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                   v3,
                                                   eventIda,
                                                   v41,
                                                   v38);
      v43 = this;
      if ( v39 < 2 )
      {
        v44 = 0LL;
      }
      else
      {
        if ( LODWORD(v40->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int64__Parse(*(System_String_o **)&v40->fields.playType, 0LL);
        v44 = this;
      }
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        this,
        eventIda,
        *(_DWORD *)(v37 + 16),
        (int64_t)v43,
        &ent,
        v42);
      v46 = ent ? ent->fields.lv : 1;
      if ( v39 < 3 )
      {
        v47 = 0;
      }
      else
      {
        if ( LODWORD(v40->fields.m_CancellationTokenSource) <= 2 )
          break;
        v47 = System_Int32__Parse((System_String_o *)v40->fields.assetData, 0LL);
      }
      v48 = (System_Object_array *)v3->fields.circleProgressList;
      v49 = (System_Func_object__bool__o *)sub_1B64314(
                                             System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                             v19,
                                             v45);
      System_Func_object__bool____ctor(
        v49,
        (Il2CppObject *)v37,
        Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__,
        0LL);
      object = BasicHelper__Find_object_(
                 v48,
                 (System_Func_T__bool__o *)v49,
                 (const MethodInfo_2E2543C *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventInfoCircleProgressControl_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)object,
                                                   0LL,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !object )
          goto LABEL_58;
        this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                     (EventInfoCircleProgressObjectComponent_o *)object,
                                                     v19);
        v52 = (unsigned __int8)this & 1;
      }
      else
      {
        v52 = 0;
      }
      if ( v39 < 4 )
      {
        v53 = 0;
      }
      else
      {
        if ( LODWORD(v40->fields.m_CancellationTokenSource) <= 3 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)v40->fields.assetData2, 0LL);
        v53 = (int)this;
      }
      if ( !object )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsCompletedState(
                                                   (EventInfoCircleProgressObjectComponent_o *)object,
                                                   v52,
                                                   v51);
      v54 = (char)this;
      if ( v39 >= 5 )
      {
        if ( LODWORD(v40->fields.m_CancellationTokenSource) <= 4 )
          break;
        v55 = System_Int32__Parse((System_String_o *)v40->fields.assetDataList, 0LL) == 1;
      }
      else
      {
        v55 = 0;
      }
      isOldCompleted = v55;
      isCompleted = v54 & 1;
      v3 = v59;
      EventInfoCircleProgressControl__AddProgressData(
        v59,
        *(_DWORD *)(v37 + 16),
        (int64_t)v43,
        (int64_t)v44,
        v46,
        v47,
        v52,
        v53,
        isCompleted,
        isOldCompleted,
        ent,
        v58);
      this = v60;
      ++v35;
      m_CancellationTokenSource = (int)v60->fields.m_CancellationTokenSource;
      if ( v35 >= m_CancellationTokenSource )
        return;
    }
LABEL_59:
    sub_1B6432C(this, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__LoadProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  EventInfoCircleProgressControl_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  const MethodInfo *v11; // x3
  struct EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x8
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v15; // x5
  const MethodInfo *v16; // x1
  int32_t v17; // w22
  const MethodInfo *v18; // x3
  int v19; // w29
  void *v20; // x20
  int32_t v21; // w22
  const MethodInfo *v22; // x3
  int64_t IsBackDrawState; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x5
  int64_t v26; // x21
  int64_t v27; // x23
  const MethodInfo *v28; // x2
  int32_t v29; // w23
  _BOOL8 IsCompletedState; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x1
  int32_t v35; // w8
  int32_t lv; // w24
  int32_t v37; // w25
  const MethodInfo *v38; // x2
  char v39; // w27
  int32_t v40; // w26
  int v41; // w27
  char v42; // w28
  bool isOldCompleted; // w8
  struct EventInfoCircleProgressControl_ProgressData_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w0
  int32_t *p_extraCircleState; // x20
  const MethodInfo *v49; // [xsp+18h] [xbp-88h]
  EventPointBuffEntity_o *ent; // [xsp+28h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+30h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_49FCF55 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FCF55 = 1;
  }
  v5 = EventInfoCircleProgressControl_TypeInfo;
  ent = 0LL;
  nowEventPointBuff = 0LL;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v5 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v5->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v7 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v8 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v7, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0LL);
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
      v17 = nowEventPointBuff ? nowEventPointBuff->fields.lv : 1;
      IsNullOrEmpty = this->fields.extraCircleProgres;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (void *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                  (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                                  v16);
        if ( this->fields.extraCircleProgres )
        {
          v29 = (unsigned __int8)IsNullOrEmpty & 1;
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                               this->fields.extraCircleProgres,
                               v29,
                               v28);
          ProgressData = EventInfoCircleProgressControl__CreateProgressData(
                           (EventInfoCircleProgressControl_o *)IsCompletedState,
                           circleId,
                           (int64_t)UserEventPoint,
                           (int64_t)UserEventPoint,
                           v17,
                           v17,
                           v29,
                           v29,
                           IsCompletedState,
                           IsCompletedState,
                           nowEventPointBuff,
                           v49);
          this->fields.progressExtraData = ProgressData;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.progressExtraData,
            (int32_t)ProgressData,
            v32,
            v33);
          if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v34) )
            v35 = 2;
          else
            v35 = 0;
          this->fields.extraCircleState = v35;
          return;
        }
      }
    }
LABEL_49:
    sub_1B64324(IsNullOrEmpty);
  }
  if ( !String )
    goto LABEL_49;
  IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v19 = *((_DWORD *)IsNullOrEmpty + 6);
  v20 = IsNullOrEmpty;
  if ( v19 <= 0 )
  {
    IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, 0, v18);
    v26 = IsBackDrawState;
    v21 = 0;
    goto LABEL_23;
  }
  v21 = System_Int32__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0LL);
  IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v21, v22);
  v26 = IsBackDrawState;
  if ( v19 == 1 )
  {
LABEL_23:
    v27 = 0LL;
    goto LABEL_24;
  }
  if ( *((_DWORD *)v20 + 6) <= 1u )
    goto LABEL_50;
  IsBackDrawState = System_Int64__Parse(*((System_String_o **)v20 + 5), 0LL);
  v27 = IsBackDrawState;
LABEL_24:
  EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
    (EventInfoCircleProgressControl_o *)IsBackDrawState,
    eventIda,
    v21,
    v26,
    &ent,
    v25);
  if ( ent )
    lv = ent->fields.lv;
  else
    lv = 1;
  if ( v19 < 3 )
  {
    v37 = 0;
  }
  else
  {
    if ( *((_DWORD *)v20 + 6) <= 2u )
      goto LABEL_50;
    v37 = System_Int32__Parse(*((System_String_o **)v20 + 6), 0LL);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v24);
  v39 = IsBackDrawState;
  if ( v19 < 4 )
  {
    v40 = 1;
  }
  else
  {
    if ( *((_DWORD *)v20 + 6) <= 3u )
      goto LABEL_50;
    v40 = System_Int32__Parse(*((System_String_o **)v20 + 7), 0LL);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v41 = v39 & 1;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v41,
                      v38);
  v42 = IsBackDrawState;
  if ( v19 >= 5 )
  {
    if ( *((_DWORD *)v20 + 6) <= 4u )
      goto LABEL_50;
    IsBackDrawState = System_Int32__Parse(*((System_String_o **)v20 + 8), 0LL);
    isOldCompleted = (_DWORD)IsBackDrawState == 1;
  }
  else
  {
    isOldCompleted = 0;
  }
  v44 = EventInfoCircleProgressControl__CreateProgressData(
          (EventInfoCircleProgressControl_o *)IsBackDrawState,
          v21,
          v26,
          v27,
          lv,
          v37,
          v41,
          v40,
          v42 & 1,
          isOldCompleted,
          ent,
          v49);
  this->fields.progressExtraData = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressExtraData, (int32_t)v44, v45, v46);
  if ( v19 > 5 )
  {
    if ( *((_DWORD *)v20 + 6) > 5u )
    {
      v47 = System_Int32__Parse(*((System_String_o **)v20 + 9), 0LL);
      this->fields.extraCircleState = v47;
      p_extraCircleState = &this->fields.extraCircleState;
      if ( v47 )
        return;
      goto LABEL_46;
    }
LABEL_50:
    sub_1B6432C(IsBackDrawState, v24);
  }
  this->fields.extraCircleState = 0;
  p_extraCircleState = &this->fields.extraCircleState;
LABEL_46:
  if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v24) )
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
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = eventId;
  if ( (byte_49FCF53 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FCF53 = 1;
  }
  v5 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v5 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v5->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v7 = System_Int32__ToString((int32_t)&v13, 0LL);
  v8 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    IsBackDrawState = EventInfoCircleProgressControl__IsBackDrawState(this, v10);
    if ( !this )
      sub_1B64324(IsBackDrawState);
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

  if ( (byte_49FCF49 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FCF49 = 1;
  }
  uiVoicePlayer = (UnityEngine_Object_o *)this->fields.uiVoicePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiVoicePlayer, 0LL, 0LL) )
  {
    v4 = this->fields.uiVoicePlayer;
    if ( !v4 )
      sub_1B64324(0LL);
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressBarAnimObject; // x0
  UnityEngine_GameObject_o **v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressCompleteAnimObjcet; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  UnityEngine_Object_o *v32; // x24
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x9
  EventInfoCircleProgressDrawComponent_o *v37; // x19
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *v40; // x22
  const MethodInfo *v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x21
  System_Collections_IEnumerator_o *v44; // x0
  EventInfoCircleProgressObjectComponent_o *v45; // x19
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_o *v48; // x21
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x21
  Il2CppObject *Component_object; // x20
  Il2CppObject *v52; // x22
  __int64 v53; // x1
  const MethodInfo *v54; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w20
  il2cpp_array_size_t v57; // w22
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x19
  System_Action_o *v59; // x21
  const MethodInfo *v60; // x2
  int32_t v61; // w2
  int32_t v62; // w3

  if ( (byte_49FCF4D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__, v10);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__, v11);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__, v12);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__, v13);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__, v14);
    sub_1B640C8(&EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_17145/*"bit_circlemeter_rotate"*/, v16);
    byte_49FCF4D = 1;
  }
  v17 = sub_1B64314(EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, *(_QWORD *)&type, callback);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_36;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  *(_QWORD *)(v17 + 32) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)callback, v21, v22);
  if ( type != 1 )
    goto LABEL_40;
  ProgressBarAnimObject = EventInfoCircleProgressControl__GetProgressBarAnimObject(this, v23);
  *(_QWORD *)(v17 + 24) = ProgressBarAnimObject;
  v25 = (UnityEngine_GameObject_o **)(v17 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)ProgressBarAnimObject, v26, v27);
  ProgressCompleteAnimObjcet = EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(this, v28);
  *(_QWORD *)(v17 + 40) = ProgressCompleteAnimObjcet;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)ProgressCompleteAnimObjcet, v30, v31);
  v32 = *(UnityEngine_Object_o **)(v17 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    IsBackDrawState = *v25;
    if ( *v25 )
    {
      IsBackDrawState = (UnityEngine_GameObject_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                      (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
                                                      v33);
      if ( *v25 )
      {
        v36 = 40LL;
        if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
          v36 = 48LL;
        v37 = *(EventInfoCircleProgressDrawComponent_o **)((char *)&(*v25)->klass + v36);
        v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v34, v35);
        System_Action___ctor(
          v38,
          (Il2CppObject *)v17,
          Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__,
          0LL);
        if ( v37 )
        {
          EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(v37, v38, v39);
          return;
        }
      }
    }
LABEL_36:
    sub_1B64324(IsBackDrawState);
  }
  v40 = *(UnityEngine_Object_o **)(v17 + 40);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    v43 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v41, v42);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v17,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__,
      0LL);
    v44 = BasicHelper__DelayCall(1.0, v43, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v44, 0LL);
    v45 = *(EventInfoCircleProgressObjectComponent_o **)(v17 + 40);
    v48 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v46, v47);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v17,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__,
      0LL);
    if ( !v45 )
      goto LABEL_36;
    EventInfoCircleProgressObjectComponent__PlayCompleteAnim(v45, v48, v49);
    return;
  }
  if ( this->fields.titleDispState || !EventInfoCircleProgressControl__IsBackDrawState(this, v41) )
  {
    if ( this->fields.extraCircleState == 1 )
    {
      extraCircleProgres = this->fields.extraCircleProgres;
      v59 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v41, v42);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v17,
        Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__,
        0LL);
      if ( !extraCircleProgres )
        goto LABEL_36;
      EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(extraCircleProgres, v59, v60);
      return;
    }
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
    return;
  }
  v50 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v17,
    Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__,
    0LL);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       IsBackDrawState,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_36;
  v52 = UnityEngine_GameObject__GetComponent_object_(
          IsBackDrawState,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
    goto LABEL_29;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v52, 0LL, 0LL);
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
        if ( v57 >= circleProgressList->max_length )
          sub_1B6432C(IsBackDrawState, v53);
        IsBackDrawState = (UnityEngine_GameObject_o *)circleProgressList->m_Items[v57];
        if ( !IsBackDrawState )
          break;
        EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
          (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
          0LL,
          v54);
        if ( max_length == ++v57 )
          goto LABEL_41;
        circleProgressList = this->fields.circleProgressList;
      }
      while ( circleProgressList );
      goto LABEL_36;
    }
LABEL_41:
    EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(this, v50, v54);
  }
  else
  {
    if ( !Component_object )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
    if ( !v52 )
      goto LABEL_36;
    v52[2].monitor = v50;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52[2].monitor, (int32_t)v50, v61, v62);
    UnityEngine_Animation__Play_68872828(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17145/*"bit_circlemeter_rotate"*/,
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x22
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  EasingObject_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x21
  Il2CppObject *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x20
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FCF50 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAction);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__, v6);
    sub_1B640C8(&EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, v7);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__, v8);
    sub_1B640C8(&EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v9);
    byte_49FCF50 = 1;
  }
  v10 = sub_1B64314(EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, endAction, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 32) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)endAction, v14, v15);
  titleBaseObject = this->fields.titleBaseObject;
  if ( !titleBaseObject )
    goto LABEL_10;
  gameObject = UnityEngine_GameObject__get_gameObject(titleBaseObject, 0LL);
  *(float *)(v10 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v10 + 20) = 1151172608;
  v19 = sub_1B64314(EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v17, v18);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_10;
  *(_QWORD *)(v19 + 32) = v10;
  v22 = v19 + 32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), v10, v20, v21);
  if ( !*(_QWORD *)(v19 + 32) )
    goto LABEL_10;
  v35.fields.x = *(float *)(*(_QWORD *)(v19 + 32) + 16LL);
  v35.fields.y = 0.0;
  v35.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, v35, 0LL);
  if ( !*(_QWORD *)v22 )
    goto LABEL_10;
  *(_DWORD *)(v19 + 24) = *(_DWORD *)(*(_QWORD *)v22 + 16LL);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v23,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v19 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)Component_object, v25, v26);
  v27 = *(EasingObject_o **)(v19 + 16);
  v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v19,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__,
    0LL);
  v31 = *(Il2CppObject **)(v19 + 32);
  v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(
    v34,
    v31,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__,
    0LL);
  if ( !v27 )
LABEL_10:
    sub_1B64324(titleBaseObject);
  EasingObject__Play(v27, 0.5, v30, v34, 0.0, 0, 0LL);
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
    sub_1B64324(this);
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
  int size; // w22
  System_Text_StringBuilder_o *v11; // x20
  int32_t v12; // w21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  EventInfoCircleProgressControl_c *v17; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v19; // x0
  EventInfoCircleProgressControl_o *v20; // x19
  System_String_o *v21; // x0
  __int64 v22; // [xsp+0h] [xbp-60h] BYREF
  __int64 animType; // [xsp+8h] [xbp-58h] BYREF
  struct System_Collections_Generic_List_EventInfoUIBase_Data__o *datas; // [xsp+10h] [xbp-50h] BYREF
  intptr_t m_CachedPtr; // [xsp+18h] [xbp-48h] BYREF
  int32_t v26; // [xsp+1Ch] [xbp-44h] BYREF

  v3 = this;
  v26 = eventId;
  if ( (byte_49FCF59 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__, v5);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v7);
    this = (EventInfoCircleProgressControl_o *)sub_1B640C8(&StringLiteral_869/*","*/, v8);
    byte_49FCF59 = 1;
  }
  m_CachedPtr = 0;
  animType = 0LL;
  datas = 0LL;
  v22 = 0LL;
  progressDataList = v3->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_25;
  size = progressDataList->fields._size;
  v11 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method);
  System_Text_StringBuilder___ctor(v11, 0LL);
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 )
      {
        if ( !v11 )
          break;
        System_Text_StringBuilder__Append_60536548(v11, (System_String_o *)StringLiteral_869/*","*/, 0LL);
      }
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoCircleProgressControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0LL);
      if ( !v11 )
        break;
      System_Text_StringBuilder__Append_60536548(v11, (System_String_o *)this, 0LL);
      System_Text_StringBuilder__Append_60536548(v11, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      datas = this->fields.datas;
      v13 = System_Int64__ToString((int64_t)&datas, 0LL);
      System_Text_StringBuilder__Append_60536548(v11, v13, 0LL);
      System_Text_StringBuilder__Append_60536548(v11, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      animType = this->fields.animType;
      v14 = System_Int64__ToString((int64_t)&animType, 0LL);
      System_Text_StringBuilder__Append_60536548(v11, v14, 0LL);
      System_Text_StringBuilder__Append_60536548(v11, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      HIDWORD(v22) = HIDWORD(this->fields.assetData);
      v15 = System_Int32__ToString((int32_t)&v22 + 4, 0LL);
      System_Text_StringBuilder__Append_60536548(v11, v15, 0LL);
      System_Text_StringBuilder__Append_60536548(v11, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      LODWORD(v22) = BYTE1(this->fields.assetData2);
      v16 = System_Int32__ToString((int32_t)&v22, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_60536548(v11, v16, 0LL);
      if ( size == ++v12 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1B64324(this);
  }
LABEL_21:
  v17 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v17 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v17->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v19 = System_Int32__ToString((int32_t)&v26, 0LL);
  this = (EventInfoCircleProgressControl_o *)System_String__Concat_61375396(
                                               SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
                                               v19,
                                               0LL);
  if ( !v11 )
    goto LABEL_25;
  v20 = this;
  v21 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                             v11,
                             v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v20, v21, 0LL);
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
  int32_t extraCircleState; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v24; // [xsp+8h] [xbp-48h] BYREF
  __int64 OldLevel; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v28; // [xsp+2Ch] [xbp-24h] BYREF

  v28 = eventId;
  if ( (byte_49FCF5A & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v5);
    byte_49FCF5A = 1;
  }
  OldLevel = 0LL;
  OldPoint = 0LL;
  v24 = 0LL;
  extraCircleState = 0;
  v6 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method);
  System_Text_StringBuilder___ctor(v6, 0LL);
  progressExtraData = this->fields.progressExtraData;
  if ( !progressExtraData )
    goto LABEL_12;
  Id = progressExtraData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v6 )
    goto LABEL_12;
  System_Text_StringBuilder__Append_60536548(v6, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v6,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v9 = this->fields.progressExtraData;
  if ( !v9 )
    goto LABEL_12;
  OldPoint = v9->fields.OldPoint;
  v10 = System_Int64__ToString((int64_t)&OldPoint, 0LL);
  System_Text_StringBuilder__Append_60536548(v6, v10, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v6,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v11 = this->fields.progressExtraData;
  if ( !v11 )
    goto LABEL_12;
  OldLevel = v11->fields.OldLevel;
  v12 = System_Int64__ToString((int64_t)&OldLevel, 0LL);
  System_Text_StringBuilder__Append_60536548(v6, v12, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                  v6,
                                  (System_String_o *)StringLiteral_1546/*":"*/,
                                  0LL);
  v13 = this->fields.progressExtraData;
  if ( !v13
    || (HIDWORD(v24) = v13->fields.OldDispState,
        v14 = System_Int32__ToString((int32_t)&v24 + 4, 0LL),
        System_Text_StringBuilder__Append_60536548(v6, v14, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_60536548(
                                        v6,
                                        (System_String_o *)StringLiteral_1546/*":"*/,
                                        0LL),
        (v15 = this->fields.progressExtraData) == 0LL) )
  {
LABEL_12:
    sub_1B64324(appended);
  }
  LODWORD(v24) = v15->fields.IsOldCompleted;
  v16 = System_Int32__ToString((int32_t)&v24, 0LL);
  System_Text_StringBuilder__Append_60536548(v6, v16, 0LL);
  System_Text_StringBuilder__Append_60536548(v6, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
  extraCircleState = this->fields.extraCircleState;
  v17 = System_Int32__ToString((int32_t)&extraCircleState, 0LL);
  System_Text_StringBuilder__Append_60536548(v6, v17, 0LL);
  v18 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v18 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v18->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v20 = System_Int32__ToString((int32_t)&v28, 0LL);
  v21 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v20, 0LL);
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
  int32_t titleDispState; // [xsp+8h] [xbp-28h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = eventId;
  if ( (byte_49FCF58 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    byte_49FCF58 = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  titleDispState = this->fields.titleDispState;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_61375396(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0LL);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w21
  il2cpp_array_size_t v14; // w22
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
    v14 = 0;
    do
    {
      if ( v14 >= circleProgressList->max_length )
        sub_1B6432C(this, v10);
      v15 = &circleProgressList->obj.klass + (int)v14;
      v16 = (EventInfoCircleProgressObjectComponent_o *)v15[4];
      if ( !v16 )
        break;
      EventInfoCircleProgressObjectComponent__SetActive((EventInfoCircleProgressObjectComponent_o *)v15[4], 1, v11);
      ProgressData = EventInfoCircleProgressControl__GetProgressData(v4, v16->fields.circleId, v17);
      EventInfoCircleProgressObjectComponent__Setup(v16, v4, ProgressData, v19);
      if ( max_length == ++v14 )
        goto LABEL_13;
      circleProgressList = v4->fields.circleProgressList;
    }
    while ( circleProgressList );
LABEL_12:
    sub_1B64324(this);
  }
LABEL_13:
  v20 = v4->fields.eventUiEntity;
  if ( !v20 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressExtraData(v4, v20->fields.eventId, v11);
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
    v25);
  EventInfoCircleProgressControl__SetupMuralButton(v4, v26);
}


void __fastcall EventInfoCircleProgressControl__SetupMuralButton(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *IsTargetScene; // x0
  char v4; // w20
  int32_t v5; // w2
  int32_t v6; // w3
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
    sub_1B64324(IsTargetScene);
  }
  this->fields.muralButtonObject = IsTargetScene;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.muralButtonObject, (int32_t)IsTargetScene, v5, v6);
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
    sub_1B64324(this);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCF63 & 1) == 0 )
  {
    sub_1B640C8(&EventInfoCircleProgressControl___c_TypeInfo, v1);
    byte_49FCF63 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventInfoCircleProgressControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventInfoCircleProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCircleProgressControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventInfoCircleProgressControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return b->fields.eventPoint - a->fields.eventPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressBarAnimObject_b__36_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_1B64324(this);
  return progressData->fields.Point > progressData->fields.OldPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressCompleteAnimObjcet_b__37_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_1B64324(this);
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
  if ( (byte_49FCF65 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FCF65 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9045 = 1;
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
                                                                           this[2].fields.__9__5->fields.method_ptr,
                                                                           0LL),
        (v5 = v2->fields.__4__this) == 0LL)
    || (v6 = this, (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer) == 0LL) )
  {
LABEL_14:
    sub_1B64324(this);
  }
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)v6, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__1(
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
    sub_1B64324(this);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v7->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__2(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *_9__5; // x22
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_IEnumerator_o *v9; // x0

  if ( (byte_49FCF66 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__, v4);
    byte_49FCF66 = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__5, (int32_t)_9__5, v7, v8);
  }
  v9 = BasicHelper__DelayCall(0.5, _9__5, 0LL);
  if ( !_4__this )
    sub_1B64324(v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(_4__this, v9, 0LL);
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
  const MethodInfo *v7; // x1
  struct EventInfoCircleProgressObjectComponent_o *progressBarAnimObject; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w12

  v2 = this;
  if ( (byte_49FCF64 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FCF64 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9045 = 1;
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
                                                                     this[2].fields.__9__5->fields.method_ptr,
                                                                     0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_17;
  v6 = this;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer;
  if ( !this )
    goto LABEL_17;
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)v6, 0LL);
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
    sub_1B64324(this);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, v7);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__4(
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
    sub_1B64324(_4__this);
  }
LABEL_8:
  EventInfoCircleProgressControl__SaveAllData(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__5(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__6; // x22
  EventInfoCircleProgressControl_o *_4__this; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_49FCF67 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1B640C8(
                                                                       &Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
                                                                       v4);
    byte_49FCF67 = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
      0LL);
    v3->fields.__9__6 = _9__6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__6, (int32_t)_9__6, v7, v8);
  }
  if ( !_4__this )
    sub_1B64324(this);
  EventInfoCircleProgressControl__InsertMuralButton(_4__this, _9__6, v2);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__6(
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
    || (progressData = extraCircleProgres->fields.progressData) == 0LL )
  {
    sub_1B64324(_4__this);
  }
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldPoint = progressData->fields.Point;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
  EventInfoCircleProgressControl__SaveAllData(_4__this, method);
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
    sub_1B64324(this);
  v10 = CS___8__locals1->fields.fromAngle
      + (float)((float)(CS___8__locals1->fields.toAngle - CS___8__locals1->fields.fromAngle) * v9);
  GameObjectExtensions__AddLocalEulerAngleX(_4__this->fields.titleBaseObject, v10 - this->fields.oldAngle, 0LL);
  this->fields.oldAngle = v10;
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
    sub_1B64324(this);
  return n->fields.circleId == this->fields.id;
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
    sub_1B64324(this);
  return n->fields.Id == this->fields.id;
}