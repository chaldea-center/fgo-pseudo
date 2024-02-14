void __fastcall EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4216EED & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    byte_4216EED = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v6,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.uniqueIdCacheList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    449,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_HashSet_int__o *v13; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x20
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0

  if ( (byte_4216EEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v7);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_4216EEA = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  v14 = System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v14 )
    sub_B0D97C(0LL);
  klass = v14->klass;
  v16 = v14;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v14, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v16,
          *(_QWORD *)(p_method + 8));
  if ( !v20 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_15;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_15:
      v24 = sub_AA67A0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_22;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_22:
      v28 = sub_AA67A0(v20, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    if ( !v29 )
      sub_B0D97C(0LL);
    if ( *(_DWORD *)(v29 + 24) == eventId )
    {
      if ( !v13 )
        sub_B0D97C(v29);
      System_Collections_Generic_HashSet_int___Add(
        v13,
        *(_DWORD *)(v29 + 16),
        (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v30 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v31 = 0LL;
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_32;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_32:
    v33 = sub_AA67A0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v20, *(_QWORD *)(v33 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetAllEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        bool isIncludUnreleased,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  const MethodInfo *v12; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *UniqueIdList; // x0
  const MethodInfo *v14; // x5
  __int64 v15; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x23
  unsigned __int64 v17; // x25
  bool v18; // w24
  __int64 v20; // x0

  if ( (byte_4216EE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v10);
    byte_4216EE8 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v12);
  if ( !UniqueIdList )
LABEL_13:
    sub_B0D97C(UniqueIdList);
  v15 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v16 = UniqueIdList;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    v18 = isIncludUnreleased;
    do
    {
      if ( v17 >= (unsigned int)v15 )
      {
        v20 = sub_B0D9A8(UniqueIdList);
        sub_B0D948(v20, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v16->fields.addCount + v17),
                                                                              beforeClearQuestId,
                                                                              v18,
                                                                              v14);
      if ( UniqueIdList )
      {
        if ( !v11 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          UniqueIdList,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v15) = v16->fields.targetId;
      ++v17;
    }
    while ( (__int64)v17 < (int)v15 );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v11;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v21; // x21
  EventCommandAssistMaster___c_c *v22; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x22
  Il2CppObject *v25; // x23
  struct EventCommandAssistMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  int size; // w23
  __int64 v35; // x22
  unsigned int v36; // w8

  if ( (byte_4216EE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventCommandAssistEntity___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventCommandAssistEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v15);
    sub_B0D8A4(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, v16);
    sub_B0D8A4(&EventCommandAssistMaster___c_TypeInfo, v17);
    byte_4216EE6 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v21 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v22 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v22 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventCommandAssistEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v25,
      Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v26 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v26->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v26->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v21 )
LABEL_26:
    sub_B0D97C(EntityList);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v21,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v21->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                             (const MethodInfo_1B4A958 *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0LL;
  }
  else
  {
    v35 = 4LL;
    v36 = v21->fields._size;
    while ( 1 )
    {
      if ( v36 <= (int)v35 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      EntityList = (EventCommandAssistEntity_o *)*((_QWORD *)&v21->fields._items->obj.klass + v35);
      if ( !EntityList )
        goto LABEL_26;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v33) )
        break;
      if ( (int)v35 - 3 >= size )
        goto LABEL_23;
      v36 = v21->fields._size;
      ++v35;
    }
    if ( v21->fields._size <= (unsigned int)(v35 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    return (EventCommandAssistEntity_o *)*((_QWORD *)&v21->fields._items->obj.klass + v35);
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

  if ( (byte_4216EEE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4216EEE = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266A024 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  __int64 v17; // x10

  if ( (byte_4216EE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&EventCommandAssistEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v11);
    byte_4216EE5 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&id);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = *(&EventCommandAssistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (EventCommandAssistEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != EventCommandAssistEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields._syncRoot) == eventId && LODWORD(list->fields.items) == id )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      if ( ++v16 >= v15 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v12;
    }
LABEL_16:
    sub_B0D97C(list);
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
EventCommandAssistEntity_o *__fastcall EventCommandAssistMaster__GetMaxLevelEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x19
  EventCommandAssistMaster___c_c *v15; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x20
  Il2CppObject *v18; // x21
  struct EventCommandAssistMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4216EEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___, v7);
    sub_B0D8A4(&Method_System_Func_EventCommandAssistEntity__int___ctor__, v8);
    sub_B0D8A4(&System_Func_EventCommandAssistEntity__int__TypeInfo, v9);
    sub_B0D8A4(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, v10);
    sub_B0D8A4(&EventCommandAssistMaster___c_TypeInfo, v11);
    byte_4216EEC = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v15 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v15 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_EventCommandAssistEntity__int__TypeInfo,
                                                                                v12,
                                                                                v13);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__8_0,
      v18,
      Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__,
      (const MethodInfo_2619564 *)Method_System_Func_EventCommandAssistEntity__int___ctor__);
    v19 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v19->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v19->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityList,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                         v26,
                                         (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardAIRoute_RouteData_o *uniqueIdCacheList; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v9; // x21

  if ( (byte_4216EEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v6);
    byte_4216EEB = 1;
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v9 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v8);
    if ( !v9 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v9,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_B0D97C(uniqueIdCacheList);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetValidEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  const MethodInfo *v10; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *UniqueIdList; // x0
  const MethodInfo *v12; // x5
  __int64 v13; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x23
  unsigned __int64 v15; // x24
  __int64 v17; // x0

  if ( (byte_4216EE7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v8);
    byte_4216EE7 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                 *(_QWORD *)&eventId,
                                                                                                 *(_QWORD *)&beforeClearQuestId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v10);
  if ( !UniqueIdList )
LABEL_13:
    sub_B0D97C(UniqueIdList);
  v13 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v14 = UniqueIdList;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v13 )
      {
        v17 = sub_B0D9A8(UniqueIdList);
        sub_B0D948(v17, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v14->fields.addCount + v15),
                                                                              beforeClearQuestId,
                                                                              0,
                                                                              v12);
      if ( UniqueIdList )
      {
        if ( !v9 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          UniqueIdList,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v13) = v14->fields.targetId;
      ++v15;
    }
    while ( (__int64)v15 < (int)v13 );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCommandAssistMaster__IsEnableEntity(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  EventCommandAssistEntity_o *EntityList; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v18; // x20
  EventCommandAssistMaster___c_c *v19; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v22; // x22
  struct EventCommandAssistMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  int size; // w21
  __int64 v32; // x22
  unsigned int v33; // w8

  if ( (byte_4216EE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventCommandAssistEntity___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventCommandAssistEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v12);
    sub_B0D8A4(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, v13);
    sub_B0D8A4(&EventCommandAssistMaster___c_TypeInfo, v14);
    byte_4216EE9 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v18 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v19 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v19 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventCommandAssistEntity__TypeInfo,
                                                                          v16,
                                                                          v17);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v22,
      Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v23 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v23->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v18 )
LABEL_22:
    sub_B0D97C(EntityList);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v18,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v18->fields._size;
  if ( size < 1 )
    return 0;
  v32 = 0LL;
  v33 = v18->fields._size;
  while ( 1 )
  {
    if ( v33 <= (unsigned int)v32 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    EntityList = (EventCommandAssistEntity_o *)v18->fields._items->m_Items[v32];
    if ( !EntityList )
      goto LABEL_22;
    if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v30) )
      return 1;
    if ( (int)v32 + 1 >= size )
      return 0;
    v33 = v18->fields._size;
    ++v32;
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

  if ( (byte_4216EEF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__,
      entity);
    byte_4216EEF = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void __fastcall EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211B1E & 1) == 0 )
  {
    sub_B0D8A4(&EventCommandAssistMaster___c_TypeInfo, v1);
    byte_4211B1E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventCommandAssistMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B0D97C(this);
  return ent->fields.lv;
}


int32_t __fastcall EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}