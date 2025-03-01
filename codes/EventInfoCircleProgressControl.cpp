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
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct EventInfoCircleProgressControl_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct EventInfoCircleProgressControl_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BFDF53 & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_4550/*"CircleProgressData_"*/, v8);
    sub_1C2E12C(&StringLiteral_4552/*"CircleProgressTitleState_"*/, v9);
    sub_1C2E12C(&StringLiteral_4551/*"CircleProgressExtraData_"*/, v10);
    byte_4BFDF53 = 1;
  }
  EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = (struct System_String_o *)StringLiteral_4552/*"CircleProgressTitleState_"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventInfoCircleProgressControl_TypeInfo->static_fields,
    StringLiteral_4552/*"CircleProgressTitleState_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_4550/*"CircleProgressData_"*/;
  static_fields = EventInfoCircleProgressControl_TypeInfo->static_fields;
  static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = (struct System_String_o *)StringLiteral_4550/*"CircleProgressData_"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_4551/*"CircleProgressExtraData_"*/;
  v20 = EventInfoCircleProgressControl_TypeInfo->static_fields;
  v20->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = (struct System_String_o *)StringLiteral_4551/*"CircleProgressExtraData_"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v20->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA,
    v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall EventInfoCircleProgressControl___ctor(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFDF52 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo, v3);
    byte_4BFDF52 = 1;
  }
  this->fields.extraCircleHidePosX = -212.0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData___ctor__);
  this->fields.progressDataList = (struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.progressDataList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4BFDF4D & 1) == 0 )
  {
    v18 = oldDispState;
    v19 = dispState;
    this = (EventInfoCircleProgressControl_o *)sub_1C2E12C(
                                                 &Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Add__,
                                                 *(_QWORD *)&id);
    dispState = v19;
    oldDispState = v18;
    byte_4BFDF4D = 1;
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
    sub_1C2E388(ProgressData, v21);
  }
  size = progressDataList->fields._size;
  v32 = (int64_t)ProgressData;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      progressDataList,
      ProgressData,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    progressDataList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v32;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 4), v32, v22, v23, v24, v25, v26, v27);
  }
}


void __fastcall EventInfoCircleProgressControl__Awake(EventInfoCircleProgressControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFDF3B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventPointMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    byte_4BFDF3B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.userEventPointMaster,
    (int64_t)Master_object,
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
  __int64 v19; // x26
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BFDF4E & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl_ProgressData_TypeInfo, *(_QWORD *)&id);
    byte_4BFDF4E = 1;
  }
  v19 = sub_1C2E378(EventInfoCircleProgressControl_ProgressData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1C2E388(v20, v21);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 64), (int64_t)ent, v22, v23, v24, v25, v26, v27);
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
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  __int64 v28; // x1
  EventInfoCircleProgressControl_c *v29; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE; // x21
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA; // x21
  System_String_o *v34; // x1
  System_String_o *v35; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x21
  System_String_o *v37; // x1
  System_String_o *v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BFDF47 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__, v1);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__, v6);
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, v7);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v8);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, v9);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4BFDF47 = 1;
  }
  v44 = 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C2E388(Master_object, v12);
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_3216144 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2E388(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
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
      v24 = sub_1C8010C(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( v25 )
    {
      v27 = *(_DWORD *)(v25 + 16);
      v44 = v27;
      if ( !v14 )
        sub_1C2E388(v25, v26);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v14,
             &entity,
             v27,
             (const MethodInfo_327B1CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C2E388(0LL, v28);
        if ( EventDetailEntity__IsEventCircleProgress((EventDetailEntity_o *)entity, 0LL) )
        {
          v29 = EventInfoCircleProgressControl_TypeInfo;
          if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
            v29 = EventInfoCircleProgressControl_TypeInfo;
          }
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v29->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
          v31 = System_Int32__ToString((int32_t)&v44, 0LL);
          v32 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v31, 0LL);
          UnityEngine_PlayerPrefs__DeleteKey(v32, 0LL);
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
          v34 = System_Int32__ToString((int32_t)&v44, 0LL);
          v35 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v34, 0LL);
          UnityEngine_PlayerPrefs__DeleteKey(v35, 0LL);
          SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = EventInfoCircleProgressControl_TypeInfo->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
          v37 = System_Int32__ToString((int32_t)&v44, 0LL);
          v38 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v37, 0LL);
          UnityEngine_PlayerPrefs__DeleteKey(v38, 0LL);
        }
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_33;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_33:
    v42 = sub_1C8010C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
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
  EventInfoCircleProgressControl___c_c *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x21
  System_Comparison_T__o *_9__39_0; // x22
  Il2CppObject *v24; // x23
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BFDF42 & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_EventPointBuffEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventPointBuffMaster___, v10);
    sub_1C2E12C(&DataManager_TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__get_Current__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__, v16);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__, v17);
    sub_1C2E12C(&EventInfoCircleProgressControl___c_TypeInfo, v18);
    byte_4BFDF42 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventPointBuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventPointBuffMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (EventPointBuffMaster_o *)EventPointBuffMaster__GetEntityListWithGroupId(
                                              Master_object,
                                              eventId,
                                              groupId,
                                              0LL);
  v21 = EventInfoCircleProgressControl___c_TypeInfo;
  v22 = (System_Collections_Generic_List_object__o *)Master_object;
  if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
    v21 = EventInfoCircleProgressControl___c_TypeInfo;
  }
  _9__39_0 = (System_Comparison_T__o *)v21->static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__39_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_EventPointBuffEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__39_0,
      v24,
      Method_EventInfoCircleProgressControl___c__GetEnableEventPointBuffEntity_b__39_0__,
      0LL);
    static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
    static_fields->__9__39_0 = (struct System_Comparison_EventPointBuffEntity__o *)_9__39_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
      (int64_t)_9__39_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v22 )
LABEL_20:
    sub_1C2E388(Master_object, v20);
  System_Collections_Generic_List_object___Sort_57070448(
    v22,
    _9__39_0,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_EventPointBuffEntity__Sort__);
  *nowEventPointBuff = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)nowEventPointBuff, 0LL, v32, v33, v34, v35, v36, v37);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v22,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventPointBuffEntity__GetEnumerator__);
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__MoveNext__);
    if ( !v38 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1C2E388(v38, v39);
    if ( EventPointBuffEntity__IsEnable((EventPointBuffEntity_o *)v47.fields._current, userPoint, 0LL) )
    {
      *nowEventPointBuff = (EventPointBuffEntity_o *)current;
      sub_1C2E0D0((PartyOrganizationUtility_o *)nowEventPointBuff, (int64_t)current, v41, v42, v43, v44, v45, v46);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventPointBuffEntity__Dispose__);
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressBarAnimObject(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v9; // x0
  System_Func_object__bool__o *_9__36_0; // x20
  Il2CppObject *v11; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BFDF3F & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_1C2E12C(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v3);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__, v4);
    sub_1C2E12C(&EventInfoCircleProgressControl___c_TypeInfo, v5);
    byte_4BFDF3F = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_1C2E388(result, method);
  if ( progressData->fields.Point <= progressData->fields.OldPoint )
  {
    circleProgressList = this->fields.circleProgressList;
    v9 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v9 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__bool__o *)v9->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__36_0,
        v11,
        Method_EventInfoCircleProgressControl___c__GetProgressBarAnimObject_b__36_0__,
        0LL);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__36_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
        (int64_t)_9__36_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__36_0,
                                                         (const MethodInfo_2FBCE08 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
  }
  return result;
}


EventInfoCircleProgressObjectComponent_o *__fastcall EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventInfoCircleProgressObjectComponent_o *result; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  EventInfoCircleProgressControl___c_c *v9; // x0
  System_Func_object__bool__o *_9__37_0; // x20
  Il2CppObject *v11; // x21
  struct EventInfoCircleProgressControl___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BFDF40 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, method);
    sub_1C2E12C(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v3);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__, v4);
    sub_1C2E12C(&EventInfoCircleProgressControl___c_TypeInfo, v5);
    byte_4BFDF40 = 1;
  }
  result = this->fields.extraCircleProgres;
  if ( !result || (progressData = result->fields.progressData) == 0LL )
    sub_1C2E388(result, method);
  if ( progressData->fields.IsOldCompleted || !progressData->fields.IsCompleted )
  {
    circleProgressList = this->fields.circleProgressList;
    v9 = EventInfoCircleProgressControl___c_TypeInfo;
    if ( !EventInfoCircleProgressControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl___c_TypeInfo);
      v9 = EventInfoCircleProgressControl___c_TypeInfo;
    }
    _9__37_0 = (System_Func_object__bool__o *)v9->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = EventInfoCircleProgressControl___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__37_0,
        v11,
        Method_EventInfoCircleProgressControl___c__GetProgressCompleteAnimObjcet_b__37_0__,
        0LL);
      static_fields = EventInfoCircleProgressControl___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_EventInfoCircleProgressObjectComponent__bool__o *)_9__37_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__37_0,
        (int64_t)_9__37_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    return (EventInfoCircleProgressObjectComponent_o *)BasicHelper__Find_object_(
                                                         (System_Object_array *)circleProgressList,
                                                         (System_Func_T__bool__o *)_9__37_0,
                                                         (const MethodInfo_2FBCE08 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
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
  struct System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__o *progressDataList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4BFDF4C & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___, *(_QWORD *)&id);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__, v5);
    sub_1C2E12C(&System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo, v6);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__, v7);
    sub_1C2E12C(&EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo, v8);
    byte_4BFDF4C = 1;
  }
  v9 = sub_1C2E378(EventInfoCircleProgressControl___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 16) = id;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.progressDataList,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_EventInfoCircleProgressControl_ProgressData___) )
  {
    progressDataList = this->fields.progressDataList;
    v13 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_EventInfoCircleProgressControl_ProgressData__TypeInfo);
    System_Predicate_object____ctor(
      v13,
      (Il2CppObject *)v9,
      Method_EventInfoCircleProgressControl___c__DisplayClass51_0__GetProgressData_b__0__,
      0LL);
    if ( progressDataList )
      return (EventInfoCircleProgressControl_ProgressData_o *)System_Collections_Generic_List_object___Find(
                                                                (System_Collections_Generic_List_object__o *)progressDataList,
                                                                (System_Predicate_T__o *)v13,
                                                                (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Find__);
LABEL_8:
    sub_1C2E388(v10, v11);
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
  NetworkManager_c *v8; // x0

  if ( (byte_4BFDF43 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BFDF43 = 1;
  }
  userEventPointMaster = this->fields.userEventPointMaster;
  if ( !userEventPointMaster )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BF81D5 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  return UserEventPointMaster__GetPoint(userEventPointMaster, v8->static_fields->userIdNumber, eventId, groupId, 0LL);
}


bool __fastcall EventInfoCircleProgressControl__HasSaveData(
        EventInfoCircleProgressControl_o *this,
        const MethodInfo *method)
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
  if ( (byte_4BFDF48 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, method);
    byte_4BFDF48 = 1;
  }
  eventUiEntity = v2->fields.eventUiEntity;
  if ( !eventUiEntity
    || (method = (const MethodInfo *)(unsigned int)eventUiEntity->fields.eventId,
        eventId = eventUiEntity->fields.eventId,
        (this = (EventInfoCircleProgressControl_o *)v2->fields.uiVoicePlayer) == 0LL) )
  {
    sub_1C2E388(this, method);
  }
  if ( !EventInfoUIVoicePlayer__HasSaveData((EventInfoUIVoicePlayer_o *)this, (int32_t)method, 0LL) )
    return 0;
  v4 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v4 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v4->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0LL);
  if ( !UnityEngine_PlayerPrefs__HasKey(v7, 0LL) )
    return 0;
  v8 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v8 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA = v8->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA;
  v10 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v11 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v10, 0LL);
  if ( UnityEngine_PlayerPrefs__HasKey(v11, 0LL) )
  {
    v12 = EventInfoCircleProgressControl_TypeInfo;
    if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
      v12 = EventInfoCircleProgressControl_TypeInfo;
    }
    SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v12->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
    v14 = System_Int32__ToString((int32_t)&eventId, 0LL);
    v15 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v14, 0LL);
    return UnityEngine_PlayerPrefs__HasKey(v15, 0LL);
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
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v12; // x22
  EventInfoUIVoicePlayer_o *uiVoicePlayer; // x0
  __int64 v14; // x1
  struct EventUiEntity_o *v15; // x8

  if ( (byte_4BFDF3C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, entity);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl__Initialization_b__30_0__, v10);
    byte_4BFDF3C = 1;
  }
  if ( entity )
  {
    this->fields.eventUiEntity = entity;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
      (int64_t)entity,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    eventUiEntity = this->fields.eventUiEntity;
    v12 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl__Initialization_b__30_0__,
      0LL);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v12, 0LL);
    v15 = this->fields.eventUiEntity;
    if ( !v15 || (uiVoicePlayer = this->fields.uiVoicePlayer) == 0LL )
      sub_1C2E388(uiVoicePlayer, v14);
    EventInfoUIVoicePlayer__LoadHistory(uiVoicePlayer, v15->fields.eventId, 0LL);
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *muralButton; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_IEnumerator_o *v20; // x0

  if ( (byte_4BFDF51 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, endAction);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_9360/*"MuralButton_in"*/, v7);
    byte_4BFDF51 = 1;
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
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
  v13 = UnityEngine_GameObject__GetComponent_object_(
          muralButton,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  muralButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0LL, 0LL);
  if ( ((unsigned __int8)muralButton & 1) != 0 )
  {
    v20 = BasicHelper__DelayCall(1.133, endAction, 1, 0LL);
    muralButton = (UnityEngine_GameObject_o *)UnityEngine_MonoBehaviour__StartCoroutine_70974992(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                v20,
                                                0LL);
  }
  else
  {
    if ( !v13 )
      goto LABEL_25;
    v13[2].monitor = endAction;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v13[2].monitor, (int64_t)endAction, v14, v15, v16, v17, v18, v19);
  }
  if ( !Component_object )
