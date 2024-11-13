void __fastcall EventInfoCircleProgressControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct EventInfoCircleProgressControl_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct EventInfoCircleProgressControl_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B169FB & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_4536/*"CircleProgressData_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_4538/*"CircleProgressTitleState_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_4537/*"CircleProgressExtraData_"*/, v12, v13);
    byte_4B169FB = 1;
  }
  EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = (struct System_String_o *)StringLiteral_4538/*"CircleProgressTitleState_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoCircleProgressControl_TypeInfo->static_fields,
    StringLiteral_4538/*"CircleProgressTitleState_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_4536/*"CircleProgressData_"*/;
  static_fields = EventInfoCircleProgressControl_TypeInfo->static_fields;
  static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_4536/*"CircleProgressData_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_4537/*"CircleProgressExtraData_"*/;
  v23 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v23->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = (struct System_String_o *)StringLiteral_4537/*"CircleProgressExtraData_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v23->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA,
    v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall EventInfoCircleProgressControl___ctor(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B169FA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo, v5, v6);
    byte_4B169FA = 1;
  }
  this->fields.extraCircleHidePosX = -212.0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
  this->fields.progressDataList = (struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.progressDataList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_object__o *progressDataList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  int64_t v32; // x1
  Il2CppClass **v33; // x0
  const MethodInfo *v34; // [xsp+18h] [xbp-68h]

  v17 = this;
  if ( (byte_4B169F5 & 1) == 0 )
  {
    v18 = oldDispState;
    v19 = dispState;
    this = (EventInfoCircleProgressControl_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__,
                                                 *(_QWORD *)&id,
                                                 point);
    dispState = v19;
    oldDispState = v18;
    byte_4B169F5 = 1;
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
    sub_1BCAA3C(ProgressData, v21);
  }
  size = progressDataList->fields._size;
  v32 = (int64_t)ProgressData;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      progressDataList,
      ProgressData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    progressDataList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v32, v22, v23, v24, v25, v26, v27);
  }
}


void __fastcall EventInfoCircleProgressControl__Awake(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B169E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventPointMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B169E3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userEventPointMaster,
    (int64_t)Master_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B169F6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id, point);
    byte_4B169F6 = 1;
  }
  v19 = sub_1BCAA2C(EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id, point, oldPoint);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
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
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 64), (int64_t)ent, v22, v23, v24, v25, v26, v27);
  return (EventInfoCircleProgressControl_ProgressData_o *)v19;
}


void __fastcall EventInfoCircleProgressControl__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x20
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  _DWORD *v35; // x0
  __int64 v36; // x1
  __int64 methodPtr_low; // x10
  int32_t v38; // w2
  __int64 v39; // x1
  __int64 v40; // x1
  EventInfoCircleProgressControl_c *v41; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x21
  System_String_o *v43; // x1
  System_String_o *v44; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x21
  System_String_o *v46; // x1
  System_String_o *v47; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x21
  System_String_o *v49; // x1
  System_String_o *v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  EventDetailEntity_o *v55; // [xsp+0h] [xbp-60h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B169EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&EventEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    byte_4B169EF = 1;
  }
  v56 = 0;
  v55 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___),
        !klass) )
  {
    sub_1BCAA3C(Master_object, v22);
  }
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_12;
      }
      p_method = (__int64)&v27->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                      Enumerator,
                      *(_QWORD *)(v34 + 8));
    if ( v35 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
      {
        v38 = v35[4];
        v56 = v38;
        if ( !v24 )
          sub_1BCAA3C(v35, v36);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v24,
               (Il2CppObject **)&v55,
               v38,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !v55 )
            sub_1BCAA3C(0LL, v39);
          if ( EventDetailEntity__IsEventCircleProgress(v55, 0LL) )
          {
            v41 = EventInfoCircleProgressControl_TypeInfo;
            if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v40);
              v41 = EventInfoCircleProgressControl_TypeInfo;
            }
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v41->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
            v43 = System_Int32__ToString((int32_t)&v56, 0LL);
            v44 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v43, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v44, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
            v46 = System_Int32__ToString((int32_t)&v56, 0LL);
            v47 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v46, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v47, 0LL);
            SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
            v49 = System_Int32__ToString((int32_t)&v56, 0LL);
            v50 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v49, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v50, 0LL);
          }
        }
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_35;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_35:
    v54 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  EventPointBuffMaster_o *Master_object; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  EventInfoCircleProgressControl___c_c *v32; // x8
  System_Collections_Generic_List_object__o *v33; // x21
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v35; // x23
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  _BOOL8 v49; // x0
  __int64 v50; // x1
  Il2CppObject *current; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B169EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventPointBuffMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v22, v23);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__, v24, v25);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c_TypeInfo, v26, v27);
    byte_4B169EA = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = (EventPointBuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventPointBuffMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (EventPointBuffMaster_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                              Master_object,
                                              eventId,
                                              groupId,
                                              0LL);
  v32 = EventInfoCircleProgressControl___c_TypeInfo;
  v33 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo, v29);
    v32 = EventInfoCircleProgressControl___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v32->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v29);
      v32 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventPointBuffEntity__TypeInfo, v29, v30, v31);
    System_Comparison_object____ctor(
      _9__39_0,
      v35,
      Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__,
      0LL);
    static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__39_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
      (int64_t)_9__39_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v33 )
LABEL_20:
    sub_1BCAA3C(Master_object, v29);
  System_Collections_Generic_List_object___Sort_56244000(
    v33,
    _9__39_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)nowEventPointBuff, 0LL, v43, v44, v45, v46, v47, v48);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v33,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v49 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_1BCAA3C(v49, v50);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v58.fields._current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1BCA784((PartyOrganizationUtility_o *)nowEventPointBuff, (int64_t)current, v52, v53, v54, v55, v56, v57);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressBarAnimObject(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v14; // x0
  System_Func_object__bool__o *_9__36_0; // x20
  Il2CppObject *v16; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B169E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method, v2);
    sub_1BCA7E0(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__, v7, v8);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c_TypeInfo, v9, v10);
    byte_4B169E7 = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_1BCAA3C(result, method);
  if ( progressData->fields.Point <= progressData->fields.OldPoint )
  {
    circleProgressList = this->fields.circleProgressList;
    v14 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo, method);
      v14 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__bool__o *)v14->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14, method);
        v14 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
      System_Func_object__bool____ctor(
        _9__36_0,
        v16,
        Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__,
        0LL);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__36_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
        (int64_t)_9__36_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__36_0,
                                                         (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v14; // x0
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v16; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B169E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method, v2);
    sub_1BCA7E0(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__, v7, v8);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c_TypeInfo, v9, v10);
    byte_4B169E8 = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_1BCAA3C(result, method);
  if ( progressData->fields.IsOldCompleted || !progressData->fields.IsCompleted )
  {
    circleProgressList = this->fields.circleProgressList;
    v14 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo, method);
      v14 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__37_0 = (System_Func_object__bool__o *)v14->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14, method);
        v14 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
      System_Func_object__bool____ctor(
        _9__37_0,
        v16,
        Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__,
        0LL);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__37_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__37_0,
        (int64_t)_9__37_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__37_0,
                                                         (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x19
  System_Predicate_object__o *v21; // x20

  if ( (byte_4B169F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___,
      *(_QWORD *)&id,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__, v6, v7);
    sub_1BCA7E0(&System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__, v10, v11);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo, v12, v13);
    byte_4B169F4 = 1;
  }
  v14 = sub_1BCAA2C(EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo, *(_QWORD *)&id, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_DWORD *)(v14 + 16) = id;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.progressDataList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___) )
  {
    progressDataList = this->fields.progressDataList;
    v21 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo,
                                          v17,
                                          v18,
                                          v19);
    System_Predicate_object____ctor(
      v21,
      (Il2CppObject *)v14,
      Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__,
      0LL);
    if ( progressDataList )
      return (EventInfoCircleProgressControl_ProgressData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)progressDataList,
                                                                (System_Predicate_T__o *)v21,
                                                                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
LABEL_8:
    sub_1BCAA3C(v15, v16);
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

  if ( (byte_4B169EB & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupId);
    byte_4B169EB = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventPointMaster__GetPoint(userEventPointMaster, UserId, eventId, groupId, 0LL);
}


bool __fastcall EventInfoCircleProgressControl__HasSaveData(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoCircleProgressControl_o *v3; // x19
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v5; // x1
  EventInfoCircleProgressControl_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  EventInfoCircleProgressControl_c *v11; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  EventInfoCircleProgressControl_c *v16; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x19
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  int32_t eventId; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4B169F0 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, method, v2);
    byte_4B169F0 = 1;
  }
  eventUiEntity = v3->fields.eventUiEntity;
  if ( !eventUiEntity
    || (method = (const MethodInfo *)(unsigned int)eventUiEntity->fields.eventId,
        eventId = eventUiEntity->fields.eventId,
        (this = (EventInfoCircleProgressControl_o *)v3->fields.uiVoicePlayer) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  if ( !EventInfoUIVoicePlayer__HasSaveData((EventInfoUIVoicePlayer_o *)this, (int32_t)method, 0LL) )
    return 0;
  v6 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v5);
    v6 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v6->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v8 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v9 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v8, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v9, 0LL) )
    return 0;
  v11 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v10);
    v11 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v11->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v13 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v14 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v13, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v14, 0LL) )
  {
    v16 = EventInfoCircleProgressControl_TypeInfo;
    if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v15);
      v16 = EventInfoCircleProgressControl_TypeInfo;
    }
    SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v16->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
    v18 = System_Int32__ToString((int32_t)&eventId, 0LL);
    v19 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v18, 0LL);
    return UnityEngine_PlayerPrefs__HasKey(v19, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  EventUiEntity_o *eventUiEntity; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x22
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  __int64 v18; // x1
  struct EventUiEntity_o *v19; // x8

  if ( (byte_4B169E4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl__Initialization_b__30_0__, v10, v11);
    byte_4B169E4 = 1;
  }
  if ( entity )
  {
    this->fields.eventUiEntity = entity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
      (int64_t)entity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl__Initialization_b__30_0__,
      0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v16, 0LL);
    v19 = this->fields.eventUiEntity;
    if ( !v19 || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0LL )
      sub_1BCAA3C(uiVoicePlayer, v18);
    EventInfoUIVoicePlayer__LoadHistory(uiVoicePlayer, v19->fields.eventId, 0LL);
  }
}


void __fastcall EventInfoCircleProgressControl__InsertMuralButton(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *muralButtonObject; // x21
  __int64 v12; // x1
  UnityEngine_GameObject_o *muralButton; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  __int64 v15; // x1
  Il2CppObject *Component_object; // x21
  __int64 v17; // x1
  Il2CppObject *v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_IEnumerator_o *v25; // x0

  if ( (byte_4B169F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, endAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_9305/*"MuralButton_in"*/, v9, v10);
    byte_4B169F9 = 1;
  }
  muralButtonObject = (UnityEngine_Object_o *)this->fields.muralButtonObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction);
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
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
LABEL_15:
    ActionExtensions__Call(endAction, 0LL);
    return;
  }
  muralButton = this->fields.muralButtonObject;
  if ( !muralButton )
    goto LABEL_25;
  v18 = UnityEngine_GameObject__GetComponent_object_(
          muralButton,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  muralButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0LL, 0LL);
  if ( ((unsigned __int8)muralButton & 1) != 0 )
  {
    v25 = BasicHelper__DelayCall(1.133, endAction, 1, 0LL);
    muralButton = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v25,
                                                0LL);
  }
  else
  {
    if ( !v18 )
      goto LABEL_25;
    v18[2].monitor = endAction;
    sub_1BCA784((PartyOrganizationUtility_o *)&v18[2].monitor, (int64_t)endAction, v19, v20, v21, v22, v23, v24);
  }
  if ( !Component_object )
