void __fastcall EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EB14E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v8, v9, v10);
    byte_42EB14E = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.uniqueIdCacheList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    450,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


System_Int32_array *__fastcall EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_HashSet_int__o *v30; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v35; // x20
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 v41; // x20
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x3
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0

  if ( (byte_42EB14B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    byte_42EB14B = 1;
  }
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  v31 = System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v31 )
    sub_B5D69C(0LL, v32);
  klass = v31->klass;
  v35 = v31;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v31, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0LL, v33);
  }
  v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v35,
          *(_QWORD *)(p_method + 8));
  if ( !v41 )
    sub_B5D69C(0LL, v39);
  while ( 1 )
  {
    v42 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_15;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_15:
      v45 = sub_AF54C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_22;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_22:
      v50 = sub_AF54C0(v41, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0LL, v46);
    }
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v41, *(_QWORD *)(v50 + 8));
    if ( !v51 )
      sub_B5D69C(0LL, v52);
    if ( *(_DWORD *)(v51 + 24) == eventId )
    {
      if ( !v30 )
        sub_B5D69C(v51, v52);
      System_Collections_Generic_HashSet_int___Add(
        v30,
        *(_DWORD *)(v51 + 16),
        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v53 = *(_QWORD *)v41;
  if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
  {
    v54 = 0LL;
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
        goto LABEL_32;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_32:
    v56 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v46);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v41, *(_QWORD *)(v56 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v30,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetAllEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  const MethodInfo *v16; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *UniqueIdList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x5
  __int64 v20; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x23
  unsigned __int64 v22; // x25
  bool v23; // w24
  __int64 v25; // x0

  if ( (byte_42EB149 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__,
      eventId,
      beforeClearQuestId,
      isIncludUnreleased);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v12, v13, v14);
    byte_42EB149 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v16);
  if ( !UniqueIdList )
LABEL_13:
    sub_B5D69C(UniqueIdList, v18);
  v20 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v21 = UniqueIdList;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    v23 = isIncludUnreleased;
    do
    {
      if ( v22 >= (unsigned int)v20 )
      {
        v25 = sub_B5D6C8(UniqueIdList);
        sub_B5D668(v25, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v21->fields.addCount + v22),
                                                                              beforeClearQuestId,
                                                                              v23,
                                                                              v19);
      if ( UniqueIdList )
      {
        if ( !v15 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          UniqueIdList,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v20) = v21->fields.targetId;
      ++v22;
    }
    while ( (__int64)v22 < (int)v20 );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetCurrentEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v34; // x21
  EventCommandAssistMaster___c_c *v35; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x22
  Il2CppObject *v38; // x23
  struct EventCommandAssistMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x2
  int size; // w23
  __int64 v48; // x22
  unsigned int v49; // w8

  if ( (byte_42EB147 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventCommandAssistEntity___ctor__, eventId, id, *(_QWORD *)&beforeClearQuestId);
    sub_B5D5C4(&System_Comparison_EventCommandAssistEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v23, v24, v25);
    sub_B5D5C4(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, v26, v27, v28);
    sub_B5D5C4(&EventCommandAssistMaster___c_TypeInfo, v29, v30, v31);
    byte_42EB147 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v34 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v35 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v35 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v38,
      Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v39 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v39->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v39->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v34 )
LABEL_26:
    sub_B5D69C(EntityList, v33);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v34,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v34->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                             (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0LL;
  }
  else
  {
    v48 = 4LL;
    v49 = v34->fields._size;
    while ( 1 )
    {
      if ( v49 <= (int)v48 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      EntityList = (EventCommandAssistEntity_o *)*((_QWORD *)&v34->fields._items->obj.klass + v48);
      if ( !EntityList )
        goto LABEL_26;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v46) )
        break;
      if ( (int)v48 - 3 >= size )
        goto LABEL_23;
      v49 = v34->fields._size;
      ++v48;
    }
    if ( v34->fields._size <= (unsigned int)(v48 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    return (EventCommandAssistEntity_o *)*((_QWORD *)&v34->fields._items->obj.klass + v48);
  }
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetEntity(
        EventCommandAssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB14F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__,
      id,
      priority,
      method);
    byte_42EB14F = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x10

  if ( (byte_42EB146 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, id, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventCommandAssistEntity_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v19, v20, v21);
    byte_42EB146 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v23 = list;
      v28 = *(&EventCommandAssistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventCommandAssistEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] != EventCommandAssistEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields._syncRoot) == eventId && LODWORD(list->fields.items) == id )
      {
        if ( !v22 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      if ( ++v27 >= v26 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v22;
    }
LABEL_16:
    sub_B5D69C(list, v23);
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v22;
}


EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetMaxLevelEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t assistId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x19
  EventCommandAssistMaster___c_c *v23; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x20
  Il2CppObject *v26; // x21
  struct EventCommandAssistMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_42EB14D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___, eventId, assistId, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_EventCommandAssistEntity__int___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_EventCommandAssistEntity__int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, v16, v17, v18);
    sub_B5D5C4(&EventCommandAssistMaster___c_TypeInfo, v19, v20, v21);
    byte_42EB14D = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v23 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v23 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventCommandAssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__8_0,
      v26,
      Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventCommandAssistEntity__int___ctor__);
    v27 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v27->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v27->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityList,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                         v34,
                                         (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WarBoardAIRoute_RouteData_o *uniqueIdCacheList; // x0
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v14; // x21

  if ( (byte_42EB14C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v9, v10, v11);
    byte_42EB14C = 1;
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v14 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v13);
    if ( !v14 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v14,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_B5D69C(uniqueIdCacheList, *(_QWORD *)&eventId);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetValidEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  const MethodInfo *v14; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *UniqueIdList; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  __int64 v18; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x23
  unsigned __int64 v20; // x24
  __int64 v22; // x0

  if ( (byte_42EB148 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__,
      eventId,
      beforeClearQuestId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v10, v11, v12);
    byte_42EB148 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v14);
  if ( !UniqueIdList )
LABEL_13:
    sub_B5D69C(UniqueIdList, v16);
  v18 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v19 = UniqueIdList;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
      {
        v22 = sub_B5D6C8(UniqueIdList);
        sub_B5D668(v22, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v19->fields.addCount + v20),
                                                                              beforeClearQuestId,
                                                                              0,
                                                                              v17);
      if ( UniqueIdList )
      {
        if ( !v13 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          UniqueIdList,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v18) = v19->fields.targetId;
      ++v20;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__IsEnableEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
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
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v29; // x20
  EventCommandAssistMaster___c_c *v30; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v33; // x22
  struct EventCommandAssistMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  int size; // w21
  __int64 v43; // x22
  unsigned int v44; // w8

  if ( (byte_42EB14A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventCommandAssistEntity___ctor__, eventId, id, *(_QWORD *)&beforeClearQuestId);
    sub_B5D5C4(&System_Comparison_EventCommandAssistEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, v21, v22, v23);
    sub_B5D5C4(&EventCommandAssistMaster___c_TypeInfo, v24, v25, v26);
    byte_42EB14A = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v29 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v30 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v30 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v33,
      Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v34 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v34->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v29 )
LABEL_22:
    sub_B5D69C(EntityList, v28);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v29,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v29->fields._size;
  if ( size < 1 )
    return 0;
  v43 = 0LL;
  v44 = v29->fields._size;
  while ( 1 )
  {
    if ( v44 <= (unsigned int)v43 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    EntityList = (EventCommandAssistEntity_o *)v29->fields._items->m_Items[v43];
    if ( !EntityList )
      goto LABEL_22;
    if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v41) )
      return 1;
    if ( (int)v43 + 1 >= size )
      return 0;
    v44 = v29->fields._size;
    ++v43;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__TryGetEntity(
        EventCommandAssistMaster_o *this,
        EventCommandAssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB150 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&priority);
    byte_42EB150 = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void __fastcall EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E64F2 & 1) == 0 )
  {
    sub_B5D5C4(&EventCommandAssistMaster___c_TypeInfo, v1, v2, v3);
    byte_42E64F2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventCommandAssistMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventCommandAssistMaster___c___ctor(EventCommandAssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventCommandAssistMaster___c___GetCurrentEntity_b__1_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
  return ent->fields.lv;
}


int32_t __fastcall EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}