LABEL_25:
    sub_1C2E388(muralButton, v9);
  UnityEngine_Animation__Play_70734128(
    (UnityEngine_Animation_o *)Component_object,
    (System_String_o *)StringLiteral_9360/*"MuralButton_in"*/,
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
  if ( (byte_4BFDF4F & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1C2E12C(&CondType_TypeInfo, method);
    byte_4BFDF4F = 1;
  }
  titleReverseCondition = v2->fields.titleReverseCondition;
  if ( !titleReverseCondition )
    sub_1C2E388(this, method);
  CondKind = titleReverseCondition->fields.CondKind;
  CondId = titleReverseCondition->fields.CondId;
  CondValue = titleReverseCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL, 0LL);
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
  if ( (byte_4BFDF50 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl_o *)sub_1C2E12C(&CondType_TypeInfo, method);
    byte_4BFDF50 = 1;
  }
  extraCircleOpenCondition = v2->fields.extraCircleOpenCondition;
  if ( !extraCircleOpenCondition )
    sub_1C2E388(this, method);
  CondKind = extraCircleOpenCondition->fields.CondKind;
  CondId = extraCircleOpenCondition->fields.CondId;
  CondValue = extraCircleOpenCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
  UnityEngine_Object_o *ProgressCompleteAnimObjcet; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4BFDF3D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_4BFDF3D = 1;
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
  const MethodInfo *v19; // x3
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x19
  int max_length; // w8
  unsigned int v22; // w25
  EventInfoCircleProgressObjectComponent_o *v23; // x22
  int32_t circleId; // w20
  EventInfoCircleProgressControl_o *UserEventPoint; // x21
  const MethodInfo *v26; // x5
  const MethodInfo *v27; // x1
  int32_t lv; // w23
  _BOOL4 IsBackDrawState; // w24
  const MethodInfo *v30; // x2
  bool IsCompletedState; // w0
  int m_CancellationTokenSource; // w8
  int v33; // w20
  System_String_o *v34; // x22
  __int64 v35; // x21
  const MethodInfo *v36; // x3
  int v37; // w19
  EventInfoCircleProgressControl_o *v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x5
  EventInfoCircleProgressControl_o *v41; // x23
  EventInfoCircleProgressControl_o *v42; // x29
  int32_t v43; // w26
  int32_t v44; // w25
  System_Object_array *v45; // x27
  System_Func_object__bool__o *v46; // x28
  Il2CppObject *object; // x28
  const MethodInfo *v48; // x2
  int v49; // w27
  int32_t v50; // w24
  char v51; // w28
  bool v52; // w8
  bool isCompleted; // w8
  bool isOldCompleted; // [xsp+8h] [xbp-A8h]
  const MethodInfo *v55; // [xsp+18h] [xbp-98h]
  EventInfoCircleProgressControl_o *v56; // [xsp+28h] [xbp-88h]
  EventInfoCircleProgressControl_o *v57; // [xsp+30h] [xbp-80h]
  EventPointBuffEntity_o *ent; // [xsp+38h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+40h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  v3 = this;
  eventIda = eventId;
  if ( (byte_4BFDF45 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___, *(_QWORD *)&eventId);
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, v4);
    sub_1C2E12C(&System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__Clear__, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__, v8);
    sub_1C2E12C(&EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo, v9);
    this = (EventInfoCircleProgressControl_o *)sub_1C2E12C(&StringLiteral_1/*""*/, v10);
    byte_4BFDF45 = 1;
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
  v17 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_DATA, v16, 0LL);
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
        v22 = 0;
        while ( v22 < max_length )
        {
          v23 = circleProgressList->m_Items[v22];
          if ( !v23 )
            goto LABEL_58;
          circleId = v23->fields.circleId;
          UserEventPoint = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                                 v3,
                                                                 eventIda,
                                                                 circleId,
                                                                 v19);
          EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
            UserEventPoint,
            eventIda,
            circleId,
            (int64_t)UserEventPoint,
            &nowEventPointBuff,
            v26);
          if ( nowEventPointBuff )
            lv = nowEventPointBuff->fields.lv;
          else
            lv = 1;
          IsBackDrawState = EventInfoCircleProgressObjectComponent__IsBackDrawState(v23, v27);
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(v23, IsBackDrawState, v30);
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
            v55);
          max_length = circleProgressList->max_length;
          if ( (int)++v22 >= max_length )
            return;
        }
        goto LABEL_59;
      }
      return;
    }