LABEL_25:
    sub_1BCAA3C(muralButton, v12);
  UnityEngine_Animation__Play_69899248(
    (UnityEngine_Animation_o *)Component_object,
    (System_String_o *)StringLiteral_9305/*"MuralButton_in"*/,
    0LL);
}


bool __fastcall EventInfoCircleProgressControl__IsBackDrawState(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoCircleProgressControl_o *v3; // x19
  struct EventInfoCircleProgressControl_Condition_o *titleReverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v3 = this;
  if ( (byte_4B169F7 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B169F7 = 1;
  }
  titleReverseCondition = v3->fields.titleReverseCondition;
  if ( !titleReverseCondition )
    sub_1BCAA3C(this, method);
  CondKind = titleReverseCondition->fields.CondKind;
  CondId = titleReverseCondition->fields.CondId;
  CondValue = titleReverseCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL, 0LL);
}


bool __fastcall EventInfoCircleProgressControl__IsExtraCircleDisp(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoCircleProgressControl_o *v3; // x19
  struct EventInfoCircleProgressControl_Condition_o *extraCircleOpenCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v3 = this;
  if ( (byte_4B169F8 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B169F8 = 1;
  }
  extraCircleOpenCondition = v3->fields.extraCircleOpenCondition;
  if ( !extraCircleOpenCondition )
    sub_1BCAA3C(this, method);
  CondKind = extraCircleOpenCondition->fields.CondKind;
  CondId = extraCircleOpenCondition->fields.CondId;
  CondValue = extraCircleOpenCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoCircleProgressControl__IsPlayAnim(
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

  if ( (byte_4B169E5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type, method);
    byte_4B169E5 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(ProgressBarAnimObject, 0LL, 0LL) )
    return 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  return UnityEngine_Object__op_Inequality(ProgressCompleteAnimObjcet, 0LL, 0LL)
      || !this->fields.titleDispState && EventInfoCircleProgressControl__IsBackDrawState(this, v10)
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x8
  int32_t size; // w2
  int v20; // w9
  EventInfoCircleProgressControl_c *v21; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *String; // x20
  const MethodInfo *v26; // x3
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  int max_length; // w8
  unsigned int v29; // w25
  EventInfoCircleProgressObjectComponent_o *v30; // x22
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x1
  int32_t lv; // w23
  _BOOL4 IsBackDrawState; // w24
  const MethodInfo *v37; // x2
  bool IsCompletedState; // w0
  __int64 v39; // x2
  __int64 v40; // x3
  int m_CancellationTokenSource; // w8
  int v42; // w20
  System_String_o *v43; // x22
  __int64 v44; // x21
  const MethodInfo *v45; // x3
  int v46; // w19
  EventInfoCircleProgressControl_o *v47; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x5
  EventInfoCircleProgressControl_o *v50; // x23
  EventInfoCircleProgressControl_o *v51; // x29
  __int64 v52; // x2
  __int64 v53; // x3
  int32_t v54; // w26
  int32_t v55; // w25
  System_Object_array *v56; // x27
  System_Func_object__bool__o *v57; // x28
  __int64 v58; // x1
  Il2CppObject *object; // x28
  const MethodInfo *v60; // x2
  int v61; // w27
  int32_t v62; // w24
  char v63; // w28
  bool v64; // w8
  bool isCompleted; // w8
  bool isOldCompleted; // [xsp+8h] [xbp-A8h]
  const MethodInfo *v67; // [xsp+18h] [xbp-98h]
  EventInfoCircleProgressControl_o *v68; // [xsp+28h] [xbp-88h]
  EventInfoCircleProgressControl_o *v69; // [xsp+30h] [xbp-80h]
  EventPointBuffEntity_o *ent; // [xsp+38h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+40h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_4B169ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__, v12, v13);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo, v14, v15);
    this = (EventInfoCircleProgressControl_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B169ED = 1;
  }
  ent = 0LL;
  nowEventPointBuff = 0LL;
  progressDataList = v3->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_58;
  size = progressDataList->fields._size;
  v20 = progressDataList->fields._version + 1;
  progressDataList->fields._size = 0;
  progressDataList->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)progressDataList->fields._items, 0, size, 0LL);
  v21 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v21 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v21->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v23 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v24 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v23, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v24, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (EventInfoCircleProgressControl_o *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    circleProgressList = v3->fields.circleProgressList;
    if ( circleProgressList )
    {
      max_length = circleProgressList->max_length;
      if ( max_length >= 1 )
      {
        v29 = 0;
        while ( v29 < max_length )
        {
          v30 = circleProgressList->m_Items[v29];
          if ( !v30 )
            goto LABEL_58;
          circleId = v30->fields.circleId;
          UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                                 v3,
                                                                 eventIda,
                                                                 circleId,
                                                                 v26);
          EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
            UserEventPoint,
            eventIda,
            circleId,
            (int64_t)UserEventPoint,
            &nowEventPointBuff,
            v33);
          if ( nowEventPointBuff )
            lv = nowEventPointBuff->fields.lv;
          else
            lv = 1;
          IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(v30, v34);
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(v30, IsBackDrawState, v37);
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
            v67);
          max_length = circleProgressList->max_length;
          if ( (int)++v29 >= max_length )
            return;
        }
        goto LABEL_59;
      }
      return;
    }
