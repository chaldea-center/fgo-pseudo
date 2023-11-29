void __fastcall EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC5D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v7);
    byte_40FC5D6 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.uniqueIdCacheList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    449,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__CreateUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_HashSet_int__o *v15; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x20
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0

  if ( (byte_40FC5D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v9);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_40FC5D3 = 1;
  }
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  v16 = System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v16 )
    sub_B170D4();
  klass = v16->klass;
  v18 = v16;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(v16, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0LL);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v22 )
    sub_B170D4();
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_15;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_15:
      v26 = sub_AAFEF8(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_22;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_22:
      v30 = sub_AAFEF8(v22, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    if ( !v31 )
      sub_B170D4();
    if ( *(_DWORD *)(v31 + 24) == eventId )
    {
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_HashSet_int___Add(
        v15,
        *(_DWORD *)(v31 + 16),
        (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v32 = *(_QWORD *)v22;
  if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
  {
    v33 = 0LL;
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
        goto LABEL_32;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_32:
    v35 = sub_AAFEF8(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v22, *(_QWORD *)(v35 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x5
  __int64 v17; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x23
  unsigned __int64 v19; // x25
  bool v20; // w24

  if ( (byte_40FC5D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v10);
    byte_40FC5D1 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&beforeClearQuestId,
                                                                                                  isIncludUnreleased,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v12);
  if ( !UniqueIdList )
LABEL_13:
    sub_B170D4();
  v17 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v18 = UniqueIdList;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    v20 = isIncludUnreleased;
    do
    {
      if ( v19 >= (unsigned int)v17 )
      {
        sub_B17100(UniqueIdList, v14, v15);
        sub_B170A0();
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v18->fields.addCount + v19),
                                                                              beforeClearQuestId,
                                                                              v20,
                                                                              v16);
      if ( UniqueIdList )
      {
        if ( !v11 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          UniqueIdList,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v17) = v18->fields.targetId;
      ++v19;
    }
    while ( (__int64)v19 < (int)v17 );
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EntityList; // x21
  EventCommandAssistMaster___c_c *v23; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x22
  Il2CppObject *v26; // x23
  struct EventCommandAssistMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  int size; // w23
  __int64 v36; // x22
  unsigned int v37; // w8
  EventCommandAssistEntity_o *v38; // x0

  if ( (byte_40FC5CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventCommandAssistEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventCommandAssistEntity__TypeInfo, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v15);
    sub_B16FFC(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, v16);
    sub_B16FFC(&EventCommandAssistMaster___c_TypeInfo, v17);
    byte_40FC5CF = 1;
  }
  EntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventCommandAssistMaster__GetEntityList(
                                                                                         this,
                                                                                         eventId,
                                                                                         id,
                                                                                         *(const MethodInfo **)&beforeClearQuestId);
  v23 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v23 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventCommandAssistEntity__TypeInfo,
                                                                          v18,
                                                                          v19,
                                                                          v20,
                                                                          v21);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v26,
      Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v27 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v27->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !EntityList )
LABEL_26:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    EntityList,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = EntityList->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityList,
                                             (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0LL;
  }
  else
  {
    v36 = 4LL;
    v37 = EntityList->fields._size;
    while ( 1 )
    {
      if ( v37 <= (int)v36 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v38 = (EventCommandAssistEntity_o *)*((_QWORD *)&EntityList->fields._items->obj.klass + v36);
      if ( !v38 )
        goto LABEL_26;
      if ( EventCommandAssistEntity__IsOpen(v38, beforeClearQuestId, v34) )
        break;
      if ( (int)v36 - 3 >= size )
        goto LABEL_23;
      v37 = EntityList->fields._size;
      ++v36;
    }
    if ( EntityList->fields._size <= (unsigned int)(v36 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    return (EventCommandAssistEntity_o *)*((_QWORD *)&EntityList->fields._items->obj.klass + v36);
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

  if ( (byte_40FC5D7 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40FC5D7 = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FC5CE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&EventCommandAssistEntity_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v12);
    byte_40FC5CE = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&id,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v20 = *(&EventCommandAssistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (EventCommandAssistEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] != EventCommandAssistEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.targetId == eventId && Item->fields.missionTargetId == id )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      if ( ++v17 >= v16 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v13;
    }
LABEL_16:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v13;
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x19
  EventCommandAssistMaster___c_c *v17; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x20
  Il2CppObject *v20; // x21
  struct EventCommandAssistMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_40FC5D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___, v7);
    sub_B16FFC(&Method_System_Func_EventCommandAssistEntity__int___ctor__, v8);
    sub_B16FFC(&System_Func_EventCommandAssistEntity__int__TypeInfo, v9);
    sub_B16FFC(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, v10);
    sub_B16FFC(&EventCommandAssistMaster___c_TypeInfo, v11);
    byte_40FC5D5 = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v17 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v17 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_EventCommandAssistEntity__int__TypeInfo,
                                                                                v12,
                                                                                v13,
                                                                                v14,
                                                                                v15);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__8_0,
      v20,
      Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_EventCommandAssistEntity__int___ctor__);
    v21 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v21->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v21->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityList,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                         v28,
                                         (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventCommandAssistMaster__GetUniqueIdList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__int____o *uniqueIdCacheList; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_Dictionary_int__int____o *v9; // x21
  WarBoardAIRoute_RouteData_o *UniqueIdList; // x0
  struct System_Collections_Generic_Dictionary_int__int____o *v11; // x0

  if ( (byte_40FC5D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v6);
    byte_40FC5D4 = 1;
  }
  uniqueIdCacheList = this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v9 = this->fields.uniqueIdCacheList;
    UniqueIdList = (WarBoardAIRoute_RouteData_o *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v8);
    if ( !v9 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v9,
      eventId,
      UniqueIdList,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  v11 = this->fields.uniqueIdCacheList;
  if ( !v11 )
LABEL_9:
    sub_B170D4();
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v11,
                                 eventId,
                                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCommandAssistEntity__o *__fastcall EventCommandAssistMaster__GetValidEntityList(
        EventCommandAssistMaster_o *this,
        int32_t eventId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  const MethodInfo *v11; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *UniqueIdList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x23
  unsigned __int64 v18; // x24

  if ( (byte_40FC5D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v9);
    byte_40FC5D0 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&beforeClearQuestId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v11);
  if ( !UniqueIdList )
LABEL_13:
    sub_B170D4();
  v16 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v17 = UniqueIdList;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)v16 )
      {
        sub_B17100(UniqueIdList, v13, v14);
        sub_B170A0();
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v17->fields.addCount + v18),
                                                                              beforeClearQuestId,
                                                                              0,
                                                                              v15);
      if ( UniqueIdList )
      {
        if ( !v10 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          UniqueIdList,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v16) = v17->fields.targetId;
      ++v18;
    }
    while ( (__int64)v18 < (int)v16 );
  }
  return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v10;
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EntityList; // x20
  EventCommandAssistMaster___c_c *v20; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v23; // x22
  struct EventCommandAssistMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  int size; // w21
  __int64 v33; // x22
  unsigned int v34; // w8
  EventCommandAssistEntity_o *v35; // x0

  if ( (byte_40FC5D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventCommandAssistEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventCommandAssistEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v12);
    sub_B16FFC(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, v13);
    sub_B16FFC(&EventCommandAssistMaster___c_TypeInfo, v14);
    byte_40FC5D2 = 1;
  }
  EntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EventCommandAssistMaster__GetEntityList(
                                                                                         this,
                                                                                         eventId,
                                                                                         id,
                                                                                         *(const MethodInfo **)&beforeClearQuestId);
  v20 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v20 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventCommandAssistEntity__TypeInfo,
                                                                          v15,
                                                                          v16,
                                                                          v17,
                                                                          v18);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v23,
      Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v24 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v24->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !EntityList )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    EntityList,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = EntityList->fields._size;
  if ( size < 1 )
    return 0;
  v33 = 0LL;
  v34 = EntityList->fields._size;
  while ( 1 )
  {
    if ( v34 <= (unsigned int)v33 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v35 = (EventCommandAssistEntity_o *)EntityList->fields._items->m_Items[v33];
    if ( !v35 )
      goto LABEL_22;
    if ( EventCommandAssistEntity__IsOpen(v35, beforeClearQuestId, v31) )
      return 1;
    if ( (int)v33 + 1 >= size )
      return 0;
    v34 = EntityList->fields._size;
    ++v33;
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

  if ( (byte_40FC5D8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__,
      entity);
    byte_40FC5D8 = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void __fastcall EventCommandAssistMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F8B9A & 1) == 0 )
  {
    sub_B16FFC(&EventCommandAssistMaster___c_TypeInfo, v1);
    byte_40F8B9A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventCommandAssistMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventCommandAssistMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.lv;
}


int32_t __fastcall EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}