LABEL_58:
    sub_1C2E388(this, *(_QWORD *)&eventId);
  }
  if ( !String )
    goto LABEL_58;
  this = (EventInfoCircleProgressControl_o *)System_String__Split(String, 0x2Cu, 0, 0LL);
  if ( !this )
    goto LABEL_58;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v33 = 0;
    v56 = v3;
    v57 = this;
    while ( v33 < (unsigned int)m_CancellationTokenSource )
    {
      v34 = (System_String_o *)*((_QWORD *)&this->fields.datas + v33);
      v35 = sub_1C2E378(EventInfoCircleProgressControl___c__DisplayClass43_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v35, 0LL);
      if ( !v34 )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)System_String__Split(v34, 0x3Au, 0, 0LL);
      if ( !this )
        goto LABEL_58;
      v37 = (int)this->fields.m_CancellationTokenSource;
      v38 = this;
      if ( v37 < 1 )
      {
        v39 = 0;
        if ( !v35 )
          goto LABEL_58;
      }
      else
      {
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)this->fields.datas, 0LL);
        v39 = (int)this;
        if ( !v35 )
          goto LABEL_58;
      }
      *(_DWORD *)(v35 + 16) = v39;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressControl__GetUserEventPoint(
                                                   v3,
                                                   eventIda,
                                                   v39,
                                                   v36);
      v41 = this;
      if ( v37 < 2 )
      {
        v42 = 0LL;
      }
      else
      {
        if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int64__Parse(*(System_String_o **)&v38->fields.playType, 0LL);
        v42 = this;
      }
      EventInfoCircleProgressControl__GetEnableEventPointBuffEntity(
        this,
        eventIda,
        *(_DWORD *)(v35 + 16),
        (int64_t)v41,
        &ent,
        v40);
      v43 = ent ? ent->fields.lv : 1;
      if ( v37 < 3 )
      {
        v44 = 0;
      }
      else
      {
        if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 2 )
          break;
        v44 = System_Int32__Parse((System_String_o *)v38->fields.assetData, 0LL);
      }
      v45 = (System_Object_array *)v3->fields.circleProgressList;
      v46 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_EventInfoCircleProgressObjectComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v35,
        Method_EventInfoCircleProgressControl___c__DisplayClass43_0__LoadProgressData_b__0__,
        0LL);
      object = BasicHelper__Find_object_(
                 v45,
                 (System_Func_T__bool__o *)v46,
                 (const MethodInfo_2FBCE08 *)Method_BasicHelper_Find_EventInfoCircleProgressObjectComponent___);
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
                                                     *(const MethodInfo **)&eventId);
        v49 = (unsigned __int8)this & 1;
      }
      else
      {
        v49 = 0;
      }
      if ( v37 < 4 )
      {
        v50 = 0;
      }
      else
      {
        if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 3 )
          break;
        this = (EventInfoCircleProgressControl_o *)System_Int32__Parse((System_String_o *)v38->fields.assetData2, 0LL);
        v50 = (int)this;
      }
      if ( !object )
        goto LABEL_58;
      this = (EventInfoCircleProgressControl_o *)EventInfoCircleProgressObjectComponent__IsCompletedState(
                                                   (EventInfoCircleProgressObjectComponent_o *)object,
                                                   v49,
                                                   v48);
      v51 = (char)this;
      if ( v37 >= 5 )
      {
        if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 4 )
          break;
        v52 = System_Int32__Parse((System_String_o *)v38->fields.assetDataList, 0LL) == 1;
      }
      else
      {
        v52 = 0;
      }
      isOldCompleted = v52;
      isCompleted = v51 & 1;
      v3 = v56;
      EventInfoCircleProgressControl__AddProgressData(
        v56,
        *(_DWORD *)(v35 + 16),
        (int64_t)v41,
        (int64_t)v42,
        v43,
        v44,
        v49,
        v50,
        isCompleted,
        isOldCompleted,
        ent,
        v55);
      this = v57;
      ++v33;
      m_CancellationTokenSource = (int)v57->fields.m_CancellationTokenSource;
      if ( v33 >= m_CancellationTokenSource )
        return;
    }