LABEL_58:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  }
  if ( !String )
    goto LABEL_58;
  this = (EventInfoCircleProgressControl_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
  if ( !this )
    goto LABEL_58;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v42 = 0;
    v68 = v3;
    v69 = this;
    while ( v42 < (unsigned int)m_CancellationTokenSource )
    {
      v43 = (System_String_o *)*((_QWORD *)&this->fields.datas + v42);
      v44 = sub_1BCAA2C(EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo, *(_QWORD *)&eventId, v39, v40);
      System_Object___ctor((Il2CppObject *)v44, 0LL);
      if ( !v43 )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)System_String__Split(v43, 0x3Au, 0, 0LL);
      if ( !this )
        goto LABEL_58;
      v46 = (int)this->fields.m_CancellationTokenSource;
      v47 = this;
      if ( v46 < 1 )
      {
        v48 = 0;
        if ( !v44 )
          goto LABEL_58;
      }
      else
      {
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0LL);
        v48 = (int)this;
        if ( !v44 )
          goto LABEL_58;
      }
      *(_DWORD *)(v44 + 16) = v48;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                   v3,
                                                   eventIda,
                                                   v48,
                                                   v45);
      v50 = this;
      if ( v46 < 2 )
      {
        v51 = 0LL;
      }
      else
      {
        if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int64__Parse(*(System_String_o **)&v47->fields.playType, 0LL);
        v51 = this;
      }
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        this,
        eventIda,
        *(_DWORD *)(v44 + 16),
        (int64_t)v50,
        &ent,
        v49);
      v54 = ent ? ent->fields.lv : 1;
      if ( v46 < 3 )
      {
        v55 = 0;
      }
      else
      {
        if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 2 )
          break;
        v55 = System_Int32__Parse((System_String_o *)v47->fields.assetData, 0LL);
      }
      v56 = (System_Object_array *)v3->fields.circleProgressList;
      v57 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo,
                                             *(_QWORD *)&eventId,
                                             v52,
                                             v53);
      System_Func_object__bool____ctor(
        v57,
        (Il2CppObject *)v44,
        Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__,
        0LL);
      object = BasicHelper__Find_object_(
                 v56,
                 (System_Func_T__bool__o *)v57,
                 (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
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
                                                     *(const MethodInfo **)&eventId);
        v61 = (unsigned __int8)this & 1;
      }
      else
      {
        v61 = 0;
      }
      if ( v46 < 4 )
      {
        v62 = 0;
      }
      else
      {
        if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 3 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)v47->fields.assetData2, 0LL);
        v62 = (int)this;
      }
      if ( !object )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsCompletedState(
                                                   (EventInfoCircleProgressObjectComponent_o *)object,
                                                   v61,
                                                   v60);
      v63 = (char)this;
      if ( v46 >= 5 )
      {
        if ( LODWORD(v47->fields.m_CancellationTokenSource) <= 4 )
          break;
        v64 = System_Int32__Parse((System_String_o *)v47->fields.assetDataList, 0LL) == 1;
      }
      else
      {
        v64 = 0;
      }
      isOldCompleted = v64;
      isCompleted = v63 & 1;
      v3 = v68;
      EventInfoCircleProgressControl__AddProgressData(
        v68,
        *(_DWORD *)(v44 + 16),
        (int64_t)v50,
        (int64_t)v51,
        v54,
        v55,
        v61,
        v62,
        isCompleted,
        isOldCompleted,
        ent,
        v67);
      this = v69;
      ++v42;
      m_CancellationTokenSource = (int)v69->fields.m_CancellationTokenSource;
      if ( v42 >= m_CancellationTokenSource )
        return;
    }
