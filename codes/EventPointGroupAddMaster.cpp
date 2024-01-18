void __fastcall EventPointGroupAddMaster___ctor(EventPointGroupAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41878B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__, method);
    byte_41878B2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    218,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string___ctor__);
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

  if ( (byte_41878B0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_41878B0 = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&priority);
  return (EventPointGroupAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__GetEntity__);
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
  const MethodInfo *v19; // x1
  unsigned __int64 v20; // x8
  unsigned __int64 v21; // x9
  int32_t Count; // w0
  int32_t v23; // w26
  int32_t v24; // w27
  __int64 *v25; // x28
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x10
  System_Int32_array **v33; // x1
  _DWORD *v34; // x8
  System_Predicate_int__o *klass; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  il2cpp_array_size_t v42; // w19
  __int64 v43; // x21
  _DWORD *v44; // x21
  int v45; // t1
  __int64 v47; // x0
  __int64 v48; // [xsp+8h] [xbp-78h]
  BattleServantConfConponent_o *v49; // [xsp+18h] [xbp-68h]

  if ( (byte_41878B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_int___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10);
    sub_B2C35C(&EventPointGroupAddEntity_TypeInfo, v11);
    sub_B2C35C(&int___TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v13);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v14);
    sub_B2C35C(&Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__, v15);
    sub_B2C35C(&EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo, v16);
    byte_41878B4 = 1;
  }
  v17 = sub_B2C42C(EventPointGroupAddMaster___c__DisplayClass4_0_TypeInfo);
  EventPointGroupAddMaster___c__DisplayClass4_0___ctor((EventPointGroupAddMaster___c__DisplayClass4_0_o *)v17, 0LL);
  if ( !groupIds )
    goto LABEL_40;
  list = sub_B2C374(int___TypeInfo, groupIds->max_length);
  if ( !list )
    goto LABEL_40;
  v20 = *(unsigned int *)(list + 24);
  if ( (__int64)(v20 << 32) >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= v20 )
      {
LABEL_41:
        v47 = sub_B2C460(list);
        sub_B2C400(v47, 0LL);
      }
      *(_DWORD *)(list + 32 + 4 * v21++) = 0;
    }
    while ( (__int64)v21 < (int)v20 );
  }
  v48 = list;
  list = (__int64)this->fields.list;
  if ( !list )
LABEL_40:
    sub_B2C434(list, v19);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v49 = (BattleServantConfConponent_o *)(v17 + 24);
    v23 = Count;
    v24 = 0;
    v25 = (__int64 *)(v17 + 16);
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_40;
      list = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v24,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v17 )
        goto LABEL_40;
      if ( list
        && (v32 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v32) )
      {
        if ( *(EventPointGroupAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v32 - 8) == EventPointGroupAddEntity_TypeInfo )
          v33 = (System_Int32_array **)list;
        else
          v33 = 0LL;
      }
      else
      {
        v33 = 0LL;
      }
      *v25 = (__int64)v33;
      sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), v33, v26, v27, v28, v29, v30, v31);
      v34 = (_DWORD *)*v25;
      if ( *v25 && v34[4] == eventId && v34[5] == termId && v34[8] == 1 )
      {
        klass = (System_Predicate_int__o *)v49->klass;
        if ( !v49->klass )
        {
          klass = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
          System_Predicate_int____ctor(
            klass,
            (Il2CppObject *)v17,
            Method_EventPointGroupAddMaster___c__DisplayClass4_0__GetTermedIconIds_b__0__,
            (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
          *(_QWORD *)(v17 + 24) = klass;
          sub_B2C2F8(v49, (System_Int32_array **)klass, v36, v37, v38, v39, v40, v41);
        }
        list = System_Array__FindIndex_int_(
                 groupIds,
                 (System_Predicate_T__o *)klass,
                 (const MethodInfo_1FFC714 *)Method_System_Array_FindIndex_int___);
        if ( (list & 0x80000000) == 0 )
        {
          if ( !defaultImageIds )
            goto LABEL_40;
          v42 = list;
          if ( (int)list < (signed int)defaultImageIds->max_length )
          {
            list = *v25;
            if ( !*v25 )
              goto LABEL_40;
            if ( v42 >= *(_DWORD *)(v48 + 24) )
              goto LABEL_41;
            v43 = v48 + 4LL * (int)v42;
            v45 = *(_DWORD *)(v43 + 32);
            v44 = (_DWORD *)(v43 + 32);
            if ( *(_DWORD *)(list + 28) >= v45 )
            {
              list = EventPointGroupAddEntity__IsAvailable((EventPointGroupAddEntity_o *)list, v19);
              if ( (list & 1) != 0 )
              {
                if ( !*v25 )
                  goto LABEL_40;
                if ( v42 >= *(_DWORD *)(v48 + 24) )
                  goto LABEL_41;
                *v44 = *(_DWORD *)(*v25 + 28);
                if ( !*v25 )
                  goto LABEL_40;
                if ( v42 >= defaultImageIds->max_length )
                  goto LABEL_41;
                defaultImageIds->m_Items[v42 + 1] = *(_DWORD *)(*v25 + 36);
              }
            }
          }
        }
      }
      if ( ++v24 >= v23 )
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
  const MethodInfo *v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *v26; // x19
  int32_t v27; // w25
  int32_t v28; // w26
  __int64 v29; // x10
  EventPointGroupAddMaster___c_c *v30; // x0
  int32_t *v31; // x23
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x21
  Il2CppObject *v34; // x22
  struct EventPointGroupAddMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int size; // w19
  __int64 v43; // x22
  unsigned int v44; // w8
  __int64 v45; // x8
  __int64 v46; // x21
  bool result; // w0

  if ( (byte_41878B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B2C35C(&Method_System_Comparison_EventPointGroupAddEntity___ctor__, v12);
    sub_B2C35C(&System_Comparison_EventPointGroupAddEntity__TypeInfo, v13);
    sub_B2C35C(&EventPointGroupAddEntity_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointGroupAddEntity__get_Item__, v19);
    sub_B2C35C(&System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo, v20);
    sub_B2C35C(&Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__, v21);
    sub_B2C35C(&EventPointGroupAddMaster___c_TypeInfo, v22);
    byte_41878B3 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointGroupAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointGroupAddEntity___ctor__);
  *imageId = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  v26 = imageId;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v24 = (const MethodInfo *)list;
      v29 = *(&EventPointGroupAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventPointGroupAddEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] != EventPointGroupAddEntity_TypeInfo )
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Add__);
      }
      if ( ++v28 >= v27 )
        goto LABEL_17;
    }