LABEL_59:
    sub_1C2E390(this, *(_QWORD *)&eventId);
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
  int32_t v28; // w23
  _BOOL8 IsCompletedState; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *ProgressData; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x1
  int32_t v38; // w8
  int32_t lv; // w24
  int32_t v40; // w25
  const MethodInfo *v41; // x2
  char v42; // w27
  int32_t v43; // w26
  int v44; // w27
  char v45; // w28
  bool isOldCompleted; // w8
  struct EventInfoCircleProgressControl_ProgressData_o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t v54; // w0
  int32_t *p_extraCircleState; // x20
  const MethodInfo *v56; // [xsp+18h] [xbp-88h]
  EventPointBuffEntity_o *ent; // [xsp+28h] [xbp-78h] BYREF
  EventPointBuffEntity_o *nowEventPointBuff; // [xsp+30h] [xbp-70h] BYREF
  int32_t eventIda; // [xsp+3Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_4BFDF46 & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&StringLiteral_1/*""*/, v4);
    byte_4BFDF46 = 1;
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
  v8 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v7, 0LL);
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
          v28 = (unsigned __int8)IsNullOrEmpty & 1;
          IsCompletedState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                               this->fields.extraCircleProgres,
                               v28,
                               v27);
          ProgressData = EventInfoCircleProgressControl__CreateProgressData(
                           (EventInfoCircleProgressControl_o *)IsCompletedState,
                           circleId,
                           (int64_t)UserEventPoint,
                           (int64_t)UserEventPoint,
                           v17,
                           v17,
                           v28,
                           v28,
                           IsCompletedState,
                           IsCompletedState,
                           nowEventPointBuff,
                           v56);
          this->fields.progressExtraData = ProgressData;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.progressExtraData,
            (int64_t)ProgressData,
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
    sub_1C2E388(IsNullOrEmpty, v11);
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
    v25 = IsBackDrawState;
    v21 = 0;
    goto LABEL_23;
  }
  v21 = System_Int32__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0LL);
  IsBackDrawState = EventInfoCircleProgressControl__GetUserEventPoint(this, eventIda, v21, v22);
  v25 = IsBackDrawState;
  if ( v19 == 1 )
  {
LABEL_23:
    v26 = 0LL;
    goto LABEL_24;
  }
  if ( *((_DWORD *)v20 + 6) <= 1u )
    goto LABEL_50;
  IsBackDrawState = System_Int64__Parse(*((System_String_o **)v20 + 5), 0LL);
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
    v40 = System_Int32__Parse(*((System_String_o **)v20 + 6), 0LL);
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
    if ( *((_DWORD *)v20 + 6) <= 3u )
      goto LABEL_50;
    v43 = System_Int32__Parse(*((System_String_o **)v20 + 7), 0LL);
  }
  IsNullOrEmpty = this->fields.extraCircleProgres;
  if ( !IsNullOrEmpty )
    goto LABEL_49;
  v44 = v42 & 1;
  IsBackDrawState = EventInfoCircleProgressObjectComponent__IsCompletedState(
                      (EventInfoCircleProgressObjectComponent_o *)IsNullOrEmpty,
                      v44,
                      v41);
  v45 = IsBackDrawState;
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
  v47 = EventInfoCircleProgressControl__CreateProgressData(
          (EventInfoCircleProgressControl_o *)IsBackDrawState,
          v21,
          v25,
          v26,
          lv,
          v40,
          v44,
          v43,
          v45 & 1,
          isOldCompleted,
          ent,
          v56);
  this->fields.progressExtraData = v47;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.progressExtraData, (int64_t)v47, v48, v49, v50, v51, v52, v53);
  if ( v19 > 5 )
  {
    if ( *((_DWORD *)v20 + 6) > 5u )
    {
      v54 = System_Int32__Parse(*((System_String_o **)v20 + 9), 0LL);
      this->fields.extraCircleState = v54;
      p_extraCircleState = &this->fields.extraCircleState;
      if ( v54 )
        return;
      goto LABEL_46;
    }
LABEL_50:
    sub_1C2E390(IsBackDrawState, v11);
  }
  this->fields.extraCircleState = 0;
  p_extraCircleState = &this->fields.extraCircleState;
