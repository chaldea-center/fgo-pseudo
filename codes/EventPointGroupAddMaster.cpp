void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438B561 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
    byte_438B561 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    219,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupAddEntity_o *__fastcall EventPointGroupAddMaster__GetEntity(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438B55F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
    byte_438B55F = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&priority);
  return (EventPointGroupAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
}


System_Int32_array *__fastcall EventPointGroupAddMaster__GetTermedIconIds(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        System_Int32_array *defaultImageIds,
        const MethodInfo *method)
{
  __int64 v9; // x24
  __int64 list; // x0
  const MethodInfo *v11; // x1
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x9
  int32_t Count; // w0
  int32_t v15; // w26
  int32_t v16; // w27
  __int64 *v17; // x28
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x10
  System_Int32_array **v25; // x1
  _DWORD *v26; // x8
  System_Predicate_int__o *klass; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  il2cpp_array_size_t v34; // w19
  __int64 v35; // x21
  _DWORD *v36; // x21
  int v37; // t1
  __int64 v39; // x0
  __int64 v40; // [xsp+8h] [xbp-78h]
  BattleServantConfConponent_o *v41; // [xsp+18h] [xbp-68h]

  if ( (byte_438B563 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_FindIndex_int___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventPointGroupAddEntity_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    sub_B775C4(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__);
    sub_B775C4(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
    byte_438B563 = 1;
  }
  v9 = sub_B77694(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  EventPointGroupAddMaster___c__DisplayClass4_0___ctor((EventPointGroupAddMaster___c__DisplayClass4_0_o *)v9, 0LL);
  if ( !groupIds )
    goto LABEL_40;
  list = sub_B775DC(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_40;
  v12 = *(unsigned int *)(list + 24);
  if ( (__int64)(v12 << 32) >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= v12 )
      {
LABEL_41:
        v39 = sub_B776C8(list);
        sub_B77668(v39, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v13++) = 0;
    }
    while ( (__int64)v13 < (int)v12 );
  }
  v40 = list;
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_40:
    sub_B7769C(list, v11);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v41 = (BattleServantConfConponent_o *)(v9 + 24);
    v15 = Count;
    v16 = 0;
    v17 = (__int64 *)(v9 + 16);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_40;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v16,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v9 )
        goto LABEL_40;
      if ( list
        && (v24 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v24) )
      {
        if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v24 - 8) == EventPointGroupAddEntity_TypeInfo )
          v25 = (System_Int32_array **)list;
        else
          v25 = 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      *v17 = (__int64)v25;
      sub_B77560((BattleServantConfConponent_o *)(v9 + 16), v25, v18, v19, v20, v21, v22, v23);
      v26 = (_DWORD *)*v17;
      if ( *v17 && v26[4] == eventId && v26[5] == termId && v26[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v41->klass;
        if ( !v41->klass )
        {
          klass = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v9,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
          *(_QWORD *)(v9 + 24) = klass;
          sub_B77560(v41, (System_Int32_array **)klass, v28, v29, v30, v31, v32, v33);
        }
        list = System_Array__FindIndex_int_(
                 groupIds,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_2004618 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_40;
          v34 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v17;
            if ( !*v17 )
              goto LABEL_40;
            if ( v34 >= *(_DWORD *)(v40 + 24) )
              goto LABEL_41;
            v35 = v40 + 4LL * (int)v34;
            v37 = *(_DWORD *)(v35 + 32);
            v36 = (_DWORD *)(v35 + 32);
            if ( *(_DWORD *)(list + 28) >= v37 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v11);
              if ( (list & 1) != 0 )
              {
                if ( !*v17 )
                  goto LABEL_40;
                if ( v34 >= *(_DWORD *)(v40 + 24) )
                  goto LABEL_41;
                *v36 = *(_DWORD *)(*v17 + 28);
                if ( !*v17 )
                  goto LABEL_40;
                if ( v34 >= defaultImageIds->max_length )
                  goto LABEL_41;
                defaultImageIds->m_Items[v34 + 1] = *(_DWORD *)(*v17 + 36);
              }
            }
          }
        }
      }
      if ( ++v16 >= v15 )
        return defaultImageIds;
    }
  }
  return defaultImageIds;
}