LABEL_38:
    sub_B2C434(list, v24);
  }
LABEL_17:
  if ( !v23 )
    goto LABEL_38;
  if ( !v23->fields._size )
    return 0;
  v30 = EventPointGroupAddMaster___c_TypeInfo;
  if ( (BYTE3(EventPointGroupAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v31 = v26;
    if ( !EventPointGroupAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointGroupAddMaster___c_TypeInfo);
      v30 = EventPointGroupAddMaster___c_TypeInfo;
    }
  }
  else
  {
    v31 = v26;
  }
  static_fields = v30->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventPointGroupAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v34,
      Method_EventPointGroupAddMaster___c__IsClearCondChangeImage_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventPointGroupAddEntity___ctor__);
    v35 = EventPointGroupAddMaster___c_TypeInfo->static_fields;
    v35->__9__3_0 = (struct System_Comparison_EventPointGroupAddEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventPointGroupAddEntity__Sort__);
  size = v23->fields._size;
  if ( size < 1 )
    return 0;
  v43 = 0LL;
  v44 = v23->fields._size;
  while ( 1 )
  {
    if ( v44 <= (unsigned int)v43 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v45 = (__int64)v23->fields._items + 8 * v43;
    v46 = *(_QWORD *)(v45 + 32);
    if ( !v46 )
      goto LABEL_38;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventPointGroupAddEntity__IsAvailable(
                                                                                         *(EventPointGroupAddEntity_o **)(v45 + 32),
                                                                                         v24);
    if ( ((unsigned __int8)list & 1) != 0 )
      break;
    if ( (int)v43 + 1 >= size )
      return 0;
    v44 = v23->fields._size;
    ++v43;
  }
  result = 1;
  *v31 = *(_DWORD *)(v46 + 36);
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

  if ( (byte_41878B1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__,
      entity);
    byte_41878B1 = 1;
  }
  PK = EventPointGroupAddEntity__CreatePK(eventId, termId, groupId, priority, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventPointGroupAddMaster__EventPointGroupAddEntity__string__TryGetEntity__);
}


void __fastcall EventPointGroupAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventPointGroupAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B46 & 1) == 0 )
  {
    sub_B2C35C(&EventPointGroupAddMaster___c_TypeInfo, v1);
    byte_4184B46 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventPointGroupAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventPointGroupAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPointGroupAddMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, x);
  return tempEnt->fields.groupId == x;
}