LABEL_59:
    sub_1BCAA44(this, *(_QWORD *)&eventId);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__LoadProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  EventInfoCircleProgressControl_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  struct EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x8
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v17; // x5
  int32_t v18; // w22
  const MethodInfo *v19; // x3
  int v20; // w29
  void *v21; // x20
  int32_t v22; // w22
  const MethodInfo *v23; // x3
  int64_t IsBackDrawState; // x0
  const MethodInfo *v25; // x5
  int64_t v26; // x21
  int64_t v27; // x23
  const MethodInfo *v28; // x2
  int32_t v29; // w23
  _BOOL8 IsCompletedState; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x1
  int32_t v39; // w8
  int32_t lv; // w24
  int32_t v41; // w25
  const MethodInfo *v42; // x2
  char v43; // w27
  int32_t v44; // w26
  int v45; // w27
  char v46; // w28
  bool isOldCompleted; // w8
  struct EventInfoCircleProgressControl_ProgressData_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t v55; // w0
  int32_t *p_extraCircleState; // x20
  const MethodInfo *v57; // [xsp+18h] [xbp-88h]
  EventPointBuffEntity_o *ent; // [xsp+28h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+30h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4B169EE & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B169EE = 1;
  }
  v6 = EventInfoCircleProgressControl_TypeInfo;
  ent = 0LL;
  nowEventPointBuff = 0LL;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v6 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v6->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v8 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v9 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v8, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
                                                             v13);
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        UserEventPoint,
        eventIda,
        circleId,
        (int64_t)UserEventPoint,
        &nowEventPointBuff,
        v17);
      v18 = nowEventPointBuff ? nowEventPointBuff->fields.lv : 1;
      IsNullOrEmpty = this->fields.extraCircleProgres;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (void *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                  (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                                  v12);
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
                           v18,
                           v18,
                           v29,
                           v29,
                           IsCompletedState,
                           IsCompletedState,
                           nowEventPointBuff,
                           v57);
          this->fields.progressExtraData = ProgressData;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.progressExtraData,
            (int64_t)ProgressData,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v38) )
            v39 = 2;
          else
            v39 = 0;
          this->fields.extraCircleState = v39;
          return;
        }
      }
    }
LABEL_49:
    sub_1BCAA3C(IsNullOrEmpty, v12);
  }
  if ( !String )
    goto LABEL_49;
  IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v20 = *((_DWORD *)IsNullOrEmpty + 6);
  v21 = IsNullOrEmpty;
  if ( v20 <= 0 )
  {
    IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, 0, v19);
    v26 = IsBackDrawState;
    v22 = 0;
    goto LABEL_23;
  }
  v22 = System_Int32__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0LL);
  IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v22, v23);
  v26 = IsBackDrawState;
  if ( v20 == 1 )
  {
LABEL_23:
    v27 = 0LL;
    goto LABEL_24;
  }
  if ( *((_DWORD *)v21 + 6) <= 1u )
    goto LABEL_50;
  IsBackDrawState = System_Int64__Parse(*((System_String_o **)v21 + 5), 0LL);
  v27 = IsBackDrawState;