LABEL_46:
  if ( EventInfoCircleProgressControl__IsExtraCircleDisp(this, v11) )
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
  __int64 v12; // x1
  int32_t v13; // w0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = eventId;
  if ( (byte_4BFDF44 & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&StringLiteral_1/*""*/, v4);
    byte_4BFDF44 = 1;
  }
  v5 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v5 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE = v5->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE;
  v7 = System_Int32__ToString((int32_t)&v14, 0LL);
  v8 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v7, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( System_String__IsNullOrEmpty(String, 0LL) )
  {
    IsBackDrawState = EventInfoCircleProgressControl__IsBackDrawState(this, v10);
    if ( !this )
      sub_1C2E388(IsBackDrawState, v12);
    v13 = IsBackDrawState;
  }
  else
  {
    v13 = System_Int32__Parse(String, 0LL);
  }
  this->fields.titleDispState = v13;
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
  __int64 v4; // x1
  EventInfoUIVoicePlayer_o *v5; // x0

  if ( (byte_4BFDF3A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFDF3A = 1;
  }
  uiVoicePlayer = (UnityEngine_Object_o *)this->fields.uiVoicePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiVoicePlayer, 0LL, 0LL) )
  {
    v5 = this->fields.uiVoicePlayer;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    EventInfoUIVoicePlayer__Stop(v5, 0LL);
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
  const MethodInfo *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressBarAnimObject; // x0
  UnityEngine_GameObject_o **v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x1
  EventInfoCircleProgressObjectComponent_o *ProgressCompleteAnimObjcet; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Object_o *v49; // x24
  __int64 v50; // x9
  EventInfoCircleProgressDrawComponent_o *v51; // x19
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x2
  UnityEngine_Object_o *v54; // x22
  const MethodInfo *v55; // x1
  System_Action_o *v56; // x21
  System_Collections_IEnumerator_o *v57; // x0
  EventInfoCircleProgressObjectComponent_o *v58; // x19
  System_Action_o *v59; // x21
  const MethodInfo *v60; // x2
  System_Action_o *v61; // x21
  Il2CppObject *Component_object; // x20
  Il2CppObject *v63; // x22
  const MethodInfo *v64; // x2
  struct EventInfoCircleProgressObjectComponent_array *circleProgressList; // x8
  int max_length; // w20
  il2cpp_array_size_t v67; // w22
  EventInfoCircleProgressObjectComponent_o *extraCircleProgres; // x19
  System_Action_o *v69; // x21
  const MethodInfo *v70; // x2
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4BFDF3E & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__, v10);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__, v11);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__, v12);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__, v13);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__, v14);
    sub_1C2E12C(&EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_17518/*"bit_circlemeter_rotate"*/, v16);
    byte_4BFDF3E = 1;
  }
  v17 = sub_1C2E378(EventInfoCircleProgressControl___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_36;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)callback, v26, v27, v28, v29, v30, v31);
  if ( type != 1 )
    goto LABEL_40;
  ProgressBarAnimObject = EventInfoCircleProgressControl__GetProgressBarAnimObject(this, v32);
  *(_QWORD *)(v17 + 24) = ProgressBarAnimObject;
  v34 = (UnityEngine_GameObject_o **)(v17 + 24);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)ProgressBarAnimObject, v35, v36, v37, v38, v39, v40);
  ProgressCompleteAnimObjcet = EventInfoCircleProgressControl__GetProgressCompleteAnimObjcet(this, v41);
  *(_QWORD *)(v17 + 40) = ProgressCompleteAnimObjcet;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)(v17 + 40),
    (int64_t)ProgressCompleteAnimObjcet,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = *(UnityEngine_Object_o **)(v17 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
    IsBackDrawState = *v34;
    if ( *v34 )
    {
      IsBackDrawState = (UnityEngine_GameObject_o *)EventInfoCircleProgressObjectComponent__IsBackDrawState(
                                                      (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
                                                      v19);
      if ( *v34 )
      {
        v50 = 40LL;
        if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
          v50 = 48LL;
        v51 = *(EventInfoCircleProgressDrawComponent_o **)((char *)&(*v34)->klass + v50);
        v52 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(
          v52,
          (Il2CppObject *)v17,
          Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__3__,
          0LL);
        if ( v51 )
        {
          EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(v51, v52, v53);
          return;
        }
      }
    }
LABEL_36:
    sub_1C2E388(IsBackDrawState, v19);
  }
  v54 = *(UnityEngine_Object_o **)(v17 + 40);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
    v56 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v17,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__0__,
      0LL);
    v57 = BasicHelper__DelayCall(1.0, v56, 1, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v57, 0LL);
    v58 = *(EventInfoCircleProgressObjectComponent_o **)(v17 + 40);
    v59 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v17,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__1__,
      0LL);
    if ( !v58 )
      goto LABEL_36;
    EventInfoCircleProgressObjectComponent__PlayCompleteAnim(v58, v59, v60);
    return;
  }
  if ( this->fields.titleDispState || !EventInfoCircleProgressControl__IsBackDrawState(this, v55) )
  {
    if ( this->fields.extraCircleState == 1 )
    {
      extraCircleProgres = this->fields.extraCircleProgres;
      v69 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        v69,
        (Il2CppObject *)v17,
        Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__2__,
        0LL);
      if ( !extraCircleProgres )
        goto LABEL_36;
      EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(extraCircleProgres, v69, v70);
      return;
    }
