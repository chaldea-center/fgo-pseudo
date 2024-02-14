void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214D56 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__, method);
    byte_4214D56 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    218,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_4214D54 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4214D54 = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&priority);
  return (EventPointGroupAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266A024 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventPointGroupAddMaster__GetTermedIconIds(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        System_Int32_array *defaultImageIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x24
  __int64 list; // x0
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x9
  int32_t Count; // w0
  int32_t v22; // w26
  int32_t v23; // w27
  __int64 *v24; // x28
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x10
  System_Int32_array **v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  _DWORD *v35; // x8
  System_Predicate_int__o *klass; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x1
  il2cpp_array_size_t v44; // w19
  __int64 v45; // x21
  _DWORD *v46; // x21
  int v47; // t1
  __int64 v49; // x0
  __int64 v50; // [xsp+8h] [xbp-78h]
  BattleServantConfConponent_o *v51; // [xsp+18h] [xbp-68h]

  if ( (byte_4214D58 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_int___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10);
    sub_B0D8A4(&EventPointGroupAddEntity_TypeInfo, v11);
    sub_B0D8A4(&int___TypeInfo, v12);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v13);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v14);
    sub_B0D8A4(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v15);
    sub_B0D8A4(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v16);
    byte_4214D58 = 1;
  }
  v17 = sub_B0D974(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&termId);
  EventPointGroupAddMaster___c__DisplayClass4_0___ctor((EventPointGroupAddMaster___c__DisplayClass4_0_o *)v17, 0LL);
  if ( !groupIds )
    goto LABEL_40;
  list = sub_B0D8BC(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_40;
  v19 = *(unsigned int *)(list + 24);
  if ( (__int64)(v19 << 32) >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= v19 )
      {
LABEL_41:
        v49 = sub_B0D9A8(list);
        sub_B0D948(v49, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v20++) = 0;
    }
    while ( (__int64)v20 < (int)v19 );
  }
  v50 = list;
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_40:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v51 = (BattleServantConfConponent_o *)(v17 + 24);
    v22 = Count;
    v23 = 0;
    v24 = (__int64 *)(v17 + 16);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_40;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v23,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v17 )
        goto LABEL_40;
      if ( list
        && (v31 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v31) )
      {
        if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v31 - 8) == EventPointGroupAddEntity_TypeInfo )
          v32 = (System_Int32_array **)list;
        else
          v32 = 0LL;
      }
      else
      {
        v32 = 0LL;
      }
      *v24 = (__int64)v32;
      sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), v32, v25, v26, v27, v28, v29, v30);
      v35 = (_DWORD *)*v24;
      if ( *v24 && v35[4] == eventId && v35[5] == termId && v35[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v51->klass;
        if ( !v51->klass )
        {
          klass = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v33, v34);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v17,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
          *(_QWORD *)(v17 + 24) = klass;
          sub_B0D840(v51, (System_Int32_array **)klass, v37, v38, v39, v40, v41, v42);
        }
        list = System_Array__FindIndex_int_(
                 groupIds,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_1F68D08 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_40;
          v44 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v24;
            if ( !*v24 )
              goto LABEL_40;
            if ( v44 >= *(_DWORD *)(v50 + 24) )
              goto LABEL_41;
            v45 = v50 + 4LL * (int)v44;
            v47 = *(_DWORD *)(v45 + 32);
            v46 = (_DWORD *)(v45 + 32);
            if ( *(_DWORD *)(list + 28) >= v47 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v43);
              if ( (list & 1) != 0 )
              {
                if ( !*v24 )
                  goto LABEL_40;
                if ( v44 >= *(_DWORD *)(v50 + 24) )
                  goto LABEL_41;
                *v46 = *(_DWORD *)(*v24 + 28);
                if ( !*v24 )
                  goto LABEL_40;
                if ( v44 >= defaultImageIds->max_length )
                  goto LABEL_41;
                defaultImageIds->m_Items[v44 + 1] = *(_DWORD *)(*v24 + 36);
              }
            }
          }
        }
      }
      if ( ++v23 >= v22 )
        return defaultImageIds;
    }
  }
  return defaultImageIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupAddMaster__IsClearCondChangeImage(
        EventPointGroupAddMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t *imageId,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *v25; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x1
  __int64 v27; // x2
  int32_t v28; // w25
  int32_t v29; // w26
  __int64 v30; // x10
  EventPointGroupAddMaster___c_c *v31; // x0
  int32_t *v32; // x23
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v35; // x22
  struct EventPointGroupAddMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x1
  int size; // w19
  __int64 v45; // x22
  unsigned int v46; // w8
  __int64 v47; // x8
  __int64 v48; // x21
  bool result; // w0

  if ( (byte_4214D57 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B0D8A4(&Method_System_Comparison_EventPointGroupAddEntity___ctor__, v12);
    sub_B0D8A4(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v13);
    sub_B0D8A4(&EventPointGroupAddEntity_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v20);
    sub_B0D8A4(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v21);
    sub_B0D8A4(&EventPointGroupAddMaster___c_TypeInfo, v22);
    byte_4214D57 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&termId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  v25 = imageId;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v28 = (int)list;
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v29,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = list;
      v30 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v30
        || (EventPointGroupAddEntity_c *)list->klass->_2.typeHierarchy[v30 - 1] != EventPointGroupAddEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == termId
        && LODWORD(list->fields._syncRoot) == groupId
        && LODWORD(list[1].klass) == 1 )
      {
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
      }
      if ( ++v29 >= v28 )
        goto LABEL_17;
    }
LABEL_38:
    sub_B0D97C(list);
  }
LABEL_17:
  if ( !v23 )
    goto LABEL_38;
  if ( !v23->fields._size )
    return 0;
  v31 = EventPointGroupAddMaster___c_TypeInfo;
  if ( (BYTE3(EventPointGroupAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v32 = v25;
    if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
      v31 = EventPointGroupAddMaster___c_TypeInfo;
    }
  }
  else
  {
    v32 = v25;
  }
  static_fields = v31->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventPointGroupAddEntity__TypeInfo,
                                                                          v26,
                                                                          v27);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v35,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventPointGroupAddEntity___ctor__);
    v36 = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    v36->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v36->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  size = v23->fields._size;
  if ( size < 1 )
    return 0;
  v45 = 0LL;
  v46 = v23->fields._size;
  while ( 1 )
  {
    if ( v46 <= (unsigned int)v45 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v47 = (__int64)v23->fields._items + 8 * v45;
    v48 = *(_QWORD *)(v47 + 32);
    if ( !v48 )
      goto LABEL_38;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventPointGroupAddEntity__IsAvailable(
                                                                                         *(EventPointGroupAddEntity_o **)(v47 + 32),
                                                                                         v43);
    if ( ((unsigned __int8)list & 1) != 0 )
      break;
    if ( (int)v45 + 1 >= size )
      return 0;
    v46 = v23->fields._size;
    ++v45;
  }
  result = 1;
  *v32 = *(_DWORD *)(v48 + 36);
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

  if ( (byte_4214D55 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      entity);
    byte_4214D55 = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211BAC & 1) == 0 )
  {
    sub_B0D8A4(&EventPointGroupAddMaster___c_TypeInfo, v1);
    byte_4211BAC = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventPointGroupAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return tempEnt->fields.groupId == x;
}