LABEL_24:
  EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
    (EventInfoCircleProgressControl_o *)IsBackDrawState,
    eventIda,
    v22,
    v26,
    &ent,
    v25);
  if ( ent )
    lv = ent->fields.lv;
  else
    lv = 1;
  if ( v20 < 3 )
  {
    v41 = 0;
  }
  else
  {
    if ( *((_DWORD *)v21 + 6) <= 2u )
      goto LABEL_50;
    v41 = System_Int32__Parse(*((System_String_o **)v21 + 6), 0LL);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v12);
  v43 = IsBackDrawState;
  if ( v20 < 4 )
  {
    v44 = 1;
  }
  else
  {
    if ( *((_DWORD *)v21 + 6) <= 3u )
      goto LABEL_50;
    v44 = System_Int32__Parse(*((System_String_o **)v21 + 7), 0LL);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v45 = v43 & 1;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v45,
                      v42);
  v46 = IsBackDrawState;
  if ( v20 >= 5 )
  {
    if ( *((_DWORD *)v21 + 6) <= 4u )
      goto LABEL_50;
    IsBackDrawState = System_Int32__Parse(*((System_String_o **)v21 + 8), 0LL);
    isOldCompleted = (_DWORD)IsBackDrawState == 1;
  }
  else
  {
    isOldCompleted = 0;
  }
  v48 = EventInfoCircleProgressControl__CreateProgressData(
          (EventInfoCircleProgressControl_o *)IsBackDrawState,
          v22,
          v26,
          v27,
          lv,
          v41,
          v45,
          v44,
          v46 & 1,
          isOldCompleted,
          ent,
          v57);
  this->fields.progressExtraData = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.progressExtraData, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  if ( v20 > 5 )
  {
    if ( *((_DWORD *)v21 + 6) > 5u )
    {
      v55 = System_Int32__Parse(*((System_String_o **)v21 + 9), 0LL);
      this->fields.extraCircleState = v55;
      p_extraCircleState = &this->fields.extraCircleState;
      if ( v55 )
        return;
      goto LABEL_46;
    }
LABEL_50:
    sub_1BCAA44(IsBackDrawState, v12);
  }
  this->fields.extraCircleState = 0;
  p_extraCircleState = &this->fields.extraCircleState;
LABEL_46:
  if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v12) )
    *p_extraCircleState = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__LoadTitleState(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  EventInfoCircleProgressControl_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *String; // x20
  const MethodInfo *v11; // x1
  _BOOL8 IsBackDrawState; // x0
  __int64 v13; // x1
  int32_t v14; // w0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = eventId;
  if ( (byte_4B169EC & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B169EC = 1;
  }
  v6 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v6 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v6->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v8 = System_Int32__ToString((int32_t)&v15, 0LL);
  v9 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v8, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    IsBackDrawState = EventInfoCircleProgressControl__IsBackDrawState(this, v11);
    if ( !this )
      sub_1BCAA3C(IsBackDrawState, v13);
    v14 = IsBackDrawState;
  }
  else
  {
    v14 = System_Int32__Parse(String, 0LL);
  }
  this->fields.titleDispState = v14;
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
  __int64 v2; // x2
  UnityEngine_Object_o *uiVoicePlayer; // x20
  __int64 v5; // x1
  EventInfoUIVoicePlayer_o *v6; // x0

  if ( (byte_4B169E2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B169E2 = 1;
  }
  uiVoicePlayer = (UnityEngine_Object_o *)this->fields.uiVoicePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(uiVoicePlayer, 0LL, 0LL) )
  {
    v6 = this->fields.uiVoicePlayer;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    EventInfoUIVoicePlayer__Stop(v6, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  UnityEngine_GameObject_o *IsBackDrawState; // x0
  const MethodInfo *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressBarAnimObject; // x0
  UnityEngine_GameObject_o **v44; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressCompleteAnimObjcet; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  UnityEngine_Object_o *v60; // x24
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x9
  EventInfoCircleProgressDrawComponent_o *v64; // x19
  System_Action_o *v65; // x21
  const MethodInfo *v66; // x2
  UnityEngine_Object_o *v67; // x22
  const MethodInfo *v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Action_o *v71; // x21
  System_Collections_IEnumerator_o *v72; // x0
  EventInfoCircleProgressObjectComponent_o *v73; // x19
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Action_o *v77; // x21
  const MethodInfo *v78; // x2
  System_Action_o *v79; // x21
  Il2CppObject *Component_object; // x20
  __int64 v81; // x1
  Il2CppObject *v82; // x22
  const MethodInfo *v83; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w20
  il2cpp_array_size_t v86; // w22
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x19
  System_Action_o *v88; // x21
  const MethodInfo *v89; // x2
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7

  if ( (byte_4B169E6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&type, callback);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__, v13, v14);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__, v15, v16);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__, v17, v18);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__, v19, v20);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__, v21, v22);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_17386/*"bit_circlemeter_rotate"*/, v25, v26);
    byte_4B169E6 = 1;
  }
  v27 = sub_1BCAA2C(EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, *(_QWORD *)&type, callback, method);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_36;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 32) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)callback, v36, v37, v38, v39, v40, v41);
  if ( type != 1 )
    goto LABEL_40;
  ProgressBarAnimObject = EventInfoCircleProgressControl__GetProgressBarAnimObject(this, v42);
  *(_QWORD *)(v27 + 24) = ProgressBarAnimObject;
  v44 = (UnityEngine_GameObject_o **)(v27 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)ProgressBarAnimObject, v45, v46, v47, v48, v49, v50);
  ProgressCompleteAnimObjcet = EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(this, v51);
  *(_QWORD *)(v27 + 40) = ProgressCompleteAnimObjcet;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v27 + 40),
    (int64_t)ProgressCompleteAnimObjcet,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v60 = *(UnityEngine_Object_o **)(v27 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    IsBackDrawState = *v44;
    if ( *v44 )
    {
      IsBackDrawState = (UnityEngine_GameObject_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                      (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
                                                      v29);
      if ( *v44 )
      {
        v63 = 40LL;
        if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
          v63 = 48LL;
        v64 = *(EventInfoCircleProgressDrawComponent_o **)((char *)&(*v44)->klass + v63);
        v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v61, v62);
        System_Action___ctor(
          v65,
          (Il2CppObject *)v27,
          Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__,
          0LL);
        if ( v64 )
        {
          EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(v64, v65, v66);
          return;
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(IsBackDrawState, v29);
  }
  v67 = *(UnityEngine_Object_o **)(v27 + 40);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
  {
    v71 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v68, v69, v70);
    System_Action___ctor(
      v71,
      (Il2CppObject *)v27,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__,
      0LL);
    v72 = BasicHelper__DelayCall(1.0, v71, 1, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v72, 0LL);
    v73 = *(EventInfoCircleProgressObjectComponent_o **)(v27 + 40);
    v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v74, v75, v76);
    System_Action___ctor(
      v77,
      (Il2CppObject *)v27,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__,
      0LL);
    if ( !v73 )
      goto LABEL_36;
    EventInfoCircleProgressObjectComponent__PlayCompleteAnim(v73, v77, v78);
    return;
  }
  if ( this->fields.titleDispState || !EventInfoCircleProgressControl__IsBackDrawState(this, v68) )
  {
    if ( this->fields.extraCircleState == 1 )
    {
      extraCircleProgres = this->fields.extraCircleProgres;
      v88 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v68, v69, v70);
      System_Action___ctor(
        v88,
        (Il2CppObject *)v27,
        Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__,
        0LL);
      if ( !extraCircleProgres )
        goto LABEL_36;
      EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(extraCircleProgres, v88, v89);
      return;
    }
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v27 + 32), 0LL);
    return;
  }
  v79 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v68, v69, v70);
  System_Action___ctor(
    v79,
    (Il2CppObject *)v27,
    Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__,
    0LL);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       IsBackDrawState,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_36;
  v82 = UnityEngine_GameObject__GetComponent_object_(
          IsBackDrawState,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                  (UnityEngine_Object_o *)Component_object,
                                                  0LL,
                                                  0LL);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
    goto LABEL_29;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v82, 0LL, 0LL);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
  {
LABEL_29:
    circleProgressList = this->fields.circleProgressList;
    if ( !circleProgressList )
      goto LABEL_36;
    max_length = circleProgressList->max_length;
    if ( max_length >= 1 )
    {
      v86 = 0;
      do
      {
        if ( v86 >= circleProgressList->max_length )
          sub_1BCAA44(IsBackDrawState, v29);
        IsBackDrawState = (UnityEngine_GameObject_o *)circleProgressList->m_Items[v86];
        if ( !IsBackDrawState )
          break;
        EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
          (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
          0LL,
          v83);
        if ( max_length == ++v86 )
          goto LABEL_41;
        circleProgressList = this->fields.circleProgressList;
      }
      while ( circleProgressList );
      goto LABEL_36;
    }
LABEL_41:
    EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(this, v79, v83);
  }
  else
  {
    if ( !Component_object )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
    if ( !v82 )
      goto LABEL_36;
    v82[2].monitor = v79;
    sub_1BCA784((PartyOrganizationUtility_o *)&v82[2].monitor, (int64_t)v79, v90, v91, v92, v93, v94, v95);
    UnityEngine_Animation__Play_69899248(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17386/*"bit_circlemeter_rotate"*/,
      0LL);
  }
}


