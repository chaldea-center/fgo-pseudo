void __fastcall EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438DDAB & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    byte_438DDAB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.uniqueIdCacheList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    450,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


System_Int32_array *__fastcall EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0

  if ( (byte_438DDA8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438DDA8 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  v6 = System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
         (System_Collections_IEnumerable_o *)this->fields.list,
         (const MethodInfo_1D34774 *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v6 )
    sub_B7769C(0LL, v7);
  klass = v6->klass;
  v9 = v6;
  if ( *(_WORD *)&v6->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(v6, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0LL);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v9,
          *(_QWORD *)(p_method + 8));
  if ( !v14 )
    sub_B7769C(0LL, v13);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_15;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_15:
      v18 = sub_B0F4C0(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_22;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_22:
      v22 = sub_B0F4C0(v14, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_B7769C(0LL, v24);
    if ( *(_DWORD *)(v23 + 24) == eventId )
    {
      if ( !v5 )
        sub_B7769C(v23, v24);
      System_Collections_Generic_HashSet_int___Add(
        v5,
        *(_DWORD *)(v23 + 16),
        (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v25 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v26 = 0LL;
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_32;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_32:
    v28 = sub_B0F4C0(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v28)(v14, *(_QWORD *)(v28 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetAllEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  const MethodInfo *v10; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *UniqueIdList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  __int64 v14; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x23
  unsigned __int64 v16; // x25
  bool v17; // w24
  __int64 v19; // x0

  if ( (byte_438DDA6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_438DDA6 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v10);
  if ( !UniqueIdList )
LABEL_13:
    sub_B7769C(UniqueIdList, v12);
  v14 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v15 = UniqueIdList;
  if ( (int)v14 >= 1 )
  {
    v16 = 0LL;
    v17 = isIncludUnreleased;
    do
    {
      if ( v16 >= (unsigned int)v14 )
      {
        v19 = sub_B776C8(UniqueIdList);
        sub_B77668(v19, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v15->fields.addCount + v16),
                                                                              beforeClearQuestId,
                                                                              v17,
                                                                              v13);
      if ( UniqueIdList )
      {
        if ( !v9 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          UniqueIdList,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v14) = v15->fields.targetId;
      ++v16;
    }
    while ( (__int64)v16 < (int)v14 );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v9;
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
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v13; // x21
  EventCommandAssistMaster___c_c *v14; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x22
  Il2CppObject *v17; // x23
  struct EventCommandAssistMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  int size; // w23
  __int64 v27; // x22
  unsigned int v28; // w8

  if ( (byte_438DDA4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_EventCommandAssistEntity___ctor__);
    sub_B775C4(&System_Comparison_EventCommandAssistEntity__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_B775C4(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__);
    sub_B775C4(&EventCommandAssistMaster___c_TypeInfo);
    byte_438DDA4 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v13 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v14 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v14 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v17,
      Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v18 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v18->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v18->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v13 )
LABEL_26:
    sub_B7769C(EntityList, v12);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v13,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v13->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                             (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0LL;
  }
  else
  {
    v27 = 4LL;
    v28 = v13->fields._size;
    while ( 1 )
    {
      if ( v28 <= (int)v27 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      EntityList = (EventCommandAssistEntity_o *)*((_QWORD *)&v13->fields._items->obj.klass + v27);
      if ( !EntityList )
        goto LABEL_26;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v25) )
        break;
      if ( (int)v27 - 3 >= size )
        goto LABEL_23;
      v28 = v13->fields._size;
      ++v27;
    }
    if ( v13->fields._size <= (unsigned int)(v27 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    return (EventCommandAssistEntity_o *)*((_QWORD *)&v13->fields._items->obj.klass + v27);
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

  if ( (byte_438DDAC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
    byte_438DDAC = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10

  if ( (byte_438DDA3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventCommandAssistEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_438DDA3 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = list;
      v13 = *(&EventCommandAssistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventCommandAssistEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != EventCommandAssistEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields._syncRoot) == eventId && LODWORD(list->fields.items) == id )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      if ( ++v12 >= v11 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v7;
    }
LABEL_16:
    sub_B7769C(list, v8);
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v7;
}


EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetMaxLevelEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x19
  EventCommandAssistMaster___c_c *v8; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct EventCommandAssistMaster___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_438DDAA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
    sub_B775C4(&Method_System_Func_EventCommandAssistEntity__int___ctor__);
    sub_B775C4(&System_Func_EventCommandAssistEntity__int__TypeInfo);
    sub_B775C4(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__);
    sub_B775C4(&EventCommandAssistMaster___c_TypeInfo);
    byte_438DDAA = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v8 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v8 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_EventCommandAssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__8_0,
      v11,
      Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_EventCommandAssistEntity__int___ctor__);
    v12 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v12->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityList,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_1D34DBC *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                         v19,
                                         (const MethodInfo_1D31514 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *uniqueIdCacheList; // x0
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v7; // x21

  if ( (byte_438DDA9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
    byte_438DDA9 = 1;
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v7 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v6);
    if ( !v7 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v7,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_B7769C(uniqueIdCacheList, *(_QWORD *)&eventId);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
}


System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetValidEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  const MethodInfo *v8; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *UniqueIdList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  __int64 v12; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x23
  unsigned __int64 v14; // x24
  __int64 v16; // x0

  if ( (byte_438DDA5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
    byte_438DDA5 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v8);
  if ( !UniqueIdList )
LABEL_13:
    sub_B7769C(UniqueIdList, v10);
  v12 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v13 = UniqueIdList;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v12 )
      {
        v16 = sub_B776C8(UniqueIdList);
        sub_B77668(v16, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v13->fields.addCount + v14),
                                                                              beforeClearQuestId,
                                                                              0,
                                                                              v11);
      if ( UniqueIdList )
      {
        if ( !v7 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          UniqueIdList,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v12) = v13->fields.targetId;
      ++v14;
    }
    while ( (__int64)v14 < (int)v12 );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__IsEnableEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v11; // x20
  EventCommandAssistMaster___c_c *v12; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v15; // x22
  struct EventCommandAssistMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  int size; // w21
  __int64 v25; // x22
  unsigned int v26; // w8

  if ( (byte_438DDA7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_EventCommandAssistEntity___ctor__);
    sub_B775C4(&System_Comparison_EventCommandAssistEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__);
    sub_B775C4(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__);
    sub_B775C4(&EventCommandAssistMaster___c_TypeInfo);
    byte_438DDA7 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v11 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v12 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v12 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v15,
      Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v16 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v16->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v11 )
LABEL_22:
    sub_B7769C(EntityList, v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v11,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v11->fields._size;
  if ( size < 1 )
    return 0;
  v25 = 0LL;
  v26 = v11->fields._size;
  while ( 1 )
  {
    if ( v26 <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    EntityList = (EventCommandAssistEntity_o *)v11->fields._items->m_Items[v25];
    if ( !EntityList )
      goto LABEL_22;
    if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v23) )
      return 1;
    if ( (int)v25 + 1 >= size )
      return 0;
    v26 = v11->fields._size;
    ++v25;
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

  if ( (byte_438DDAD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
    byte_438DDAD = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void __fastcall EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0

  if ( (byte_438861E & 1) == 0 )
  {
    sub_B775C4(&EventCommandAssistMaster___c_TypeInfo);
    byte_438861E = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventCommandAssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B7769C(this, 0LL);
  return ent->fields.lv;
}


int32_t __fastcall EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}