bool __fastcall EventPointGroupAddMaster__IsClearCondChangeImage(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t *imageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  const MethodInfo *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *v14; // x19
  int32_t v15; // w25
  int32_t v16; // w26
  __int64 v17; // x10
  EventPointGroupAddMaster___c_c *v18; // x0
  int32_t *v19; // x23
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v22; // x22
  struct EventPointGroupAddMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int size; // w19
  __int64 v31; // x22
  unsigned int v32; // w8
  __int64 v33; // x8
  __int64 v34; // x21
  bool result; // w0

  if ( (byte_438B562 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventPointGroupAddEntity___ctor__);
    sub_B775C4(&System_Comparison_EventPointGroupAddEntity__TypeInfo);
    sub_B775C4(&EventPointGroupAddEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
    sub_B775C4(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__);
    sub_B775C4(&EventPointGroupAddMaster___c_TypeInfo);
    byte_438B562 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  v14 = imageId;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = (const MethodInfo *)list;
      v17 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (EventPointGroupAddEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != EventPointGroupAddEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == termId
        && LODWORD(list->fields._syncRoot) == groupId
        && LODWORD(list[1].klass) == 1 )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
      }
      if ( ++v16 >= v15 )
        goto LABEL_17;
    }
LABEL_38:
    sub_B7769C(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_38;
  if ( !v11->fields._size )
    return 0;
  v18 = EventPointGroupAddMaster___c_TypeInfo;
  if ( (BYTE3(EventPointGroupAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v19 = v14;
    if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
      v18 = EventPointGroupAddMaster___c_TypeInfo;
    }
  }
  else
  {
    v19 = v14;
  }
  static_fields = v18->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v22,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventPointGroupAddEntity___ctor__);
    v23 = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    v23->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v23->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v11,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  size = v11->fields._size;
  if ( size < 1 )
    return 0;
  v31 = 0LL;
  v32 = v11->fields._size;
  while ( 1 )
  {
    if ( v32 <= (unsigned int)v31 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v33 = (__int64)v11->fields._items + 8 * v31;
    v34 = *(_QWORD *)(v33 + 32);
    if ( !v34 )
      goto LABEL_38;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventPointGroupAddEntity__IsAvailable(
                                                                                         *(EventPointGroupAddEntity_o **)(v33 + 32),
                                                                                         v12);
    if ( ((unsigned __int8)list & 1) != 0 )
      break;
    if ( (int)v31 + 1 >= size )
      return 0;
    v32 = v11->fields._size;
    ++v31;
  }
  result = 1;
  *v19 = *(_DWORD *)(v34 + 36);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupAddMaster__TryGetEntity(
        EventPointGroupAddMaster_o *this,
        EventPointGroupAddEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438B560 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
    byte_438B560 = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4387FEA & 1) == 0 )
  {
    sub_B775C4(&EventPointGroupAddMaster___c_TypeInfo);
    byte_4387FEA = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall EventPointGroupAddMaster___c___ctor(EventPointGroupAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPointGroupAddMaster___c___IsClearCondChangeImage_b__3_0(
        EventPointGroupAddMaster___c_o *this,
        EventPointGroupAddEntity_o *a,
        EventPointGroupAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___ctor(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventPointGroupAddMaster___c__DisplayClass4_0___GetTermedIconIds_b__0(
        EventPointGroupAddMaster___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct EventPointGroupAddEntity_o *tempEnt; // x8

  tempEnt = this->fields.tempEnt;
  if ( !tempEnt )
    sub_B7769C(this, x);
  return tempEnt->fields.groupId == x;
}