void __fastcall EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(
        EventInfoCircleProgressControl_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x21
  UnityEngine_GameObject_o *titleBaseObject; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x22
  UnityEngine_GameObject_o *v43; // x0
  Il2CppObject *Component_object; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  EasingObject_o *v51; // x19
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x21
  Il2CppObject *v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_o *v60; // x20
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B169E9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__, v8, v9);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__, v12, v13);
    sub_1BCA7E0(&EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v14, v15);
    byte_4B169E9 = 1;
  }
  v16 = sub_1BCAA2C(EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)endAction, v25, v26, v27, v28, v29, v30);
  titleBaseObject = this->fields.titleBaseObject;
  if ( !titleBaseObject )
    goto LABEL_10;
  gameObject = UnityEngine_GameObject__get_gameObject(titleBaseObject, 0LL);
  *(float *)(v16 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v16 + 20) = 1151172608;
  v35 = sub_1BCAA2C(EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v32, v33, v34);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_10;
  *(_QWORD *)(v35 + 32) = v16;
  v42 = v35 + 32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), v16, v36, v37, v38, v39, v40, v41);
  if ( !*(_QWORD *)(v35 + 32) )
    goto LABEL_10;
  v61.fields.x = *(float *)(*(_QWORD *)(v35 + 32) + 16LL);
  v61.fields.y = 0.0;
  v61.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, v61, 0LL);
  if ( !*(_QWORD *)v42 )
    goto LABEL_10;
  *(_DWORD *)(v35 + 24) = *(_DWORD *)(*(_QWORD *)v42 + 16LL);
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v43,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v35 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)Component_object, v45, v46, v47, v48, v49, v50);
  v51 = *(EasingObject_o **)(v35 + 16);
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v35,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__,
    0LL);
  v56 = *(Il2CppObject **)(v35 + 32);
  v60 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v57, v58, v59);
  System_Action___ctor(
    v60,
    v56,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__,
    0LL);
  if ( !v51 )
