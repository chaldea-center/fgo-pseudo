void __fastcall EventCommandAssistMaster___ctor(EventCommandAssistMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A30D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v4);
    byte_418A30D = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  this->fields.uniqueIdCacheList = (struct System_Collections_Generic_Dictionary_int__int____o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.uniqueIdCacheList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    449,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string___ctor__);
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
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0

  if ( (byte_418A30A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v7);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_418A30A = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  v14 = System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_EventCommandAssistEntity___);
  if ( !v14 )
    sub_B2C434(0LL, v15);
  klass = v14->klass;
  v18 = v14;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventCommandAssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v14, System_Collections_Generic_IEnumerable_EventCommandAssistEntity__TypeInfo, 0LL, v16);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_15;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_15:
      v28 = sub_AC5258(v24, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventCommandAssistEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_22;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_22:
      v33 = sub_AC5258(v24, System_Collections_Generic_IEnumerator_EventCommandAssistEntity__TypeInfo, 0LL, v29);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_B2C434(0LL, v35);
    if ( *(_DWORD *)(v34 + 24) == eventId )
    {
      if ( !v13 )
        sub_B2C434(v34, v35);
      System_Collections_Generic_HashSet_int___Add(
        v13,
        *(_DWORD *)(v34 + 16),
        (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  v36 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v37 = 0LL;
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_32;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_32:
    v39 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v24, *(_QWORD *)(v39 + 8));
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x23
  unsigned __int64 v18; // x25
  bool v19; // w24
  __int64 v21; // x0

  if ( (byte_418A308 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v10);
    byte_418A308 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v12);
  if ( !UniqueIdList )
LABEL_13:
    sub_B2C434(UniqueIdList, v14);
  v16 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v17 = UniqueIdList;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    v19 = isIncludUnreleased;
    do
    {
      if ( v18 >= (unsigned int)v16 )
      {
        v21 = sub_B2C460(UniqueIdList);
        sub_B2C400(v21, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v17->fields.addCount + v18),
                                                                              beforeClearQuestId,
                                                                              v19,
                                                                              v15);
      if ( UniqueIdList )
      {
        if ( !v11 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          UniqueIdList,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v16) = v17->fields.targetId;
      ++v18;
    }
    while ( (__int64)v18 < (int)v16 );
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
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v20; // x21
  EventCommandAssistMaster___c_c *v21; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x22
  Il2CppObject *v24; // x23
  struct EventCommandAssistMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  int size; // w23
  __int64 v34; // x22
  unsigned int v35; // w8

  if ( (byte_418A306 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventCommandAssistEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventCommandAssistEntity__TypeInfo, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_EventCommandAssistEntity___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v15);
    sub_B2C35C(&Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__, v16);
    sub_B2C35C(&EventCommandAssistMaster___c_TypeInfo, v17);
    byte_418A306 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v20 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v21 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v21 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v24,
      Method_EventCommandAssistMaster___c__GetCurrentEntity_b__1_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v25 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v25->__9__1_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v20 )
LABEL_26:
    sub_B2C434(EntityList, v19);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v20,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v20->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    if ( isIncludUnreleased )
      return (EventCommandAssistEntity_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                             (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_EventCommandAssistEntity___);
    else
      return 0LL;
  }
  else
  {
    v34 = 4LL;
    v35 = v20->fields._size;
    while ( 1 )
    {
      if ( v35 <= (int)v34 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      EntityList = (EventCommandAssistEntity_o *)*((_QWORD *)&v20->fields._items->obj.klass + v34);
      if ( !EntityList )
        goto LABEL_26;
      if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v32) )
        break;
      if ( (int)v34 - 3 >= size )
        goto LABEL_23;
      v35 = v20->fields._size;
      ++v34;
    }
    if ( v20->fields._size <= (unsigned int)(v34 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    return (EventCommandAssistEntity_o *)*((_QWORD *)&v20->fields._items->obj.klass + v34);
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

  if ( (byte_418A30E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_418A30E = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventCommandAssistEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_418A305 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventCommandAssistEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v11);
    byte_418A305 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v13 = list;
      v18 = *(&EventCommandAssistEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (EventCommandAssistEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] != EventCommandAssistEntity_TypeInfo )
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      if ( ++v17 >= v16 )
        return (System_Collections_Generic_List_EventCommandAssistEntity__o *)v12;
    }
LABEL_16:
    sub_B2C434(list, v13);
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
  System_Collections_Generic_List_EventCommandAssistEntity__o *EntityList; // x19
  EventCommandAssistMaster___c_c *v13; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__8_0; // x20
  Il2CppObject *v16; // x21
  struct EventCommandAssistMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_418A30C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___, v7);
    sub_B2C35C(&Method_System_Func_EventCommandAssistEntity__int___ctor__, v8);
    sub_B2C35C(&System_Func_EventCommandAssistEntity__int__TypeInfo, v9);
    sub_B2C35C(&Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__, v10);
    sub_B2C35C(&EventCommandAssistMaster___c_TypeInfo, v11);
    byte_418A30C = 1;
  }
  EntityList = EventCommandAssistMaster__GetEntityList(this, eventId, assistId, method);
  v13 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v13 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventCommandAssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__8_0,
      v16,
      Method_EventCommandAssistMaster___c__GetMaxLevelEntity_b__8_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_EventCommandAssistEntity__int___ctor__);
    v17 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v17->__9__8_0 = (struct System_Func_EventCommandAssistEntity__int__o *)_9__8_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v17->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityList,
                                                               (System_Func_TSource__TKey__o *)_9__8_0,
                                                               (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_EventCommandAssistEntity__int___);
  return (EventCommandAssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                         v24,
                                         (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCommandAssistEntity___);
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

  if ( (byte_418A30B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int____set_Item__, v6);
    byte_418A30B = 1;
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)uniqueIdCacheList,
          eventId,
          (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__int____ContainsKey__) )
  {
    v9 = this->fields.uniqueIdCacheList;
    uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)EventCommandAssistMaster__CreateUniqueIdList(this, eventId, v8);
    if ( !v9 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v9,
      eventId,
      uniqueIdCacheList,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__int____set_Item__);
  }
  uniqueIdCacheList = (WarBoardAIRoute_RouteData_o *)this->fields.uniqueIdCacheList;
  if ( !uniqueIdCacheList )
LABEL_9:
    sub_B2C434(uniqueIdCacheList, *(_QWORD *)&eventId);
  return (System_Int32_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)uniqueIdCacheList,
                                 eventId,
                                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__int____get_Item__);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  __int64 v14; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x23
  unsigned __int64 v16; // x24
  __int64 v18; // x0

  if ( (byte_418A307 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo, v8);
    byte_418A307 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCommandAssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCommandAssistEntity___ctor__);
  UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetUniqueIdList(
                                                                          this,
                                                                          eventId,
                                                                          v10);
  if ( !UniqueIdList )
LABEL_13:
    sub_B2C434(UniqueIdList, v12);
  v14 = *(_QWORD *)&UniqueIdList->fields.targetId;
  v15 = UniqueIdList;
  if ( (int)v14 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v14 )
      {
        v18 = sub_B2C460(UniqueIdList);
        sub_B2C400(v18, 0LL);
      }
      UniqueIdList = (EventMissionProgressRequest_Argument_ProgressData_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                              this,
                                                                              eventId,
                                                                              *(&v15->fields.addCount + v16),
                                                                              beforeClearQuestId,
                                                                              0,
                                                                              v13);
      if ( UniqueIdList )
      {
        if ( !v9 )
          goto LABEL_13;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          UniqueIdList,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Add__);
      }
      LODWORD(v14) = v15->fields.targetId;
      ++v16;
    }
    while ( (__int64)v16 < (int)v14 );
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
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v17; // x20
  EventCommandAssistMaster___c_c *v18; // x8
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x21
  Il2CppObject *v21; // x22
  struct EventCommandAssistMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  int size; // w21
  __int64 v31; // x22
  unsigned int v32; // w8

  if ( (byte_418A309 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventCommandAssistEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventCommandAssistEntity__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Item__, v12);
    sub_B2C35C(&Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__, v13);
    sub_B2C35C(&EventCommandAssistMaster___c_TypeInfo, v14);
    byte_418A309 = 1;
  }
  EntityList = (EventCommandAssistEntity_o *)EventCommandAssistMaster__GetEntityList(
                                               this,
                                               eventId,
                                               id,
                                               *(const MethodInfo **)&beforeClearQuestId);
  v17 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EntityList;
  v18 = EventCommandAssistMaster___c_TypeInfo;
  if ( (BYTE3(EventCommandAssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventCommandAssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCommandAssistMaster___c_TypeInfo);
    v18 = EventCommandAssistMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventCommandAssistEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v21,
      Method_EventCommandAssistMaster___c__IsEnableEntity_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventCommandAssistEntity___ctor__);
    v22 = EventCommandAssistMaster___c_TypeInfo->static_fields;
    v22->__9__4_0 = (struct System_Comparison_EventCommandAssistEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v17 )
LABEL_22:
    sub_B2C434(EntityList, v16);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v17,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventCommandAssistEntity__Sort__);
  size = v17->fields._size;
  if ( size < 1 )
    return 0;
  v31 = 0LL;
  v32 = v17->fields._size;
  while ( 1 )
  {
    if ( v32 <= (unsigned int)v31 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    EntityList = (EventCommandAssistEntity_o *)v17->fields._items->m_Items[v31];
    if ( !EntityList )
      goto LABEL_22;
    if ( EventCommandAssistEntity__IsOpen(EntityList, beforeClearQuestId, v29) )
      return 1;
    if ( (int)v31 + 1 >= size )
      return 0;
    v32 = v17->fields._size;
    ++v31;
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

  if ( (byte_418A30F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__,
      entity);
    byte_418A30F = 1;
  }
  PK = EventCommandAssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventCommandAssistMaster__EventCommandAssistEntity__string__TryGetEntity__);
}


void __fastcall EventCommandAssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventCommandAssistMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184ABF & 1) == 0 )
  {
    sub_B2C35C(&EventCommandAssistMaster___c_TypeInfo, v1);
    byte_4184ABF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventCommandAssistMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventCommandAssistMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventCommandAssistMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventCommandAssistMaster___c___GetMaxLevelEntity_b__8_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
  return ent->fields.lv;
}


int32_t __fastcall EventCommandAssistMaster___c___IsEnableEntity_b__4_0(
        EventCommandAssistMaster___c_o *this,
        EventCommandAssistEntity_o *a,
        EventCommandAssistEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}