LABEL_40:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 32), 0LL);
    return;
  }
  v61 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v17,
    Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__4__,
    0LL);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_36;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       IsBackDrawState,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  IsBackDrawState = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !IsBackDrawState )
    goto LABEL_36;
  v63 = UnityEngine_GameObject__GetComponent_object_(
          IsBackDrawState,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
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
  IsBackDrawState = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v63, 0LL, 0LL);
  if ( ((unsigned __int8)IsBackDrawState & 1) != 0 )
  {
LABEL_29:
    circleProgressList = this->fields.circleProgressList;
    if ( !circleProgressList )
      goto LABEL_36;
    max_length = circleProgressList->max_length;
    if ( max_length >= 1 )
    {
      v67 = 0;
      do
      {
        if ( v67 >= circleProgressList->max_length )
          sub_1C2E390(IsBackDrawState, v19);
        IsBackDrawState = (UnityEngine_GameObject_o *)circleProgressList->m_Items[v67];
        if ( !IsBackDrawState )
          break;
        EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
          (EventInfoCircleProgressObjectComponent_o *)IsBackDrawState,
          0LL,
          v64);
        if ( max_length == ++v67 )
          goto LABEL_41;
        circleProgressList = this->fields.circleProgressList;
      }
      while ( circleProgressList );
      goto LABEL_36;
    }
LABEL_41:
    EventInfoCircleProgressControl__PlayTitleAnimToBackDraw(this, v61, v64);
  }
  else
  {
    if ( !Component_object )
      goto LABEL_36;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
    if ( !v63 )
      goto LABEL_36;
    v63[2].monitor = v61;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v63[2].monitor, (int64_t)v61, v71, v72, v73, v74, v75, v76);
    UnityEngine_Animation__Play_70734128(
      (UnityEngine_Animation_o *)Component_object,
      (System_String_o *)StringLiteral_17518/*"bit_circlemeter_rotate"*/,
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
  int64_t v10; // x21
  UnityEngine_GameObject_o *titleBaseObject; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x22
  UnityEngine_GameObject_o *v34; // x0
  Il2CppObject *Component_object; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  EasingObject_o *v42; // x19
  System_Action_o *v43; // x21
  Il2CppObject *v44; // x22
  System_Action_o *v45; // x20
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFDF41 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, endAction);
    sub_1C2E12C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__, v6);
    sub_1C2E12C(&EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo, v7);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__, v8);
    sub_1C2E12C(&EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo, v9);
    byte_4BFDF41 = 1;
  }
  v10 = sub_1C2E378(EventInfoCircleProgressControl___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 32) = endAction;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)endAction, v19, v20, v21, v22, v23, v24);
  titleBaseObject = this->fields.titleBaseObject;
  if ( !titleBaseObject )
    goto LABEL_10;
  gameObject = UnityEngine_GameObject__get_gameObject(titleBaseObject, 0LL);
  *(float *)(v10 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v10 + 20) = 1151172608;
  v26 = sub_1C2E378(EventInfoCircleProgressControl___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_10;
  *(_QWORD *)(v26 + 32) = v10;
  v33 = v26 + 32;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 32), v10, v27, v28, v29, v30, v31, v32);
  if ( !*(_QWORD *)(v26 + 32) )
    goto LABEL_10;
  v46.fields.x = *(float *)(*(_QWORD *)(v26 + 32) + 16LL);
  v46.fields.y = 0.0;
  v46.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(this->fields.titleBaseObject, v46, 0LL);
  if ( !*(_QWORD *)v33 )
    goto LABEL_10;
  *(_DWORD *)(v26 + 24) = *(_DWORD *)(*(_QWORD *)v33 + 16LL);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v34,
                       (const MethodInfo_30245F4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v26 + 16) = Component_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)Component_object, v36, v37, v38, v39, v40, v41);
  v42 = *(EasingObject_o **)(v26 + 16);
  v43 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v26,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_1__PlayTitleAnimToBackDraw_b__0__,
    0LL);
  v44 = *(Il2CppObject **)(v26 + 32);
  v45 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    v44,
    Method_EventInfoCircleProgressControl___c__DisplayClass38_0__PlayTitleAnimToBackDraw_b__1__,
    0LL);
  if ( !v42 )