LABEL_10:
    sub_1BCAA3C(titleBaseObject, v18);
  EasingObject__Play(v51, 0.5, v55, v60, 0.0, 0, 0LL);
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
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x3
  EventInfoCircleProgressControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x8
  int size; // w22
  System_Text_StringBuilder_o *v17; // x20
  int32_t v18; // w21
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  EventInfoCircleProgressControl_c *v23; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x19
  System_String_o *v25; // x0
  EventInfoCircleProgressControl_o *v26; // x19
  System_String_o *v27; // x0
  __int64 v28; // [xsp+0h] [xbp-60h] BYREF
  __int64 animType; // [xsp+8h] [xbp-58h] BYREF
  struct System_Collections_Generic_List_EventInfoUIBase_Data__o *datas; // [xsp+10h] [xbp-50h] BYREF
  intptr_t m_CachedPtr; // [xsp+18h] [xbp-48h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-44h] BYREF

  v4 = this;
  v32 = eventId;
  if ( (byte_4B169F2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Count__,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v11, v12);
    this = (EventInfoCircleProgressControl_o *)sub_1BCA7E0(&StringLiteral_863/*","*/, v13, v14);
    byte_4B169F2 = 1;
  }
  m_CachedPtr = 0;
  animType = 0LL;
  datas = 0LL;
  v28 = 0LL;
  progressDataList = v4->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_25;
  size = progressDataList->fields._size;
  v17 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Text_StringBuilder___ctor(v17, 0LL);
  if ( size >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 )
      {
        if ( !v17 )
          break;
        System_Text_StringBuilder__Append_61563116(v17, (System_String_o *)StringLiteral_863/*","*/, 0LL);
      }
      this = (EventInfoCircleProgressControl_o *)v4->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoCircleProgressControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0LL);
      if ( !v17 )
        break;
      System_Text_StringBuilder__Append_61563116(v17, (System_String_o *)this, 0LL);
      System_Text_StringBuilder__Append_61563116(v17, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v4->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      datas = this->fields.datas;
      v19 = System_Int64__ToString((int64_t)&datas, 0LL);
      System_Text_StringBuilder__Append_61563116(v17, v19, 0LL);
      System_Text_StringBuilder__Append_61563116(v17, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v4->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      animType = this->fields.animType;
      v20 = System_Int64__ToString((int64_t)&animType, 0LL);
      System_Text_StringBuilder__Append_61563116(v17, v20, 0LL);
      System_Text_StringBuilder__Append_61563116(v17, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v4->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      HIDWORD(v28) = HIDWORD(this->fields.assetData);
      v21 = System_Int32__ToString((int32_t)&v28 + 4, 0LL);
      System_Text_StringBuilder__Append_61563116(v17, v21, 0LL);
      System_Text_StringBuilder__Append_61563116(v17, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v4->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v18,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      LODWORD(v28) = BYTE1(this->fields.assetData2);
      v22 = System_Int32__ToString((int32_t)&v28, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_61563116(v17, v22, 0LL);
      if ( size == ++v18 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  }
LABEL_21:
  v23 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v23 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v23->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v25 = System_Int32__ToString((int32_t)&v32, 0LL);
  this = (EventInfoCircleProgressControl_o *)System_String__Concat_62401220(
                                               SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
                                               v25,
                                               0LL);
  if ( !v17 )
    goto LABEL_25;
  v26 = this;
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                             v17,
                             v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)v26, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressControl__SaveProgressExtraData(
        EventInfoCircleProgressControl_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Text_StringBuilder_o *v9; // x19
  System_String_o *appended; // x0
  __int64 v11; // x1
  struct EventInfoCircleProgressControl_ProgressData_o *progressExtraData; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *v13; // x8
  System_String_o *v14; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v15; // x8
  System_String_o *v16; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v17; // x8
  System_String_o *v18; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v19; // x8
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  EventInfoCircleProgressControl_c *v23; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  int32_t extraCircleState; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v29; // [xsp+8h] [xbp-48h] BYREF
  __int64 OldLevel; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v33; // [xsp+2Ch] [xbp-24h] BYREF

  v33 = eventId;
  if ( (byte_4B169F3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v7, v8);
    byte_4B169F3 = 1;
  }
  OldLevel = 0LL;
  OldPoint = 0LL;
  v29 = 0LL;
  extraCircleState = 0;
  v9 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Text_StringBuilder___ctor(v9, 0LL);
  progressExtraData = this->fields.progressExtraData;
  if ( !progressExtraData )
    goto LABEL_12;
  Id = progressExtraData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v9 )
    goto LABEL_12;
  System_Text_StringBuilder__Append_61563116(v9, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v9,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v13 = this->fields.progressExtraData;
  if ( !v13 )
    goto LABEL_12;
  OldPoint = v13->fields.OldPoint;
  v14 = System_Int64__ToString((int64_t)&OldPoint, 0LL);
  System_Text_StringBuilder__Append_61563116(v9, v14, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v9,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v15 = this->fields.progressExtraData;
  if ( !v15 )
    goto LABEL_12;
  OldLevel = v15->fields.OldLevel;
  v16 = System_Int64__ToString((int64_t)&OldLevel, 0LL);
  System_Text_StringBuilder__Append_61563116(v9, v16, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                  v9,
                                  (System_String_o *)StringLiteral_1541/*":"*/,
                                  0LL);
  v17 = this->fields.progressExtraData;
  if ( !v17
    || (HIDWORD(v29) = v17->fields.OldDispState,
        v18 = System_Int32__ToString((int32_t)&v29 + 4, 0LL),
        System_Text_StringBuilder__Append_61563116(v9, v18, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_61563116(
                                        v9,
                                        (System_String_o *)StringLiteral_1541/*":"*/,
                                        0LL),
        (v19 = this->fields.progressExtraData) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(appended, v11);
  }
  LODWORD(v29) = v19->fields.IsOldCompleted;
  v20 = System_Int32__ToString((int32_t)&v29, 0LL);
  System_Text_StringBuilder__Append_61563116(v9, v20, 0LL);
  System_Text_StringBuilder__Append_61563116(v9, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
  extraCircleState = this->fields.extraCircleState;
  v21 = System_Int32__ToString((int32_t)&extraCircleState, 0LL);
  System_Text_StringBuilder__Append_61563116(v9, v21, 0LL);
  v23 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, v22);
    v23 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v23->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v25 = System_Int32__ToString((int32_t)&v33, 0LL);
  v26 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v25, 0LL);
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                             v9,
                             v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v26, v27, 0LL);
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
  if ( (byte_4B169F1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B169F1 = 1;
  }
  v4 = EventInfoCircleProgressControl_TypeInfo;
  titleDispState = this->fields.titleDispState;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&v10, 0LL);
  v7 = System_String__Concat_62401220(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0LL);
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
  EventInfoCircleProgressObjectComponent_o *v15; // x20
  const MethodInfo *v16; // x2
  EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  const MethodInfo *v18; // x3
  struct EventUiEntity_o *v19; // x8
  UnityEngine_Component_o *extraCircleProgres; // x20
  int32_t extraCircleState; // w21
  float extraCircleHidePosX; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1

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
        sub_1BCAA44(this, method);
      v14 = &circleProgressList->obj.klass + (int)v13;
      v15 = (EventInfoCircleProgressObjectComponent_o *)v14[4];
      if ( !v15 )
        break;
      EventInfoCircleProgressObjectComponent__SetActive((EventInfoCircleProgressObjectComponent_o *)v14[4], 1, v10);
      ProgressData = EventInfoCircleProgressControl__GetProgressData(v4, v15->fields.circleId, v16);
      EventInfoCircleProgressObjectComponent__Setup(v15, v4, ProgressData, v18);
      if ( max_length == ++v13 )
        goto LABEL_13;
      circleProgressList = v4->fields.circleProgressList;
    }
    while ( circleProgressList );
LABEL_12:
    sub_1BCAA3C(this, method);
  }
LABEL_13:
  v19 = v4->fields.eventUiEntity;
  if ( !v19 )
    goto LABEL_12;
  EventInfoCircleProgressControl__LoadProgressExtraData(v4, v19->fields.eventId, v10);
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
    v24);
  EventInfoCircleProgressControl__SetupMuralButton(v4, v25);
}


void __fastcall EventInfoCircleProgressControl__SetupMuralButton(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  int64_t IsTargetScene; // x0
  int64_t v4; // x1
  char v5; // w20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct EventUiEntity_o *eventUiEntity; // x8

  IsTargetScene = EventInfoUIBase__IsTargetScene((EventInfoUIBase_o *)this, 72, 0LL);
  if ( !this->fields.muralButton )
    goto LABEL_12;
  v5 = IsTargetScene;
  IsTargetScene = (int64_t)UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.muralButton,
                             0LL);
  v4 = IsTargetScene;
  if ( (v5 & 1) != 0 )
  {
    if ( IsTargetScene )
      goto LABEL_11;
LABEL_12:
    sub_1BCAA3C(IsTargetScene, v4);
  }
  this->fields.muralButtonObject = (struct UnityEngine_GameObject_o *)IsTargetScene;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.muralButtonObject, IsTargetScene, v6, v7, v8, v9, v10, v11);
  IsTargetScene = (int64_t)this->fields.muralButtonObject;
  if ( !IsTargetScene )
    goto LABEL_12;
  if ( this->fields.extraCircleState == 2 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetScene, 1, 0LL);
    IsTargetScene = (int64_t)this->fields.muralButton;
    if ( IsTargetScene )
    {
      IsTargetScene = (*(__int64 (__fastcall **)(int64_t, struct EventUiEntity_o *, _QWORD))(*(_QWORD *)IsTargetScene
                                                                                           + 376LL))(
                        IsTargetScene,
                        this->fields.eventUiEntity,
                        *(_QWORD *)(*(_QWORD *)IsTargetScene + 384LL));
      eventUiEntity = this->fields.eventUiEntity;
      if ( eventUiEntity )
      {
        IsTargetScene = (int64_t)this->fields.muralButton;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTargetScene, 0, 0LL);
}


void __fastcall EventInfoCircleProgressControl___Initialization_b__30_0(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1BCAA3C(this, method);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B169FC & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoCircleProgressControl___c_TypeInfo, v1, v2);
    byte_4B169FC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoCircleProgressControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoCircleProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCircleProgressControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoCircleProgressControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressBarAnimObject_b__36_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_1BCAA3C(this, n);
  return progressData->fields.Point > progressData->fields.OldPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressCompleteAnimObjcet_b__37_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_1BCAA3C(this, n);
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
  __int64 v2; // x2
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v3; // x19
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  struct EventInfoCircleProgressControl_o *v6; // x8

  v3 = this;
  if ( (byte_4B169FE & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1BCA7E0(
                                                                       &TerminalPramsManager_TypeInfo,
                                                                       method,
                                                                       v2);
    byte_4B169FE = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC3 = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer
    || (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                           uiVoicePlayer,
                                                                           2,
                                                                           this[2].fields.__9__5->fields.invoke_impl,
                                                                           0LL),
        (v6 = v3->fields.__4__this) == 0LL)
    || (method = (const MethodInfo *)this,
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v6->fields.uiVoicePlayer) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)method, 0LL);
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
    sub_1BCAA3C(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v7->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__2(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__5; // x21
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_IEnumerator_o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4B169FF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__, v5, v6);
    byte_4B169FF = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v9, v10, v11, v12, v13, v14);
  }
  v15 = BasicHelper__DelayCall(0.5, _9__5, 1, 0LL);
  if ( !_4__this )
    sub_1BCAA3C(v15, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, v15, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__3(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v3; // x19
  struct EventInfoCircleProgressControl_o *_4__this; // x8
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x20
  struct EventInfoCircleProgressControl_o *v6; // x8
  struct EventInfoCircleProgressObjectComponent_o *progressBarAnimObject; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w12

  v3 = this;
  if ( (byte_4B169FD & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1BCA7E0(
                                                                       &TerminalPramsManager_TypeInfo,
                                                                       method,
                                                                       v2);
    byte_4B169FD = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC3 = 1;
  }
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !uiVoicePlayer )
    goto LABEL_17;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)EventInfoUIVoicePlayer__GetTargetVoiceData(
                                                                     uiVoicePlayer,
                                                                     1,
                                                                     this[2].fields.__9__5->fields.invoke_impl,
                                                                     0LL);
  v6 = v3->fields.__4__this;
  if ( !v6 )
    goto LABEL_17;
  method = (const MethodInfo *)this;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v6->fields.uiVoicePlayer;
  if ( !this )
    goto LABEL_17;
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)method, 0LL);
  progressBarAnimObject = v3->fields.progressBarAnimObject;
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
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_17:
    sub_1BCAA3C(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v3->fields.callback, 0LL);
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
    sub_1BCAA3C(_4__this, method);
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
  __int64 v3; // x3
  EventInfoCircleProgressControl___c__DisplayClass35_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__6; // x22
  EventInfoCircleProgressControl_o *_4__this; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B16A00 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1BCA7E0(
                                                                       &Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
                                                                       v5,
                                                                       v6);
    byte_4B16A00 = 1;
  }
  _9__6 = v4->fields.__9__6;
  _4__this = v4->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__6, (int64_t)_9__6, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return n->fields.Id == this->fields.id;
}