LABEL_10:
    sub_1C2E388(titleBaseObject, v12);
  EasingObject__Play(v42, 0.5, v43, v45, 0.0, 0, 0LL);
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
    sub_1C2E388(this, method);
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
  if ( (byte_4BFDF4A & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Count__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__, v5);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_1525/*":"*/, v7);
    this = (EventInfoCircleProgressControl_o *)sub_1C2E12C(&StringLiteral_845/*","*/, v8);
    byte_4BFDF4A = 1;
  }
  m_CachedPtr = 0;
  animType = 0LL;
  datas = 0LL;
  v22 = 0LL;
  progressDataList = v3->fields.progressDataList;
  if ( !progressDataList )
    goto LABEL_25;
  size = progressDataList->fields._size;
  v11 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
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
        System_Text_StringBuilder__Append_62396736(v11, (System_String_o *)StringLiteral_845/*","*/, 0LL);
      }
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      m_CachedPtr = this->fields.m_CachedPtr;
      this = (EventInfoCircleProgressControl_o *)System_Int32__ToString((int32_t)&m_CachedPtr, 0LL);
      if ( !v11 )
        break;
      System_Text_StringBuilder__Append_62396736(v11, (System_String_o *)this, 0LL);
      System_Text_StringBuilder__Append_62396736(v11, (System_String_o *)StringLiteral_1525/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      datas = this->fields.datas;
      v13 = System_Int64__ToString((int64_t)&datas, 0LL);
      System_Text_StringBuilder__Append_62396736(v11, v13, 0LL);
      System_Text_StringBuilder__Append_62396736(v11, (System_String_o *)StringLiteral_1525/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      animType = this->fields.animType;
      v14 = System_Int64__ToString((int64_t)&animType, 0LL);
      System_Text_StringBuilder__Append_62396736(v11, v14, 0LL);
      System_Text_StringBuilder__Append_62396736(v11, (System_String_o *)StringLiteral_1525/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      HIDWORD(v22) = HIDWORD(this->fields.assetData);
      v15 = System_Int32__ToString((int32_t)&v22 + 4, 0LL);
      System_Text_StringBuilder__Append_62396736(v11, v15, 0LL);
      System_Text_StringBuilder__Append_62396736(v11, (System_String_o *)StringLiteral_1525/*":"*/, 0LL);
      this = (EventInfoCircleProgressControl_o *)v3->fields.progressDataList;
      if ( !this )
        break;
      this = (EventInfoCircleProgressControl_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v12,
                                                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventInfoCircleProgressControl_ProgressData__get_Item__);
      if ( !this )
        break;
      LODWORD(v22) = BYTE1(this->fields.assetData2);
      v16 = System_Int32__ToString((int32_t)&v22, 0LL);
      this = (EventInfoCircleProgressControl_o *)System_Text_StringBuilder__Append_62396736(v11, v16, 0LL);
      if ( size == ++v12 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1C2E388(this, *(_QWORD *)&eventId);
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
  this = (EventInfoCircleProgressControl_o *)System_String__Concat_63235584(
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
  __int64 v8; // x1
  struct EventInfoCircleProgressControl_ProgressData_o *progressExtraData; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *v10; // x8
  System_String_o *v11; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v12; // x8
  System_String_o *v13; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v14; // x8
  System_String_o *v15; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *v16; // x8
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  EventInfoCircleProgressControl_c *v19; // x0
  System_String_o *SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x20
  System_String_o *v23; // x0
  int32_t extraCircleState; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-48h] BYREF
  __int64 OldLevel; // [xsp+10h] [xbp-40h] BYREF
  int64_t OldPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t Id; // [xsp+28h] [xbp-28h] BYREF
  int32_t v29; // [xsp+2Ch] [xbp-24h] BYREF

  v29 = eventId;
  if ( (byte_4BFDF4B & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_1525/*":"*/, v5);
    byte_4BFDF4B = 1;
  }
  OldLevel = 0LL;
  OldPoint = 0LL;
  v25 = 0LL;
  extraCircleState = 0;
  v6 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0LL);
  progressExtraData = this->fields.progressExtraData;
  if ( !progressExtraData )
    goto LABEL_12;
  Id = progressExtraData->fields.Id;
  appended = System_Int32__ToString((int32_t)&Id, 0LL);
  if ( !v6 )
    goto LABEL_12;
  System_Text_StringBuilder__Append_62396736(v6, appended, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62396736(
                                  v6,
                                  (System_String_o *)StringLiteral_1525/*":"*/,
                                  0LL);
  v10 = this->fields.progressExtraData;
  if ( !v10 )
    goto LABEL_12;
  OldPoint = v10->fields.OldPoint;
  v11 = System_Int64__ToString((int64_t)&OldPoint, 0LL);
  System_Text_StringBuilder__Append_62396736(v6, v11, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62396736(
                                  v6,
                                  (System_String_o *)StringLiteral_1525/*":"*/,
                                  0LL);
  v12 = this->fields.progressExtraData;
  if ( !v12 )
    goto LABEL_12;
  OldLevel = v12->fields.OldLevel;
  v13 = System_Int64__ToString((int64_t)&OldLevel, 0LL);
  System_Text_StringBuilder__Append_62396736(v6, v13, 0LL);
  appended = (System_String_o *)System_Text_StringBuilder__Append_62396736(
                                  v6,
                                  (System_String_o *)StringLiteral_1525/*":"*/,
                                  0LL);
  v14 = this->fields.progressExtraData;
  if ( !v14
    || (HIDWORD(v25) = v14->fields.OldDispState,
        v15 = System_Int32__ToString((int32_t)&v25 + 4, 0LL),
        System_Text_StringBuilder__Append_62396736(v6, v15, 0LL),
        appended = (System_String_o *)System_Text_StringBuilder__Append_62396736(
                                        v6,
                                        (System_String_o *)StringLiteral_1525/*":"*/,
                                        0LL),
        (v16 = this->fields.progressExtraData) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(appended, v8);
  }
  LODWORD(v25) = v16->fields.IsOldCompleted;
  v17 = System_Int32__ToString((int32_t)&v25, 0LL);
  System_Text_StringBuilder__Append_62396736(v6, v17, 0LL);
  System_Text_StringBuilder__Append_62396736(v6, (System_String_o *)StringLiteral_1525/*":"*/, 0LL);
  extraCircleState = this->fields.extraCircleState;
  v18 = System_Int32__ToString((int32_t)&extraCircleState, 0LL);
  System_Text_StringBuilder__Append_62396736(v6, v18, 0LL);
  v19 = EventInfoCircleProgressControl_TypeInfo;
  if ( !EventInfoCircleProgressControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoCircleProgressControl_TypeInfo);
    v19 = EventInfoCircleProgressControl_TypeInfo;
  }
  SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA = v19->static_fields->SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA;
  v21 = System_Int32__ToString((int32_t)&v29, 0LL);
  v22 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_EXTRA_DATA, v21, 0LL);
  v23 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                             v6,
                             v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v22, v23, 0LL);
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
  if ( (byte_4BFDF49 & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl_TypeInfo, *(_QWORD *)&eventId);
    byte_4BFDF49 = 1;
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
  v7 = System_String__Concat_63235584(SAVE_KEY_PREFIX_CIRCLE_PROGRESS_TITLE_STATE, v6, 0LL);
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
        sub_1C2E390(this, method);
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
    sub_1C2E388(this, method);
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
    sub_1C2E388(IsTargetScene, v4);
  }
  this->fields.muralButtonObject = (struct UnityEngine_GameObject_o *)IsTargetScene;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.muralButtonObject, IsTargetScene, v6, v7, v8, v9, v10, v11);
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
    sub_1C2E388(this, method);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFDF54 & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoCircleProgressControl___c_TypeInfo, v1);
    byte_4BFDF54 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(EventInfoCircleProgressControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoCircleProgressControl___c_TypeInfo->static_fields->__9 = (struct EventInfoCircleProgressControl___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventInfoCircleProgressControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, a);
  return b->fields.eventPoint - a->fields.eventPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressBarAnimObject_b__36_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_1C2E388(this, n);
  return progressData->fields.Point > progressData->fields.OldPoint;
}


bool __fastcall EventInfoCircleProgressControl___c___GetProgressCompleteAnimObjcet_b__37_0(
        EventInfoCircleProgressControl___c_o *this,
        EventInfoCircleProgressObjectComponent_o *n,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8

  if ( !n || (progressData = n->fields.progressData) == 0LL )
    sub_1C2E388(this, n);
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

  v2 = this;
  if ( (byte_4BFDF56 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BFDF56 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BF8444 = 1;
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
                                                                           this[2].fields.__9__5->fields.invoke_impl,
                                                                           0LL),
        (v5 = v2->fields.__4__this) == 0LL)
    || (method = (const MethodInfo *)this,
        (this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer) == 0LL) )
  {
LABEL_14:
    sub_1C2E388(this, method);
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
    sub_1C2E388(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
  ActionExtensions__Call(v7->fields.callback, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__2(
        EventInfoCircleProgressControl___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *_9__5; // x21
  UnityEngine_MonoBehaviour_o *_4__this; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_IEnumerator_o *v12; // x0
  __int64 v13; // x1

  if ( (byte_4BFDF57 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__, v3);
    byte_4BFDF57 = 1;
  }
  _9__5 = this->fields.__9__5;
  _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v6, v7, v8, v9, v10, v11);
  }
  v12 = BasicHelper__DelayCall(0.5, _9__5, 1, 0LL);
  if ( !_4__this )
    sub_1C2E388(v12, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992(_4__this, v12, 0LL);
}


void __fastcall EventInfoCircleProgressControl___c__DisplayClass35_0___PlayAnim_b__3(
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
  if ( (byte_4BFDF55 & 1) == 0 )
  {
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BFDF55 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  uiVoicePlayer = _4__this->fields.uiVoicePlayer;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BF8444 = 1;
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
                                                                     this[2].fields.__9__5->fields.invoke_impl,
                                                                     0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_17;
  method = (const MethodInfo *)this;
  this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)v5->fields.uiVoicePlayer;
  if ( !this )
    goto LABEL_17;
  EventInfoUIVoicePlayer__Play((EventInfoUIVoicePlayer_o *)this, (EventInfoUIVoicePlayer_VoiceData_o *)method, 0LL);
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
    sub_1C2E388(this, method);
  EventInfoCircleProgressControl__SaveAllData((EventInfoCircleProgressControl_o *)this, method);
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
    sub_1C2E388(_4__this, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4BFDF58 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (EventInfoCircleProgressControl___c__DisplayClass35_0_o *)sub_1C2E12C(
                                                                       &Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
                                                                       v4);
    byte_4BFDF58 = 1;
  }
  _9__6 = v3->fields.__9__6;
  _4__this = v3->fields.__4__this;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v3,
      Method_EventInfoCircleProgressControl___c__DisplayClass35_0__PlayAnim_b__6__,
      0LL);
    v3->fields.__9__6 = _9__6;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v3->fields.__9__6, (int64_t)_9__6, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C2E388(this, method);
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
    sub_1C2E388(_4__this, method);
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
    sub_1C2E388(this, method);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
  return n->fields.Id == this->fields.id;
}